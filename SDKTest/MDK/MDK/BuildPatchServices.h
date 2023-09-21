
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/BuildPatchServices.BuildPatchManifest
/// Size: 0x00F8 (0x000028 - 0x000120)
class UBuildPatchManifest : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	DMember(char)                                      ManifestFileVersion                                         ___ OFFSET(get<char>, {0x28, 1, 0, 0})
	DMember(bool)                                      bIsFileData                                                 ___ OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(uint32_t)                                  AppID                                                       ___ OFFSET(get<uint32_t>, {0x2C, 4, 0, 0})
	SMember(FString)                                   AppName                                                     ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   BuildVersion                                                ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   LaunchExe                                                   ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   LaunchCommand                                               ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TSet<FString>)                             PrereqIds                                                   ___ OFFSET(get<T>, {0x70, 80, 0, 0})
	SMember(FString)                                   PrereqName                                                  ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FString)                                   PrereqPath                                                  ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FString)                                   PrereqArgs                                                  ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(TArray<FFileManifestData>)                 FileManifestList                                            ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
	CMember(TArray<FChunkInfoData>)                    ChunkList                                                   ___ OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(TArray<FCustomFieldData>)                  CustomFields                                                ___ OFFSET(get<T>, {0x110, 16, 0, 0})
};

/// Struct /Script/BuildPatchServices.CustomFieldData
/// Size: 0x0020 (0x000000 - 0x000020)
class FCustomFieldData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Key                                                         ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Value                                                       ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/BuildPatchServices.SHAHashData
/// Size: 0x0014 (0x000000 - 0x000014)
class FSHAHashData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(char)                                      Hash                                                        ___ OFFSET(get<char>, {0x0, 20, 0, 0})
};

/// Struct /Script/BuildPatchServices.ChunkInfoData
/// Size: 0x0040 (0x000000 - 0x000040)
class FChunkInfoData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGuid)                                     Guid                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(uint64_t)                                  Hash                                                        ___ OFFSET(get<uint64_t>, {0x10, 8, 0, 0})
	SMember(FSHAHashData)                              ShaHash                                                     ___ OFFSET(get<T>, {0x18, 20, 0, 0})
	DMember(int64_t)                                   FileSize                                                    ___ OFFSET(get<int64_t>, {0x30, 8, 0, 0})
	DMember(char)                                      GroupNumber                                                 ___ OFFSET(get<char>, {0x38, 1, 0, 0})
};

/// Struct /Script/BuildPatchServices.ChunkPartData
/// Size: 0x0018 (0x000000 - 0x000018)
class FChunkPartData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGuid)                                     Guid                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(uint32_t)                                  Offset                                                      ___ OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
	DMember(uint32_t)                                  Size                                                        ___ OFFSET(get<uint32_t>, {0x14, 4, 0, 0})
};

/// Struct /Script/BuildPatchServices.FileManifestData
/// Size: 0x0068 (0x000000 - 0x000068)
class FFileManifestData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FString)                                   Filename                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FSHAHashData)                              FileHash                                                    ___ OFFSET(get<T>, {0x10, 20, 0, 0})
	CMember(TArray<FChunkPartData>)                    FileChunkParts                                              ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FString>)                           InstallTags                                                 ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      bIsUnixExecutable                                           ___ OFFSET(get<bool>, {0x48, 1, 0, 0})
	SMember(FString)                                   SymlinkTarget                                               ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bIsReadOnly                                                 ___ OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(bool)                                      bIsCompressed                                               ___ OFFSET(get<bool>, {0x61, 1, 0, 0})
};

