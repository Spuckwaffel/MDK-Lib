/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package DeltaFileSystem.

/// Struct /Script/DeltaFileSystem.DeltaAction
/// Size: 0x0020 (0x000000 - 0x000020)
class FDeltaAction : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGuid)                                     ActorGUID                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FDateTime)                                 CommitTime                                                  ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(uint32_t)                                  DataHash                                                    ___ OFFSET(get<uint32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/DeltaFileSystem.AddAction
/// Size: 0x0090 (0x000020 - 0x0000B0)
class FAddAction : public FDeltaAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TWeakObjectPtr<UClass*>)                   ActorClass                                                  ___ OFFSET(get<T>, {0x20, 32, 0, 0})
	SMember(FString)                                   JsonStringObjectForPropertyData                             ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x50, 96, 0, 0})
};

/// Struct /Script/DeltaFileSystem.UpdateAction
/// Size: 0x0010 (0x000020 - 0x000030)
class FUpdateAction : public FDeltaAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   JsonStringObjectForPropertyData                             ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/DeltaFileSystem.DeleteAction
/// Size: 0x0070 (0x000020 - 0x000090)
class FDeleteAction : public FDeltaAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FString)                                   ActorName                                                   ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x30, 96, 0, 0})
};

/// Struct /Script/DeltaFileSystem.DeltaTrackingHandles
/// Size: 0x0050 (0x000000 - 0x000050)
class FDeltaTrackingHandles : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/DeltaFileSystem.DeltaFileSaveHandlerTestContext
/// Size: 0x0008 (0x000028 - 0x000030)
class UDeltaFileSaveHandlerTestContext : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UDeltaFileSaveHandler*)                    SaveHandler                                                 ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/DeltaFileSystem.DeltaFile
/// Size: 0x0000 (0x000028 - 0x000028)
class UDeltaFile : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DeltaFileSystem.DeltaFileApplier
/// Size: 0x0000 (0x000028 - 0x000028)
class UDeltaFileApplier : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DeltaFileSystem.DeltaComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UDeltaComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/DeltaFileSystem.DeltaFileSaveHandler
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UDeltaFileSaveHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/DeltaFileSystem.DeltaFileSubsystem
/// Size: 0x00B8 (0x000030 - 0x0000E8)
class UDeltaFileSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TMap<UWorld*, FDeltaTrackingHandles>)      WorldToTrackingHandles                                      ___ OFFSET(get<T>, {0x30, 80, 0, 0})
	CMember(TMap<FName, UObject*>)                     DeltaFiles                                                  ___ OFFSET(get<T>, {0x80, 80, 0, 0})
	SMember(FSoftClassPath)                            DefaultDeltaFileClass                                       ___ OFFSET(get<T>, {0xD0, 24, 0, 0})
};

/// Class /Script/DeltaFileSystem.MapDelta
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UMapDelta : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FString)                                   PackageToApplyTo                                            ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TMap<FGuid, FAddAction>)                   AddActions                                                  ___ OFFSET(get<T>, {0x40, 80, 0, 0})
	CMember(TArray<FUpdateAction>)                     UpdateActions                                               ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TMap<FGuid, FDeleteAction>)                DeleteActions                                               ___ OFFSET(get<T>, {0xA0, 80, 0, 0})
};

/// Class /Script/DeltaFileSystem.MapDeltaApplier
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UMapDeltaApplier : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

