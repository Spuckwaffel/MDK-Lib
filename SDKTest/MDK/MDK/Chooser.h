
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/Chooser.ChooserParameterBool_ContextProperty
/// Size: 0x0018 (0x000028 - 0x000040)
class UChooserParameterBool_ContextProperty : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FName>)                             PropertyBindingChain                                        ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/Chooser.ChooserColumnBool
/// Size: 0x0028 (0x000028 - 0x000050)
class UChooserColumnBool : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TScriptInterface<Class>)                   InputValue                                                  ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<bool>)                              RowValues                                                   ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/Chooser.HasContextClass
/// Size: 0x0000 (0x000028 - 0x000028)
class UHasContextClass : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Chooser.ChooserParameterEnum_ContextProperty
/// Size: 0x0018 (0x000028 - 0x000040)
class UChooserParameterEnum_ContextProperty : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FName>)                             PropertyBindingChain                                        ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/Chooser.ChooserColumnEnum
/// Size: 0x0028 (0x000028 - 0x000050)
class UChooserColumnEnum : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TScriptInterface<Class>)                   InputValue                                                  ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FChooserEnumRowData>)               RowValues                                                   ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/Chooser.ChooserParameterFloat_ContextProperty
/// Size: 0x0018 (0x000028 - 0x000040)
class UChooserParameterFloat_ContextProperty : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FName>)                             PropertyBindingChain                                        ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/Chooser.ChooserColumnFloatRange
/// Size: 0x0028 (0x000028 - 0x000050)
class UChooserColumnFloatRange : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TScriptInterface<Class>)                   InputValue                                                  ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FChooserFloatRangeRowData>)         RowValues                                                   ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/Chooser.ChooserParameterGameplayTag_ContextProperty
/// Size: 0x0018 (0x000028 - 0x000040)
class UChooserParameterGameplayTag_ContextProperty : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FName>)                             PropertyBindingChain                                        ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/Chooser.ChooserColumnGameplayTag
/// Size: 0x0030 (0x000028 - 0x000058)
class UChooserColumnGameplayTag : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TScriptInterface<Class>)                   InputValue                                                  ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(EGameplayContainerMatchType)               TagMatchType                                                ___ OFFSET(get<T>, {0x40, 1, 0, 0})
	CMember(TArray<FGameplayTagContainer>)             RowValues                                                   ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Chooser.ChooserColumn
/// Size: 0x0000 (0x000028 - 0x000028)
class UChooserColumn : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Chooser.ChooserParameterBool
/// Size: 0x0000 (0x000028 - 0x000028)
class UChooserParameterBool : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Chooser.ChooserParameterEnum
/// Size: 0x0000 (0x000028 - 0x000028)
class UChooserParameterEnum : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Chooser.ChooserParameterFloat
/// Size: 0x0000 (0x000028 - 0x000028)
class UChooserParameterFloat : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Chooser.ChooserParameterGameplayTag
/// Size: 0x0000 (0x000028 - 0x000028)
class UChooserParameterGameplayTag : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Chooser.ObjectChooser
/// Size: 0x0000 (0x000028 - 0x000028)
class UObjectChooser : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Chooser.ObjectChooser_Asset
/// Size: 0x0010 (0x000028 - 0x000038)
class UObjectChooser_Asset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UObject*)                                  Asset                                                       ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/Chooser.ChooserTable
/// Size: 0x0060 (0x000028 - 0x000088)
class UChooserTable : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<FInstancedStruct>)                  ResultsStructs                                              ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FInstancedStruct>)                  ColumnsStructs                                              ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FInstancedStruct>)                  ContextData                                                 ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(UClass*)                                   OutputObjectType                                            ___ OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(EObjectChooserResultType)                  ResultType                                                  ___ OFFSET(get<T>, {0x80, 4, 0, 0})
};

