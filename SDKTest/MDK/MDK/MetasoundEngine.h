
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AudioExtensions
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: MetasoundFrontend

/// Class /Script/MetasoundEngine.MetasoundGeneratorHandle
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UMetasoundGeneratorHandle : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/MetasoundEngine.MetasoundOutputBlueprintAccess
/// Size: 0x0000 (0x000028 - 0x000028)
class UMetasoundOutputBlueprintAccess : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MetasoundEngine.MetaSoundOutputSubsystem
/// Size: 0x0010 (0x000040 - 0x000050)
class UMetaSoundOutputSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<UMetasoundGeneratorHandle*>)        TrackedGenerators                                           ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/MetasoundEngine.MetaSoundSettings
/// Size: 0x0048 (0x000030 - 0x000078)
class UMetaSoundSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      bAutoUpdateEnabled                                          ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	CMember(TArray<FMetasoundFrontendClassName>)       AutoUpdateDenylist                                          ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FDefaultMetaSoundAssetAutoUpdateSettings>) AutoUpdateAssetDenylist                              ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(bool)                                      bAutoUpdateLogWarningOnDroppedConnection                    ___ OFFSET(get<bool>, {0x58, 1, 0, 0})
	CMember(TArray<FDirectoryPath>)                    DirectoriesToRegister                                       ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	DMember(int32_t)                                   DenyListCacheChangeID                                       ___ OFFSET(get<int32_t>, {0x70, 4, 0, 0})
};

/// Class /Script/MetasoundEngine.MetasoundEditorGraphBase
/// Size: 0x0000 (0x000060 - 0x000060)
class UMetasoundEditorGraphBase : public UEdGraph
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/MetasoundEngine.MetaSoundPatch
/// Size: 0x0330 (0x000028 - 0x000358)
class UMetaSoundPatch : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	SMember(FMetasoundFrontendDocument)                RootMetaSoundDocument                                       ___ OFFSET(get<T>, {0x98, 448, 0, 0})
	CMember(TSet<FString>)                             ReferencedAssetClassKeys                                    ___ OFFSET(get<T>, {0x258, 80, 0, 0})
	CMember(TSet<UObject*>)                            ReferencedAssetClassObjects                                 ___ OFFSET(get<T>, {0x2A8, 80, 0, 0})
	CMember(TSet<FSoftObjectPath>)                     ReferenceAssetClassCache                                    ___ OFFSET(get<T>, {0x2F8, 80, 0, 0})
	SMember(FGuid)                                     AssetClassID                                                ___ OFFSET(get<T>, {0x348, 16, 0, 0})
};

/// Class /Script/MetasoundEngine.MetaSoundAssetSubsystem
/// Size: 0x01B0 (0x000030 - 0x0001E0)
class UMetaSoundAssetSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	CMember(TArray<FMetaSoundAsyncAssetDependencies>)  LoadingDependencies                                         ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/MetasoundEngine.MetaSoundBuilderBase
/// Size: 0x0038 (0x000028 - 0x000060)
class UMetaSoundBuilderBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMetaSoundFrontendDocumentBuilder)         Builder                                                     ___ OFFSET(get<T>, {0x28, 48, 0, 0})
	DMember(bool)                                      bIsAttached                                                 ___ OFFSET(get<bool>, {0x58, 1, 0, 0})
};

/// Class /Script/MetasoundEngine.MetaSoundPatchBuilder
/// Size: 0x0000 (0x000060 - 0x000060)
class UMetaSoundPatchBuilder : public UMetaSoundBuilderBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/MetasoundEngine.MetaSoundSourceBuilder
/// Size: 0x0008 (0x000060 - 0x000068)
class UMetaSoundSourceBuilder : public UMetaSoundBuilderBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/MetasoundEngine.MetaSoundBuilderSubsystem
/// Size: 0x00A8 (0x000030 - 0x0000D8)
class UMetaSoundBuilderSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TMap<FName, UMetaSoundBuilderBase*>)       NamedBuilders                                               ___ OFFSET(get<T>, {0x38, 80, 0, 0})
	CMember(TMap<FName, TWeakObjectPtr>)               AssetBuilders                                               ___ OFFSET(get<T>, {0x88, 80, 0, 0})
};

/// Class /Script/MetasoundEngine.MetaSoundSource
/// Size: 0x0400 (0x000480 - 0x000880)
class UMetaSoundSource : public USoundWaveProcedural
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2176;

