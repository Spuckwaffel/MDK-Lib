
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/MetasoundFrontend.MetaSoundDocumentInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMetaSoundDocumentInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MetasoundFrontend.MetasoundParameterPack
/// Size: 0x0018 (0x000028 - 0x000040)
class UMetasoundParameterPack : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MetasoundFrontend.MetaSoundBuilderDocument
/// Size: 0x01D0 (0x000028 - 0x0001F8)
class UMetaSoundBuilderDocument : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
	SMember(FMetasoundFrontendDocument)                Document                                                    ___ OFFSET(get<T>, {0x30, 448, 0, 0})
	CMember(UClass*)                                   MetaSoundUClass                                             ___ OFFSET(get<T>, {0x1F0, 8, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVersionNumber
/// Size: 0x0008 (0x000000 - 0x000008)
class FMetasoundFrontendVersionNumber : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   Major                                                       ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Minor                                                       ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVersion
/// Size: 0x000C (0x000000 - 0x00000C)
class FMetasoundFrontendVersion : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FMetasoundFrontendVersionNumber)           Number                                                      ___ OFFSET(get<T>, {0x4, 8, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVertex
/// Size: 0x0018 (0x000000 - 0x000018)
class FMetasoundFrontendVertex : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     TypeName                                                    ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FGuid)                                     VertexID                                                    ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVertexHandle
/// Size: 0x0020 (0x000000 - 0x000020)
class FMetasoundFrontendVertexHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGuid)                                     NodeId                                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FGuid)                                     VertexID                                                    ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVertexLiteral
/// Size: 0x0068 (0x000000 - 0x000068)
class FMetasoundFrontendVertexLiteral : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FGuid)                                     VertexID                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FMetasoundFrontendLiteral)                 Value                                                       ___ OFFSET(get<T>, {0x10, 88, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendLiteral
/// Size: 0x0058 (0x000000 - 0x000058)
class FMetasoundFrontendLiteral : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(EMetasoundFrontendLiteralType)             Type                                                        ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   AsNumDefault                                                ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(TArray<bool>)                              AsBoolean                                                   ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<int32_t>)                           AsInteger                                                   ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<float>)                             AsFloat                                                     ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FString>)                           AsString                                                    ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<UObject*>)                          AsUObject                                                   ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVariable
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FMetasoundFrontendVariable : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     TypeName                                                    ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FMetasoundFrontendLiteral)                 Literal                                                     ___ OFFSET(get<T>, {0x8, 88, 0, 0})
	SMember(FGuid)                                     ID                                                          ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FGuid)                                     VariableNodeID                                              ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FGuid)                                     MutatorNodeID                                               ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FGuid>)                             AccessorNodeIDs                                             ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<FGuid>)                             DeferredAccessorNodeIDs                                     ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendNodeInterface
/// Size: 0x0030 (0x000000 - 0x000030)
class FMetasoundFrontendNodeInterface : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FMetasoundFrontendVertex>)          Inputs                                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FMetasoundFrontendVertex>)          Outputs                                                     ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FMetasoundFrontendVertex>)          Environment                                                 ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendNodeStyleDisplay
/// Size: 0x0001 (0x000000 - 0x000001)
class FMetasoundFrontendNodeStyleDisplay : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendNodeStyle
/// Size: 0x0001 (0x000000 - 0x000001)
class FMetasoundFrontendNodeStyle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendNode
/// Size: 0x0068 (0x000000 - 0x000068)
class FMetasoundFrontendNode : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FGuid)                                     ID                                                          ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FGuid)                                     ClassID                                                     ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x20, 4, 0, 0})
	SMember(FMetasoundFrontendNodeInterface)           Interface                                                   ___ OFFSET(get<T>, {0x28, 48, 0, 0})
	CMember(TArray<FMetasoundFrontendVertexLiteral>)   InputLiterals                                               ___ OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendEdge
