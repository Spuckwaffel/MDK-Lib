
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

/// Class /Script/ModelViewViewModel.MVVMConversionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMVVMConversionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ModelViewViewModel.MVVMViewModelContextResolver
/// Size: 0x0000 (0x000028 - 0x000028)
class UMVVMViewModelContextResolver : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ModelViewViewModel.MVVMGameSubsystem
/// Size: 0x0008 (0x000030 - 0x000038)
class UMVVMGameSubsystem : public UGameInstanceSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UMVVMViewModelCollectionObject*)           ViewModelCollection                                         ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/ModelViewViewModel.MVVMSubsystem
/// Size: 0x0000 (0x000030 - 0x000030)
class UMVVMSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/ModelViewViewModel.MVVMViewModelBase
/// Size: 0x0040 (0x000028 - 0x000068)
class UMVVMViewModelBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/ModelViewViewModel.MVVMViewModelCollectionObject
/// Size: 0x0028 (0x000028 - 0x000050)
class UMVVMViewModelCollectionObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FMVVMViewModelCollection)                  ViewModelCollection                                         ___ OFFSET(get<T>, {0x28, 40, 0, 0})
};

/// Class /Script/ModelViewViewModel.MVVMViewModelBlueprintGeneratedClass
/// Size: 0x0000 (0x000368 - 0x000368)
class UMVVMViewModelBlueprintGeneratedClass : public UBlueprintGeneratedClass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
};

/// Class /Script/ModelViewViewModel.MVVMBindingSubsystem
/// Size: 0x0060 (0x000030 - 0x000090)
class UMVVMBindingSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/ModelViewViewModel.MVVMView
/// Size: 0x0030 (0x000028 - 0x000058)
class UMVVMView : public UUserWidgetExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(UMVVMViewClass*)                           ClassExtension                                              ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<FMVVMViewSource>)                   Sources                                                     ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(bool)                                      bLogBinding                                                 ___ OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(bool)                                      bConstructed                                                ___ OFFSET(get<bool>, {0x51, 1, 0, 0})
	DMember(bool)                                      bSourcesInitialized                                         ___ OFFSET(get<bool>, {0x52, 1, 0, 0})
	DMember(bool)                                      bBindingsInitialized                                        ___ OFFSET(get<bool>, {0x53, 1, 0, 0})
	DMember(bool)                                      bHasEveryTickBinding                                        ___ OFFSET(get<bool>, {0x54, 1, 0, 0})
};

