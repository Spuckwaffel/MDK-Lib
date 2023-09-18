/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package VkEngineTypes.

/// Struct /Script/VkEngineTypes.VkLaunchData_JoinMatchmakingSession
/// Size: 0x0010 (0x000000 - 0x000010)
class FVkLaunchData_JoinMatchmakingSession : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   SessionId                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.ValkyrieProjectDescriptorIOContext
/// Size: 0x0040 (0x000000 - 0x000040)
class FValkyrieProjectDescriptorIOContext : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/VkEngineTypes.ValkyriePluginReferenceDescriptor
/// Size: 0x0018 (0x000000 - 0x000018)
class FValkyriePluginReferenceDescriptor : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bIsRoot                                                     ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bIsPublic                                                   ___ OFFSET(get<bool>, {0x11, 1, 0, 0})
};

/// Struct /Script/VkEngineTypes.ValkyrieProjectReferenceDescriptor
/// Size: 0x0038 (0x000000 - 0x000038)
class FValkyrieProjectReferenceDescriptor : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(char)                                      FileVersion                                                 ___ OFFSET(get<char>, {0x0, 1, 0, 0})
	SMember(FString)                                   ID                                                          ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FOnlineLinkId)                             LinkCode                                                    ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/VkEngineTypes.ValkyrieProjectBindingsDescriptor
/// Size: 0x0060 (0x000000 - 0x000060)
class FValkyrieProjectBindingsDescriptor : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FString)                                   ProjectID                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TMap<FString, FString>)                    Modules                                                     ___ OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/VkEngineTypes.ValkyrieProjectDescriptor
/// Size: 0x0230 (0x000000 - 0x000230)
class FValkyrieProjectDescriptor : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	DMember(char)                                      FileVersion                                                 ___ OFFSET(get<char>, {0x0, 1, 0, 0})
	SMember(FString)                                   VersionSuffix                                               ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Title                                                       ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   Description                                                 ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   KeyArt                                                      ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   DocsUrl                                                     ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(EValkyrieProjectKind)                      Kind                                                        ___ OFFSET(get<T>, {0x58, 4, 0, 0})
	CMember(EValkyrieProjectTemplateCategory)          TemplateCategory                                            ___ OFFSET(get<T>, {0x5C, 4, 0, 0})
	SMember(FString)                                   CompatibilityVersion                                        ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FString>)                           EditorPermissions                                           ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FString)                                   EpicApp                                                     ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	DMember(float)                                     SortPriority                                                ___ OFFSET(get<float>, {0x90, 4, 0, 0})
	CMember(TArray<FValkyriePluginReferenceDescriptor>) Plugins                                                    ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(TMap<FString, FJsonObjectWrapper>)         DataSets                                                    ___ OFFSET(get<T>, {0xA8, 80, 0, 0})
	CMember(TArray<FValkyrieProjectReferenceDescriptor>) Dependencies                                              ___ OFFSET(get<T>, {0xF8, 16, 0, 0})
	SMember(FValkyrieProjectBindingsDescriptor)        Bindings                                                    ___ OFFSET(get<T>, {0x1D0, 96, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkNamedId
/// Size: 0x0020 (0x000000 - 0x000020)
class FVkNamedId : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ID                                                          ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkTypedId
/// Size: 0x0018 (0x000000 - 0x000018)
class FVkTypedId : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   ID                                                          ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(EVkIdType)                                 Type                                                        ___ OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkVersionedLinkCode
/// Size: 0x0018 (0x000000 - 0x000018)
class FVkVersionedLinkCode : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Mnemonic                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Version                                                     ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkContentFilter
/// Size: 0x0010 (0x000000 - 0x000010)
class FVkContentFilter : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   Platform                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkArtifactOption
/// Size: 0x0028 (0x000000 - 0x000028)
class FVkArtifactOption : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   ArtifactId                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(EConsumerRole)                             Role                                                        ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FVkContentFilter)                          Filter                                                      ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkFoundMatchingArtifact
/// Size: 0x0030 (0x000000 - 0x000030)
class FVkFoundMatchingArtifact : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   ArtifactId                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FVkContentFilter)                          Filter                                                      ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkModuleVersion
/// Size: 0x0018 (0x000000 - 0x000018)
class FVkModuleVersion : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   ModuleId                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Version                                                     ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkModuleVersionRef
/// Size: 0x0018 (0x000000 - 0x000018)
class FVkModuleVersionRef : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   ModuleId                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Version                                                     ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkModuleVersionWithArtifacts
/// Size: 0x0010 (0x000018 - 0x000028)
class FVkModuleVersionWithArtifacts : public FVkModuleVersion
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FVkArtifactOption>)                 Artifacts                                                   ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkModuleDoc
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FVkModuleDoc : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FString)                                   ModuleId                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FDateTime)                                 Created                                                     ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FDateTime)                                 Updated                                                     ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FVkTypedId)                                Author                                                      ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FString)                                   ProjectID                                                   ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   ModuleName                                                  ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   ContentType                                                 ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TMap<EConsumerRole, bool>)                 Relevance                                                   ___ OFFSET(get<T>, {0x68, 80, 0, 0})
	SMember(FString)                                   AliasForModuleId                                            ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	SMember(FJsonObjectWrapper)                        meta                                                        ___ OFFSET(get<T>, {0xC8, 32, 0, 0})
	DMember(int32_t)                                   LatestVersion                                               ___ OFFSET(get<int32_t>, {0xE8, 4, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkContentPackage
/// Size: 0x0070 (0x000000 - 0x000070)
class FVkContentPackage : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FString)                                   ProjectID                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TMap<FString, FString>)                    ProjectFlags                                                ___ OFFSET(get<T>, {0x10, 80, 0, 0})
	CMember(TArray<FVkModuleVersionWithArtifacts>)     Content                                                     ___ OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkModuleBinaries
/// Size: 0x0050 (0x000000 - 0x000050)
class FVkModuleBinaries : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   BaseUrl                                                     ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   manifest                                                    ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FString>)                           Files                                                       ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(double)                                    TotalSizeKb                                                 ___ OFFSET(get<double>, {0x30, 8, 0, 0})
	DMember(double)                                    ManifestSizeKb                                              ___ OFFSET(get<double>, {0x38, 8, 0, 0})
	DMember(double)                                    ManifestDiskSizeKb                                          ___ OFFSET(get<double>, {0x40, 8, 0, 0})
	DMember(double)                                    ManifestDownloadSizeKb                                      ___ OFFSET(get<double>, {0x48, 8, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkResolvedModule
/// Size: 0x0088 (0x000000 - 0x000088)
class FVkResolvedModule : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FString)                                   ModuleId                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Version                                                     ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FString)                                   ArtifactId                                                  ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   CookJobId                                                   ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FVkModuleBinaries)                         Binaries                                                    ___ OFFSET(get<T>, {0x38, 80, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkFileSize
/// Size: 0x0028 (0x000000 - 0x000028)
class FVkFileSize : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FString>)                           Types                                                       ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int64_t)                                   SourceSize                                                  ___ OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	DMember(int64_t)                                   UncompressedSize                                            ___ OFFSET(get<int64_t>, {0x18, 8, 0, 0})
	DMember(int64_t)                                   CompressedSize                                              ___ OFFSET(get<int64_t>, {0x20, 8, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkFileSizes
/// Size: 0x0050 (0x000000 - 0x000050)
class FVkFileSizes : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FString, FVkFileSize>)                FileSizeMap                                                 ___ OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkExtendedErrorParam
/// Size: 0x0020 (0x000000 - 0x000020)
class FVkExtendedErrorParam : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Key                                                         ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Value                                                       ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkExtendedError
/// Size: 0x0040 (0x000000 - 0x000040)
class FVkExtendedError : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   FormatKey                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   FormatNs                                                    ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   Message                                                     ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FVkExtendedErrorParam>)             Params                                                      ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkExtendedErrorInformation
/// Size: 0x0030 (0x000000 - 0x000030)
class FVkExtendedErrorInformation : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   ErrorCode                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ErrorMessage                                                ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FVkExtendedError>)                  AdditionalErrors                                            ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkTicketDetails
/// Size: 0x0048 (0x000000 - 0x000048)
class FVkTicketDetails : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(EVkTicketStatus)                           Status                                                      ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FDateTime)                                 StartDate                                                   ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FDateTime)                                 EndDate                                                     ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FVkExtendedErrorInformation)               Error                                                       ___ OFFSET(get<T>, {0x18, 48, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkVersePath
/// Size: 0x0020 (0x000000 - 0x000020)
class FVkVersePath : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   VersePath                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   URL                                                         ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkVersePathTarget
/// Size: 0x0028 (0x000000 - 0x000028)
class FVkVersePathTarget : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   ProjectID                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FVkVersionedLinkCode)                      LinkCode                                                    ___ OFFSET(get<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkResolvedVersePath
/// Size: 0x0028 (0x000020 - 0x000048)
class FVkResolvedVersePath : public FVkVersePath
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FVkVersePathTarget)                        Target                                                      ___ OFFSET(get<T>, {0x20, 40, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkContentManifest
/// Size: 0x0010 (0x000000 - 0x000010)
class FVkContentManifest : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FVkResolvedModule>)                 Content                                                     ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkBuildVersion
/// Size: 0x0018 (0x000000 - 0x000018)
class FVkBuildVersion : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Major                                                       ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Minor                                                       ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   Patch                                                       ___ OFFSET(get<int32_t>, {0x14, 4, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkJobOutput
/// Size: 0x0040 (0x000000 - 0x000040)
class FVkJobOutput : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   BaseUrl                                                     ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(double)                                    TotalSizeKb                                                 ___ OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    UserContentTotalSizeKb                                      ___ OFFSET(get<double>, {0x18, 8, 0, 0})
	CMember(TArray<FString>)                           Files                                                       ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   manifest                                                    ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkModuleVersionDoc
/// Size: 0x0168 (0x000000 - 0x000168)
class FVkModuleVersionDoc : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FString)                                   ModuleId                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Version                                                     ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FString)                                   ProjectID                                                   ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(EVkModuleAccess)                           Access                                                      ___ OFFSET(get<T>, {0x28, 1, 0, 0})
	SMember(FDateTime)                                 Created                                                     ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FVkTypedId)                                Author                                                      ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	SMember(FJsonObjectWrapper)                        meta                                                        ___ OFFSET(get<T>, {0x50, 32, 0, 0})
	CMember(TArray<FVkModuleVersionRef>)               Dependencies                                                ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FVkJobOutput)                              StagedFiles                                                 ___ OFFSET(get<T>, {0x80, 64, 0, 0})
	SMember(FVkBuildVersion)                           SourceVersion                                               ___ OFFSET(get<T>, {0xC0, 24, 0, 0})
	SMember(FString)                                   ContentType                                                 ___ OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TMap<EConsumerRole, bool>)                 Relevance                                                   ___ OFFSET(get<T>, {0xE8, 80, 0, 0})
	SMember(FString)                                   ArtifactKey                                                 ___ OFFSET(get<T>, {0x138, 16, 0, 0})
	SMember(FString)                                   Checksum                                                    ___ OFFSET(get<T>, {0x148, 16, 0, 0})
	CMember(TArray<FVkArtifactOption>)                 Artifacts                                                   ___ OFFSET(get<T>, {0x158, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkProjectLimitsDoc
/// Size: 0x0030 (0x000000 - 0x000030)
class FVkProjectLimitsDoc : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int64_t)                                   PublishingMemorySize                                        ___ OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   PublishingDownloadSize                                      ___ OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(int64_t)                                   ProjectUploadSize                                           ___ OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   ModuleUploadConcurrencyLimit                                ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int64_t)                                   FileCount                                                   ___ OFFSET(get<int64_t>, {0x20, 8, 0, 0})
	DMember(int64_t)                                   IndividualFileSizeKb                                        ___ OFFSET(get<int64_t>, {0x28, 8, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkProjectUserInfo
/// Size: 0x0098 (0x000000 - 0x000098)
class FVkProjectUserInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FString)                                   ProjectID                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   AccountId                                                   ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   Title                                                       ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      HasStar                                                     ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      IsNew                                                       ___ OFFSET(get<bool>, {0x31, 1, 0, 0})
	CMember(TMap<FString, bool>)                       Access                                                      ___ OFFSET(get<T>, {0x38, 80, 0, 0})
	CMember(TArray<FString>)                           Permissions                                                 ___ OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkCreateProjectRequest
/// Size: 0x0050 (0x000000 - 0x000050)
class FVkCreateProjectRequest : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   DesiredProjectId                                            ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FJsonObjectWrapper)                        meta                                                        ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FJsonObjectWrapper)                        SysMeta                                                     ___ OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkTransferProjectRequest
/// Size: 0x0010 (0x000000 - 0x000010)
class FVkTransferProjectRequest : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   TeamId                                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkCreateModuleRequest
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FVkCreateModuleRequest : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FString)                                   ModuleName                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FJsonObjectWrapper)                        meta                                                        ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FString)                                   ContentType                                                 ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TMap<EConsumerRole, bool>)                 Relevance                                                   ___ OFFSET(get<T>, {0x40, 80, 0, 0})
	SMember(FString)                                   DesiredModuleId                                             ___ OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkCreateModuleVersionRequest
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FVkCreateModuleVersionRequest : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TMap<FString, FString>)                    RawFiles                                                    ___ OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TArray<FVkModuleVersionRef>)               Dependencies                                                ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FJsonObjectWrapper)                        meta                                                        ___ OFFSET(get<T>, {0x60, 32, 0, 0})
	SMember(FString)                                   Checksum                                                    ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	SMember(FString)                                   ManifestLink                                                ___ OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkResolvedContent
/// Size: 0x0068 (0x000000 - 0x000068)
class FVkResolvedContent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FVkModuleVersionRef)                       Root                                                        ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	CMember(TMap<FString, int32_t>)                    Resolutions                                                 ___ OFFSET(get<T>, {0x18, 80, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkSnapshotSaveRequest
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FVkSnapshotSaveRequest : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FVkResolvedContent)                        Content                                                     ___ OFFSET(get<T>, {0x0, 104, 0, 0})
	CMember(TArray<FVkVersionedLinkCode>)              Palette                                                     ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	SMember(FString)                                   MapPath                                                     ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	SMember(FJsonObjectWrapper)                        MatchmakingConfig                                           ___ OFFSET(get<T>, {0x88, 32, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkProjectSnapshot
/// Size: 0x00E8 (0x000000 - 0x0000E8)
class FVkProjectSnapshot : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FString)                                   UniqueID                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ProjectID                                                   ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   AccountId                                                   ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FDateTime)                                 CreatedAt                                                   ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(int32_t)                                   DeltaFileIndex                                              ___ OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	SMember(FVkResolvedContent)                        Content                                                     ___ OFFSET(get<T>, {0x40, 104, 0, 0})
	CMember(TArray<FVkVersionedLinkCode>)              Palette                                                     ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FString)                                   MapPath                                                     ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	SMember(FJsonObjectWrapper)                        MatchmakingConfig                                           ___ OFFSET(get<T>, {0xC8, 32, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkGenerateTestcodeRequest
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FVkGenerateTestcodeRequest : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FVkResolvedContent)                        Content                                                     ___ OFFSET(get<T>, {0x0, 104, 0, 0})
	SMember(FString)                                   CommitMessage                                               ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	SMember(FJsonObjectWrapper)                        MatchmakingConfig                                           ___ OFFSET(get<T>, {0x78, 32, 0, 0})
	SMember(FString)                                   SourceControlBase                                           ___ OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkProjectSearchResult
/// Size: 0x0070 (0x000000 - 0x000070)
class FVkProjectSearchResult : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FString)                                   ProjectID                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FDateTime)                                 Created                                                     ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FDateTime)                                 Accessed                                                    ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FJsonObjectWrapper)                        meta                                                        ___ OFFSET(get<T>, {0x20, 32, 0, 0})
	SMember(FJsonObjectWrapper)                        SysMeta                                                     ___ OFFSET(get<T>, {0x40, 32, 0, 0})
	SMember(FString)                                   LinkCode                                                    ___ OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkProjectInfoSlim
/// Size: 0x0068 (0x000000 - 0x000068)
class FVkProjectInfoSlim : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FVkTypedId)                                Owner                                                       ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FString)                                   Title                                                       ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   Description                                                 ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   RcsProvider                                                 ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FJsonObjectWrapper)                        SysMeta                                                     ___ OFFSET(get<T>, {0x48, 32, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkProjectSearchResultSlim
/// Size: 0x0088 (0x000000 - 0x000088)
class FVkProjectSearchResultSlim : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FString)                                   ProjectID                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FDateTime)                                 Date                                                        ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FVkProjectInfoSlim)                        Info                                                        ___ OFFSET(get<T>, {0x18, 104, 0, 0})
	DMember(bool)                                      is_starred                                                  ___ OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(bool)                                      is_new                                                      ___ OFFSET(get<bool>, {0x81, 1, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkTeamMembershipResult
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FVkTeamMembershipResult : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TMap<FString, bool>)                       Access                                                      ___ OFFSET(get<T>, {0x10, 80, 0, 0})
	SMember(FString)                                   Status                                                      ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FString)                                   MembershipId                                                ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FString)                                   TeamId                                                      ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	SMember(FString)                                   AccountId                                                   ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	SMember(FDateTime)                                 Updated                                                     ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkTeamAccessControl
/// Size: 0x0004 (0x000000 - 0x000004)
class FVkTeamAccessControl : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(bool)                                      Admin                                                       ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      Edit                                                        ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      Operate                                                     ___ OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      Publish                                                     ___ OFFSET(get<bool>, {0x3, 1, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkTeamAuthorizedEmailDomain
/// Size: 0x0018 (0x000000 - 0x000018)
class FVkTeamAuthorizedEmailDomain : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Domain                                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FVkTeamAccessControl)                      Access                                                      ___ OFFSET(get<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkTeamPublicProperties
/// Size: 0x0030 (0x000000 - 0x000030)
class FVkTeamPublicProperties : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Description                                                 ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FVkTeamAuthorizedEmailDomain>)      EmailDomains                                                ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkTeamDoc
/// Size: 0x0090 (0x000000 - 0x000090)
class FVkTeamDoc : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FString)                                   TeamId                                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FDateTime)                                 Created                                                     ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FDateTime)                                 Updated                                                     ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FVkTypedId)                                Owner                                                       ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVkTeamPublicProperties)                   PublicProps                                                 ___ OFFSET(get<T>, {0x38, 48, 0, 0})
	DMember(int32_t)                                   MemberCount                                                 ___ OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	SMember(FJsonObjectWrapper)                        SysMeta                                                     ___ OFFSET(get<T>, {0x70, 32, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkLaunchData_Link
/// Size: 0x0018 (0x000000 - 0x000018)
class FVkLaunchData_Link : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   LinkCode                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Version                                                     ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkProjectPlaytestAccessRequest
/// Size: 0x0020 (0x000000 - 0x000020)
class FVkProjectPlaytestAccessRequest : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FString>)                           Users                                                       ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   PlaytestGroupId                                             ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkProjectAccessControl
/// Size: 0x0005 (0x000000 - 0x000005)
class FVkProjectAccessControl : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 5;

public:
	DMember(bool)                                      Read                                                        ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      Edit                                                        ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      Operate                                                     ___ OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      Publish                                                     ___ OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      Admin                                                       ___ OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkProjectPlaytestAccessResult
/// Size: 0x0080 (0x000000 - 0x000080)
class FVkProjectPlaytestAccessResult : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FVkNamedId)                                Owner                                                       ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FString)                                   OwnerType                                                   ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TMap<FString, FVkProjectAccessControl>)    Playtesters                                                 ___ OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkSnapshotDeltaFiles
/// Size: 0x0060 (0x000000 - 0x000060)
class FVkSnapshotDeltaFiles : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FString)                                   SnapshotId                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TMap<FString, FString>)                    DeltaFileLinks                                              ___ OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkProfileBuildResult_Duration
/// Size: 0x0010 (0x000000 - 0x000010)
class FVkProfileBuildResult_Duration : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FDateTime)                                 Start                                                       ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FDateTime)                                 End                                                         ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkProfileBuildResult_Server
/// Size: 0x0070 (0x000000 - 0x000070)
class FVkProfileBuildResult_Server : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FString)                                   BuildId                                                     ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Platform                                                    ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TMap<FString, float>)                      Stat                                                        ___ OFFSET(get<T>, {0x20, 80, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkProfileBuildResult_Client
/// Size: 0x0080 (0x000000 - 0x000080)
class FVkProfileBuildResult_Client : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FString)                                   AccountId                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   BuildId                                                     ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   Platform                                                    ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TMap<FString, float>)                      Stat                                                        ___ OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkProfileBuildResult
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FVkProfileBuildResult : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(float)                                     Score                                                       ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FString)                                   SessionId                                                   ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FVkProfileBuildResult_Duration)            Duration                                                    ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FVkProfileBuildResult_Server)              Server                                                      ___ OFFSET(get<T>, {0x28, 112, 0, 0})
	CMember(TArray<FVkProfileBuildResult_Client>)      Clients                                                     ___ OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkPublishedLink
/// Size: 0x00E8 (0x000000 - 0x0000E8)
class FVkPublishedLink : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FString)                                   LinkCode                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   LinkVersion                                                 ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FDateTime)                                 LastPublished                                               ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FString)                                   base                                                        ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   CommitMessage                                               ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FVkProfileBuildResult)                     ProfileResult                                               ___ OFFSET(get<T>, {0x40, 168, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkProjectDoc
/// Size: 0x0170 (0x000000 - 0x000170)
class FVkProjectDoc : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FString)                                   ProjectID                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FDateTime)                                 Created                                                     ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FVkTypedId)                                Author                                                      ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FVkTypedId)                                Owner                                                       ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FJsonObjectWrapper)                        meta                                                        ___ OFFSET(get<T>, {0x48, 32, 0, 0})
	SMember(FJsonObjectWrapper)                        SysMeta                                                     ___ OFFSET(get<T>, {0x68, 32, 0, 0})
	SMember(FVkPublishedLink)                          LiveLink                                                    ___ OFFSET(get<T>, {0x88, 232, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkLinkCodeInfo
/// Size: 0x0058 (0x000000 - 0x000058)
class FVkLinkCodeInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FString)                                   LinkCode                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Version                                                     ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(bool)                                      IsActive                                                    ___ OFFSET(get<bool>, {0x14, 1, 0, 0})
	SMember(FString)                                   ProjectID                                                   ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   CreatorName                                                 ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FJsonObjectWrapper)                        MetaData                                                    ___ OFFSET(get<T>, {0x38, 32, 0, 0})
};