/// Size: 0x0040 (0x000000 - 0x000040)
class FMetasoundFrontendEdge : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGuid)                                     FromNodeID                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FGuid)                                     FromVertexID                                                ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FGuid)                                     ToNodeID                                                    ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FGuid)                                     ToVertexID                                                  ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendEdgeStyleLiteralColorPair
/// Size: 0x0068 (0x000000 - 0x000068)
class FMetasoundFrontendEdgeStyleLiteralColorPair : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FMetasoundFrontendLiteral)                 Value                                                       ___ OFFSET(get<T>, {0x0, 88, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendEdgeStyle
/// Size: 0x0028 (0x000000 - 0x000028)
class FMetasoundFrontendEdgeStyle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGuid)                                     NodeId                                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     OutputName                                                  ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	CMember(TArray<FMetasoundFrontendEdgeStyleLiteralColorPair>) LiteralColorPairs                                 ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendGraphStyle
/// Size: 0x0018 (0x000000 - 0x000018)
class FMetasoundFrontendGraphStyle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bIsGraphEditable                                            ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(TArray<FMetasoundFrontendEdgeStyle>)       EdgeStyles                                                  ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendGraph
/// Size: 0x0030 (0x000000 - 0x000030)
class FMetasoundFrontendGraph : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FMetasoundFrontendNode>)            Nodes                                                       ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FMetasoundFrontendEdge>)            Edges                                                       ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FMetasoundFrontendVariable>)        Variables                                                   ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVertexMetadata
/// Size: 0x0001 (0x000000 - 0x000001)
class FMetasoundFrontendVertexMetadata : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassVertex
/// Size: 0x0014 (0x000018 - 0x00002C)
class FMetasoundFrontendClassVertex : public FMetasoundFrontendVertex
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 44;

public:
	SMember(FGuid)                                     NodeId                                                      ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(EMetasoundFrontendVertexAccessType)        AccessType                                                  ___ OFFSET(get<T>, {0x28, 4, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassStyleDisplay
/// Size: 0x0001 (0x000000 - 0x000001)
class FMetasoundFrontendClassStyleDisplay : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassInput
/// Size: 0x005C (0x00002C - 0x000088)
class FMetasoundFrontendClassInput : public FMetasoundFrontendClassVertex
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FMetasoundFrontendLiteral)                 DefaultLiteral                                              ___ OFFSET(get<T>, {0x30, 88, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassVariable
/// Size: 0x005C (0x00002C - 0x000088)
class FMetasoundFrontendClassVariable : public FMetasoundFrontendClassVertex
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FMetasoundFrontendLiteral)                 DefaultLiteral                                              ___ OFFSET(get<T>, {0x30, 88, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassOutput
/// Size: 0x0000 (0x00002C - 0x00002C)
class FMetasoundFrontendClassOutput : public FMetasoundFrontendClassVertex
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 44;

public:
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassEnvironmentVariable
/// Size: 0x000C (0x000000 - 0x00000C)
class FMetasoundFrontendClassEnvironmentVariable : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     TypeName                                                    ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	DMember(bool)                                      bIsRequired                                                 ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendInterfaceStyle
/// Size: 0x0001 (0x000000 - 0x000001)
class FMetasoundFrontendInterfaceStyle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassInterface
/// Size: 0x0040 (0x000000 - 0x000040)
class FMetasoundFrontendClassInterface : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FMetasoundFrontendClassInput>)      Inputs                                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FMetasoundFrontendClassOutput>)     Outputs                                                     ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FMetasoundFrontendClassEnvironmentVariable>) Environment                                        ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FGuid)                                     ChangeID                                                    ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendInterfaceVertexBinding
/// Size: 0x0008 (0x000000 - 0x000008)
class FMetasoundFrontendInterfaceVertexBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     OutputName                                                  ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     InputName                                                   ___ OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendInterfaceBinding
/// Size: 0x0030 (0x000000 - 0x000030)
class FMetasoundFrontendInterfaceBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FMetasoundFrontendVersion)                 OutputInterfaceVersion                                      ___ OFFSET(get<T>, {0x0, 12, 0, 0})
	SMember(FMetasoundFrontendVersion)                 InputInterfaceVersion                                       ___ OFFSET(get<T>, {0xC, 12, 0, 0})
	DMember(int32_t)                                   BindingPriority                                             ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	CMember(TArray<FMetasoundFrontendInterfaceVertexBinding>) VertexBindings                                       ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendInterfaceUClassOptions
