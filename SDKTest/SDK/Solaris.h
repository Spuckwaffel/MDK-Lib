/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Solaris.

/// Struct /Script/Solaris.GenericKeyType
/// Size: 0x0001 (0x000000 - 0x000001)
class FGenericKeyType : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Solaris.GenericValueType
/// Size: 0x0001 (0x000000 - 0x000001)
class FGenericValueType : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Solaris.VersePackageContainerSettings
/// Size: 0x0038 (0x000000 - 0x000038)
class FVersePackageContainerSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   VersePath                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(EVersePackageScope)                        VerseScope                                                  ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(TArray<FString>)                           DependencyPackages                                          ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   VniDestDir                                                  ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/Solaris.VerseSourceCode
/// Size: 0x0010 (0x000000 - 0x000010)
class FVerseSourceCode : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<char>)                              Code                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Solaris.VerseSourceFile
/// Size: 0x0020 (0x000000 - 0x000020)
class FVerseSourceFile : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Filename                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FVerseSourceCode>)                  CodeChunks                                                  ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/Solaris.VersePackageContainer
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FVersePackageContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   DirPath                                                     ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(EVersePackageType)                         PackageType                                                 ___ OFFSET(get<T>, {0x20, 1, 0, 0})
	DMember(bool)                                      bEnableVerseAssetReflection                                 ___ OFFSET(get<bool>, {0x21, 1, 0, 0})
	SMember(FVersePackageContainerSettings)            Settings                                                    ___ OFFSET(get<T>, {0x28, 56, 0, 0})
	CMember(TArray<FVerseSourceFile>)                  SourceFiles                                                 ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<char>)                              AssetDigest                                                 ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FString>)                           AssetDependencies                                           ___ OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/Solaris.VerseProjectContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FVerseProjectContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FVersePackageContainer>)            Packages                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Solaris.GenericElementType
/// Size: 0x0001 (0x000000 - 0x000001)
class FGenericElementType : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Solaris.VersePersistentVar
/// Size: 0x0030 (0x000000 - 0x000030)
class FVersePersistentVar : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Path                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Solaris.VerseSessionVar
/// Size: 0x0020 (0x000000 - 0x000020)
class FVerseSessionVar : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Class /Script/Solaris.VerseStruct
/// Size: 0x0038 (0x0000C0 - 0x0000F8)
class UVerseStruct : public UScriptStruct
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	DMember(uint32_t)                                  VerseClassFlags                                             ___ OFFSET(get<uint32_t>, {0xC0, 4, 0, 0})
	CMember(UFunction*)                                InitFunction                                                ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(UVerseClass*)                              ModuleClass                                                 ___ OFFSET(get<T>, {0xD0, 8, 0, 0})
	SMember(FGuid)                                     Guid                                                        ___ OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(UFunction*)                                FactoryFunction                                             ___ OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(UFunction*)                                OverrideFactoryFunction                                     ___ OFFSET(get<T>, {0xF0, 8, 0, 0})
};

/// Class /Script/Solaris.SolarisWeakMapLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisWeakMapLibrary : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Solaris.VerseDigest
/// Size: 0x0028 (0x000028 - 0x000050)
class UVerseDigest : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<char>)                              DigestCode                                                  ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   ProjectName                                                 ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(EVerseDigestVariant)                       Variant                                                     ___ OFFSET(get<T>, {0x48, 1, 0, 0})
	DMember(bool)                                      bCookAllVerseInternalDigests                                ___ OFFSET(get<bool>, {0x49, 1, 0, 0})
};

/// Class /Script/Solaris.VerseEnum
/// Size: 0x0008 (0x000068 - 0x000070)
class UVerseEnum : public UEnum
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(EVerseEnumFlags)                           VerseEnumFlags                                              ___ OFFSET(get<T>, {0x68, 4, 0, 0})
};