/// Class /Script/Chooser.ObjectChooser_EvaluateChooser
/// Size: 0x0010 (0x000028 - 0x000038)
class UObjectChooser_EvaluateChooser : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UChooserTable*)                            Chooser                                                     ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/Chooser.ChooserColumnMenuContext
/// Size: 0x0018 (0x000028 - 0x000040)
class UChooserColumnMenuContext : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/Chooser.ChooserFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UChooserFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/Chooser.ChooserParameterBase
/// Size: 0x0008 (0x000000 - 0x000008)
class FChooserParameterBase : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Chooser.ChooserParameterBoolBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FChooserParameterBoolBase : public FChooserParameterBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Chooser.BoolContextProperty
/// Size: 0x0028 (0x000008 - 0x000030)
class FBoolContextProperty : public FChooserParameterBoolBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FName>)                             PropertyBindingChain                                        ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FChooserPropertyBinding)                   Binding                                                     ___ OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/Chooser.ChooserPropertyBinding
/// Size: 0x0018 (0x000000 - 0x000018)
class FChooserPropertyBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FName>)                             PropertyBindingChain                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   ContextIndex                                                ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/Chooser.ChooserColumnBase
/// Size: 0x0008 (0x000000 - 0x000008)
class FChooserColumnBase : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Chooser.BoolColumn
/// Size: 0x0020 (0x000008 - 0x000028)
class FBoolColumn : public FChooserColumnBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FInstancedStruct)                          InputValue                                                  ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<EBoolColumnCellValue>)              RowValuesWithAny                                            ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/Chooser.ChooserEnumPropertyBinding
/// Size: 0x0000 (0x000018 - 0x000018)
class FChooserEnumPropertyBinding : public FChooserPropertyBinding
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/Chooser.ChooserObjectPropertyBinding
/// Size: 0x0000 (0x000018 - 0x000018)
class FChooserObjectPropertyBinding : public FChooserPropertyBinding
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/Chooser.ChooserStructPropertyBinding
/// Size: 0x0000 (0x000018 - 0x000018)
class FChooserStructPropertyBinding : public FChooserPropertyBinding
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/Chooser.ContextObjectTypeBase
/// Size: 0x0004 (0x000000 - 0x000004)
class FContextObjectTypeBase : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	CMember(EContextObjectDirection)                   Direction                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/Chooser.ContextObjectTypeClass
/// Size: 0x000C (0x000004 - 0x000010)
class FContextObjectTypeClass : public FContextObjectTypeBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UClass*)                                   Class                                                       ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Chooser.ContextObjectTypeStruct
/// Size: 0x000C (0x000004 - 0x000010)
class FContextObjectTypeStruct : public FContextObjectTypeBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UScriptStruct*)                            Struct                                                      ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Chooser.ChooserParameterEnumBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FChooserParameterEnumBase : public FChooserParameterBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Chooser.EnumContextProperty
/// Size: 0x0028 (0x000008 - 0x000030)
class FEnumContextProperty : public FChooserParameterEnumBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FName>)                             PropertyBindingChain                                        ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FChooserEnumPropertyBinding)               Binding                                                     ___ OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/Chooser.ChooserEnumRowData
/// Size: 0x0002 (0x000000 - 0x000002)
class FChooserEnumRowData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      CompareNotEqual                                             ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(char)                                      Value                                                       ___ OFFSET(get<char>, {0x1, 1, 0, 0})
};

/// Struct /Script/Chooser.EnumColumn
/// Size: 0x0020 (0x000008 - 0x000028)
class FEnumColumn : public FChooserColumnBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FInstancedStruct)                          InputValue                                                  ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FChooserEnumRowData>)               RowValues                                                   ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/Chooser.ChooserParameterFloatBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FChooserParameterFloatBase : public FChooserParameterBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Chooser.FloatContextProperty
/// Size: 0x0028 (0x000008 - 0x000030)
class FFloatContextProperty : public FChooserParameterFloatBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FName>)                             PropertyBindingChain                                        ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FChooserPropertyBinding)                   Binding                                                     ___ OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/Chooser.ChooserFloatRangeRowData
/// Size: 0x0008 (0x000000 - 0x000008)
class FChooserFloatRangeRowData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     min                                                         ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     max                                                         ___ OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/Chooser.FloatRangeColumn
/// Size: 0x0020 (0x000008 - 0x000028)
class FFloatRangeColumn : public FChooserColumnBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FInstancedStruct)                          InputValue                                                  ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FChooserFloatRangeRowData>)         RowValues                                                   ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/Chooser.ChooserParameterGameplayTagBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FChooserParameterGameplayTagBase : public FChooserParameterBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Chooser.GameplayTagContextProperty
/// Size: 0x0028 (0x000008 - 0x000030)
class FGameplayTagContextProperty : public FChooserParameterGameplayTagBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FName>)                             PropertyBindingChain                                        ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FChooserPropertyBinding)                   Binding                                                     ___ OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/Chooser.GameplayTagColumn
/// Size: 0x0028 (0x000008 - 0x000030)
class FGameplayTagColumn : public FChooserColumnBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FInstancedStruct)                          InputValue                                                  ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(EGameplayContainerMatchType)               TagMatchType                                                ___ OFFSET(get<T>, {0x18, 1, 0, 0})
	CMember(TArray<FGameplayTagContainer>)             RowValues                                                   ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/Chooser.ChooserParameterObjectBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FChooserParameterObjectBase : public FChooserParameterBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Chooser.ChooserRandomizationContext