/// Size: 0x000C (0x000000 - 0x00000C)
class FMetasoundFrontendInterfaceUClassOptions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FTopLevelAssetPath)                        ClassPath                                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bIsModifiable                                               ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bIsDefault                                                  ___ OFFSET(get<bool>, {0x9, 1, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendInterface
/// Size: 0x0020 (0x000040 - 0x000060)
class FMetasoundFrontendInterface : public FMetasoundFrontendClassInterface
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMetasoundFrontendVersion)                 Version                                                     ___ OFFSET(get<T>, {0x40, 12, 0, 0})
	CMember(TArray<FMetasoundFrontendInterfaceUClassOptions>) UClassOptions                                        ___ OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassName
/// Size: 0x000C (0x000000 - 0x00000C)
class FMetasoundFrontendClassName : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Namespace                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     Variant                                                     ___ OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassMetadata
/// Size: 0x0028 (0x000000 - 0x000028)
class FMetasoundFrontendClassMetadata : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FMetasoundFrontendClassName)               ClassName                                                   ___ OFFSET(get<T>, {0x0, 12, 0, 0})
	SMember(FMetasoundFrontendVersionNumber)           Version                                                     ___ OFFSET(get<T>, {0xC, 8, 0, 0})
	CMember(EMetasoundFrontendClassType)               Type                                                        ___ OFFSET(get<T>, {0x14, 1, 0, 0})
	DMember(bool)                                      bIsDeprecated                                               ___ OFFSET(get<bool>, {0x15, 1, 0, 0})
	DMember(bool)                                      bAutoUpdateManagesInterface                                 ___ OFFSET(get<bool>, {0x16, 1, 0, 0})
	SMember(FGuid)                                     ChangeID                                                    ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassStyle
/// Size: 0x0001 (0x000000 - 0x000001)
class FMetasoundFrontendClassStyle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClass
/// Size: 0x0080 (0x000000 - 0x000080)
class FMetasoundFrontendClass : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FGuid)                                     ID                                                          ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FMetasoundFrontendClassMetadata)           MetaData                                                    ___ OFFSET(get<T>, {0x18, 40, 0, 0})
	SMember(FMetasoundFrontendClassInterface)          Interface                                                   ___ OFFSET(get<T>, {0x40, 64, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendGraphClassPresetOptions
/// Size: 0x0058 (0x000000 - 0x000058)
class FMetasoundFrontendGraphClassPresetOptions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(bool)                                      bIsPreset                                                   ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(TSet<FName>)                               InputsInheritingDefault                                     ___ OFFSET(get<T>, {0x8, 80, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendGraphClass
/// Size: 0x0088 (0x000080 - 0x000108)
class FMetasoundFrontendGraphClass : public FMetasoundFrontendClass
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FMetasoundFrontendGraph)                   Graph                                                       ___ OFFSET(get<T>, {0x80, 48, 0, 0})
	SMember(FMetasoundFrontendGraphClassPresetOptions) PresetOptions                                               ___ OFFSET(get<T>, {0xB0, 88, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendDocumentMetadata
/// Size: 0x000C (0x000000 - 0x00000C)
class FMetasoundFrontendDocumentMetadata : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FMetasoundFrontendVersion)                 Version                                                     ___ OFFSET(get<T>, {0x0, 12, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendDocument
/// Size: 0x01C0 (0x000000 - 0x0001C0)
class FMetasoundFrontendDocument : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FMetasoundFrontendDocumentMetadata)        MetaData                                                    ___ OFFSET(get<T>, {0x10, 12, 0, 0})
	CMember(TSet<FMetasoundFrontendVersion>)           Interfaces                                                  ___ OFFSET(get<T>, {0x20, 80, 0, 0})
	SMember(FMetasoundFrontendGraphClass)              RootGraph                                                   ___ OFFSET(get<T>, {0x70, 264, 0, 0})
	CMember(TArray<FMetasoundFrontendGraphClass>)      Subgraphs                                                   ___ OFFSET(get<T>, {0x178, 16, 0, 0})
	CMember(TArray<FMetasoundFrontendClass>)           Dependencies                                                ___ OFFSET(get<T>, {0x188, 16, 0, 0})
	SMember(FMetasoundFrontendVersion)                 ArchetypeVersion                                            ___ OFFSET(get<T>, {0x198, 12, 0, 0})
	CMember(TArray<FMetasoundFrontendVersion>)         InterfaceVersions                                           ___ OFFSET(get<T>, {0x1A8, 16, 0, 0})
};

/// Struct /Script/MetasoundFrontend.MetaSoundFrontendDocumentBuilder
/// Size: 0x0030 (0x000000 - 0x000030)
class FMetaSoundFrontendDocumentBuilder : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TScriptInterface<Class>)                   DocumentInterface                                           ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/MetasoundFrontend.ESetParamResult
/// Size: 0x03
enum ESetParamResult : uint8_t
{
	ESetParamResult__Succeeded0                                                      = 0,
	ESetParamResult__Failed1                                                         = 1,
	ESetParamResult__ESetParamResult_MAX2                                            = 2
};

/// Enum /Script/MetasoundFrontend.EMetasoundFrontendVertexAccessType
/// Size: 0x04
enum EMetasoundFrontendVertexAccessType : uint8_t
{
	EMetasoundFrontendVertexAccessType__Reference0                                   = 0,
	EMetasoundFrontendVertexAccessType__Value1                                       = 1,
	EMetasoundFrontendVertexAccessType__Unset2                                       = 2,
	EMetasoundFrontendVertexAccessType__EMetasoundFrontendVertexAccessType_MAX3      = 3
};

/// Enum /Script/MetasoundFrontend.EMetasoundFrontendClassType
/// Size: 0x12
enum EMetasoundFrontendClassType : uint8_t
{
	EMetasoundFrontendClassType__External0                                           = 0,
	EMetasoundFrontendClassType__Graph1                                              = 1,
	EMetasoundFrontendClassType__Input2                                              = 2,
	EMetasoundFrontendClassType__Output3                                             = 3,
	EMetasoundFrontendClassType__Literal4                                            = 4,
	EMetasoundFrontendClassType__Variable5                                           = 5,
	EMetasoundFrontendClassType__VariableDeferredAccessor6                           = 6,
	EMetasoundFrontendClassType__VariableAccessor7                                   = 7,
	EMetasoundFrontendClassType__VariableMutator8                                    = 8,
	EMetasoundFrontendClassType__Template9                                           = 9,
	EMetasoundFrontendClassType__Invalid10                                           = 10,
	EMetasoundFrontendClassType__EMetasoundFrontendClassType_MAX11                   = 11
};

/// Enum /Script/MetasoundFrontend.EMetasoundFrontendNodeStyleDisplayVisibility
/// Size: 0x03
enum EMetasoundFrontendNodeStyleDisplayVisibility : uint8_t
{
	EMetasoundFrontendNodeStyleDisplayVisibility__Visible0                           = 0,
	EMetasoundFrontendNodeStyleDisplayVisibility__Hidden1                            = 1,
	EMetasoundFrontendNodeStyleDisplayVisibility__EMetasoundFrontendNodeStyleDisplayVisibility_MAX2 = 2
};

/// Enum /Script/MetasoundFrontend.EMetasoundFrontendLiteralType
/// Size: 0x14
enum EMetasoundFrontendLiteralType : uint8_t
{
	EMetasoundFrontendLiteralType__None0                                             = 0,
	EMetasoundFrontendLiteralType__Boolean1                                          = 1,
	EMetasoundFrontendLiteralType__Integer2                                          = 2,
	EMetasoundFrontendLiteralType__Float3                                            = 3,
	EMetasoundFrontendLiteralType__String4                                           = 4,
	EMetasoundFrontendLiteralType__UObject5                                          = 5,
	EMetasoundFrontendLiteralType__NoneArray6                                        = 6,
	EMetasoundFrontendLiteralType__BooleanArray7                                     = 7,
	EMetasoundFrontendLiteralType__IntegerArray8                                     = 8,
	EMetasoundFrontendLiteralType__FloatArray9                                       = 9,
	EMetasoundFrontendLiteralType__StringArray10                                     = 10,
	EMetasoundFrontendLiteralType__UObjectArray11                                    = 11,
	EMetasoundFrontendLiteralType__Invalid12                                         = 12,
	EMetasoundFrontendLiteralType__EMetasoundFrontendLiteralType_MAX13               = 13
};