public:
	SMember(FMetasoundFrontendDocument)                RootMetaSoundDocument                                       ___ OFFSET(get<T>, {0x4F0, 448, 0, 0})
	CMember(TSet<FString>)                             ReferencedAssetClassKeys                                    ___ OFFSET(get<T>, {0x6B0, 80, 0, 0})
	CMember(TSet<UObject*>)                            ReferencedAssetClassObjects                                 ___ OFFSET(get<T>, {0x700, 80, 0, 0})
	CMember(TSet<FSoftObjectPath>)                     ReferenceAssetClassCache                                    ___ OFFSET(get<T>, {0x750, 80, 0, 0})
	CMember(EMetaSoundOutputAudioFormat)               OutputFormat                                                ___ OFFSET(get<T>, {0x7A0, 1, 0, 0})
	SMember(FGuid)                                     AssetClassID                                                ___ OFFSET(get<T>, {0x7A4, 16, 0, 0})
};

/// Struct /Script/MetasoundEngine.MetaSoundOutput
/// Size: 0x000C (0x000004 - 0x000010)
class FMetaSoundOutput : public FSoundGeneratorOutput
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/MetasoundEngine.DefaultMetaSoundAssetAutoUpdateSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FDefaultMetaSoundAssetAutoUpdateSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FSoftObjectPath)                           Metasound                                                   ___ OFFSET(get<T>, {0x0, 24, 0, 0})
};

/// Struct /Script/MetasoundEngine.MetaSoundAssetDirectory
/// Size: 0x0010 (0x000000 - 0x000010)
class FMetaSoundAssetDirectory : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FDirectoryPath)                            Directory                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/MetasoundEngine.MetaSoundAsyncAssetDependencies
/// Size: 0x0030 (0x000000 - 0x000030)
class FMetaSoundAsyncAssetDependencies : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UObject*)                                  Metasound                                                   ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/MetasoundEngine.MetaSoundBuilderNodeInputHandle
/// Size: 0x0000 (0x000020 - 0x000020)
class FMetaSoundBuilderNodeInputHandle : public FMetasoundFrontendVertexHandle
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/MetasoundEngine.MetaSoundBuilderNodeOutputHandle
/// Size: 0x0000 (0x000020 - 0x000020)
class FMetaSoundBuilderNodeOutputHandle : public FMetasoundFrontendVertexHandle
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/MetasoundEngine.MetaSoundNodeHandle
/// Size: 0x0010 (0x000000 - 0x000010)
class FMetaSoundNodeHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGuid)                                     NodeId                                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/MetasoundEngine.MetaSoundBuilderOptions
/// Size: 0x0018 (0x000000 - 0x000018)
class FMetaSoundBuilderOptions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bForceUniqueClassName                                       ___ OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bAddToRegistry                                              ___ OFFSET(get<bool>, {0x5, 1, 0, 0})
	CMember(TScriptInterface<Class>)                   ExistingMetaSound                                           ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Enum /Script/MetasoundEngine.EMetaSoundMessageLevel
/// Size: 0x04
enum EMetaSoundMessageLevel : uint8_t
{
	EMetaSoundMessageLevel__Error0                                                   = 0,
	EMetaSoundMessageLevel__Warning1                                                 = 1,
	EMetaSoundMessageLevel__Info2                                                    = 2,
	EMetaSoundMessageLevel__EMetaSoundMessageLevel_MAX3                              = 3
};

/// Enum /Script/MetasoundEngine.EMetaSoundOutputAudioFormat
/// Size: 0x07
enum EMetaSoundOutputAudioFormat : uint8_t
{
	EMetaSoundOutputAudioFormat__Mono0                                               = 0,
	EMetaSoundOutputAudioFormat__Stereo1                                             = 1,
	EMetaSoundOutputAudioFormat__Quad2                                               = 2,
	EMetaSoundOutputAudioFormat__FiveDotOne3                                         = 3,
	EMetaSoundOutputAudioFormat__SevenDotOne4                                        = 4,
	EMetaSoundOutputAudioFormat__COUNT5                                              = 5,
	EMetaSoundOutputAudioFormat__EMetaSoundOutputAudioFormat_MAX6                    = 6
};

/// Enum /Script/MetasoundEngine.EMetaSoundBuilderResult
/// Size: 0x03
enum EMetaSoundBuilderResult : uint8_t
{
	EMetaSoundBuilderResult__Succeeded0                                              = 0,
	EMetaSoundBuilderResult__Failed1                                                 = 1,
	EMetaSoundBuilderResult__EMetaSoundBuilderResult_MAX2                            = 2
};