/// Struct /Script/VkEngineTypes.VkMetaDataFlags
/// Size: 0x0050 (0x000000 - 0x000050)
class FVkMetaDataFlags : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FString, FString>)                    _validation_flags                                           ___ OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Enum /Script/VkEngineTypes.EValkyrieProjectDescriptorFileVersion
/// Size: 0x18
enum EValkyrieProjectDescriptorFileVersion : uint8_t
{
	EValkyrieProjectDescriptorFileVersion__Invalid0                                  = 0,
	EValkyrieProjectDescriptorFileVersion__Initial1                                  = 1,
	EValkyrieProjectDescriptorFileVersion__AddProjectMetadata2                       = 2,
	EValkyrieProjectDescriptorFileVersion__AddedCompatibilityLabel3                  = 3,
	EValkyrieProjectDescriptorFileVersion__AddBindings4                              = 4,
	EValkyrieProjectDescriptorFileVersion__AddEditorPermissions5                     = 5,
	EValkyrieProjectDescriptorFileVersion__AddEpicApp6                               = 6,
	EValkyrieProjectDescriptorFileVersion__AddDataSets7                              = 7,
	EValkyrieProjectDescriptorFileVersion__AddVersionSuffix8                         = 8,
	EValkyrieProjectDescriptorFileVersion__AddProjectKind9                           = 9,
	EValkyrieProjectDescriptorFileVersion__AddMetaDataTags10                         = 10,
	EValkyrieProjectDescriptorFileVersion__RevertMetaDataTags11                      = 11,
	EValkyrieProjectDescriptorFileVersion__AddDocsUrl12                              = 12,
	EValkyrieProjectDescriptorFileVersion__AddTemplateCategory13                     = 13,
	EValkyrieProjectDescriptorFileVersion__BranchDependencies14                      = 14,
	EValkyrieProjectDescriptorFileVersion__LatestPlusOne15                           = 15,
	EValkyrieProjectDescriptorFileVersion__Latest16                                  = 14,
	EValkyrieProjectDescriptorFileVersion__EValkyrieProjectDescriptorFileVersion_MAX17 = 16
};

/// Enum /Script/VkEngineTypes.EValkyrieProjectReferenceDescriptorFileVersion
/// Size: 0x06
enum EValkyrieProjectReferenceDescriptorFileVersion : uint8_t
{
	EValkyrieProjectReferenceDescriptorFileVersion__Invalid0                         = 0,
	EValkyrieProjectReferenceDescriptorFileVersion__Initial1                         = 1,
	EValkyrieProjectReferenceDescriptorFileVersion__AddLinkCode2                     = 2,
	EValkyrieProjectReferenceDescriptorFileVersion__LatestPlusOne3                   = 3,
	EValkyrieProjectReferenceDescriptorFileVersion__Latest4                          = 2,
	EValkyrieProjectReferenceDescriptorFileVersion__EValkyrieProjectReferenceDescriptorFileVersion_MAX5 = 4
};