/// Class /Script/Solaris.SolarisArrayLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisArrayLibrary : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Solaris.SolarisCoroutineLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisCoroutineLibrary : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Solaris.GameFeature_SolarisObserver
/// Size: 0x0018 (0x000028 - 0x000040)
class UGameFeature_SolarisObserver : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/Solaris.SolarisMapLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMapLibrary : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Solaris.SolarisMathLibrary_Bool
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMathLibrary_Bool : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Solaris.SolarisMathLibrary_Int
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMathLibrary_Int : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Solaris.SolarisMathLibrary_Rational
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMathLibrary_Rational : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Solaris.SolarisMathLibrary_Float
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMathLibrary_Float : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Solaris.SolarisMathLibrary_String
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMathLibrary_String : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Solaris.SolarisMathLibrary_Option
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMathLibrary_Option : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Solaris.SolarisGameSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class USolarisGameSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FString>)                           Blacklist                                                   ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(int32_t)                                   MaxAllowedSize                                              ___ OFFSET(get<int32_t>, {0x38, 4, 0, 0})
};

/// Class /Script/Solaris.SolarisUtilLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisUtilLibrary : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Solaris.VerseClass
/// Size: 0x00E8 (0x000200 - 0x0002E8)
class UVerseClass : public UVerseClassBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	DMember(uint32_t)                                  SolClassFlags                                               ___ OFFSET(get<uint32_t>, {0x200, 4, 0, 0})
	CMember(TArray<UVerseClass*>)                      TaskClasses                                                 ___ OFFSET(get<T>, {0x208, 16, 0, 0})
	CMember(TSet<UVerseClass*>)                        InterfaceClasses                                            ___ OFFSET(get<T>, {0x218, 80, 0, 0})
	CMember(TMap<FName, InterfaceMethodFunctionProperties>) InterfaceMethodFunctionProperties                      ___ OFFSET(get<T>, {0x268, 80, 0, 0})
	CMember(UFunction*)                                InitInstanceFunction                                        ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(TArray<FVersePersistentVar>)               PersistentVars                                              ___ OFFSET(get<T>, {0x2C0, 16, 0, 0})
	CMember(TArray<FVerseSessionVar>)                  SessionVars                                                 ___ OFFSET(get<T>, {0x2D0, 16, 0, 0})
};

/// Class /Script/Solaris.VerseDebugData
/// Size: 0x0010 (0x000028 - 0x000038)
class UVerseDebugData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/Solaris.VerseDynamicallyTypedValueLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseDynamicallyTypedValueLibrary : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Enum /Script/Solaris.EVerseDigestVariant
/// Size: 0x03
enum EVerseDigestVariant : uint8_t
{
	EVerseDigestVariant__PublicOnly0                                                 = 0,
	EVerseDigestVariant__PublicAndEpicInternal1                                      = 1,
	EVerseDigestVariant__EVerseDigestVariant_MAX2                                    = 2
};

/// Enum /Script/Solaris.EVerseEnumFlags
/// Size: 0x03
enum EVerseEnumFlags : uint8_t
{
	EVerseEnumFlags__None0                                                           = 0,
	EVerseEnumFlags__NativeBound1                                                    = 1,
	EVerseEnumFlags__EVerseEnumFlags_MAX2                                            = 2
};

/// Enum /Script/Solaris.EVersePackageScope
/// Size: 0x04
enum EVersePackageScope : uint8_t
{
	EVersePackageScope__InternalAPI0                                                 = 0,
	EVersePackageScope__PublicAPI1                                                   = 1,
	EVersePackageScope__User2                                                        = 2,
	EVersePackageScope__EVersePackageScope_MAX3                                      = 3
};

/// Enum /Script/Solaris.EVersePackageType
/// Size: 0x05
enum EVersePackageType : uint8_t
{
	EVersePackageType__VNI0                                                          = 0,
	EVersePackageType__Content1                                                      = 1,
	EVersePackageType__PublishedContent2                                             = 2,
	EVersePackageType__Assets3                                                       = 3,
	EVersePackageType__EVersePackageType_MAX4                                        = 4
};

