
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OnlineSubsystemUtils
/// dependency: SocketSubsystemEOS

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
	SMember(FString)                                   CacheDir                                                    OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   DefaultArtifactName                                         OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	DMember(int32_t)                                   TickBudgetInMilliseconds                                    OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(bool)                                      bEnableOverlay                                              OFFSET(get<bool>, {0x5C, 1, 0, 0})
	DMember(bool)                                      bEnableSocialOverlay                                        OFFSET(get<bool>, {0x5D, 1, 0, 0})
	DMember(bool)                                      bEnableEditorOverlay                                        OFFSET(get<bool>, {0x5E, 1, 0, 0})
	DMember(bool)                                      bShouldEnforceBeingLaunchedByEGS                            OFFSET(get<bool>, {0x5F, 1, 0, 0})
	CMember(TArray<FString>)                           TitleStorageTags                                            OFFSET(get<T>, {0x60, 16, 0, 0})
	DMember(int32_t)                                   TitleStorageReadChunkLength                                 OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	CMember(TArray<FArtifactSettings>)                 Artifacts                                                   OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<FString>)                           AuthScopeFlags                                              OFFSET(get<T>, {0x88, 16, 0, 0})
	DMember(bool)                                      bUseEAS                                                     OFFSET(get<bool>, {0x98, 1, 0, 0})
	DMember(bool)                                      bUseEOSConnect                                              OFFSET(get<bool>, {0x99, 1, 0, 0})
	DMember(bool)                                      bMirrorStatsToEOS                                           OFFSET(get<bool>, {0x9A, 1, 0, 0})
	DMember(bool)                                      bMirrorAchievementsToEOS                                    OFFSET(get<bool>, {0x9B, 1, 0, 0})
	DMember(bool)                                      bUseEOSSessions                                             OFFSET(get<bool>, {0x9C, 1, 0, 0})
	DMember(bool)                                      bMirrorPresenceToEAS                                        OFFSET(get<bool>, {0x9D, 1, 0, 0})
};

/// Struct /Script/OnlineSubsystemEOS.ArtifactSettings
/// Size: 0x0070 (0x000000 - 0x000070)
class FArtifactSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FString)                                   ArtifactName                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ClientId                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   ClientSecret                                                OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   ProductId                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   SandboxId                                                   OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   DeploymentId                                                OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   ClientEncryptionKey                                         OFFSET(getStruct<T>, {0x60, 16, 0, 0})
};