/// Size: 0x0050 (0x000000 - 0x000050)
class FChooserRandomizationContext : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/Chooser.ChooserParameterRandomizeBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FChooserParameterRandomizeBase : public FChooserParameterBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Chooser.ChooserParameterStructBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FChooserParameterStructBase : public FChooserParameterBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Chooser.ChooserEvaluationInputObject
/// Size: 0x0008 (0x000000 - 0x000008)
class FChooserEvaluationInputObject : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Chooser.ChooserEvaluationContext
/// Size: 0x0050 (0x000000 - 0x000050)
class FChooserEvaluationContext : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/Chooser.ObjectChooserBase
/// Size: 0x0008 (0x000000 - 0x000008)
class FObjectChooserBase : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Chooser.AssetChooser
/// Size: 0x0008 (0x000008 - 0x000010)
class FAssetChooser : public FObjectChooserBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UObject*)                                  Asset                                                       ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Chooser.ClassChooser
/// Size: 0x0008 (0x000008 - 0x000010)
class FClassChooser : public FObjectChooserBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UClass*)                                   Class                                                       ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Chooser.ObjectContextProperty
/// Size: 0x0018 (0x000008 - 0x000020)
class FObjectContextProperty : public FChooserParameterObjectBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FChooserObjectPropertyBinding)             Binding                                                     ___ OFFSET(get<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/Chooser.ChooserObjectRowData
/// Size: 0x0028 (0x000000 - 0x000028)
class FChooserObjectRowData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EObjectColumnCellValueComparison)          Comparison                                                  ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  Value                                                       ___ OFFSET(get<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/Chooser.ObjectColumn
/// Size: 0x0020 (0x000008 - 0x000028)
class FObjectColumn : public FChooserColumnBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FInstancedStruct)                          InputValue                                                  ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FChooserObjectRowData>)             RowValues                                                   ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/Chooser.OutputBoolColumn
/// Size: 0x0020 (0x000008 - 0x000028)
class FOutputBoolColumn : public FChooserColumnBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FInstancedStruct)                          InputValue                                                  ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<bool>)                              RowValues                                                   ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/Chooser.ChooserOutputEnumRowData
/// Size: 0x0001 (0x000000 - 0x000001)
class FChooserOutputEnumRowData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(char)                                      Value                                                       ___ OFFSET(get<char>, {0x0, 1, 0, 0})
};

/// Struct /Script/Chooser.OutputEnumColumn
/// Size: 0x0020 (0x000008 - 0x000028)
class FOutputEnumColumn : public FChooserColumnBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FInstancedStruct)                          InputValue                                                  ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FChooserOutputEnumRowData>)         RowValues                                                   ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/Chooser.OutputFloatColumn
/// Size: 0x0020 (0x000008 - 0x000028)
class FOutputFloatColumn : public FChooserColumnBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FInstancedStruct)                          InputValue                                                  ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<double>)                            RowValues                                                   ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/Chooser.StructContextProperty
/// Size: 0x0018 (0x000008 - 0x000020)
class FStructContextProperty : public FChooserParameterStructBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FChooserStructPropertyBinding)             Binding                                                     ___ OFFSET(get<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/Chooser.OutputStructColumn
/// Size: 0x0020 (0x000008 - 0x000028)
class FOutputStructColumn : public FChooserColumnBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FInstancedStruct)                          InputValue                                                  ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FInstancedStruct>)                  RowValues                                                   ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/Chooser.RandomizeContextProperty
/// Size: 0x0018 (0x000008 - 0x000020)
class FRandomizeContextProperty : public FChooserParameterRandomizeBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FChooserPropertyBinding)                   Binding                                                     ___ OFFSET(get<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/Chooser.RandomizeColumn
/// Size: 0x0028 (0x000008 - 0x000030)
class FRandomizeColumn : public FChooserColumnBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FInstancedStruct)                          InputValue                                                  ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(float)                                     RepeatProbabilityMultiplier                                 ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	CMember(TArray<float>)                             RowValues                                                   ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/Chooser.EvaluateChooser
/// Size: 0x0008 (0x000008 - 0x000010)
class FEvaluateChooser : public FObjectChooserBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UChooserTable*)                            Chooser                                                     ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Enum /Script/Chooser.EBoolColumnCellValue
/// Size: 0x04
enum EBoolColumnCellValue : uint8_t
{
	EBoolColumnCellValue__MatchFalse0                                                = 0,
	EBoolColumnCellValue__MatchTrue1                                                 = 1,
	EBoolColumnCellValue__MatchAny2                                                  = 2,
	EBoolColumnCellValue__EBoolColumnCellValue_MAX3                                  = 3
};

/// Enum /Script/Chooser.EObjectChooserResultType
/// Size: 0x03
enum EObjectChooserResultType : uint8_t
{
	EObjectChooserResultType__ObjectResult0                                          = 0,
	EObjectChooserResultType__ClassResult1                                           = 1,
	EObjectChooserResultType__EObjectChooserResultType_MAX2                          = 2
};

/// Enum /Script/Chooser.EContextObjectDirection
/// Size: 0x04
enum EContextObjectDirection : uint8_t
{
	EContextObjectDirection__Read0                                                   = 0,
	EContextObjectDirection__Write1                                                  = 1,
	EContextObjectDirection__ReadWrite2                                              = 2,
	EContextObjectDirection__EContextObjectDirection_MAX3                            = 3
};

/// Enum /Script/Chooser.EObjectColumnCellValueComparison
/// Size: 0x05
enum EObjectColumnCellValueComparison : uint8_t
{
	EObjectColumnCellValueComparison__MatchEqual0                                    = 0,
	EObjectColumnCellValueComparison__MatchNotEqual1                                 = 1,
	EObjectColumnCellValueComparison__MatchAny2                                      = 2,
	EObjectColumnCellValueComparison__Modulus3                                       = 3,
	EObjectColumnCellValueComparison__EObjectColumnCellValueComparison_MAX4          = 4
};