/// Class /Script/ModelViewViewModel.MVVMViewClass
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UMVVMViewClass : public UWidgetBlueprintGeneratedClassExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<FMVVMViewClass_SourceCreator>)      SourceCreators                                              ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FMVVMViewClass_CompiledBinding>)    CompiledBindings                                            ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FMVVMCompiledBindingLibrary)               BindingLibrary                                              ___ OFFSET(get<T>, {0x48, 96, 0, 0})
	DMember(bool)                                      bInitializeSourcesOnConstruct                               ___ OFFSET(get<bool>, {0xAC, 1, 0, 0})
	DMember(bool)                                      bInitializeBindingsOnConstruct                              ___ OFFSET(get<bool>, {0xAD, 1, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMAvailableBinding
/// Size: 0x0008 (0x000000 - 0x000008)
class FMVVMAvailableBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FMVVMBindingName)                          BindingName                                                 ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bIsReadable                                                 ___ OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bIsWritable                                                 ___ OFFSET(get<bool>, {0x5, 1, 0, 0})
	DMember(bool)                                      bHasNotify                                                  ___ OFFSET(get<bool>, {0x6, 1, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMBindingName
/// Size: 0x0004 (0x000000 - 0x000004)
class FMVVMBindingName : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     BindingName                                                 ___ OFFSET(get<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMEventField
/// Size: 0x0001 (0x000000 - 0x000001)
class FMVVMEventField : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/ModelViewViewModel.MVVMViewModelContextInstance
/// Size: 0x0018 (0x000000 - 0x000018)
class FMVVMViewModelContextInstance : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FMVVMViewModelContext)                     Context                                                     ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(UMVVMViewModelBase*)                       Instance                                                    ___ OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMViewModelContext
/// Size: 0x0010 (0x000000 - 0x000010)
class FMVVMViewModelContext : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UClass*)                                   ContextClass                                                ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     ContextName                                                 ___ OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMVCompiledFields
/// Size: 0x0010 (0x000000 - 0x000010)
class FMVVMVCompiledFields : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UStruct*)                                  ClassOrScriptStruct                                         ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int16_t)                                   LibraryStartIndex                                           ___ OFFSET(get<int16_t>, {0x8, 2, 0, 0})
	DMember(int16_t)                                   NumberOfProperties                                          ___ OFFSET(get<int16_t>, {0xA, 2, 0, 0})
	DMember(int16_t)                                   NumberOfFunctions                                           ___ OFFSET(get<int16_t>, {0xC, 2, 0, 0})
	DMember(int16_t)                                   NumberOfFieldIds                                            ___ OFFSET(get<int16_t>, {0xE, 2, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMVCompiledFieldPath
/// Size: 0x0004 (0x000000 - 0x000004)
class FMVVMVCompiledFieldPath : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int16_t)                                   StartIndex                                                  ___ OFFSET(get<int16_t>, {0x0, 2, 0, 0})
	DMember(int16_t)                                   Num                                                         ___ OFFSET(get<int16_t>, {0x2, 2, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMVCompiledFieldId
/// Size: 0x0002 (0x000000 - 0x000002)
class FMVVMVCompiledFieldId : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(int16_t)                                   FieldIdIndex                                                ___ OFFSET(get<int16_t>, {0x0, 2, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMCompiledLoadedPropertyOrFunctionIndex
/// Size: 0x0004 (0x000000 - 0x000004)
class FMVVMCompiledLoadedPropertyOrFunctionIndex : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int16_t)                                   Index                                                       ___ OFFSET(get<int16_t>, {0x0, 2, 0, 0})
	DMember(bool)                                      bIsObjectProperty                                           ___ OFFSET(get<bool>, {0x2, 1, 1, 0})
	DMember(bool)                                      bIsScriptStructProperty                                     ___ OFFSET(get<bool>, {0x2, 1, 1, 1})
	DMember(bool)                                      bIsProperty                                                 ___ OFFSET(get<bool>, {0x2, 1, 1, 2})
};

/// Struct /Script/ModelViewViewModel.MVVMVCompiledBinding
/// Size: 0x000E (0x000000 - 0x00000E)
class FMVVMVCompiledBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 14;

public:
	SMember(FMVVMVCompiledFieldPath)                   SourceFieldPath                                             ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FMVVMVCompiledFieldPath)                   DestinationFieldPath                                        ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FMVVMVCompiledFieldPath)                   ConversionFunctionFieldPath                                 ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(char)                                      Flags                                                       ___ OFFSET(get<char>, {0xC, 1, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMCompiledBindingLibrary
/// Size: 0x0060 (0x000000 - 0x000060)
class FMVVMCompiledBindingLibrary : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<UFunction*>)                        LoadedFunctions                                             ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FMVVMCompiledLoadedPropertyOrFunctionIndex>) FieldPaths                                         ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FMVVMVCompiledFields>)              CompiledFields                                              ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FName>)                             CompiledFieldNames                                          ___ OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMViewModelCollection
/// Size: 0x0028 (0x000000 - 0x000028)
class FMVVMViewModelCollection : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FMVVMViewModelContextInstance>)     ViewModelInstances                                          ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMViewSource
/// Size: 0x0018 (0x000000 - 0x000018)
class FMVVMViewSource : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UObject*)                                  Source                                                      ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     SourceName                                                  ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   RegisteredCount                                             ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      bCreatedSource                                              ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bSetManually                                                ___ OFFSET(get<bool>, {0x11, 1, 0, 0})
	DMember(bool)                                      bAssignedToUserWidgetProperty                               ___ OFFSET(get<bool>, {0x12, 1, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_SourceCreator
/// Size: 0x0030 (0x000000 - 0x000030)
class FMVVMViewClass_SourceCreator : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UClass*)                                   ExpectedSourceType                                          ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UMVVMViewModelContextResolver*)            Resolver                                                    ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FMVVMViewModelContext)                     GlobalViewModelInstance                                     ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FMVVMVCompiledFieldPath)                   FieldPath                                                   ___ OFFSET(get<T>, {0x20, 4, 0, 0})
	SMember(FName)                                     PropertyName                                                ___ OFFSET(get<T>, {0x24, 4, 0, 0})
	SMember(FName)                                     ParentSourceName                                            ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	DMember(char)                                      Flags                                                       ___ OFFSET(get<char>, {0x2C, 1, 0, 0})
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_CompiledBinding
/// Size: 0x001C (0x000000 - 0x00001C)
class FMVVMViewClass_CompiledBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FMVVMVCompiledFieldId)                     FieldId                                                     ___ OFFSET(get<T>, {0x0, 2, 0, 0})
	SMember(FName)                                     SourcePropertyName                                          ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FMVVMVCompiledBinding)                     Binding                                                     ___ OFFSET(get<T>, {0x8, 14, 0, 0})
	CMember(EMVVMExecutionMode)                        ExecutionMode                                               ___ OFFSET(get<T>, {0x16, 1, 0, 0})
	DMember(int8_t)                                    EvaluateSourceCreatorIndex                                  ___ OFFSET(get<int8_t>, {0x17, 1, 0, 0})
	DMember(char)                                      Flags                                                       ___ OFFSET(get<char>, {0x18, 1, 0, 0})
};

/// Enum /Script/ModelViewViewModel.EMVVMExecutionMode
/// Size: 0x05
enum EMVVMExecutionMode : uint8_t
{
	EMVVMExecutionMode__Immediate0                                                   = 0,
	EMVVMExecutionMode__Delayed1                                                     = 1,
	EMVVMExecutionMode__Tick2                                                        = 2,
	EMVVMExecutionMode__DelayedWhenSharedElseImmediate3                              = 3,
	EMVVMExecutionMode__EMVVMExecutionMode_MAX4                                      = 4
};

/// Enum /Script/ModelViewViewModel.EMVVMBindingMode
/// Size: 0x06
enum EMVVMBindingMode : uint8_t
{
	EMVVMBindingMode__OneTimeToDestination0                                          = 0,
	EMVVMBindingMode__OneWayToDestination1                                           = 1,
	EMVVMBindingMode__TwoWay2                                                        = 2,
	EMVVMBindingMode__OneTimeToSource3                                               = 3,
	EMVVMBindingMode__OneWayToSource4                                                = 4,
	EMVVMBindingMode__EMVVMBindingMode_MAX5                                          = 5
};