/// Enum /Script/VkEngineTypes.EValkyrieProjectKind
/// Size: 0x06
enum EValkyrieProjectKind : uint8_t
{
	EValkyrieProjectKind__Island0                                                    = 0,
	EValkyrieProjectKind__Library1                                                   = 1,
	EValkyrieProjectKind__Count2                                                     = 2,
	EValkyrieProjectKind__Unspecified3                                               = 3,
	EValkyrieProjectKind__Default4                                                   = 0,
	EValkyrieProjectKind__EValkyrieProjectKind_MAX5                                  = 4
};

/// Enum /Script/VkEngineTypes.EValkyrieProjectTemplateCategory
/// Size: 0x06
enum EValkyrieProjectTemplateCategory : uint8_t
{
	EValkyrieProjectTemplateCategory__UserGenerated0                                 = 0,
	EValkyrieProjectTemplateCategory__FeatureExample1                                = 1,
	EValkyrieProjectTemplateCategory__SampleProject2                                 = 2,
	EValkyrieProjectTemplateCategory__Count3                                         = 3,
	EValkyrieProjectTemplateCategory__Default4                                       = 0,
	EValkyrieProjectTemplateCategory__EValkyrieProjectTemplateCategory_MAX5          = 4
};

/// Enum /Script/VkEngineTypes.EConsumerRole
/// Size: 0x04
enum EConsumerRole : uint8_t
{
	EConsumerRole__Server0                                                           = 0,
	EConsumerRole__Client1                                                           = 1,
	EConsumerRole__Editor2                                                           = 2,
	EConsumerRole__EConsumerRole_MAX3                                                = 3
};

/// Enum /Script/VkEngineTypes.EVkLinkPublishMode
/// Size: 0x03
enum EVkLinkPublishMode : uint8_t
{
	EVkLinkPublishMode__Live0                                                        = 0,
	EVkLinkPublishMode__Playtest1                                                    = 1,
	EVkLinkPublishMode__EVkLinkPublishMode_MAX2                                      = 2
};

/// Enum /Script/VkEngineTypes.EVkIdType
/// Size: 0x03
enum EVkIdType : uint8_t
{
	EVkIdType__Account0                                                              = 0,
	EVkIdType__Team1                                                                 = 1,
	EVkIdType__EVkIdType_MAX2                                                        = 2
};

/// Enum /Script/VkEngineTypes.EVkTicketStatus
/// Size: 0x05
enum EVkTicketStatus : uint8_t
{
	EVkTicketStatus__None0                                                           = 0,
	EVkTicketStatus__Succeeded1                                                      = 1,
	EVkTicketStatus__Running2                                                        = 2,
	EVkTicketStatus__Failed3                                                         = 3,
	EVkTicketStatus__EVkTicketStatus_MAX4                                            = 4
};

/// Enum /Script/VkEngineTypes.EVkModuleAccess
/// Size: 0x04
enum EVkModuleAccess : uint8_t
{
	EVkModuleAccess__Private0                                                        = 0,
	EVkModuleAccess__Protected1                                                      = 1,
	EVkModuleAccess__Public2                                                         = 2,
	EVkModuleAccess__EVkModuleAccess_MAX3                                            = 3
};

/// Enum /Script/VkEngineTypes.EVkValidationFlags
/// Size: 0x07
enum EVkValidationFlags : uint8_t
{
	EVkValidationFlags__None0                                                        = 0,
	EVkValidationFlags__VF_IgnoreValidation1                                         = 1,
	EVkValidationFlags__VF_AllowMissingGameFeatureDataAsset2                         = 2,
	EVkValidationFlags__VF_AllowEngineContent3                                       = 4,
	EVkValidationFlags__VF_AllowGameContent4                                         = 8,
	EVkValidationFlags__VF_NoPreCheckVerse5                                          = 16,
	EVkValidationFlags__EVkValidationFlags_MAX6                                      = 17
};

