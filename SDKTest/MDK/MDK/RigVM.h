
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Class /Script/RigVM.RigVMGraphFunctionHost
/// Size: 0x0000 (0x000028 - 0x000028)
class URigVMGraphFunctionHost : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/RigVM.RigVMBlueprintGeneratedClass
/// Size: 0x0028 (0x000368 - 0x000390)
class URigVMBlueprintGeneratedClass : public UBlueprintGeneratedClass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	SMember(FRigVMGraphFunctionStore)                  GraphFunctionStore                                          ___ OFFSET(get<T>, {0x370, 32, 0, 0})
};

/// Class /Script/RigVM.RigVM
/// Size: 0x0320 (0x000028 - 0x000348)
class URigVM : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(URigVMMemoryStorage*)                      WorkMemoryStorageObject                                     ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(URigVMMemoryStorage*)                      LiteralMemoryStorageObject                                  ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(URigVMMemoryStorage*)                      DebugMemoryStorageObject                                    ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FRigVMByteCode)                            ByteCodeStorage                                             ___ OFFSET(get<T>, {0x60, 160, 0, 0})
	SMember(FRigVMInstructionArray)                    Instructions                                                ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(TArray<FName>)                             FunctionNamesStorage                                        ___ OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(TArray<FRigVMParameter>)                   Parameters                                                  ___ OFFSET(get<T>, {0x168, 16, 0, 0})
	CMember(TMap<FName, int32_t>)                      ParametersNameMap                                           ___ OFFSET(get<T>, {0x178, 80, 0, 0})
	CMember(URigVM*)                                   DeferredVMToCopy                                            ___ OFFSET(get<T>, {0x300, 8, 0, 0})
};

/// Class /Script/RigVM.NameSpacedUserData
/// Size: 0x00D8 (0x000028 - 0x000100)
class UNameSpacedUserData : public UAssetUserData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FString)                                   Namespace                                                   ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/RigVM.DataAssetLink
/// Size: 0x0008 (0x000100 - 0x000108)
class UDataAssetLink : public UNameSpacedUserData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(UDataAsset*)                               DataAsset                                                   ___ OFFSET(get<T>, {0x100, 8, 0, 0})
};

/// Class /Script/RigVM.RigVMMemoryStorageGeneratorClass
/// Size: 0x0040 (0x000200 - 0x000240)
class URigVMMemoryStorageGeneratorClass : public UClass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
};

/// Class /Script/RigVM.RigVMMemoryStorage
/// Size: 0x0000 (0x000028 - 0x000028)
class URigVMMemoryStorage : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/RigVM.RigVMNativized
/// Size: 0x0028 (0x000348 - 0x000370)
class URigVMNativized : public URigVM
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Script/RigVM.RigVMUserWorkflowOptions
/// Size: 0x0070 (0x000028 - 0x000098)
class URigVMUserWorkflowOptions : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(UObject*)                                  Subject                                                     ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FRigVMUserWorkflow)                        Workflow                                                    ___ OFFSET(get<T>, {0x30, 88, 0, 0})
};

/// Class /Script/RigVM.RigVMHost
/// Size: 0x0310 (0x000028 - 0x000338)
class URigVMHost : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	SMember(FRigVMRuntimeSettings)                     VMRuntimeSettings                                           ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	CMember(URigVM*)                                   VM                                                          ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	SMember(FRigVMExtendedExecuteContext)              ExtendedExecuteContext                                      ___ OFFSET(get<T>, {0x60, 440, 0, 0})
	SMember(FRigVMDrawContainer)                       DrawContainer                                               ___ OFFSET(get<T>, {0x218, 24, 0, 0})
	CMember(TArray<FName>)                             EventQueue                                                  ___ OFFSET(get<T>, {0x248, 16, 0, 0})
	CMember(TArray<UAssetUserData*>)                   AssetUserData                                               ___ OFFSET(get<T>, {0x2E8, 16, 0, 0})
};

/// Class /Script/RigVM.RigVMEditorSettings
/// Size: 0x0000 (0x000030 - 0x000030)
class URigVMEditorSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/RigVM.RigVMExtendedExecuteContext
/// Size: 0x01B8 (0x000000 - 0x0001B8)
class FRigVMExtendedExecuteContext : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	DMember(uint32_t)                                  VMHash                                                      ___ OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
	DMember(uint32_t)                                  NumExecutions                                               ___ OFFSET(get<uint32_t>, {0x110, 4, 0, 0})
	CMember(URigVM*)                                   DeferredVMToCopy                                            ___ OFFSET(get<T>, {0x170, 8, 0, 0})
};

/// Struct /Script/RigVM.RigVMDrawContainer
/// Size: 0x0018 (0x000000 - 0x000018)
class FRigVMDrawContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FRigVMDrawInstruction>)             Instructions                                                ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMDrawInstruction
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FRigVMDrawInstruction : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TEnumAsByte<ERigVMDrawSettings>)           PrimitiveType                                               ___ OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(TArray<FVector>)                           Positions                                                   ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x30, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMRuntimeSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FRigVMRuntimeSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   MaximumArraySize                                            ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMStruct
/// Size: 0x0008 (0x000000 - 0x000008)
class FRigVMStruct : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMDecorator
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMDecorator : public FRigVMStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMExternalVariableDef
/// Size: 0x0028 (0x000000 - 0x000028)
class FRigVMExternalVariableDef : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/RigVM.RigVMExternalVariable
/// Size: 0x0008 (0x000028 - 0x000030)
class FRigVMExternalVariable : public FRigVMExternalVariableDef
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/RigVM.RigVMFunction_AnimBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_AnimBase : public FRigVMStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_DebugBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_DebugBase : public FRigVMStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMStructMutable
/// Size: 0x00F8 (0x000008 - 0x000100)
class FRigVMStructMutable : public FRigVMStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FRigVMExecuteContext)                      ExecuteContext                                              ___ OFFSET(get<T>, {0x10, 240, 0, 0})
};

/// Struct /Script/RigVM.RigVMExecuteContext
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FRigVMExecuteContext : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Struct /Script/RigVM.RigVMFunction_DebugBaseMutable
/// Size: 0x0000 (0x000100 - 0x000100)
class FRigVMFunction_DebugBaseMutable : public FRigVMStructMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_MathBase : public FRigVMStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathMutableBase
/// Size: 0x0000 (0x000100 - 0x000100)
class FRigVMFunction_MathMutableBase : public FRigVMStructMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Struct /Script/RigVM.RigVMFunction_Sequence
/// Size: 0x02D8 (0x000008 - 0x0002E0)
class FRigVMFunction_Sequence : public FRigVMStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	SMember(FRigVMExecuteContext)                      ExecuteContext                                              ___ OFFSET(get<T>, {0x10, 240, 0, 0})
	SMember(FRigVMExecuteContext)                      A                                                           ___ OFFSET(get<T>, {0x100, 240, 0, 0})
	SMember(FRigVMExecuteContext)                      B                                                           ___ OFFSET(get<T>, {0x1F0, 240, 0, 0})
};

/// Struct /Script/RigVM.RigVMDispatchFactory
/// Size: 0x0070 (0x000000 - 0x000070)
class FRigVMDispatchFactory : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMUnknownType
/// Size: 0x0004 (0x000000 - 0x000004)
class FRigVMUnknownType : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint32_t)                                  Hash                                                        ___ OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_SimBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_SimBase : public FRigVMStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_SimBaseMutable
/// Size: 0x0000 (0x000100 - 0x000100)
class FRigVMFunction_SimBaseMutable : public FRigVMStructMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Struct /Script/RigVM.RigVMGraphFunctionStore
/// Size: 0x0020 (0x000000 - 0x000020)
class FRigVMGraphFunctionStore : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FRigVMGraphFunctionData>)           PublicFunctions                                             ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FRigVMGraphFunctionData>)           PrivateFunctions                                            ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMGraphFunctionData
/// Size: 0x0338 (0x000000 - 0x000338)
class FRigVMGraphFunctionData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	SMember(FRigVMGraphFunctionHeader)                 Header                                                      ___ OFFSET(get<T>, {0x0, 256, 0, 0})
	SMember(FRigVMFunctionCompilationData)             CompilationData                                             ___ OFFSET(get<T>, {0x100, 552, 0, 0})
	SMember(FString)                                   SerializedCollapsedNode                                     ___ OFFSET(get<T>, {0x328, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunctionCompilationData
/// Size: 0x0228 (0x000000 - 0x000228)
class FRigVMFunctionCompilationData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	SMember(FRigVMByteCode)                            ByteCode                                                    ___ OFFSET(get<T>, {0x0, 160, 0, 0})
	CMember(TArray<FName>)                             FunctionNames                                               ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FRigVMFunctionCompilationPropertyDescription>) WorkPropertyDescriptions                         ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<FRigVMFunctionCompilationPropertyPath>) WorkPropertyPathDescriptions                            ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<FRigVMFunctionCompilationPropertyDescription>) LiteralPropertyDescriptions                      ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TArray<FRigVMFunctionCompilationPropertyPath>) LiteralPropertyPathDescriptions                         ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(TArray<FRigVMFunctionCompilationPropertyDescription>) DebugPropertyDescriptions                        ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
	CMember(TArray<FRigVMFunctionCompilationPropertyPath>) DebugPropertyPathDescriptions                           ___ OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(TArray<FRigVMFunctionCompilationPropertyDescription>) ExternalPropertyDescriptions                     ___ OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(TArray<FRigVMFunctionCompilationPropertyPath>) ExternalPropertyPathDescriptions                        ___ OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(TMap<int32_t, FName>)                      ExternalRegisterIndexToVariable                             ___ OFFSET(get<T>, {0x130, 80, 0, 0})
	CMember(TMap<FString, FRigVMOperand>)              Operands                                                    ___ OFFSET(get<T>, {0x180, 80, 0, 0})
	DMember(uint32_t)                                  Hash                                                        ___ OFFSET(get<uint32_t>, {0x1D0, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMOperand
/// Size: 0x0006 (0x000000 - 0x000006)
class FRigVMOperand : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 6;

public:
	CMember(ERigVMMemoryType)                          MemoryType                                                  ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(uint16_t)                                  RegisterIndex                                               ___ OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	DMember(uint16_t)                                  RegisterOffset                                              ___ OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunctionCompilationPropertyPath
/// Size: 0x0028 (0x000000 - 0x000028)
class FRigVMFunctionCompilationPropertyPath : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   PropertyIndex                                               ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FString)                                   HeadCPPType                                                 ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   SegmentPath                                                 ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunctionCompilationPropertyDescription
/// Size: 0x0048 (0x000000 - 0x000048)
class FRigVMFunctionCompilationPropertyDescription : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FString)                                   CPPType                                                     ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  CPPTypeObject                                               ___ OFFSET(get<T>, {0x18, 32, 0, 0})
	SMember(FString)                                   DefaultValue                                                ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMByteCode
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FRigVMByteCode : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TArray<char>)                              ByteCode                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   NumInstructions                                             ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(TArray<FRigVMByteCodeEntry>)               Entries                                                     ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FRigVMBranchInfo>)                  BranchInfos                                                 ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FRigVMPredicateBranch>)             PredicateBranches                                           ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMPredicateBranch
/// Size: 0x0030 (0x000000 - 0x000030)
class FRigVMPredicateBranch : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/RigVM.RigVMBranchInfo
/// Size: 0x0014 (0x000000 - 0x000014)
class FRigVMBranchInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(int32_t)                                   Index                                                       ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FName)                                     Label                                                       ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   InstructionIndex                                            ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   ArgumentIndex                                               ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(uint16_t)                                  FirstInstruction                                            ___ OFFSET(get<uint16_t>, {0x10, 2, 0, 0})
	DMember(uint16_t)                                  LastInstruction                                             ___ OFFSET(get<uint16_t>, {0x12, 2, 0, 0})
};

/// Struct /Script/RigVM.RigVMByteCodeEntry
/// Size: 0x0008 (0x000000 - 0x000008)
class FRigVMByteCodeEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   InstructionIndex                                            ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMGraphFunctionHeader
/// Size: 0x0100 (0x000000 - 0x000100)
class FRigVMGraphFunctionHeader : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FRigVMGraphFunctionIdentifier)             LibraryPointer                                              ___ OFFSET(get<T>, {0x0, 48, 0, 0})
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x30, 4, 0, 0})
	SMember(FString)                                   NodeTitle                                                   ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FLinearColor)                              NodeColor                                                   ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FText)                                     ToolTip                                                     ___ OFFSET(get<T>, {0x58, 24, 0, 0})
	SMember(FString)                                   category                                                    ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FString)                                   Keywords                                                    ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FRigVMGraphFunctionArgument>)       Arguments                                                   ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TMap<FRigVMGraphFunctionIdentifier, uint32_t>) Dependencies                                            ___ OFFSET(get<T>, {0xA0, 80, 0, 0})
	CMember(TArray<FRigVMExternalVariable>)            ExternalVariables                                           ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMGraphFunctionIdentifier
/// Size: 0x0030 (0x000000 - 0x000030)
class FRigVMGraphFunctionIdentifier : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSoftObjectPath)                           LibraryNode                                                 ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FSoftObjectPath)                           HostObject                                                  ___ OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMGraphFunctionArgument
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FRigVMGraphFunctionArgument : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     DisplayName                                                 ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     CPPType                                                     ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  CPPTypeObject                                               ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	DMember(bool)                                      bIsArray                                                    ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	CMember(ERigVMPinDirection)                        Direction                                                   ___ OFFSET(get<T>, {0x31, 1, 0, 0})
	SMember(FString)                                   DefaultValue                                                ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      bIsConst                                                    ___ OFFSET(get<bool>, {0x48, 1, 0, 0})
	CMember(TMap<FString, FText>)                      PathToTooltip                                               ___ OFFSET(get<T>, {0x50, 80, 0, 0})
};

/// Struct /Script/RigVM.RigVMMemoryStatistics
/// Size: 0x000C (0x000000 - 0x00000C)
class FRigVMMemoryStatistics : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   RegisterCount                                               ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   DataBytes                                                   ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   TotalBytes                                                  ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMByteCodeStatistics
/// Size: 0x0008 (0x000000 - 0x000008)
class FRigVMByteCodeStatistics : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   InstructionCount                                            ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   DataBytes                                                   ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMStatistics
/// Size: 0x0038 (0x000000 - 0x000038)
class FRigVMStatistics : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   BytesForCDO                                                 ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   BytesPerInstance                                            ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FRigVMMemoryStatistics)                    LiteralMemory                                               ___ OFFSET(get<T>, {0x8, 12, 0, 0})
	SMember(FRigVMMemoryStatistics)                    WorkMemory                                                  ___ OFFSET(get<T>, {0x14, 12, 0, 0})
	SMember(FRigVMMemoryStatistics)                    DebugMemory                                                 ___ OFFSET(get<T>, {0x20, 12, 0, 0})
	DMember(int32_t)                                   BytesForCaching                                             ___ OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	SMember(FRigVMByteCodeStatistics)                  ByteCode                                                    ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/RigVM.RigVMParameter
/// Size: 0x0030 (0x000000 - 0x000030)
class FRigVMParameter : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(ERigVMParameterType)                       Type                                                        ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   RegisterIndex                                               ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FString)                                   CPPType                                                     ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(UScriptStruct*)                            ScriptStruct                                                ___ OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FName)                                     ScriptStructPath                                            ___ OFFSET(get<T>, {0x28, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMBaseOp
/// Size: 0x0001 (0x000000 - 0x000001)
class FRigVMBaseOp : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/RigVM.RigVMExecuteOp
/// Size: 0x0009 (0x000001 - 0x00000A)
class FRigVMExecuteOp : public FRigVMBaseOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 10;

public:
};

/// Struct /Script/RigVM.RigVMUnaryOp
/// Size: 0x0007 (0x000001 - 0x000008)
class FRigVMUnaryOp : public FRigVMBaseOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMBinaryOp
/// Size: 0x000D (0x000001 - 0x00000E)
class FRigVMBinaryOp : public FRigVMBaseOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 14;

public:
};

/// Struct /Script/RigVM.RigVMTernaryOp
/// Size: 0x0013 (0x000001 - 0x000014)
class FRigVMTernaryOp : public FRigVMBaseOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
};

/// Struct /Script/RigVM.RigVMQuaternaryOp
/// Size: 0x0019 (0x000001 - 0x00001A)
class FRigVMQuaternaryOp : public FRigVMBaseOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 26;

public:
};

/// Struct /Script/RigVM.RigVMQuinaryOp
/// Size: 0x001F (0x000001 - 0x000020)
class FRigVMQuinaryOp : public FRigVMBaseOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/RigVM.RigVMSenaryOp
/// Size: 0x0025 (0x000001 - 0x000026)
class FRigVMSenaryOp : public FRigVMBaseOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 38;

public:
};

/// Struct /Script/RigVM.RigVMCopyOp
/// Size: 0x0011 (0x000001 - 0x000012)
class FRigVMCopyOp : public FRigVMBaseOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 18;

