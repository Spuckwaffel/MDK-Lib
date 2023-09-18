/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package OnlineSubsystemEOS.

/// Struct /Script/OnlineSubsystemEOS.ArtifactSettings
/// Size: 0x0070 (0x000000 - 0x000070)
class FArtifactSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FString)                                   ArtifactName                                                ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ClientId                                                    ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   ClientSecret                                                ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   ProductId                                                   ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   SandboxId                                                   ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   DeploymentId                                                ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   ClientEncryptionKey                                         ___ OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemEOS.NetDriverEOS
/// Size: 0x0000 (0x000870 - 0x000870)
class UNetDriverEOS : public UNetDriverEOSBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2160;

public:
};

/// Class /Script/OnlineSubsystemEOS.EOSArtifactSettings
/// Size: 0x0000 (0x000030 - 0x000030)
class UEOSArtifactSettings : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/OnlineSubsystemEOS.EOSSettings
/// Size: 0x0068 (0x000038 - 0x0000A0)
class UEOSSettings : public URuntimeOptionsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FString)                                   CacheDir                                                    ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   DefaultArtifactName                                         ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(int32_t)                                   TickBudgetInMilliseconds                                    ___ OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(bool)                                      bEnableOverlay                                              ___ OFFSET(get<bool>, {0x5C, 1, 0, 0})
	DMember(bool)                                      bEnableSocialOverlay                                        ___ OFFSET(get<bool>, {0x5D, 1, 0, 0})
	DMember(bool)                                      bEnableEditorOverlay                                        ___ OFFSET(get<bool>, {0x5E, 1, 0, 0})
	DMember(bool)                                      bShouldEnforceBeingLaunchedByEGS                            ___ OFFSET(get<bool>, {0x5F, 1, 0, 0})
	CMember(TArray<FString>)                           TitleStorageTags                                            ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	DMember(int32_t)                                   TitleStorageReadChunkLength                                 ___ OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	CMember(TArray<FArtifactSettings>)                 Artifacts                                                   ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<FString>)                           AuthScopeFlags                                              ___ OFFSET(get<T>, {0x88, 16, 0, 0})
	DMember(bool)                                      bUseEAS                                                     ___ OFFSET(get<bool>, {0x98, 1, 0, 0})
	DMember(bool)                                      bUseEOSConnect                                              ___ OFFSET(get<bool>, {0x99, 1, 0, 0})
	DMember(bool)                                      bMirrorStatsToEOS                                           ___ OFFSET(get<bool>, {0x9A, 1, 0, 0})
	DMember(bool)                                      bMirrorAchievementsToEOS                                    ___ OFFSET(get<bool>, {0x9B, 1, 0, 0})
	DMember(bool)                                      bUseEOSSessions                                             ___ OFFSET(get<bool>, {0x9C, 1, 0, 0})
	DMember(bool)                                      bMirrorPresenceToEAS                                        ___ OFFSET(get<bool>, {0x9D, 1, 0, 0})
};

