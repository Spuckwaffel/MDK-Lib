/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package VKDownloadOnDemandGameplay.

/// Class /Script/VKDownloadOnDemandGameplay.DownloadOnDemandComponent
/// Size: 0x0130 (0x0000A0 - 0x0001D0)
class UDownloadOnDemandComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	CMember(UDownloadOnDemandPlot*)                    Plot                                                        ___ OFFSET(get<T>, {0x1A8, 8, 0, 0})
	CMember(TArray<UDownloadOnDemandProject*>)         UserOwnedProjects                                           ___ OFFSET(get<T>, {0x1B0, 16, 0, 0})
	CMember(TArray<UDownloadOnDemandProjectContent*>)  ShelvedContents                                             ___ OFFSET(get<T>, {0x1C0, 16, 0, 0})
};

/// Class /Script/VKDownloadOnDemandGameplay.DownloadOnDemandPlot
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UDownloadOnDemandPlot : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<UDownloadOnDemandProject*>)         ActiveProjects                                              ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<UDownloadOnDemandProject*>)         PendingProjects                                             ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Class /Script/VKDownloadOnDemandGameplay.DownloadOnDemandProject
/// Size: 0x0108 (0x000028 - 0x000130)
class UDownloadOnDemandProject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(UDownloadOnDemandProjectDescriptor*)       Descriptor                                                  ___ OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(TMap<FString, UDownloadOnDemandProjectContent*>) Contents                                              ___ OFFSET(get<T>, {0xC0, 80, 0, 0})
};

/// Class /Script/VKDownloadOnDemandGameplay.DownloadOnDemandProjectContent
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UDownloadOnDemandProjectContent : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TArray<UFortItemDefinition*>)              ContentItemDefinitions                                      ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FSoftObjectPath>)                   ContentSoftObjectPaths                                      ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FSoftObjectPath>)                   LoadFailedContentObjectPaths                                ___ OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Class /Script/VKDownloadOnDemandGameplay.DownloadOnDemandProjectDescriptor
/// Size: 0x0058 (0x000028 - 0x000080)
class UDownloadOnDemandProjectDescriptor : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(UDownloadOnDemandProjectImage*)            Image                                                       ___ OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Class /Script/VKDownloadOnDemandGameplay.DownloadOnDemandProjectImage
/// Size: 0x0038 (0x000028 - 0x000060)
class UDownloadOnDemandProjectImage : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(UTexture2DDynamic*)                        PreviewTexture                                              ___ OFFSET(get<T>, {0x58, 8, 0, 0})
};