public:
};

/// Struct /Script/RigVM.RigVMComparisonOp
/// Size: 0x0013 (0x000001 - 0x000014)
class FRigVMComparisonOp : public FRigVMBaseOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
};

/// Struct /Script/RigVM.RigVMJumpOp
/// Size: 0x0007 (0x000001 - 0x000008)
class FRigVMJumpOp : public FRigVMBaseOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMJumpIfOp
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMJumpIfOp : public FRigVMUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMChangeTypeOp
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMChangeTypeOp : public FRigVMUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMInvokeEntryOp
/// Size: 0x0007 (0x000001 - 0x000008)
class FRigVMInvokeEntryOp : public FRigVMBaseOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMJumpToBranchOp
/// Size: 0x0004 (0x000008 - 0x00000C)
class FRigVMJumpToBranchOp : public FRigVMUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
};

/// Struct /Script/RigVM.RigVMInstruction
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigVMInstruction : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(uint64_t)                                  ByteCodeIndex                                               ___ OFFSET(get<uint64_t>, {0x0, 8, 0, 0})
	CMember(ERigVMOpCode)                              OpCode                                                      ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(char)                                      OperandAlignment                                            ___ OFFSET(get<char>, {0x9, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMInstructionArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigVMInstructionArray : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FRigVMInstruction>)                 Instructions                                                ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMBreakpoint
/// Size: 0x0028 (0x000000 - 0x000028)
class FRigVMBreakpoint : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/RigVM.RigVMDebugInfo
/// Size: 0x00F8 (0x000000 - 0x0000F8)
class FRigVMDebugInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Struct /Script/RigVM.RigVMDrawInterface
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMDrawInterface : public FRigVMDrawContainer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMSlice
/// Size: 0x0014 (0x000000 - 0x000014)
class FRigVMSlice : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
};

/// Struct /Script/RigVM.RigVMRegister
/// Size: 0x0020 (0x000000 - 0x000020)
class FRigVMRegister : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(ERigVMRegisterType)                        Type                                                        ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(uint32_t)                                  ByteIndex                                                   ___ OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(uint16_t)                                  ElementSize                                                 ___ OFFSET(get<uint16_t>, {0x8, 2, 0, 0})
	DMember(uint16_t)                                  ElementCount                                                ___ OFFSET(get<uint16_t>, {0xA, 2, 0, 0})
	DMember(uint16_t)                                  SliceCount                                                  ___ OFFSET(get<uint16_t>, {0xC, 2, 0, 0})
	DMember(char)                                      AlignmentBytes                                              ___ OFFSET(get<char>, {0xE, 1, 0, 0})
	DMember(uint16_t)                                  TrailingBytes                                               ___ OFFSET(get<uint16_t>, {0x10, 2, 0, 0})
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   ScriptStructIndex                                           ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(bool)                                      bIsArray                                                    ___ OFFSET(get<bool>, {0x1C, 1, 0, 0})
	DMember(bool)                                      bIsDynamic                                                  ___ OFFSET(get<bool>, {0x1D, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMRegisterOffset
/// Size: 0x0040 (0x000000 - 0x000040)
class FRigVMRegisterOffset : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<int32_t>)                           Segments                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(ERigVMRegisterType)                        Type                                                        ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FName)                                     CPPType                                                     ___ OFFSET(get<T>, {0x14, 4, 0, 0})
	CMember(UScriptStruct*)                            ScriptStruct                                                ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(UScriptStruct*)                            ParentScriptStruct                                          ___ OFFSET(get<T>, {0x20, 8, 0, 0})
	DMember(int32_t)                                   ArrayIndex                                                  ___ OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(uint16_t)                                  ElementSize                                                 ___ OFFSET(get<uint16_t>, {0x2C, 2, 0, 0})
	SMember(FString)                                   CachedSegmentPath                                           ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMMemoryContainer
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FRigVMMemoryContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(bool)                                      bUseNameMap                                                 ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(ERigVMMemoryType)                          MemoryType                                                  ___ OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(TArray<FRigVMRegister>)                    Registers                                                   ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FRigVMRegisterOffset>)              RegisterOffsets                                             ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<char>)                              Data                                                        ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<UScriptStruct*>)                    ScriptStructs                                               ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TMap<FName, int32_t>)                      NameMap                                                     ___ OFFSET(get<T>, {0x48, 80, 0, 0})
	DMember(bool)                                      bEncounteredErrorDuringLoad                                 ___ OFFSET(get<bool>, {0x98, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMTemplateArgumentType
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigVMTemplateArgumentType : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     CPPType                                                     ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(UObject*)                                  CPPTypeObject                                               ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/RigVM.RigVMUserWorkflow
/// Size: 0x0058 (0x000000 - 0x000058)
class FRigVMUserWorkflow : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FString)                                   Title                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   ToolTip                                                     ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(ERigVMUserWorkflowType)                    Type                                                        ___ OFFSET(get<T>, {0x28, 1, 0, 0})
	SMember(FDelegateProperty)                         PerformDynamicDelegate                                      ___ OFFSET(get<T>, {0x40, 12, 0, 0})
	CMember(UClass*)                                   OptionsClass                                                ___ OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AnimEasingType
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_AnimEasingType : public FRigVMFunction_AnimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(ERigVMAnimEasingType)                      Type                                                        ___ OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AnimEasing
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_AnimEasing : public FRigVMFunction_AnimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(ERigVMAnimEasingType)                      Type                                                        ___ OFFSET(get<T>, {0xC, 1, 0, 0})
	DMember(float)                                     SourceMinimum                                               ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     SourceMaximum                                               ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     TargetMinimum                                               ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     TargetMaximum                                               ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AnimEvalRichCurve
/// Size: 0x00A8 (0x000008 - 0x0000B0)
class FRigVMFunction_AnimEvalRichCurve : public FRigVMFunction_AnimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        Curve                                                       ___ OFFSET(get<T>, {0x10, 136, 0, 0})
	DMember(float)                                     SourceMinimum                                               ___ OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     SourceMaximum                                               ___ OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(float)                                     TargetMinimum                                               ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     TargetMaximum                                               ___ OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AnimRichCurve
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigVMFunction_AnimRichCurve : public FRigVMFunction_AnimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FRuntimeFloatCurve)                        Curve                                                       ___ OFFSET(get<T>, {0x8, 136, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_GetDeltaTime
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_GetDeltaTime : public FRigVMFunction_AnimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_GetWorldTime
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_GetWorldTime : public FRigVMFunction_AnimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     Year                                                        ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Month                                                       ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Day                                                         ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     WeekDay                                                     ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Hours                                                       ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     Minutes                                                     ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     Seconds                                                     ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     OverallSeconds                                              ___ OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_FramesToSeconds
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_FramesToSeconds : public FRigVMFunction_AnimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Frames                                                      ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Seconds                                                     ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_SecondsToFrames
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_SecondsToFrames : public FRigVMFunction_AnimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Seconds                                                     ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Frames                                                      ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_DebugLineNoSpace
/// Size: 0x00C0 (0x000100 - 0x0001C0)
class FRigVMFunction_DebugLineNoSpace : public FRigVMFunction_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FVector)                                   A                                                           ___ OFFSET(get<T>, {0x100, 24, 0, 0})
	SMember(FVector)                                   B                                                           ___ OFFSET(get<T>, {0x118, 24, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x130, 16, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x140, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 ___ OFFSET(get<T>, {0x150, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x1B0, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_DebugLineStripNoSpace
/// Size: 0x00A0 (0x000100 - 0x0001A0)
class FRigVMFunction_DebugLineStripNoSpace : public FRigVMFunction_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	CMember(TArray<FVector>)                           Points                                                      ___ OFFSET(get<T>, {0x100, 16, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x110, 16, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x120, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 ___ OFFSET(get<T>, {0x130, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x190, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_DebugPoint
/// Size: 0x00A8 (0x000008 - 0x0000B0)
class FRigVMFunction_DebugPoint : public FRigVMFunction_DebugBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FVector)                                   Vector                                                      ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	CMember(ERigUnitDebugPointMode)                    Mode                                                        ___ OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x24, 16, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FName)                                     Space                                                       ___ OFFSET(get<T>, {0x3C, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 ___ OFFSET(get<T>, {0x40, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0xA0, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_DebugPointMutable
/// Size: 0x00B0 (0x000100 - 0x0001B0)
class FRigVMFunction_DebugPointMutable : public FRigVMFunction_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FVector)                                   Vector                                                      ___ OFFSET(get<T>, {0x100, 24, 0, 0})
	CMember(ERigUnitDebugPointMode)                    Mode                                                        ___ OFFSET(get<T>, {0x118, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x11C, 16, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x12C, 4, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x130, 4, 0, 0})
	SMember(FName)                                     Space                                                       ___ OFFSET(get<T>, {0x134, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 ___ OFFSET(get<T>, {0x140, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x1A0, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_DebugRectangle
/// Size: 0x00F0 (0x000100 - 0x0001F0)
class FRigVMFunction_DebugRectangle : public FRigVMFunction_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x100, 96, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x174, 4, 0, 0})
	SMember(FName)                                     Space                                                       ___ OFFSET(get<T>, {0x178, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 ___ OFFSET(get<T>, {0x180, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x1E0, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_DebugRectangleNoSpace
/// Size: 0x00F0 (0x000100 - 0x0001F0)
class FRigVMFunction_DebugRectangleNoSpace : public FRigVMFunction_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x100, 96, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x174, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 ___ OFFSET(get<T>, {0x180, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x1E0, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_DebugArc
/// Size: 0x0100 (0x000100 - 0x000200)
class FRigVMFunction_DebugArc : public FRigVMFunction_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x100, 96, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	DMember(float)                                     Radius                                                      ___ OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     MinimumDegrees                                              ___ OFFSET(get<float>, {0x174, 4, 0, 0})
	DMember(float)                                     MaximumDegrees                                              ___ OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x17C, 4, 0, 0})
	DMember(int32_t)                                   Detail                                                      ___ OFFSET(get<int32_t>, {0x180, 4, 0, 0})
	SMember(FName)                                     Space                                                       ___ OFFSET(get<T>, {0x184, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 ___ OFFSET(get<T>, {0x190, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x1F0, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_DebugArcNoSpace
/// Size: 0x0100 (0x000100 - 0x000200)
class FRigVMFunction_DebugArcNoSpace : public FRigVMFunction_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x100, 96, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	DMember(float)                                     Radius                                                      ___ OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     MinimumDegrees                                              ___ OFFSET(get<float>, {0x174, 4, 0, 0})
	DMember(float)                                     MaximumDegrees                                              ___ OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x17C, 4, 0, 0})
	DMember(int32_t)                                   Detail                                                      ___ OFFSET(get<int32_t>, {0x180, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 ___ OFFSET(get<T>, {0x190, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x1F0, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_DebugTransformMutableNoSpace
/// Size: 0x00F0 (0x000100 - 0x0001F0)
class FRigVMFunction_DebugTransformMutableNoSpace : public FRigVMFunction_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x100, 96, 0, 0})
	CMember(ERigUnitDebugTransformMode)                Mode                                                        ___ OFFSET(get<T>, {0x160, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x164, 16, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x174, 4, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x178, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 ___ OFFSET(get<T>, {0x180, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x1E0, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_DebugTransformArrayMutable_WorkData
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigVMFunction_DebugTransformArrayMutable_WorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FTransform>)                        DrawTransforms                                              ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_DebugTransformArrayMutableNoSpace
/// Size: 0x00B0 (0x000100 - 0x0001B0)
class FRigVMFunction_DebugTransformArrayMutableNoSpace : public FRigVMFunction_DebugBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	CMember(TArray<FTransform>)                        Transforms                                                  ___ OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(TArray<int32_t>)                           ParentIndices                                               ___ OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(ERigUnitDebugTransformMode)                Mode                                                        ___ OFFSET(get<T>, {0x120, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x124, 16, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x134, 4, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x138, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 ___ OFFSET(get<T>, {0x140, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x1A0, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_VisualDebugVector
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_VisualDebugVector : public FRigVMFunction_DebugBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(ERigUnitVisualDebugPointMode)              Mode                                                        ___ OFFSET(get<T>, {0x21, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x24, 16, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FName)                                     BoneSpace                                                   ___ OFFSET(get<T>, {0x3C, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_VisualDebugVectorNoSpace
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_VisualDebugVectorNoSpace : public FRigVMFunction_DebugBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(ERigUnitVisualDebugPointMode)              Mode                                                        ___ OFFSET(get<T>, {0x21, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x24, 16, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_VisualDebugQuat
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_VisualDebugQuat : public FRigVMFunction_DebugBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FQuat)                                     Value                                                       ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FName)                                     BoneSpace                                                   ___ OFFSET(get<T>, {0x3C, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_VisualDebugQuatNoSpace
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_VisualDebugQuatNoSpace : public FRigVMFunction_DebugBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FQuat)                                     Value                                                       ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_VisualDebugTransform
/// Size: 0x0078 (0x000008 - 0x000080)
class FRigVMFunction_VisualDebugTransform : public FRigVMFunction_DebugBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FTransform)                                Value                                                       ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x78, 4, 0, 0})
	SMember(FName)                                     BoneSpace                                                   ___ OFFSET(get<T>, {0x7C, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_VisualDebugTransformNoSpace
/// Size: 0x0078 (0x000008 - 0x000080)
class FRigVMFunction_VisualDebugTransformNoSpace : public FRigVMFunction_DebugBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FTransform)                                Value                                                       ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(float)                                     Thickness                                                   ___ OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x78, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_ForLoopCount
/// Size: 0x0100 (0x000100 - 0x000200)
class FRigVMFunction_ForLoopCount : public FRigVMStructMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FName)                                     BlockToRun                                                  ___ OFFSET(get<T>, {0x100, 4, 0, 0})
	DMember(int32_t)                                   Count                                                       ___ OFFSET(get<int32_t>, {0x104, 4, 0, 0})
	DMember(int32_t)                                   Index                                                       ___ OFFSET(get<int32_t>, {0x108, 4, 0, 0})
	DMember(float)                                     Ratio                                                       ___ OFFSET(get<float>, {0x10C, 4, 0, 0})
	SMember(FRigVMExecuteContext)                      Completed                                                   ___ OFFSET(get<T>, {0x110, 240, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_UserDefinedEvent
/// Size: 0x0108 (0x000008 - 0x000110)
class FRigVMFunction_UserDefinedEvent : public FRigVMStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FRigVMExecuteContext)                      ExecuteContext                                              ___ OFFSET(get<T>, {0x10, 240, 0, 0})
	SMember(FName)                                     EventName                                                   ___ OFFSET(get<T>, {0x100, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_MathBoolBase : public FRigVMFunction_MathBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolConstant
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathBoolConstant : public FRigVMFunction_MathBoolBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      Value                                                       ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolUnaryOp
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathBoolUnaryOp : public FRigVMFunction_MathBoolBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      Value                                                       ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x9, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolBinaryOp
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathBoolBinaryOp : public FRigVMFunction_MathBoolBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      A                                                           ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      B                                                           ___ OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0xA, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolBinaryAggregateOp
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathBoolBinaryAggregateOp : public FRigVMFunction_MathBoolBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      A                                                           ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      B                                                           ___ OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0xA, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolMake
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathBoolMake : public FRigVMFunction_MathBoolBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      Value                                                       ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolConstTrue
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathBoolConstTrue : public FRigVMFunction_MathBoolConstant
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolConstFalse
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathBoolConstFalse : public FRigVMFunction_MathBoolConstant
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolNot
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathBoolNot : public FRigVMFunction_MathBoolUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolAnd
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathBoolAnd : public FRigVMFunction_MathBoolBinaryAggregateOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolNand
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathBoolNand : public FRigVMFunction_MathBoolBinaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolNand2
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathBoolNand2 : public FRigVMFunction_MathBoolBinaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolOr
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathBoolOr : public FRigVMFunction_MathBoolBinaryAggregateOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolEquals
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathBoolEquals : public FRigVMFunction_MathBoolBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      A                                                           ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      B                                                           ___ OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0xA, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolNotEquals
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathBoolNotEquals : public FRigVMFunction_MathBoolBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      A                                                           ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      B                                                           ___ OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0xA, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolToggled
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathBoolToggled : public FRigVMFunction_MathBoolBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      Value                                                       ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      Toggled                                                     ___ OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      Initialized                                                 ___ OFFSET(get<bool>, {0xA, 1, 0, 0})
	DMember(bool)                                      LastValue                                                   ___ OFFSET(get<bool>, {0xB, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolFlipFlop
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathBoolFlipFlop : public FRigVMFunction_MathBoolBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      StartValue                                                  ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(float)                                     Duration                                                    ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      LastValue                                                   ___ OFFSET(get<bool>, {0x11, 1, 0, 0})
	DMember(float)                                     TimeLeft                                                    ___ OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolOnce
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathBoolOnce : public FRigVMFunction_MathBoolBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Duration                                                    ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      LastValue                                                   ___ OFFSET(get<bool>, {0xD, 1, 0, 0})
	DMember(float)                                     TimeLeft                                                    ___ OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolToFloat
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathBoolToFloat : public FRigVMFunction_MathBoolBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      Value                                                       ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolToInteger
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathBoolToInteger : public FRigVMFunction_MathBoolBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      Value                                                       ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(int32_t)                                   Result                                                      ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathColorBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_MathColorBase : public FRigVMFunction_MathBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathColorBinaryOp
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigVMFunction_MathColorBinaryOp : public FRigVMFunction_MathColorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FLinearColor)                              A                                                           ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FLinearColor)                              B                                                           ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FLinearColor)                              Result                                                      ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathColorBinaryAggregateOp
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigVMFunction_MathColorBinaryAggregateOp : public FRigVMFunction_MathColorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FLinearColor)                              A                                                           ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FLinearColor)                              B                                                           ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FLinearColor)                              Result                                                      ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathColorMake
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_MathColorMake : public FRigVMFunction_MathColorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     R                                                           ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     G                                                           ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     B                                                           ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     A                                                           ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	SMember(FLinearColor)                              Result                                                      ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathColorFromFloat
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathColorFromFloat : public FRigVMFunction_MathColorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FLinearColor)                              Result                                                      ___ OFFSET(get<T>, {0xC, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathColorFromDouble
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathColorFromDouble : public FRigVMFunction_MathColorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    Value                                                       ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	SMember(FLinearColor)                              Result                                                      ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathColorAdd
/// Size: 0x0000 (0x000038 - 0x000038)
class FRigVMFunction_MathColorAdd : public FRigVMFunction_MathColorBinaryAggregateOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathColorSub
/// Size: 0x0000 (0x000038 - 0x000038)
class FRigVMFunction_MathColorSub : public FRigVMFunction_MathColorBinaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathColorMul
/// Size: 0x0000 (0x000038 - 0x000038)
class FRigVMFunction_MathColorMul : public FRigVMFunction_MathColorBinaryAggregateOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathColorLerp
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathColorLerp : public FRigVMFunction_MathColorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FLinearColor)                              A                                                           ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FLinearColor)                              B                                                           ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(float)                                     T                                                           ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	SMember(FLinearColor)                              Result                                                      ___ OFFSET(get<T>, {0x2C, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_MathDoubleBase : public FRigVMFunction_MathBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleConstant
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathDoubleConstant : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(double)                                    Value                                                       ___ OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleUnaryOp
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathDoubleUnaryOp : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(double)                                    Value                                                       ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    Result                                                      ___ OFFSET(get<double>, {0x10, 8, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleBinaryOp
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathDoubleBinaryOp : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    A                                                           ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    B                                                           ___ OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    Result                                                      ___ OFFSET(get<double>, {0x18, 8, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleBinaryAggregateOp
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathDoubleBinaryAggregateOp : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    A                                                           ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    B                                                           ___ OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    Result                                                      ___ OFFSET(get<double>, {0x18, 8, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleMake
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathDoubleMake : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(double)                                    Value                                                       ___ OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleConstPi
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathDoubleConstPi : public FRigVMFunction_MathDoubleConstant
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleConstHalfPi
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathDoubleConstHalfPi : public FRigVMFunction_MathDoubleConstant
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleConstTwoPi
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathDoubleConstTwoPi : public FRigVMFunction_MathDoubleConstant
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleConstE
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathDoubleConstE : public FRigVMFunction_MathDoubleConstant
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleAdd
/// Size: 0x0000 (0x000020 - 0x000020)
class FRigVMFunction_MathDoubleAdd : public FRigVMFunction_MathDoubleBinaryAggregateOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleSub
/// Size: 0x0000 (0x000020 - 0x000020)
class FRigVMFunction_MathDoubleSub : public FRigVMFunction_MathDoubleBinaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleMul
/// Size: 0x0000 (0x000020 - 0x000020)
class FRigVMFunction_MathDoubleMul : public FRigVMFunction_MathDoubleBinaryAggregateOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleDiv
/// Size: 0x0000 (0x000020 - 0x000020)
class FRigVMFunction_MathDoubleDiv : public FRigVMFunction_MathDoubleBinaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleMod
/// Size: 0x0000 (0x000020 - 0x000020)
class FRigVMFunction_MathDoubleMod : public FRigVMFunction_MathDoubleBinaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleMin
/// Size: 0x0000 (0x000020 - 0x000020)
class FRigVMFunction_MathDoubleMin : public FRigVMFunction_MathDoubleBinaryAggregateOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleMax
/// Size: 0x0000 (0x000020 - 0x000020)
class FRigVMFunction_MathDoubleMax : public FRigVMFunction_MathDoubleBinaryAggregateOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoublePow
/// Size: 0x0000 (0x000020 - 0x000020)
class FRigVMFunction_MathDoublePow : public FRigVMFunction_MathDoubleBinaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleSqrt
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathDoubleSqrt : public FRigVMFunction_MathDoubleUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleNegate
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathDoubleNegate : public FRigVMFunction_MathDoubleUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleAbs
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathDoubleAbs : public FRigVMFunction_MathDoubleUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleFloor
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathDoubleFloor : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    Value                                                       ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    Result                                                      ___ OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   Int                                                         ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleCeil
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathDoubleCeil : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    Value                                                       ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    Result                                                      ___ OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   Int                                                         ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleRound
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathDoubleRound : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    Value                                                       ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    Result                                                      ___ OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   Int                                                         ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleToInt
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathDoubleToInt : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(double)                                    Value                                                       ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   Result                                                      ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleSign
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathDoubleSign : public FRigVMFunction_MathDoubleUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleClamp
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_MathDoubleClamp : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(double)                                    Value                                                       ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    Minimum                                                     ___ OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    Maximum                                                     ___ OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(double)                                    Result                                                      ___ OFFSET(get<double>, {0x20, 8, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleLerp
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_MathDoubleLerp : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(double)                                    A                                                           ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    B                                                           ___ OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    T                                                           ___ OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(double)                                    Result                                                      ___ OFFSET(get<double>, {0x20, 8, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleRemap
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathDoubleRemap : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(double)                                    Value                                                       ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    SourceMinimum                                               ___ OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    SourceMaximum                                               ___ OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(double)                                    TargetMinimum                                               ___ OFFSET(get<double>, {0x20, 8, 0, 0})
	DMember(double)                                    TargetMaximum                                               ___ OFFSET(get<double>, {0x28, 8, 0, 0})
	DMember(bool)                                      bClamp                                                      ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(double)                                    Result                                                      ___ OFFSET(get<double>, {0x38, 8, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleEquals
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathDoubleEquals : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    A                                                           ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    B                                                           ___ OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleNotEquals
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathDoubleNotEquals : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    A                                                           ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    B                                                           ___ OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleGreater
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathDoubleGreater : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    A                                                           ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    B                                                           ___ OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleLess
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathDoubleLess : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    A                                                           ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    B                                                           ___ OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleGreaterEqual
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathDoubleGreaterEqual : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    A                                                           ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    B                                                           ___ OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleLessEqual
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathDoubleLessEqual : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    A                                                           ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    B                                                           ___ OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleIsNearlyZero
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathDoubleIsNearlyZero : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    Value                                                       ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    Tolerance                                                   ___ OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleIsNearlyEqual
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_MathDoubleIsNearlyEqual : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(double)                                    A                                                           ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    B                                                           ___ OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    Tolerance                                                   ___ OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleDeg
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathDoubleDeg : public FRigVMFunction_MathDoubleUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleRad
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathDoubleRad : public FRigVMFunction_MathDoubleUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleSin
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathDoubleSin : public FRigVMFunction_MathDoubleUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleCos
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathDoubleCos : public FRigVMFunction_MathDoubleUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleTan
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathDoubleTan : public FRigVMFunction_MathDoubleUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleAsin
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathDoubleAsin : public FRigVMFunction_MathDoubleUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleAcos
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathDoubleAcos : public FRigVMFunction_MathDoubleUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleAtan
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathDoubleAtan : public FRigVMFunction_MathDoubleUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleLawOfCosine
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathDoubleLawOfCosine : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(double)                                    A                                                           ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    B                                                           ___ OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    C                                                           ___ OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(double)                                    AlphaAngle                                                  ___ OFFSET(get<double>, {0x20, 8, 0, 0})
	DMember(double)                                    BetaAngle                                                   ___ OFFSET(get<double>, {0x28, 8, 0, 0})
	DMember(double)                                    GammaAngle                                                  ___ OFFSET(get<double>, {0x30, 8, 0, 0})
	DMember(bool)                                      bValid                                                      ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleExponential
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathDoubleExponential : public FRigVMFunction_MathDoubleUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleArraySum
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathDoubleArraySum : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<double>)                            Array                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(double)                                    Sum                                                         ___ OFFSET(get<double>, {0x18, 8, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleArrayAverage
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathDoubleArrayAverage : public FRigVMFunction_MathDoubleBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<double>)                            Array                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(double)                                    Average                                                     ___ OFFSET(get<double>, {0x18, 8, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_MathFloatBase : public FRigVMFunction_MathBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatConstant
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathFloatConstant : public FRigVMFunction_MathFloatBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatUnaryOp
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathFloatUnaryOp : public FRigVMFunction_MathFloatBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatBinaryOp
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathFloatBinaryOp : public FRigVMFunction_MathFloatBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     A                                                           ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     B                                                           ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatBinaryAggregateOp
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathFloatBinaryAggregateOp : public FRigVMFunction_MathFloatBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     A                                                           ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     B                                                           ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatMake
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathFloatMake : public FRigVMFunction_MathFloatBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatConstPi
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatConstPi : public FRigVMFunction_MathFloatConstant
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatConstHalfPi
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatConstHalfPi : public FRigVMFunction_MathFloatConstant
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatConstTwoPi
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatConstTwoPi : public FRigVMFunction_MathFloatConstant
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatConstE
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatConstE : public FRigVMFunction_MathFloatConstant
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatAdd
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathFloatAdd : public FRigVMFunction_MathFloatBinaryAggregateOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatSub
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathFloatSub : public FRigVMFunction_MathFloatBinaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatMul
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathFloatMul : public FRigVMFunction_MathFloatBinaryAggregateOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatDiv
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathFloatDiv : public FRigVMFunction_MathFloatBinaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatMod
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathFloatMod : public FRigVMFunction_MathFloatBinaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatMin
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathFloatMin : public FRigVMFunction_MathFloatBinaryAggregateOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatMax
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathFloatMax : public FRigVMFunction_MathFloatBinaryAggregateOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatPow
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathFloatPow : public FRigVMFunction_MathFloatBinaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatSqrt
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatSqrt : public FRigVMFunction_MathFloatUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatNegate
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatNegate : public FRigVMFunction_MathFloatUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatAbs
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatAbs : public FRigVMFunction_MathFloatUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatFloor
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathFloatFloor : public FRigVMFunction_MathFloatBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Int                                                         ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatCeil
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathFloatCeil : public FRigVMFunction_MathFloatBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Int                                                         ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatRound
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathFloatRound : public FRigVMFunction_MathFloatBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Int                                                         ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatToInt
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathFloatToInt : public FRigVMFunction_MathFloatBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Result                                                      ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatSign
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatSign : public FRigVMFunction_MathFloatUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatClamp
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathFloatClamp : public FRigVMFunction_MathFloatBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Minimum                                                     ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Maximum                                                     ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatLerp
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathFloatLerp : public FRigVMFunction_MathFloatBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     A                                                           ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     B                                                           ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     T                                                           ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatRemap
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_MathFloatRemap : public FRigVMFunction_MathFloatBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     SourceMinimum                                               ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     SourceMaximum                                               ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     TargetMinimum                                               ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     TargetMaximum                                               ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(bool)                                      bClamp                                                      ___ OFFSET(get<bool>, {0x1C, 1, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatEquals
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathFloatEquals : public FRigVMFunction_MathFloatBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     A                                                           ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     B                                                           ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatNotEquals
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathFloatNotEquals : public FRigVMFunction_MathFloatBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     A                                                           ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     B                                                           ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatGreater
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathFloatGreater : public FRigVMFunction_MathFloatBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     A                                                           ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     B                                                           ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatLess
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathFloatLess : public FRigVMFunction_MathFloatBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     A                                                           ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     B                                                           ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatGreaterEqual
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathFloatGreaterEqual : public FRigVMFunction_MathFloatBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     A                                                           ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     B                                                           ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatLessEqual
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathFloatLessEqual : public FRigVMFunction_MathFloatBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     A                                                           ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     B                                                           ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatIsNearlyZero
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathFloatIsNearlyZero : public FRigVMFunction_MathFloatBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Tolerance                                                   ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatIsNearlyEqual
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathFloatIsNearlyEqual : public FRigVMFunction_MathFloatBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     A                                                           ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     B                                                           ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Tolerance                                                   ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x14, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatSelectBool
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathFloatSelectBool : public FRigVMFunction_MathFloatBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      Condition                                                   ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(float)                                     IfTrue                                                      ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     IfFalse                                                     ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatDeg
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatDeg : public FRigVMFunction_MathFloatUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatRad
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatRad : public FRigVMFunction_MathFloatUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatSin
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatSin : public FRigVMFunction_MathFloatUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatCos
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatCos : public FRigVMFunction_MathFloatUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatTan
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatTan : public FRigVMFunction_MathFloatUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatAsin
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatAsin : public FRigVMFunction_MathFloatUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatAcos
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatAcos : public FRigVMFunction_MathFloatUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatAtan
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatAtan : public FRigVMFunction_MathFloatUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatLawOfCosine
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_MathFloatLawOfCosine : public FRigVMFunction_MathFloatBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     A                                                           ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     B                                                           ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     C                                                           ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     AlphaAngle                                                  ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     BetaAngle                                                   ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     GammaAngle                                                  ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bValid                                                      ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatExponential
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathFloatExponential : public FRigVMFunction_MathFloatUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatArraySum
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathFloatArraySum : public FRigVMFunction_MathFloatBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<float>)                             Array                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(float)                                     Sum                                                         ___ OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatArrayAverage
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathFloatArrayAverage : public FRigVMFunction_MathFloatBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<float>)                             Array                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(float)                                     Average                                                     ___ OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_MathIntBase : public FRigVMFunction_MathBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathIntUnaryOp
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathIntUnaryOp : public FRigVMFunction_MathIntBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Value                                                       ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Result                                                      ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntBinaryOp
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathIntBinaryOp : public FRigVMFunction_MathIntBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   A                                                           ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   B                                                           ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Result                                                      ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntBinaryAggregateOp
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathIntBinaryAggregateOp : public FRigVMFunction_MathIntBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   A                                                           ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   B                                                           ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Result                                                      ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntMake
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathIntMake : public FRigVMFunction_MathIntBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Value                                                       ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntAdd
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathIntAdd : public FRigVMFunction_MathIntBinaryAggregateOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathIntSub
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathIntSub : public FRigVMFunction_MathIntBinaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathIntMul
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathIntMul : public FRigVMFunction_MathIntBinaryAggregateOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathIntDiv
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathIntDiv : public FRigVMFunction_MathIntBinaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathIntMod
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathIntMod : public FRigVMFunction_MathIntBinaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathIntMin
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathIntMin : public FRigVMFunction_MathIntBinaryAggregateOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathIntMax
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathIntMax : public FRigVMFunction_MathIntBinaryAggregateOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathIntPow
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigVMFunction_MathIntPow : public FRigVMFunction_MathIntBinaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathIntNegate
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathIntNegate : public FRigVMFunction_MathIntUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathIntAbs
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathIntAbs : public FRigVMFunction_MathIntUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathIntToFloat
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathIntToFloat : public FRigVMFunction_MathIntBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Value                                                       ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntToDouble
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathIntToDouble : public FRigVMFunction_MathIntBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   Value                                                       ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(double)                                    Result                                                      ___ OFFSET(get<double>, {0x10, 8, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntSign
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigVMFunction_MathIntSign : public FRigVMFunction_MathIntUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathIntClamp
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathIntClamp : public FRigVMFunction_MathIntBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   Value                                                       ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Minimum                                                     ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Maximum                                                     ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   Result                                                      ___ OFFSET(get<int32_t>, {0x14, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntEquals
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathIntEquals : public FRigVMFunction_MathIntBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   A                                                           ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   B                                                           ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntNotEquals
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathIntNotEquals : public FRigVMFunction_MathIntBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   A                                                           ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   B                                                           ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntGreater
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathIntGreater : public FRigVMFunction_MathIntBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   A                                                           ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   B                                                           ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntLess
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathIntLess : public FRigVMFunction_MathIntBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   A                                                           ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   B                                                           ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntGreaterEqual
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathIntGreaterEqual : public FRigVMFunction_MathIntBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   A                                                           ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   B                                                           ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntLessEqual
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathIntLessEqual : public FRigVMFunction_MathIntBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   A                                                           ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   B                                                           ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntArraySum
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathIntArraySum : public FRigVMFunction_MathIntBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<int32_t>)                           Array                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   Sum                                                         ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntArrayAverage
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathIntArrayAverage : public FRigVMFunction_MathIntBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<int32_t>)                           Array                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   Average                                                     ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntToString
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_MathIntToString : public FRigVMFunction_MathIntBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   Number                                                      ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   PaddedSize                                                  ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	SMember(FString)                                   Result                                                      ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntToName
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_MathIntToName : public FRigVMFunction_MathIntBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   Number                                                      ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   PaddedSize                                                  ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	SMember(FName)                                     Result                                                      ___ OFFSET(get<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_MathMatrixBase : public FRigVMFunction_MathBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixUnaryOp
/// Size: 0x0108 (0x000008 - 0x000110)
class FRigVMFunction_MathMatrixUnaryOp : public FRigVMFunction_MathMatrixBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FMatrix)                                   Value                                                       ___ OFFSET(get<T>, {0x10, 128, 0, 0})
	SMember(FMatrix)                                   Result                                                      ___ OFFSET(get<T>, {0x90, 128, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixBinaryOp
/// Size: 0x0188 (0x000008 - 0x000190)
class FRigVMFunction_MathMatrixBinaryOp : public FRigVMFunction_MathMatrixBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FMatrix)                                   A                                                           ___ OFFSET(get<T>, {0x10, 128, 0, 0})
	SMember(FMatrix)                                   B                                                           ___ OFFSET(get<T>, {0x90, 128, 0, 0})
	SMember(FMatrix)                                   Result                                                      ___ OFFSET(get<T>, {0x110, 128, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixBinaryAggregateOp
/// Size: 0x0188 (0x000008 - 0x000190)
class FRigVMFunction_MathMatrixBinaryAggregateOp : public FRigVMFunction_MathMatrixBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FMatrix)                                   A                                                           ___ OFFSET(get<T>, {0x10, 128, 0, 0})
	SMember(FMatrix)                                   B                                                           ___ OFFSET(get<T>, {0x90, 128, 0, 0})
	SMember(FMatrix)                                   Result                                                      ___ OFFSET(get<T>, {0x110, 128, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixToTransform
/// Size: 0x00E8 (0x000008 - 0x0000F0)
class FRigVMFunction_MathMatrixToTransform : public FRigVMFunction_MathMatrixBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FMatrix)                                   Value                                                       ___ OFFSET(get<T>, {0x10, 128, 0, 0})
	SMember(FTransform)                                Result                                                      ___ OFFSET(get<T>, {0x90, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixFromTransform
/// Size: 0x00E8 (0x000008 - 0x0000F0)
class FRigVMFunction_MathMatrixFromTransform : public FRigVMFunction_MathMatrixBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FMatrix)                                   Result                                                      ___ OFFSET(get<T>, {0x70, 128, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixFromTransformV2
/// Size: 0x00E8 (0x000008 - 0x0000F0)
class FRigVMFunction_MathMatrixFromTransformV2 : public FRigVMFunction_MathMatrixBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FTransform)                                Value                                                       ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FMatrix)                                   Result                                                      ___ OFFSET(get<T>, {0x70, 128, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixToVectors
/// Size: 0x00E8 (0x000008 - 0x0000F0)
class FRigVMFunction_MathMatrixToVectors : public FRigVMFunction_MathMatrixBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FMatrix)                                   Value                                                       ___ OFFSET(get<T>, {0x10, 128, 0, 0})
	SMember(FVector)                                   Origin                                                      ___ OFFSET(get<T>, {0x90, 24, 0, 0})
	SMember(FVector)                                   X                                                           ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
	SMember(FVector)                                   Y                                                           ___ OFFSET(get<T>, {0xC0, 24, 0, 0})
	SMember(FVector)                                   Z                                                           ___ OFFSET(get<T>, {0xD8, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixFromVectors
/// Size: 0x00E8 (0x000008 - 0x0000F0)
class FRigVMFunction_MathMatrixFromVectors : public FRigVMFunction_MathMatrixBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FVector)                                   Origin                                                      ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   X                                                           ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Y                                                           ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	SMember(FVector)                                   Z                                                           ___ OFFSET(get<T>, {0x50, 24, 0, 0})
	SMember(FMatrix)                                   Result                                                      ___ OFFSET(get<T>, {0x70, 128, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixMul
/// Size: 0x0000 (0x000190 - 0x000190)
class FRigVMFunction_MathMatrixMul : public FRigVMFunction_MathMatrixBinaryAggregateOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixInverse
/// Size: 0x0000 (0x000110 - 0x000110)
class FRigVMFunction_MathMatrixInverse : public FRigVMFunction_MathMatrixUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_MathQuaternionBase : public FRigVMFunction_MathBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionUnaryOp
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigVMFunction_MathQuaternionUnaryOp : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FQuat)                                     Value                                                       ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     Result                                                      ___ OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionBinaryOp
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigVMFunction_MathQuaternionBinaryOp : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FQuat)                                     A                                                           ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     B                                                           ___ OFFSET(get<T>, {0x30, 32, 0, 0})
	SMember(FQuat)                                     Result                                                      ___ OFFSET(get<T>, {0x50, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionBinaryAggregateOp
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigVMFunction_MathQuaternionBinaryAggregateOp : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FQuat)                                     A                                                           ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     B                                                           ___ OFFSET(get<T>, {0x30, 32, 0, 0})
	SMember(FQuat)                                     Result                                                      ___ OFFSET(get<T>, {0x50, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionMake
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathQuaternionMake : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     X                                                           ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Y                                                           ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Z                                                           ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     W                                                           ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	SMember(FQuat)                                     Result                                                      ___ OFFSET(get<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionFromAxisAndAngle
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigVMFunction_MathQuaternionFromAxisAndAngle : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Axis                                                        ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(float)                                     Angle                                                       ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	SMember(FQuat)                                     Result                                                      ___ OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionFromEuler
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigVMFunction_MathQuaternionFromEuler : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Euler                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	CMember(EEulerRotationOrder)                       RotationOrder                                               ___ OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FQuat)                                     Result                                                      ___ OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionFromRotator
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathQuaternionFromRotator : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRotator)                                  Rotator                                                     ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FQuat)                                     Result                                                      ___ OFFSET(get<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionFromRotatorV2
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathQuaternionFromRotatorV2 : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRotator)                                  Value                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FQuat)                                     Result                                                      ___ OFFSET(get<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionFromTwoVectors
/// Size: 0x0058 (0x000008 - 0x000060)
class FRigVMFunction_MathQuaternionFromTwoVectors : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FVector)                                   A                                                           ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   B                                                           ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FQuat)                                     Result                                                      ___ OFFSET(get<T>, {0x40, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionToAxisAndAngle
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigVMFunction_MathQuaternionToAxisAndAngle : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FQuat)                                     Value                                                       ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FVector)                                   Axis                                                        ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	DMember(float)                                     Angle                                                       ___ OFFSET(get<float>, {0x48, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionScale
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathQuaternionScale : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FQuat)                                     Value                                                       ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionScaleV2
/// Size: 0x0058 (0x000008 - 0x000060)
class FRigVMFunction_MathQuaternionScaleV2 : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FQuat)                                     Value                                                       ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	DMember(float)                                     Factor                                                      ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	SMember(FQuat)                                     Result                                                      ___ OFFSET(get<T>, {0x40, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionToEuler
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigVMFunction_MathQuaternionToEuler : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FQuat)                                     Value                                                       ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	CMember(EEulerRotationOrder)                       RotationOrder                                               ___ OFFSET(get<T>, {0x30, 1, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x38, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionToRotator
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigVMFunction_MathQuaternionToRotator : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FQuat)                                     Value                                                       ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FRotator)                                  Result                                                      ___ OFFSET(get<T>, {0x30, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionMul
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMFunction_MathQuaternionMul : public FRigVMFunction_MathQuaternionBinaryAggregateOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionInverse
/// Size: 0x0000 (0x000050 - 0x000050)
class FRigVMFunction_MathQuaternionInverse : public FRigVMFunction_MathQuaternionUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionSlerp
/// Size: 0x0078 (0x000008 - 0x000080)
class FRigVMFunction_MathQuaternionSlerp : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FQuat)                                     A                                                           ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     B                                                           ___ OFFSET(get<T>, {0x30, 32, 0, 0})
	DMember(float)                                     T                                                           ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	SMember(FQuat)                                     Result                                                      ___ OFFSET(get<T>, {0x60, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionEquals
/// Size: 0x0058 (0x000008 - 0x000060)
class FRigVMFunction_MathQuaternionEquals : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FQuat)                                     A                                                           ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     B                                                           ___ OFFSET(get<T>, {0x30, 32, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x50, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionNotEquals
/// Size: 0x0058 (0x000008 - 0x000060)
class FRigVMFunction_MathQuaternionNotEquals : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FQuat)                                     A                                                           ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     B                                                           ___ OFFSET(get<T>, {0x30, 32, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x50, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionSelectBool
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigVMFunction_MathQuaternionSelectBool : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      Condition                                                   ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	SMember(FQuat)                                     IfTrue                                                      ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     IfFalse                                                     ___ OFFSET(get<T>, {0x30, 32, 0, 0})
	SMember(FQuat)                                     Result                                                      ___ OFFSET(get<T>, {0x50, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionDot
/// Size: 0x0058 (0x000008 - 0x000060)
class FRigVMFunction_MathQuaternionDot : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FQuat)                                     A                                                           ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     B                                                           ___ OFFSET(get<T>, {0x30, 32, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0x50, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionUnit
/// Size: 0x0000 (0x000050 - 0x000050)
class FRigVMFunction_MathQuaternionUnit : public FRigVMFunction_MathQuaternionUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionRotateVector
/// Size: 0x0058 (0x000008 - 0x000060)
class FRigVMFunction_MathQuaternionRotateVector : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FQuat)                                     Transform                                                   ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FVector)                                   Vector                                                      ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x48, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionGetAxis
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigVMFunction_MathQuaternionGetAxis : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FQuat)                                     Quaternion                                                  ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        Axis                                                        ___ OFFSET(get<T>, {0x30, 1, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x38, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionSwingTwist
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigVMFunction_MathQuaternionSwingTwist : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FQuat)                                     Input                                                       ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FVector)                                   TwistAxis                                                   ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FQuat)                                     Swing                                                       ___ OFFSET(get<T>, {0x50, 32, 0, 0})
	SMember(FQuat)                                     Twist                                                       ___ OFFSET(get<T>, {0x70, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionRotationOrder
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMFunction_MathQuaternionRotationOrder : public FRigVMFunction_MathBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EEulerRotationOrder)                       RotationOrder                                               ___ OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionMakeRelative
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigVMFunction_MathQuaternionMakeRelative : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FQuat)                                     Global                                                      ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     Parent                                                      ___ OFFSET(get<T>, {0x30, 32, 0, 0})
	SMember(FQuat)                                     Local                                                       ___ OFFSET(get<T>, {0x50, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionMakeAbsolute
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigVMFunction_MathQuaternionMakeAbsolute : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FQuat)                                     Local                                                       ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     Parent                                                      ___ OFFSET(get<T>, {0x30, 32, 0, 0})
	SMember(FQuat)                                     Global                                                      ___ OFFSET(get<T>, {0x50, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionMirrorTransform
/// Size: 0x00B8 (0x000008 - 0x0000C0)
class FRigVMFunction_MathQuaternionMirrorTransform : public FRigVMFunction_MathQuaternionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FQuat)                                     Value                                                       ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        MirrorAxis                                                  ___ OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        AxisToFlip                                                  ___ OFFSET(get<T>, {0x31, 1, 0, 0})
	SMember(FTransform)                                CentralTransform                                            ___ OFFSET(get<T>, {0x40, 96, 0, 0})
	SMember(FQuat)                                     Result                                                      ___ OFFSET(get<T>, {0xA0, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateQuatWorkData
/// Size: 0x0090 (0x000000 - 0x000090)
class FRigVMFunction_MathRBFInterpolateQuatWorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateVectorWorkData
/// Size: 0x0090 (0x000000 - 0x000090)
class FRigVMFunction_MathRBFInterpolateVectorWorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_MathRBFInterpolateBase : public FRigVMFunction_MathBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateQuatBase
/// Size: 0x00E8 (0x000008 - 0x0000F0)
class FRigVMFunction_MathRBFInterpolateQuatBase : public FRigVMFunction_MathRBFInterpolateBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FQuat)                                     Input                                                       ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	CMember(ERBFQuatDistanceType)                      DistanceFunction                                            ___ OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(ERBFKernelType)                            SmoothingFunction                                           ___ OFFSET(get<T>, {0x31, 1, 0, 0})
	DMember(float)                                     SmoothingAngle                                              ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(bool)                                      bNormalizeOutput                                            ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FVector)                                   TwistAxis                                                   ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FRigVMFunction_MathRBFInterpolateQuatWorkData) WorkData                                                ___ OFFSET(get<T>, {0x60, 144, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateVectorBase
/// Size: 0x00B8 (0x000008 - 0x0000C0)
class FRigVMFunction_MathRBFInterpolateVectorBase : public FRigVMFunction_MathRBFInterpolateBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FVector)                                   Input                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	CMember(ERBFVectorDistanceType)                    DistanceFunction                                            ___ OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(ERBFKernelType)                            SmoothingFunction                                           ___ OFFSET(get<T>, {0x21, 1, 0, 0})
	DMember(float)                                     SmoothingRadius                                             ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(bool)                                      bNormalizeOutput                                            ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FRigVMFunction_MathRBFInterpolateVectorWorkData) WorkData                                              ___ OFFSET(get<T>, {0x30, 144, 0, 0})
};

/// Struct /Script/RigVM.MathRBFInterpolateQuatFloat_Target
/// Size: 0x0030 (0x000000 - 0x000030)
class FMathRBFInterpolateQuatFloat_Target : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FQuat)                                     Target                                                      ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateQuatFloat
/// Size: 0x0020 (0x0000F0 - 0x000110)
class FRigVMFunction_MathRBFInterpolateQuatFloat : public FRigVMFunction_MathRBFInterpolateQuatBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(TArray<FMathRBFInterpolateQuatFloat_Target>) Targets                                                   ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
	DMember(float)                                     Output                                                      ___ OFFSET(get<float>, {0x100, 4, 0, 0})
};

/// Struct /Script/RigVM.MathRBFInterpolateQuatVector_Target
/// Size: 0x0040 (0x000000 - 0x000040)
class FMathRBFInterpolateQuatVector_Target : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FQuat)                                     Target                                                      ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateQuatVector
/// Size: 0x0030 (0x0000F0 - 0x000120)
class FRigVMFunction_MathRBFInterpolateQuatVector : public FRigVMFunction_MathRBFInterpolateQuatBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FMathRBFInterpolateQuatVector_Target>) Targets                                                  ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
	SMember(FVector)                                   Output                                                      ___ OFFSET(get<T>, {0x100, 24, 0, 0})
};

/// Struct /Script/RigVM.MathRBFInterpolateQuatColor_Target
/// Size: 0x0030 (0x000000 - 0x000030)
class FMathRBFInterpolateQuatColor_Target : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FQuat)                                     Target                                                      ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FLinearColor)                              Value                                                       ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateQuatColor
/// Size: 0x0020 (0x0000F0 - 0x000110)
class FRigVMFunction_MathRBFInterpolateQuatColor : public FRigVMFunction_MathRBFInterpolateQuatBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(TArray<FMathRBFInterpolateQuatColor_Target>) Targets                                                   ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
	SMember(FLinearColor)                              Output                                                      ___ OFFSET(get<T>, {0x100, 16, 0, 0})
};

/// Struct /Script/RigVM.MathRBFInterpolateQuatQuat_Target
/// Size: 0x0040 (0x000000 - 0x000040)
class FMathRBFInterpolateQuatQuat_Target : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FQuat)                                     Target                                                      ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FQuat)                                     Value                                                       ___ OFFSET(get<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateQuatQuat
/// Size: 0x0030 (0x0000F0 - 0x000120)
class FRigVMFunction_MathRBFInterpolateQuatQuat : public FRigVMFunction_MathRBFInterpolateQuatBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FMathRBFInterpolateQuatQuat_Target>) Targets                                                    ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
	SMember(FQuat)                                     Output                                                      ___ OFFSET(get<T>, {0x100, 32, 0, 0})
};

/// Struct /Script/RigVM.MathRBFInterpolateQuatXform_Target
/// Size: 0x0080 (0x000000 - 0x000080)
class FMathRBFInterpolateQuatXform_Target : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FQuat)                                     Target                                                      ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FTransform)                                Value                                                       ___ OFFSET(get<T>, {0x20, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateQuatXform
/// Size: 0x0070 (0x0000F0 - 0x000160)
class FRigVMFunction_MathRBFInterpolateQuatXform : public FRigVMFunction_MathRBFInterpolateQuatBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(TArray<FMathRBFInterpolateQuatXform_Target>) Targets                                                   ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
	SMember(FTransform)                                Output                                                      ___ OFFSET(get<T>, {0x100, 96, 0, 0})
};

/// Struct /Script/RigVM.MathRBFInterpolateVectorFloat_Target
/// Size: 0x0020 (0x000000 - 0x000020)
class FMathRBFInterpolateVectorFloat_Target : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Target                                                      ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateVectorFloat
/// Size: 0x0020 (0x0000C0 - 0x0000E0)
class FRigVMFunction_MathRBFInterpolateVectorFloat : public FRigVMFunction_MathRBFInterpolateVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TArray<FMathRBFInterpolateVectorFloat_Target>) Targets                                                 ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	DMember(float)                                     Output                                                      ___ OFFSET(get<float>, {0xD0, 4, 0, 0})
};

/// Struct /Script/RigVM.MathRBFInterpolateVectorVector_Target
/// Size: 0x0030 (0x000000 - 0x000030)
class FMathRBFInterpolateVectorVector_Target : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   Target                                                      ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateVectorVector
/// Size: 0x0030 (0x0000C0 - 0x0000F0)
class FRigVMFunction_MathRBFInterpolateVectorVector : public FRigVMFunction_MathRBFInterpolateVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TArray<FMathRBFInterpolateVectorVector_Target>) Targets                                                ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FVector)                                   Output                                                      ___ OFFSET(get<T>, {0xD0, 24, 0, 0})
};

/// Struct /Script/RigVM.MathRBFInterpolateVectorColor_Target
/// Size: 0x0028 (0x000000 - 0x000028)
class FMathRBFInterpolateVectorColor_Target : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector)                                   Target                                                      ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FLinearColor)                              Value                                                       ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateVectorColor
/// Size: 0x0020 (0x0000C0 - 0x0000E0)
class FRigVMFunction_MathRBFInterpolateVectorColor : public FRigVMFunction_MathRBFInterpolateVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TArray<FMathRBFInterpolateVectorColor_Target>) Targets                                                 ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FLinearColor)                              Output                                                      ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
};

/// Struct /Script/RigVM.MathRBFInterpolateVectorQuat_Target
/// Size: 0x0040 (0x000000 - 0x000040)
class FMathRBFInterpolateVectorQuat_Target : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Target                                                      ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FQuat)                                     Value                                                       ___ OFFSET(get<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateVectorQuat
/// Size: 0x0030 (0x0000C0 - 0x0000F0)
class FRigVMFunction_MathRBFInterpolateVectorQuat : public FRigVMFunction_MathRBFInterpolateVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TArray<FMathRBFInterpolateVectorQuat_Target>) Targets                                                  ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FQuat)                                     Output                                                      ___ OFFSET(get<T>, {0xD0, 32, 0, 0})
};

/// Struct /Script/RigVM.MathRBFInterpolateVectorXform_Target
/// Size: 0x0080 (0x000000 - 0x000080)
class FMathRBFInterpolateVectorXform_Target : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FVector)                                   Target                                                      ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FTransform)                                Value                                                       ___ OFFSET(get<T>, {0x20, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateVectorXform
/// Size: 0x0070 (0x0000C0 - 0x000130)
class FRigVMFunction_MathRBFInterpolateVectorXform : public FRigVMFunction_MathRBFInterpolateVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TArray<FMathRBFInterpolateVectorXform_Target>) Targets                                                 ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FTransform)                                Output                                                      ___ OFFSET(get<T>, {0xD0, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_MathTransformBase : public FRigVMFunction_MathBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformMutableBase
/// Size: 0x0000 (0x000100 - 0x000100)
class FRigVMFunction_MathTransformMutableBase : public FRigVMFunction_MathMutableBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformUnaryOp
/// Size: 0x00C8 (0x000008 - 0x0000D0)
class FRigVMFunction_MathTransformUnaryOp : public FRigVMFunction_MathTransformBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FTransform)                                Value                                                       ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                Result                                                      ___ OFFSET(get<T>, {0x70, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformBinaryOp
/// Size: 0x0128 (0x000008 - 0x000130)
class FRigVMFunction_MathTransformBinaryOp : public FRigVMFunction_MathTransformBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FTransform)                                A                                                           ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                B                                                           ___ OFFSET(get<T>, {0x70, 96, 0, 0})
	SMember(FTransform)                                Result                                                      ___ OFFSET(get<T>, {0xD0, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformBinaryAggregateOp
/// Size: 0x0128 (0x000008 - 0x000130)
class FRigVMFunction_MathTransformBinaryAggregateOp : public FRigVMFunction_MathTransformBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FTransform)                                A                                                           ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                B                                                           ___ OFFSET(get<T>, {0x70, 96, 0, 0})
	SMember(FTransform)                                Result                                                      ___ OFFSET(get<T>, {0xD0, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformMake
/// Size: 0x00B8 (0x000008 - 0x0000C0)
class FRigVMFunction_MathTransformMake : public FRigVMFunction_MathTransformBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FVector)                                   Translation                                                 ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FQuat)                                     Rotation                                                    ___ OFFSET(get<T>, {0x20, 32, 0, 0})
	SMember(FVector)                                   Scale                                                       ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FTransform)                                Result                                                      ___ OFFSET(get<T>, {0x60, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformFromEulerTransform
/// Size: 0x00A8 (0x000008 - 0x0000B0)
class FRigVMFunction_MathTransformFromEulerTransform : public FRigVMFunction_MathTransformBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FEulerTransform)                           EulerTransform                                              ___ OFFSET(get<T>, {0x8, 72, 0, 0})
	SMember(FTransform)                                Result                                                      ___ OFFSET(get<T>, {0x50, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformFromEulerTransformV2
/// Size: 0x00A8 (0x000008 - 0x0000B0)
class FRigVMFunction_MathTransformFromEulerTransformV2 : public FRigVMFunction_MathTransformBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FEulerTransform)                           Value                                                       ___ OFFSET(get<T>, {0x8, 72, 0, 0})
	SMember(FTransform)                                Result                                                      ___ OFFSET(get<T>, {0x50, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformToEulerTransform
/// Size: 0x00B8 (0x000008 - 0x0000C0)
class FRigVMFunction_MathTransformToEulerTransform : public FRigVMFunction_MathTransformBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FTransform)                                Value                                                       ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FEulerTransform)                           Result                                                      ___ OFFSET(get<T>, {0x70, 72, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformMul
/// Size: 0x0000 (0x000130 - 0x000130)
class FRigVMFunction_MathTransformMul : public FRigVMFunction_MathTransformBinaryAggregateOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformMakeRelative
/// Size: 0x0128 (0x000008 - 0x000130)
class FRigVMFunction_MathTransformMakeRelative : public FRigVMFunction_MathTransformBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FTransform)                                Global                                                      ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                Parent                                                      ___ OFFSET(get<T>, {0x70, 96, 0, 0})
	SMember(FTransform)                                Local                                                       ___ OFFSET(get<T>, {0xD0, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformMakeAbsolute
/// Size: 0x0128 (0x000008 - 0x000130)
class FRigVMFunction_MathTransformMakeAbsolute : public FRigVMFunction_MathTransformBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FTransform)                                Local                                                       ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                Parent                                                      ___ OFFSET(get<T>, {0x70, 96, 0, 0})
	SMember(FTransform)                                Global                                                      ___ OFFSET(get<T>, {0xD0, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformAccumulateArray
/// Size: 0x0090 (0x000100 - 0x000190)
class FRigVMFunction_MathTransformAccumulateArray : public FRigVMFunction_MathTransformMutableBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(TArray<FTransform>)                        Transforms                                                  ___ OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(ERigVMTransformSpace)                      TargetSpace                                                 ___ OFFSET(get<T>, {0x110, 1, 0, 0})
	SMember(FTransform)                                Root                                                        ___ OFFSET(get<T>, {0x120, 96, 0, 0})
	CMember(TArray<int32_t>)                           ParentIndices                                               ___ OFFSET(get<T>, {0x180, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformInverse
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class FRigVMFunction_MathTransformInverse : public FRigVMFunction_MathTransformUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformLerp
/// Size: 0x0138 (0x000008 - 0x000140)
class FRigVMFunction_MathTransformLerp : public FRigVMFunction_MathTransformBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FTransform)                                A                                                           ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                B                                                           ___ OFFSET(get<T>, {0x70, 96, 0, 0})
	DMember(float)                                     T                                                           ___ OFFSET(get<float>, {0xD0, 4, 0, 0})
	SMember(FTransform)                                Result                                                      ___ OFFSET(get<T>, {0xE0, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformSelectBool
/// Size: 0x0128 (0x000008 - 0x000130)
class FRigVMFunction_MathTransformSelectBool : public FRigVMFunction_MathTransformBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	DMember(bool)                                      Condition                                                   ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	SMember(FTransform)                                IfTrue                                                      ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                IfFalse                                                     ___ OFFSET(get<T>, {0x70, 96, 0, 0})
	SMember(FTransform)                                Result                                                      ___ OFFSET(get<T>, {0xD0, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformRotateVector
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FRigVMFunction_MathTransformRotateVector : public FRigVMFunction_MathTransformBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FVector)                                   Vector                                                      ___ OFFSET(get<T>, {0x70, 24, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x88, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformTransformVector
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FRigVMFunction_MathTransformTransformVector : public FRigVMFunction_MathTransformBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FVector)                                   Location                                                    ___ OFFSET(get<T>, {0x70, 24, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x88, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformFromSRT
/// Size: 0x0108 (0x000008 - 0x000110)
class FRigVMFunction_MathTransformFromSRT : public FRigVMFunction_MathTransformBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FVector)                                   Location                                                    ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Rotation                                                    ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	CMember(EEulerRotationOrder)                       RotationOrder                                               ___ OFFSET(get<T>, {0x38, 1, 0, 0})
	SMember(FVector)                                   Scale                                                       ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x60, 96, 0, 0})
	SMember(FEulerTransform)                           EulerTransform                                              ___ OFFSET(get<T>, {0xC0, 72, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformArrayToSRT
/// Size: 0x0040 (0x000008 - 0x000048)
class FRigVMFunction_MathTransformArrayToSRT : public FRigVMFunction_MathTransformBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FTransform>)                        Transforms                                                  ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FVector>)                           Translations                                                ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FQuat>)                             Rotations                                                   ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FVector>)                           Scales                                                      ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformClampSpatially
/// Size: 0x0158 (0x000008 - 0x000160)
class FRigVMFunction_MathTransformClampSpatially : public FRigVMFunction_MathTransformBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FTransform)                                Value                                                       ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        Axis                                                        ___ OFFSET(get<T>, {0x70, 1, 0, 0})
	CMember(TEnumAsByte<ERigVMClampSpatialMode>)       Type                                                        ___ OFFSET(get<T>, {0x71, 1, 0, 0})
	DMember(float)                                     Minimum                                                     ___ OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     Maximum                                                     ___ OFFSET(get<float>, {0x78, 4, 0, 0})
	SMember(FTransform)                                Space                                                       ___ OFFSET(get<T>, {0x80, 96, 0, 0})
	DMember(bool)                                      bDrawDebug                                                  ___ OFFSET(get<bool>, {0xE0, 1, 0, 0})
	SMember(FLinearColor)                              DebugColor                                                  ___ OFFSET(get<T>, {0xE4, 16, 0, 0})
	DMember(float)                                     DebugThickness                                              ___ OFFSET(get<float>, {0xF4, 4, 0, 0})
	SMember(FTransform)                                Result                                                      ___ OFFSET(get<T>, {0x100, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformMirrorTransform
/// Size: 0x0138 (0x000008 - 0x000140)
class FRigVMFunction_MathTransformMirrorTransform : public FRigVMFunction_MathTransformBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FTransform)                                Value                                                       ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        MirrorAxis                                                  ___ OFFSET(get<T>, {0x70, 1, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        AxisToFlip                                                  ___ OFFSET(get<T>, {0x71, 1, 0, 0})
	SMember(FTransform)                                CentralTransform                                            ___ OFFSET(get<T>, {0x80, 96, 0, 0})
	SMember(FTransform)                                Result                                                      ___ OFFSET(get<T>, {0xE0, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_MathVectorBase : public FRigVMFunction_MathBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorUnaryOp
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigVMFunction_MathVectorUnaryOp : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorBinaryOp
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigVMFunction_MathVectorBinaryOp : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   A                                                           ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   B                                                           ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x38, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorBinaryAggregateOp
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigVMFunction_MathVectorBinaryAggregateOp : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   A                                                           ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   B                                                           ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x38, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMake
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigVMFunction_MathVectorMake : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     X                                                           ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Y                                                           ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Z                                                           ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorFromFloat
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_MathVectorFromFloat : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorFromDouble
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_MathVectorFromDouble : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(double)                                    Value                                                       ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorAdd
/// Size: 0x0000 (0x000050 - 0x000050)
class FRigVMFunction_MathVectorAdd : public FRigVMFunction_MathVectorBinaryAggregateOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorSub
/// Size: 0x0000 (0x000050 - 0x000050)
class FRigVMFunction_MathVectorSub : public FRigVMFunction_MathVectorBinaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMul
/// Size: 0x0000 (0x000050 - 0x000050)
class FRigVMFunction_MathVectorMul : public FRigVMFunction_MathVectorBinaryAggregateOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorScale
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathVectorScale : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(float)                                     Factor                                                      ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorDiv
/// Size: 0x0000 (0x000050 - 0x000050)
class FRigVMFunction_MathVectorDiv : public FRigVMFunction_MathVectorBinaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMod
/// Size: 0x0000 (0x000050 - 0x000050)
class FRigVMFunction_MathVectorMod : public FRigVMFunction_MathVectorBinaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMin
/// Size: 0x0000 (0x000050 - 0x000050)
class FRigVMFunction_MathVectorMin : public FRigVMFunction_MathVectorBinaryAggregateOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMax
/// Size: 0x0000 (0x000050 - 0x000050)
class FRigVMFunction_MathVectorMax : public FRigVMFunction_MathVectorBinaryAggregateOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorNegate
/// Size: 0x0000 (0x000038 - 0x000038)
class FRigVMFunction_MathVectorNegate : public FRigVMFunction_MathVectorUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorAbs
/// Size: 0x0000 (0x000038 - 0x000038)
class FRigVMFunction_MathVectorAbs : public FRigVMFunction_MathVectorUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorFloor
/// Size: 0x0000 (0x000038 - 0x000038)
class FRigVMFunction_MathVectorFloor : public FRigVMFunction_MathVectorUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorCeil
/// Size: 0x0000 (0x000038 - 0x000038)
class FRigVMFunction_MathVectorCeil : public FRigVMFunction_MathVectorUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorRound
/// Size: 0x0000 (0x000038 - 0x000038)
class FRigVMFunction_MathVectorRound : public FRigVMFunction_MathVectorUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorSign
/// Size: 0x0000 (0x000038 - 0x000038)
class FRigVMFunction_MathVectorSign : public FRigVMFunction_MathVectorUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorClamp
/// Size: 0x0060 (0x000008 - 0x000068)
class FRigVMFunction_MathVectorClamp : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Minimum                                                     ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Maximum                                                     ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x50, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorLerp
/// Size: 0x0050 (0x000008 - 0x000058)
class FRigVMFunction_MathVectorLerp : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FVector)                                   A                                                           ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   B                                                           ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(float)                                     T                                                           ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x40, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorRemap
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FRigVMFunction_MathVectorRemap : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   SourceMinimum                                               ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   SourceMaximum                                               ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	SMember(FVector)                                   TargetMinimum                                               ___ OFFSET(get<T>, {0x50, 24, 0, 0})
	SMember(FVector)                                   TargetMaximum                                               ___ OFFSET(get<T>, {0x68, 24, 0, 0})
	DMember(bool)                                      bClamp                                                      ___ OFFSET(get<bool>, {0x80, 1, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x88, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorEquals
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathVectorEquals : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   A                                                           ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   B                                                           ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorNotEquals
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathVectorNotEquals : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   A                                                           ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   B                                                           ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorIsNearlyZero
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_MathVectorIsNearlyZero : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(float)                                     Tolerance                                                   ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x24, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorIsNearlyEqual
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathVectorIsNearlyEqual : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   A                                                           ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   B                                                           ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(float)                                     Tolerance                                                   ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x3C, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorSelectBool
/// Size: 0x0050 (0x000008 - 0x000058)
class FRigVMFunction_MathVectorSelectBool : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(bool)                                      Condition                                                   ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	SMember(FVector)                                   IfTrue                                                      ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   IfFalse                                                     ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x40, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorDeg
/// Size: 0x0000 (0x000038 - 0x000038)
class FRigVMFunction_MathVectorDeg : public FRigVMFunction_MathVectorUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorRad
/// Size: 0x0000 (0x000038 - 0x000038)
class FRigVMFunction_MathVectorRad : public FRigVMFunction_MathVectorUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorLengthSquared
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_MathVectorLengthSquared : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorLength
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_MathVectorLength : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorDistance
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathVectorDistance : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   A                                                           ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   B                                                           ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorCross
/// Size: 0x0000 (0x000050 - 0x000050)
class FRigVMFunction_MathVectorCross : public FRigVMFunction_MathVectorBinaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorDot
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathVectorDot : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   A                                                           ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   B                                                           ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorUnit
/// Size: 0x0000 (0x000038 - 0x000038)
class FRigVMFunction_MathVectorUnit : public FRigVMFunction_MathVectorUnaryOp
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorSetLength
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathVectorSetLength : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(float)                                     Length                                                      ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorClampLength
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathVectorClampLength : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(float)                                     MinimumLength                                               ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     MaximumLength                                               ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMirror
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigVMFunction_MathVectorMirror : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Normal                                                      ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x38, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorAngle
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathVectorAngle : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   A                                                           ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   B                                                           ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorParallel
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathVectorParallel : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   A                                                           ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   B                                                           ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorOrthogonal
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_MathVectorOrthogonal : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   A                                                           ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   B                                                           ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorBezierFourPoint
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FRigVMFunction_MathVectorBezierFourPoint : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FRigVMFourPointBezier)                     Bezier                                                      ___ OFFSET(get<T>, {0x8, 96, 0, 0})
	DMember(float)                                     T                                                           ___ OFFSET(get<float>, {0x68, 4, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x70, 24, 0, 0})
	SMember(FVector)                                   Tangent                                                     ___ OFFSET(get<T>, {0x88, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFourPointBezier
/// Size: 0x0060 (0x000000 - 0x000060)
class FRigVMFourPointBezier : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FVector)                                   A                                                           ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   B                                                           ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   C                                                           ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   D                                                           ___ OFFSET(get<T>, {0x48, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMakeBezierFourPoint
/// Size: 0x0060 (0x000008 - 0x000068)
class FRigVMFunction_MathVectorMakeBezierFourPoint : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FRigVMFourPointBezier)                     Bezier                                                      ___ OFFSET(get<T>, {0x8, 96, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorClampSpatially
/// Size: 0x00B8 (0x000008 - 0x0000C0)
class FRigVMFunction_MathVectorClampSpatially : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        Axis                                                        ___ OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(TEnumAsByte<ERigVMClampSpatialMode>)       Type                                                        ___ OFFSET(get<T>, {0x21, 1, 0, 0})
	DMember(float)                                     Minimum                                                     ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     Maximum                                                     ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	SMember(FTransform)                                Space                                                       ___ OFFSET(get<T>, {0x30, 96, 0, 0})
	DMember(bool)                                      bDrawDebug                                                  ___ OFFSET(get<bool>, {0x90, 1, 0, 0})
	SMember(FLinearColor)                              DebugColor                                                  ___ OFFSET(get<T>, {0x94, 16, 0, 0})
	DMember(float)                                     DebugThickness                                              ___ OFFSET(get<float>, {0xA4, 4, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathIntersectPlane
/// Size: 0x0080 (0x000008 - 0x000088)
class FRigVMFunction_MathIntersectPlane : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FVector)                                   Start                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Direction                                                   ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   PlanePoint                                                  ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	SMember(FVector)                                   PlaneNormal                                                 ___ OFFSET(get<T>, {0x50, 24, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x68, 24, 0, 0})
	DMember(float)                                     Distance                                                    ___ OFFSET(get<float>, {0x80, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathDistanceToPlane
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigVMFunction_MathDistanceToPlane : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FVector)                                   Point                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   PlanePoint                                                  ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   PlaneNormal                                                 ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	SMember(FVector)                                   ClosestPointOnPlane                                         ___ OFFSET(get<T>, {0x50, 24, 0, 0})
	DMember(float)                                     SignedDistance                                              ___ OFFSET(get<float>, {0x68, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMakeRelative
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigVMFunction_MathVectorMakeRelative : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Global                                                      ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Parent                                                      ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Local                                                       ___ OFFSET(get<T>, {0x38, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMakeAbsolute
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigVMFunction_MathVectorMakeAbsolute : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Local                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Parent                                                      ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Global                                                      ___ OFFSET(get<T>, {0x38, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMirrorTransform
/// Size: 0x00A8 (0x000008 - 0x0000B0)
class FRigVMFunction_MathVectorMirrorTransform : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        MirrorAxis                                                  ___ OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        AxisToFlip                                                  ___ OFFSET(get<T>, {0x21, 1, 0, 0})
	SMember(FTransform)                                CentralTransform                                            ___ OFFSET(get<T>, {0x30, 96, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x90, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorArraySum
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigVMFunction_MathVectorArraySum : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FVector>)                           Array                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FVector)                                   Sum                                                         ___ OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorArrayAverage
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigVMFunction_MathVectorArrayAverage : public FRigVMFunction_MathVectorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FVector>)                           Array                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FVector)                                   Average                                                     ___ OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_NoiseFloat
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_NoiseFloat : public FRigVMFunction_MathBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Speed                                                       ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Frequency                                                   ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Minimum                                                     ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Maximum                                                     ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     Time                                                        ___ OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_NoiseDouble
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_NoiseDouble : public FRigVMFunction_MathBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(double)                                    Value                                                       ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    Speed                                                       ___ OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    Frequency                                                   ___ OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(double)                                    Minimum                                                     ___ OFFSET(get<double>, {0x20, 8, 0, 0})
	DMember(double)                                    Maximum                                                     ___ OFFSET(get<double>, {0x28, 8, 0, 0})
	DMember(double)                                    Result                                                      ___ OFFSET(get<double>, {0x30, 8, 0, 0})
	DMember(double)                                    Time                                                        ___ OFFSET(get<double>, {0x38, 8, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_NoiseVector
/// Size: 0x0080 (0x000008 - 0x000088)
class FRigVMFunction_NoiseVector : public FRigVMFunction_MathBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FVector)                                   Position                                                    ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Speed                                                       ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Frequency                                                   ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	DMember(float)                                     Minimum                                                     ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     Maximum                                                     ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x58, 24, 0, 0})
	SMember(FVector)                                   Time                                                        ___ OFFSET(get<T>, {0x70, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_NoiseVector2
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigVMFunction_NoiseVector2 : public FRigVMFunction_MathBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Speed                                                       ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Frequency                                                   ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	DMember(double)                                    Minimum                                                     ___ OFFSET(get<double>, {0x50, 8, 0, 0})
	DMember(double)                                    Maximum                                                     ___ OFFSET(get<double>, {0x58, 8, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x60, 24, 0, 0})
	SMember(FVector)                                   Time                                                        ___ OFFSET(get<T>, {0x78, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_RandomFloat
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigVMFunction_RandomFloat : public FRigVMFunction_MathBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   Seed                                                        ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     Minimum                                                     ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Maximum                                                     ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Duration                                                    ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     LastResult                                                  ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   LastSeed                                                    ___ OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   BaseSeed                                                    ___ OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(float)                                     TimeLeft                                                    ___ OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_RandomVector
/// Size: 0x0050 (0x000008 - 0x000058)
class FRigVMFunction_RandomVector : public FRigVMFunction_MathBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   Seed                                                        ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     Minimum                                                     ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Maximum                                                     ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Duration                                                    ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   LastResult                                                  ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	DMember(int32_t)                                   LastSeed                                                    ___ OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   BaseSeed                                                    ___ OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	DMember(float)                                     TimeLeft                                                    ___ OFFSET(get<float>, {0x50, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMMirrorSettings
/// Size: 0x0028 (0x000000 - 0x000028)
class FRigVMMirrorSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TEnumAsByte<EAxis>)                        MirrorAxis                                                  ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        AxisToFlip                                                  ___ OFFSET(get<T>, {0x1, 1, 0, 0})
	SMember(FString)                                   SearchString                                                ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   ReplaceString                                               ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMSimPoint
/// Size: 0x0040 (0x000000 - 0x000040)
class FRigVMSimPoint : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     Mass                                                        ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Size                                                        ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     LinearDamping                                               ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     InheritMotion                                               ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	SMember(FVector)                                   Position                                                    ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   LinearVelocity                                              ___ OFFSET(get<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/RigVM.RigVMDispatch_CoreBase
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_CoreBase : public FRigVMDispatchFactory
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayBase
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayBase : public FRigVMDispatch_CoreBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayBaseMutable
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayBaseMutable : public FRigVMDispatch_ArrayBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayMake
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayMake : public FRigVMDispatch_ArrayBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayReset
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayReset : public FRigVMDispatch_ArrayBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayGetNum
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayGetNum : public FRigVMDispatch_ArrayBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArraySetNum
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArraySetNum : public FRigVMDispatch_ArrayBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayGetAtIndex
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayGetAtIndex : public FRigVMDispatch_ArrayBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArraySetAtIndex
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArraySetAtIndex : public FRigVMDispatch_ArrayBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayAdd
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayAdd : public FRigVMDispatch_ArraySetAtIndex
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayInsert
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayInsert : public FRigVMDispatch_ArraySetAtIndex
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayRemove
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayRemove : public FRigVMDispatch_ArrayBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayReverse
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayReverse : public FRigVMDispatch_ArrayReset
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayFind
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayFind : public FRigVMDispatch_ArrayBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayAppend
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayAppend : public FRigVMDispatch_ArrayBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayClone
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayClone : public FRigVMDispatch_ArrayBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayUnion
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayUnion : public FRigVMDispatch_ArrayAppend
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayDifference
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayDifference : public FRigVMDispatch_ArrayBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayIntersection
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayIntersection : public FRigVMDispatch_ArrayDifference
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayIterator
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_ArrayIterator : public FRigVMDispatch_ArrayBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_Constant
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_Constant : public FRigVMDispatch_CoreBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_CoreEquals
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_CoreEquals : public FRigVMDispatch_CoreBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_CoreNotEquals
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_CoreNotEquals : public FRigVMDispatch_CoreEquals
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_If
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_If : public FRigVMDispatch_CoreBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_MakeStruct
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_MakeStruct : public FRigVMDispatch_CoreBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_BreakStruct
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_BreakStruct : public FRigVMDispatch_MakeStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_Print
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_Print : public FRigVMDispatchFactory
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_SelectInt32
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_SelectInt32 : public FRigVMDispatch_CoreBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMDispatch_SwitchInt32
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigVMDispatch_SwitchInt32 : public FRigVMDispatch_CoreBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMFunction_ControlFlowBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_ControlFlowBase : public FRigVMStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_ControlFlowBranch
/// Size: 0x03E8 (0x000008 - 0x0003F0)
class FRigVMFunction_ControlFlowBranch : public FRigVMFunction_ControlFlowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
	SMember(FRigVMExecuteContext)                      ExecuteContext                                              ___ OFFSET(get<T>, {0x10, 240, 0, 0})
	DMember(bool)                                      Condition                                                   ___ OFFSET(get<bool>, {0x100, 1, 0, 0})
	SMember(FRigVMExecuteContext)                      TRUE                                                        ___ OFFSET(get<T>, {0x110, 240, 0, 0})
	SMember(FRigVMExecuteContext)                      FALSE                                                       ___ OFFSET(get<T>, {0x200, 240, 0, 0})
	SMember(FRigVMExecuteContext)                      Completed                                                   ___ OFFSET(get<T>, {0x2F0, 240, 0, 0})
	SMember(FName)                                     BlockToRun                                                  ___ OFFSET(get<T>, {0x3E0, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_NameBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_NameBase : public FRigVMStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_NameConcat
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_NameConcat : public FRigVMFunction_NameBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     A                                                           ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     B                                                           ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	SMember(FName)                                     Result                                                      ___ OFFSET(get<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_NameTruncate
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_NameTruncate : public FRigVMFunction_NameBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Count                                                       ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      FromEnd                                                     ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FName)                                     Remainder                                                   ___ OFFSET(get<T>, {0x14, 4, 0, 0})
	SMember(FName)                                     Chopped                                                     ___ OFFSET(get<T>, {0x18, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_NameReplace
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_NameReplace : public FRigVMFunction_NameBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     Old                                                         ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	SMember(FName)                                     New                                                         ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	SMember(FName)                                     Result                                                      ___ OFFSET(get<T>, {0x14, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_EndsWith
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_EndsWith : public FRigVMFunction_NameBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     Ending                                                      ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StartsWith
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_StartsWith : public FRigVMFunction_NameBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     Start                                                       ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_Contains
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_Contains : public FRigVMFunction_NameBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     Search                                                      ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_StringBase : public FRigVMStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_StringConcat
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigVMFunction_StringConcat : public FRigVMFunction_StringBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   A                                                           ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   B                                                           ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   Result                                                      ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringTruncate
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigVMFunction_StringTruncate : public FRigVMFunction_StringBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   Count                                                       ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(bool)                                      FromEnd                                                     ___ OFFSET(get<bool>, {0x1C, 1, 0, 0})
	SMember(FString)                                   Remainder                                                   ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   Chopped                                                     ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringReplace
/// Size: 0x0040 (0x000008 - 0x000048)
class FRigVMFunction_StringReplace : public FRigVMFunction_StringBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Old                                                         ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   New                                                         ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   Result                                                      ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringEndsWith
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigVMFunction_StringEndsWith : public FRigVMFunction_StringBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Ending                                                      ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringStartsWith
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigVMFunction_StringStartsWith : public FRigVMFunction_StringBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Start                                                       ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringContains
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigVMFunction_StringContains : public FRigVMFunction_StringBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Search                                                      ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      Result                                                      ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringLength
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_StringLength : public FRigVMFunction_StringBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   Length                                                      ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringTrimWhitespace
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_StringTrimWhitespace : public FRigVMFunction_StringBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Result                                                      ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringToUppercase
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_StringToUppercase : public FRigVMFunction_StringBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Result                                                      ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringToLowercase
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_StringToLowercase : public FRigVMFunction_StringBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Result                                                      ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringReverse
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_StringReverse : public FRigVMFunction_StringBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Reverse                                                     ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringLeft
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigVMFunction_StringLeft : public FRigVMFunction_StringBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   Count                                                       ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	SMember(FString)                                   Result                                                      ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringRight
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigVMFunction_StringRight : public FRigVMFunction_StringBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   Count                                                       ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	SMember(FString)                                   Result                                                      ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringMiddle
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigVMFunction_StringMiddle : public FRigVMFunction_StringBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   Start                                                       ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   Count                                                       ___ OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	SMember(FString)                                   Result                                                      ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringFind
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigVMFunction_StringFind : public FRigVMFunction_StringBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Search                                                      ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      Found                                                       ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(int32_t)                                   Index                                                       ___ OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringSplit
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigVMFunction_StringSplit : public FRigVMFunction_StringBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Separator                                                   ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FString>)                           Result                                                      ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringJoin
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigVMFunction_StringJoin : public FRigVMFunction_StringBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FString>)                           Values                                                      ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Separator                                                   ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   Result                                                      ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_StringPadInteger
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_StringPadInteger : public FRigVMFunction_StringBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   Value                                                       ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Digits                                                      ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	SMember(FString)                                   Result                                                      ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/RigVM.RigDispatch_ToString
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigDispatch_ToString : public FRigVMDispatchFactory
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigDispatch_FromString
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigDispatch_FromString : public FRigVMDispatchFactory
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigVMFunction_AccumulateBase : public FRigVMFunction_SimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateFloatAdd
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_AccumulateFloatAdd : public FRigVMFunction_AccumulateBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     Increment                                                   ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     InitialValue                                                ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bIntegrateDeltaTime                                         ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     AccumulatedValue                                            ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(bool)                                      bIsInitialized                                              ___ OFFSET(get<bool>, {0x1C, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateVectorAdd
/// Size: 0x0070 (0x000008 - 0x000078)
class FRigVMFunction_AccumulateVectorAdd : public FRigVMFunction_AccumulateBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FVector)                                   Increment                                                   ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   InitialValue                                                ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(bool)                                      bIntegrateDeltaTime                                         ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FVector)                                   AccumulatedValue                                            ___ OFFSET(get<T>, {0x58, 24, 0, 0})
	DMember(bool)                                      bIsInitialized                                              ___ OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateFloatMul
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_AccumulateFloatMul : public FRigVMFunction_AccumulateBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     Multiplier                                                  ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     InitialValue                                                ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bIntegrateDeltaTime                                         ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     AccumulatedValue                                            ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(bool)                                      bIsInitialized                                              ___ OFFSET(get<bool>, {0x1C, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateVectorMul
/// Size: 0x0070 (0x000008 - 0x000078)
class FRigVMFunction_AccumulateVectorMul : public FRigVMFunction_AccumulateBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FVector)                                   Multiplier                                                  ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   InitialValue                                                ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(bool)                                      bIntegrateDeltaTime                                         ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FVector)                                   AccumulatedValue                                            ___ OFFSET(get<T>, {0x58, 24, 0, 0})
	DMember(bool)                                      bIsInitialized                                              ___ OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateQuatMul
/// Size: 0x00A8 (0x000008 - 0x0000B0)
class FRigVMFunction_AccumulateQuatMul : public FRigVMFunction_AccumulateBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FQuat)                                     Multiplier                                                  ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     InitialValue                                                ___ OFFSET(get<T>, {0x30, 32, 0, 0})
	DMember(bool)                                      bFlipOrder                                                  ___ OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(bool)                                      bIntegrateDeltaTime                                         ___ OFFSET(get<bool>, {0x51, 1, 0, 0})
	SMember(FQuat)                                     Result                                                      ___ OFFSET(get<T>, {0x60, 32, 0, 0})
	SMember(FQuat)                                     AccumulatedValue                                            ___ OFFSET(get<T>, {0x80, 32, 0, 0})
	DMember(bool)                                      bIsInitialized                                              ___ OFFSET(get<bool>, {0xA0, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateTransformMul
/// Size: 0x01A8 (0x000008 - 0x0001B0)
class FRigVMFunction_AccumulateTransformMul : public FRigVMFunction_AccumulateBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FTransform)                                Multiplier                                                  ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                InitialValue                                                ___ OFFSET(get<T>, {0x70, 96, 0, 0})
	DMember(bool)                                      bFlipOrder                                                  ___ OFFSET(get<bool>, {0xD0, 1, 0, 0})
	DMember(bool)                                      bIntegrateDeltaTime                                         ___ OFFSET(get<bool>, {0xD1, 1, 0, 0})
	SMember(FTransform)                                Result                                                      ___ OFFSET(get<T>, {0xE0, 96, 0, 0})
	SMember(FTransform)                                AccumulatedValue                                            ___ OFFSET(get<T>, {0x140, 96, 0, 0})
	DMember(bool)                                      bIsInitialized                                              ___ OFFSET(get<bool>, {0x1A0, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateFloatLerp
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigVMFunction_AccumulateFloatLerp : public FRigVMFunction_AccumulateBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     TargetValue                                                 ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     InitialValue                                                ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Blend                                                       ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bIntegrateDeltaTime                                         ___ OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     AccumulatedValue                                            ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bIsInitialized                                              ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateVectorLerp
/// Size: 0x0070 (0x000008 - 0x000078)
class FRigVMFunction_AccumulateVectorLerp : public FRigVMFunction_AccumulateBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FVector)                                   TargetValue                                                 ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   InitialValue                                                ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(float)                                     Blend                                                       ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(bool)                                      bIntegrateDeltaTime                                         ___ OFFSET(get<bool>, {0x3C, 1, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FVector)                                   AccumulatedValue                                            ___ OFFSET(get<T>, {0x58, 24, 0, 0})
	DMember(bool)                                      bIsInitialized                                              ___ OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateQuatLerp
/// Size: 0x00A8 (0x000008 - 0x0000B0)
class FRigVMFunction_AccumulateQuatLerp : public FRigVMFunction_AccumulateBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FQuat)                                     TargetValue                                                 ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     InitialValue                                                ___ OFFSET(get<T>, {0x30, 32, 0, 0})
	DMember(float)                                     Blend                                                       ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(bool)                                      bIntegrateDeltaTime                                         ___ OFFSET(get<bool>, {0x54, 1, 0, 0})
	SMember(FQuat)                                     Result                                                      ___ OFFSET(get<T>, {0x60, 32, 0, 0})
	SMember(FQuat)                                     AccumulatedValue                                            ___ OFFSET(get<T>, {0x80, 32, 0, 0})
	DMember(bool)                                      bIsInitialized                                              ___ OFFSET(get<bool>, {0xA0, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateTransformLerp
/// Size: 0x01A8 (0x000008 - 0x0001B0)
class FRigVMFunction_AccumulateTransformLerp : public FRigVMFunction_AccumulateBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FTransform)                                TargetValue                                                 ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                InitialValue                                                ___ OFFSET(get<T>, {0x70, 96, 0, 0})
	DMember(float)                                     Blend                                                       ___ OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(bool)                                      bIntegrateDeltaTime                                         ___ OFFSET(get<bool>, {0xD4, 1, 0, 0})
	SMember(FTransform)                                Result                                                      ___ OFFSET(get<T>, {0xE0, 96, 0, 0})
	SMember(FTransform)                                AccumulatedValue                                            ___ OFFSET(get<T>, {0x140, 96, 0, 0})
	DMember(bool)                                      bIsInitialized                                              ___ OFFSET(get<bool>, {0x1A0, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateFloatRange
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_AccumulateFloatRange : public FRigVMFunction_AccumulateBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Minimum                                                     ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Maximum                                                     ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     AccumulatedMinimum                                          ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     AccumulatedMaximum                                          ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(bool)                                      bIsInitialized                                              ___ OFFSET(get<bool>, {0x1C, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateVectorRange
/// Size: 0x0080 (0x000008 - 0x000088)
class FRigVMFunction_AccumulateVectorRange : public FRigVMFunction_AccumulateBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Minimum                                                     ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Maximum                                                     ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	SMember(FVector)                                   AccumulatedMinimum                                          ___ OFFSET(get<T>, {0x50, 24, 0, 0})
	SMember(FVector)                                   AccumulatedMaximum                                          ___ OFFSET(get<T>, {0x68, 24, 0, 0})
	DMember(bool)                                      bIsInitialized                                              ___ OFFSET(get<bool>, {0x80, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AlphaInterp
/// Size: 0x0070 (0x000008 - 0x000078)
class FRigVMFunction_AlphaInterp : public FRigVMFunction_SimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Bias                                                        ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bMapRange                                                   ___ OFFSET(get<bool>, {0x14, 1, 0, 0})
	SMember(FInputRange)                               InRange                                                     ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FInputRange)                               OutRange                                                    ___ OFFSET(get<T>, {0x20, 8, 0, 0})
	DMember(bool)                                      bClampResult                                                ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(float)                                     ClampMin                                                    ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     ClampMax                                                    ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(bool)                                      bInterpResult                                               ___ OFFSET(get<bool>, {0x34, 1, 0, 0})
	DMember(float)                                     InterpSpeedIncreasing                                       ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     InterpSpeedDecreasing                                       ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	SMember(FInputScaleBiasClamp)                      ScaleBiasClamp                                              ___ OFFSET(get<T>, {0x44, 48, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AlphaInterpVector
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FRigVMFunction_AlphaInterpVector : public FRigVMFunction_SimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     Bias                                                        ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(bool)                                      bMapRange                                                   ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FInputRange)                               InRange                                                     ___ OFFSET(get<T>, {0x2C, 8, 0, 0})
	SMember(FInputRange)                               OutRange                                                    ___ OFFSET(get<T>, {0x34, 8, 0, 0})
	DMember(bool)                                      bClampResult                                                ___ OFFSET(get<bool>, {0x3C, 1, 0, 0})
	DMember(float)                                     ClampMin                                                    ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     ClampMax                                                    ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(bool)                                      bInterpResult                                               ___ OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(float)                                     InterpSpeedIncreasing                                       ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     InterpSpeedDecreasing                                       ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x58, 24, 0, 0})
	SMember(FInputScaleBiasClamp)                      ScaleBiasClamp                                              ___ OFFSET(get<T>, {0x70, 48, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_AlphaInterpQuat
/// Size: 0x00B8 (0x000008 - 0x0000C0)
class FRigVMFunction_AlphaInterpQuat : public FRigVMFunction_SimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FQuat)                                     Value                                                       ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     Bias                                                        ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(bool)                                      bMapRange                                                   ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FInputRange)                               InRange                                                     ___ OFFSET(get<T>, {0x3C, 8, 0, 0})
	SMember(FInputRange)                               OutRange                                                    ___ OFFSET(get<T>, {0x44, 8, 0, 0})
	DMember(bool)                                      bClampResult                                                ___ OFFSET(get<bool>, {0x4C, 1, 0, 0})
	DMember(float)                                     ClampMin                                                    ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     ClampMax                                                    ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(bool)                                      bInterpResult                                               ___ OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(float)                                     InterpSpeedIncreasing                                       ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     InterpSpeedDecreasing                                       ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	SMember(FQuat)                                     Result                                                      ___ OFFSET(get<T>, {0x70, 32, 0, 0})
	SMember(FInputScaleBiasClamp)                      ScaleBiasClamp                                              ___ OFFSET(get<T>, {0x90, 48, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_DeltaFromPreviousFloat
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigVMFunction_DeltaFromPreviousFloat : public FRigVMFunction_SimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Delta                                                       ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     PreviousValue                                               ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Cache                                                       ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      bIsInitialized                                              ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_DeltaFromPreviousVector
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigVMFunction_DeltaFromPreviousVector : public FRigVMFunction_SimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Delta                                                       ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   PreviousValue                                               ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	SMember(FVector)                                   Cache                                                       ___ OFFSET(get<T>, {0x50, 24, 0, 0})
	DMember(bool)                                      bIsInitialized                                              ___ OFFSET(get<bool>, {0x68, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_DeltaFromPreviousQuat
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FRigVMFunction_DeltaFromPreviousQuat : public FRigVMFunction_SimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FQuat)                                     Value                                                       ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FQuat)                                     Delta                                                       ___ OFFSET(get<T>, {0x30, 32, 0, 0})
	SMember(FQuat)                                     PreviousValue                                               ___ OFFSET(get<T>, {0x50, 32, 0, 0})
	SMember(FQuat)                                     Cache                                                       ___ OFFSET(get<T>, {0x70, 32, 0, 0})
	DMember(bool)                                      bIsInitialized                                              ___ OFFSET(get<bool>, {0x90, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_DeltaFromPreviousTransform
/// Size: 0x0198 (0x000008 - 0x0001A0)
class FRigVMFunction_DeltaFromPreviousTransform : public FRigVMFunction_SimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FTransform)                                Value                                                       ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                Delta                                                       ___ OFFSET(get<T>, {0x70, 96, 0, 0})
	SMember(FTransform)                                PreviousValue                                               ___ OFFSET(get<T>, {0xD0, 96, 0, 0})
	SMember(FTransform)                                Cache                                                       ___ OFFSET(get<T>, {0x130, 96, 0, 0})
	DMember(bool)                                      bIsInitialized                                              ___ OFFSET(get<bool>, {0x190, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_KalmanFloat
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigVMFunction_KalmanFloat : public FRigVMFunction_SimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   BufferSize                                                  ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(TArray<float>)                             Buffer                                                      ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(int32_t)                                   LastInsertIndex                                             ___ OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_KalmanVector
/// Size: 0x0050 (0x000008 - 0x000058)
class FRigVMFunction_KalmanVector : public FRigVMFunction_SimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(int32_t)                                   BufferSize                                                  ___ OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	CMember(TArray<FVector>)                           Buffer                                                      ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(int32_t)                                   LastInsertIndex                                             ___ OFFSET(get<int32_t>, {0x50, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_KalmanTransform
/// Size: 0x00F8 (0x000008 - 0x000100)
class FRigVMFunction_KalmanTransform : public FRigVMFunction_SimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FTransform)                                Value                                                       ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	DMember(int32_t)                                   BufferSize                                                  ___ OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	SMember(FTransform)                                Result                                                      ___ OFFSET(get<T>, {0x80, 96, 0, 0})
	CMember(TArray<FTransform>)                        Buffer                                                      ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
	DMember(int32_t)                                   LastInsertIndex                                             ___ OFFSET(get<int32_t>, {0xF0, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_Timeline
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigVMFunction_Timeline : public FRigVMFunction_SimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Speed                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Time                                                        ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     AccumulatedValue                                            ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bIsInitialized                                              ___ OFFSET(get<bool>, {0x14, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_TimeLoop
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigVMFunction_TimeLoop : public FRigVMFunction_SimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     Speed                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Duration                                                    ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      Normalize                                                   ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     Absolute                                                    ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Relative                                                    ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     FlipFlop                                                    ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(bool)                                      Even                                                        ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(float)                                     AccumulatedAbsolute                                         ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     AccumulatedRelative                                         ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   NumIterations                                               ___ OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(bool)                                      bIsInitialized                                              ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_TimeOffsetFloat
/// Size: 0x0040 (0x000008 - 0x000048)
class FRigVMFunction_TimeOffsetFloat : public FRigVMFunction_SimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     SecondsAgo                                                  ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   BufferSize                                                  ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(float)                                     TimeRange                                                   ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Result                                                      ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	CMember(TArray<float>)                             Buffer                                                      ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<float>)                             DeltaTimes                                                  ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(int32_t)                                   LastInsertIndex                                             ___ OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   UpperBound                                                  ___ OFFSET(get<int32_t>, {0x44, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_TimeOffsetVector
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigVMFunction_TimeOffsetVector : public FRigVMFunction_SimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(float)                                     SecondsAgo                                                  ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   BufferSize                                                  ___ OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(float)                                     TimeRange                                                   ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	SMember(FVector)                                   Result                                                      ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	CMember(TArray<FVector>)                           Buffer                                                      ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<float>)                             DeltaTimes                                                  ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	DMember(int32_t)                                   LastInsertIndex                                             ___ OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	DMember(int32_t)                                   UpperBound                                                  ___ OFFSET(get<int32_t>, {0x6C, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_TimeOffsetTransform
/// Size: 0x0108 (0x000008 - 0x000110)
class FRigVMFunction_TimeOffsetTransform : public FRigVMFunction_SimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FTransform)                                Value                                                       ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	DMember(float)                                     SecondsAgo                                                  ___ OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(int32_t)                                   BufferSize                                                  ___ OFFSET(get<int32_t>, {0x74, 4, 0, 0})
	DMember(float)                                     TimeRange                                                   ___ OFFSET(get<float>, {0x78, 4, 0, 0})
	SMember(FTransform)                                Result                                                      ___ OFFSET(get<T>, {0x80, 96, 0, 0})
	CMember(TArray<FTransform>)                        Buffer                                                      ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(TArray<float>)                             DeltaTimes                                                  ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
	DMember(int32_t)                                   LastInsertIndex                                             ___ OFFSET(get<int32_t>, {0x100, 4, 0, 0})
	DMember(int32_t)                                   UpperBound                                                  ___ OFFSET(get<int32_t>, {0x104, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMFunction_VerletIntegrateVector
/// Size: 0x00D0 (0x000008 - 0x0000D8)
class FRigVMFunction_VerletIntegrateVector : public FRigVMFunction_SimBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FVector)                                   Target                                                      ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(float)                                     Strength                                                    ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     Damp                                                        ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     Blend                                                       ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	SMember(FVector)                                   Force                                                       ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   Position                                                    ___ OFFSET(get<T>, {0x48, 24, 0, 0})
	SMember(FVector)                                   Velocity                                                    ___ OFFSET(get<T>, {0x60, 24, 0, 0})
	SMember(FVector)                                   Acceleration                                                ___ OFFSET(get<T>, {0x78, 24, 0, 0})
	SMember(FRigVMSimPoint)                            Point                                                       ___ OFFSET(get<T>, {0x90, 64, 0, 0})
	DMember(bool)                                      bInitialized                                                ___ OFFSET(get<bool>, {0xD0, 1, 0, 0})
};

/// Enum /Script/RigVM.ERigVMPinDirection
/// Size: 0x07
enum ERigVMPinDirection : uint8_t
{
	ERigVMPinDirection__Input0                                                       = 0,
	ERigVMPinDirection__Output1                                                      = 1,
	ERigVMPinDirection__IO2                                                          = 2,
	ERigVMPinDirection__Visible3                                                     = 3,
	ERigVMPinDirection__Hidden4                                                      = 4,
	ERigVMPinDirection__Invalid5                                                     = 5,
	ERigVMPinDirection__ERigVMPinDirection_MAX6                                      = 6
};

/// Enum /Script/RigVM.ERigVMFunctionArgumentDirection
/// Size: 0x04
enum ERigVMFunctionArgumentDirection : uint8_t
{
	ERigVMFunctionArgumentDirection__Input0                                          = 0,
	ERigVMFunctionArgumentDirection__Output1                                         = 1,
	ERigVMFunctionArgumentDirection__Invalid2                                        = 2,
	ERigVMFunctionArgumentDirection__ERigVMFunctionArgumentDirection_MAX3            = 3
};

/// Enum /Script/RigVM.ERigVMTransformSpace
/// Size: 0x03
enum ERigVMTransformSpace : uint8_t
{
	ERigVMTransformSpace__LocalSpace0                                                = 0,
	ERigVMTransformSpace__GlobalSpace1                                               = 1,
	ERigVMTransformSpace__Max2                                                       = 2
};

/// Enum /Script/RigVM.ERigVMClampSpatialMode
/// Size: 0x04
enum ERigVMClampSpatialMode : uint8_t
{
	ERigVMClampSpatialMode__Plane0                                                   = 0,
	ERigVMClampSpatialMode__Cylinder1                                                = 1,
	ERigVMClampSpatialMode__Sphere2                                                  = 2,
	ERigVMClampSpatialMode__ERigVMClampSpatialMode_MAX3                              = 3
};

/// Enum /Script/RigVM.ERigVMParameterType
/// Size: 0x04
enum ERigVMParameterType : uint8_t
{
	ERigVMParameterType__Input0                                                      = 0,
	ERigVMParameterType__Output1                                                     = 1,
	ERigVMParameterType__Invalid2                                                    = 2,
	ERigVMParameterType__ERigVMParameterType_MAX3                                    = 3
};

/// Enum /Script/RigVM.ERigVMOpCode
/// Size: 0x106
enum ERigVMOpCode : uint8_t
{
	ERigVMOpCode__Execute_0_Operands0                                                = 0,
	ERigVMOpCode__Execute_1_Operands1                                                = 1,
	ERigVMOpCode__Execute_2_Operands2                                                = 2,
	ERigVMOpCode__Execute_3_Operands3                                                = 3,
	ERigVMOpCode__Execute_4_Operands4                                                = 4,
	ERigVMOpCode__Execute_5_Operands5                                                = 5,
	ERigVMOpCode__Execute_6_Operands6                                                = 6,
	ERigVMOpCode__Execute_7_Operands7                                                = 7,
	ERigVMOpCode__Execute_8_Operands8                                                = 8,
	ERigVMOpCode__Execute_9_Operands9                                                = 9,
	ERigVMOpCode__Execute_10_Operands10                                              = 10,
	ERigVMOpCode__Execute_11_Operands11                                              = 11,
	ERigVMOpCode__Execute_12_Operands12                                              = 12,
	ERigVMOpCode__Execute_13_Operands13                                              = 13,
	ERigVMOpCode__Execute_14_Operands14                                              = 14,
	ERigVMOpCode__Execute_15_Operands15                                              = 15,
	ERigVMOpCode__Execute_16_Operands16                                              = 16,
	ERigVMOpCode__Execute_17_Operands17                                              = 17,
	ERigVMOpCode__Execute_18_Operands18                                              = 18,
	ERigVMOpCode__Execute_19_Operands19                                              = 19,
	ERigVMOpCode__Execute_20_Operands20                                              = 20,
	ERigVMOpCode__Execute_21_Operands21                                              = 21,
	ERigVMOpCode__Execute_22_Operands22                                              = 22,
	ERigVMOpCode__Execute_23_Operands23                                              = 23,
	ERigVMOpCode__Execute_24_Operands24                                              = 24,
	ERigVMOpCode__Execute_25_Operands25                                              = 25,
	ERigVMOpCode__Execute_26_Operands26                                              = 26,
	ERigVMOpCode__Execute_27_Operands27                                              = 27,
	ERigVMOpCode__Execute_28_Operands28                                              = 28,
	ERigVMOpCode__Execute_29_Operands29                                              = 29,
	ERigVMOpCode__Execute_30_Operands30                                              = 30,
	ERigVMOpCode__Execute_31_Operands31                                              = 31,
	ERigVMOpCode__Execute_32_Operands32                                              = 32,
	ERigVMOpCode__Execute_33_Operands33                                              = 33,
	ERigVMOpCode__Execute_34_Operands34                                              = 34,
	ERigVMOpCode__Execute_35_Operands35                                              = 35,
	ERigVMOpCode__Execute_36_Operands36                                              = 36,
	ERigVMOpCode__Execute_37_Operands37                                              = 37,
	ERigVMOpCode__Execute_38_Operands38                                              = 38,
	ERigVMOpCode__Execute_39_Operands39                                              = 39,
	ERigVMOpCode__Execute_40_Operands40                                              = 40,
	ERigVMOpCode__Execute_41_Operands41                                              = 41,
	ERigVMOpCode__Execute_42_Operands42                                              = 42,
	ERigVMOpCode__Execute_43_Operands43                                              = 43,
	ERigVMOpCode__Execute_44_Operands44                                              = 44,
	ERigVMOpCode__Execute_45_Operands45                                              = 45,
	ERigVMOpCode__Execute_46_Operands46                                              = 46,
	ERigVMOpCode__Execute_47_Operands47                                              = 47,
	ERigVMOpCode__Execute_48_Operands48                                              = 48,
	ERigVMOpCode__Execute_49_Operands49                                              = 49,
	ERigVMOpCode__Execute_50_Operands50                                              = 50,
	ERigVMOpCode__Execute_51_Operands51                                              = 51,
	ERigVMOpCode__Execute_52_Operands52                                              = 52,
	ERigVMOpCode__Execute_53_Operands53                                              = 53,
	ERigVMOpCode__Execute_54_Operands54                                              = 54,
	ERigVMOpCode__Execute_55_Operands55                                              = 55,
	ERigVMOpCode__Execute_56_Operands56                                              = 56,
	ERigVMOpCode__Execute_57_Operands57                                              = 57,
	ERigVMOpCode__Execute_58_Operands58                                              = 58,
	ERigVMOpCode__Execute_59_Operands59                                              = 59,
	ERigVMOpCode__Execute_60_Operands60                                              = 60,
	ERigVMOpCode__Execute_61_Operands61                                              = 61,
	ERigVMOpCode__Execute_62_Operands62                                              = 62,
	ERigVMOpCode__Execute_63_Operands63                                              = 63,
	ERigVMOpCode__Execute_64_Operands64                                              = 64,
	ERigVMOpCode__Zero65                                                             = 65,
	ERigVMOpCode__BoolFalse66                                                        = 66,
	ERigVMOpCode__BoolTrue67                                                         = 67,
	ERigVMOpCode__Copy68                                                             = 68,
	ERigVMOpCode__Increment69                                                        = 69,
	ERigVMOpCode__Decrement70                                                        = 70,
	ERigVMOpCode__Equals71                                                           = 71,
	ERigVMOpCode__NotEquals72                                                        = 72,
	ERigVMOpCode__JumpAbsolute73                                                     = 73,
	ERigVMOpCode__JumpForward74                                                      = 74,
	ERigVMOpCode__JumpBackward75                                                     = 75,
	ERigVMOpCode__JumpAbsoluteIf76                                                   = 76,
	ERigVMOpCode__JumpForwardIf77                                                    = 77,
	ERigVMOpCode__JumpBackwardIf78                                                   = 78,
	ERigVMOpCode__ChangeType79                                                       = 79,
	ERigVMOpCode__Exit80                                                             = 80,
	ERigVMOpCode__BeginBlock81                                                       = 81,
	ERigVMOpCode__EndBlock82                                                         = 82,
	ERigVMOpCode__ArrayReset83                                                       = 83,
	ERigVMOpCode__ArrayGetNum84                                                      = 84,
	ERigVMOpCode__ArraySetNum85                                                      = 85,
	ERigVMOpCode__ArrayGetAtIndex86                                                  = 86,
	ERigVMOpCode__ArraySetAtIndex87                                                  = 87,
	ERigVMOpCode__ArrayAdd88                                                         = 88,
	ERigVMOpCode__ArrayInsert89                                                      = 89,
	ERigVMOpCode__ArrayRemove90                                                      = 90,
	ERigVMOpCode__ArrayFind91                                                        = 91,
	ERigVMOpCode__ArrayAppend92                                                      = 92,
	ERigVMOpCode__ArrayClone93                                                       = 93,
	ERigVMOpCode__ArrayIterator94                                                    = 94,
	ERigVMOpCode__ArrayUnion95                                                       = 95,
	ERigVMOpCode__ArrayDifference96                                                  = 96,
	ERigVMOpCode__ArrayIntersection97                                                = 97,
	ERigVMOpCode__ArrayReverse98                                                     = 98,
	ERigVMOpCode__InvokeEntry99                                                      = 99,
	ERigVMOpCode__JumpToBranch100                                                    = 100,
	ERigVMOpCode__Execute101                                                         = 101,
	ERigVMOpCode__Invalid102                                                         = 102,
	ERigVMOpCode__FirstArrayOpCode103                                                = 83,
	ERigVMOpCode__LastArrayOpCode104                                                 = 98,
	ERigVMOpCode__ERigVMOpCode_MAX105                                                = 103
};

/// Enum /Script/RigVM.ERigVMCopyType
/// Size: 0x04
enum ERigVMCopyType : uint8_t
{
	ERigVMCopyType__Default0                                                         = 0,
	ERigVMCopyType__FloatToDouble1                                                   = 1,
	ERigVMCopyType__DoubleToFloat2                                                   = 2,
	ERigVMCopyType__ERigVMCopyType_MAX3                                              = 3
};

/// Enum /Script/RigVM.ERigVMBreakpointAction
/// Size: 0x06
enum ERigVMBreakpointAction : uint8_t
{
	ERigVMBreakpointAction__None0                                                    = 0,
	ERigVMBreakpointAction__Resume1                                                  = 1,
	ERigVMBreakpointAction__StepOver2                                                = 2,
	ERigVMBreakpointAction__StepInto3                                                = 3,
	ERigVMBreakpointAction__StepOut4                                                 = 4,
	ERigVMBreakpointAction__Max5                                                     = 5
};

/// Enum /Script/RigVM.ERigVMDrawSettings
/// Size: 0x05
enum ERigVMDrawSettings : uint8_t
{
	ERigVMDrawSettings__Points0                                                      = 0,
	ERigVMDrawSettings__Lines1                                                       = 1,
	ERigVMDrawSettings__LineStrip2                                                   = 2,
	ERigVMDrawSettings__DynamicMesh3                                                 = 3,
	ERigVMDrawSettings__ERigVMDrawSettings_MAX4                                      = 4
};

/// Enum /Script/RigVM.ERigVMMemoryType
/// Size: 0x06
enum ERigVMMemoryType : uint8_t
{
	ERigVMMemoryType__Work0                                                          = 0,
	ERigVMMemoryType__Literal1                                                       = 1,
	ERigVMMemoryType__External2                                                      = 2,
	ERigVMMemoryType__Debug3                                                         = 3,
	ERigVMMemoryType__Invalid4                                                       = 4,
	ERigVMMemoryType__ERigVMMemoryType_MAX5                                          = 5
};

/// Enum /Script/RigVM.ERigVMRegisterType
/// Size: 0x06
enum ERigVMRegisterType : uint8_t
{
	ERigVMRegisterType__Plain0                                                       = 0,
	ERigVMRegisterType__String1                                                      = 1,
	ERigVMRegisterType__Name2                                                        = 2,
	ERigVMRegisterType__Struct3                                                      = 3,
	ERigVMRegisterType__Invalid4                                                     = 4,
	ERigVMRegisterType__ERigVMRegisterType_MAX5                                      = 5
};

/// Enum /Script/RigVM.ERigVMUserWorkflowType
/// Size: 0x06
enum ERigVMUserWorkflowType : uint8_t
{
	ERigVMUserWorkflowType__Invalid0                                                 = 0,
	ERigVMUserWorkflowType__NodeContext1                                             = 1,
	ERigVMUserWorkflowType__PinContext2                                              = 2,
	ERigVMUserWorkflowType__OnPinDefaultChanged3                                     = 4,
	ERigVMUserWorkflowType__All4                                                     = 7,
	ERigVMUserWorkflowType__ERigVMUserWorkflowType_MAX5                              = 8
};

/// Enum /Script/RigVM.ERigUnitDebugPointMode
/// Size: 0x03
enum ERigUnitDebugPointMode : uint8_t
{
	ERigUnitDebugPointMode__Point0                                                   = 0,
	ERigUnitDebugPointMode__Vector1                                                  = 1,
	ERigUnitDebugPointMode__Max2                                                     = 2
};

/// Enum /Script/RigVM.ERigUnitDebugTransformMode
/// Size: 0x04
enum ERigUnitDebugTransformMode : uint8_t
{
	ERigUnitDebugTransformMode__Point0                                               = 0,
	ERigUnitDebugTransformMode__Axes1                                                = 1,
	ERigUnitDebugTransformMode__Box2                                                 = 2,
	ERigUnitDebugTransformMode__Max3                                                 = 3
};

/// Enum /Script/RigVM.ERigUnitVisualDebugPointMode
/// Size: 0x03
enum ERigUnitVisualDebugPointMode : uint8_t
{
	ERigUnitVisualDebugPointMode__Point0                                             = 0,
	ERigUnitVisualDebugPointMode__Vector1                                            = 1,
	ERigUnitVisualDebugPointMode__Max2                                               = 2
};

/// Enum /Script/RigVM.ERBFKernelType
/// Size: 0x06
enum ERBFKernelType : uint8_t
{
	ERBFKernelType__Gaussian0                                                        = 0,
	ERBFKernelType__Exponential1                                                     = 1,
	ERBFKernelType__Linear2                                                          = 2,
	ERBFKernelType__Cubic3                                                           = 3,
	ERBFKernelType__Quintic4                                                         = 4,
	ERBFKernelType__ERBFKernelType_MAX5                                              = 5
};

/// Enum /Script/RigVM.ERBFQuatDistanceType
/// Size: 0x05
enum ERBFQuatDistanceType : uint8_t
{
	ERBFQuatDistanceType__Euclidean0                                                 = 0,
	ERBFQuatDistanceType__ArcLength1                                                 = 1,
	ERBFQuatDistanceType__SwingAngle2                                                = 2,
	ERBFQuatDistanceType__TwistAngle3                                                = 3,
	ERBFQuatDistanceType__ERBFQuatDistanceType_MAX4                                  = 4
};

/// Enum /Script/RigVM.ERBFVectorDistanceType
/// Size: 0x04
enum ERBFVectorDistanceType : uint8_t
{
	ERBFVectorDistanceType__Euclidean0                                               = 0,
	ERBFVectorDistanceType__Manhattan1                                               = 1,
	ERBFVectorDistanceType__ArcLength2                                               = 2,
	ERBFVectorDistanceType__ERBFVectorDistanceType_MAX3                              = 3
};

/// Enum /Script/RigVM.ERigVMAnimEasingType
/// Size: 0x32
enum ERigVMAnimEasingType : uint8_t
{
	ERigVMAnimEasingType__Linear0                                                    = 0,
	ERigVMAnimEasingType__QuadraticEaseIn1                                           = 1,
	ERigVMAnimEasingType__QuadraticEaseOut2                                          = 2,
	ERigVMAnimEasingType__QuadraticEaseInOut3                                        = 3,
	ERigVMAnimEasingType__CubicEaseIn4                                               = 4,
	ERigVMAnimEasingType__CubicEaseOut5                                              = 5,
	ERigVMAnimEasingType__CubicEaseInOut6                                            = 6,
	ERigVMAnimEasingType__QuarticEaseIn7                                             = 7,
	ERigVMAnimEasingType__QuarticEaseOut8                                            = 8,
	ERigVMAnimEasingType__QuarticEaseInOut9                                          = 9,
	ERigVMAnimEasingType__QuinticEaseIn10                                            = 10,
	ERigVMAnimEasingType__QuinticEaseOut11                                           = 11,
	ERigVMAnimEasingType__QuinticEaseInOut12                                         = 12,
	ERigVMAnimEasingType__SineEaseIn13                                               = 13,
	ERigVMAnimEasingType__SineEaseOut14                                              = 14,
	ERigVMAnimEasingType__SineEaseInOut15                                            = 15,
	ERigVMAnimEasingType__CircularEaseIn16                                           = 16,
	ERigVMAnimEasingType__CircularEaseOut17                                          = 17,
	ERigVMAnimEasingType__CircularEaseInOut18                                        = 18,
	ERigVMAnimEasingType__ExponentialEaseIn19                                        = 19,
	ERigVMAnimEasingType__ExponentialEaseOut20                                       = 20,
	ERigVMAnimEasingType__ExponentialEaseInOut21                                     = 21,
	ERigVMAnimEasingType__ElasticEaseIn22                                            = 22,
	ERigVMAnimEasingType__ElasticEaseOut23                                           = 23,
	ERigVMAnimEasingType__ElasticEaseInOut24                                         = 24,
	ERigVMAnimEasingType__BackEaseIn25                                               = 25,
	ERigVMAnimEasingType__BackEaseOut26                                              = 26,
	ERigVMAnimEasingType__BackEaseInOut27                                            = 27,
	ERigVMAnimEasingType__BounceEaseIn28                                             = 28,
	ERigVMAnimEasingType__BounceEaseOut29                                            = 29,
	ERigVMAnimEasingType__BounceEaseInOut30                                          = 30,
	ERigVMAnimEasingType__ERigVMAnimEasingType_MAX31                                 = 31
};

/// Enum /Script/RigVM.ERigVMSimPointIntegrateType
/// Size: 0x03
enum ERigVMSimPointIntegrateType : uint8_t
{
	ERigVMSimPointIntegrateType__Verlet0                                             = 0,
	ERigVMSimPointIntegrateType__SemiExplicitEuler1                                  = 1,
	ERigVMSimPointIntegrateType__ERigVMSimPointIntegrateType_MAX2                    = 2
};

