
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameFeatures
/// dependency: ModularGameplay
/// dependency: NetCore

/// Class /Script/PlayspaceSystem.OverlapComponent
/// Size: 0x0020 (0x000620 - 0x000640)
class UOverlapComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1600;

public:
};

/// Class /Script/PlayspaceSystem.PlayspaceComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPlayspaceComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/PlayspaceSystem.PlayspaceComponent_PlayerSpawning
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UPlayspaceComponent_PlayerSpawning : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bQueueUserForSpawnWhenAdded                                 OFFSET(get<bool>, {0xA0, 1, 0, 0})
	DMember(float)                                     SpawnDelayMin                                               OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     SpawnDelayMax                                               OFFSET(get<float>, {0xA8, 4, 0, 0})
};

/// Class /Script/PlayspaceSystem.PlayspaceComponent_VoiceManager
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPlayspaceComponent_VoiceManager : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning
/// Size: 0x0078 (0x0000A0 - 0x000118)
class UPlayspaceControllerComponent_PlayerSpawning : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FMulticastInlineDelegate)                  OnPlayerQueuedToSpawn                                       OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(ACameraActor*)                             SpawnCameraActor                                            OFFSET(get<T>, {0xB0, 8, 0, 0})
	DMember(bool)                                      bClientReadyForSpawning                                     OFFSET(get<bool>, {0xB8, 1, 0, 0})
	SMember(FReplicatedSpawnInfo)                      ReplicatedSpawnInfo                                         OFFSET(get<T>, {0xC0, 88, 0, 0})
};



	/// Functions
	// Function /Script/PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.ServerMarkReadyForSpawning
	// void ServerMarkReadyForSpawning();                                                                                       // [0x6bb6fe0] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.OnRep_ReplicatedSpawnInfo
	// void OnRep_ReplicatedSpawnInfo();                                                                                        // [0x6bb6f3c] Final|Native|Private 
	// Function /Script/PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.GetSpawnInfo
	// FReplicatedSpawnInfo GetSpawnInfo();                                                                                     // [0x6bb673c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.ClientReplicatedSpawnInfo
	// void ClientReplicatedSpawnInfo(FReplicatedSpawnInfo InReplicatedSpawnInfo);                                              // [0x6bb601c] Final|Net|NetReliableNative|Event|Private|NetClient 
/// Class /Script/PlayspaceSystem.PlayspaceGameStateComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPlayspaceGameStateComponent : public UGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/PlayspaceSystem.PlayspaceGameStateComponent_PlayerSpawningManager
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UPlayspaceGameStateComponent_PlayerSpawningManager : public UPlayspaceGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TArray<FPlayspaceSpawningInfo>)            SpawningUsersArray                                          OFFSET(get<T>, {0xE8, 16, 0, 0})
};

/// Class /Script/PlayspaceSystem.GameFeatureAction_AddPlayspaceComponent
/// Size: 0x0018 (0x000028 - 0x000040)
class UGameFeatureAction_AddPlayspaceComponent : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FPlayspaceComponentConfiguration>)  PlayspaceComponentDataList                                  OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/PlayspaceSystem.GameFeatureAction_CreatePlayspacesFromConfig
/// Size: 0x0018 (0x000028 - 0x000040)
class UGameFeatureAction_CreatePlayspacesFromConfig : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FPlayspaceConfiguration>)           PlayspaceDataList                                           OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/PlayspaceSystem.GameplayVolume
/// Size: 0x00A0 (0x000290 - 0x000330)
class AGameplayVolume : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	CMember(TWeakObjectPtr<UClass*>)                   PlayspaceClassTemplate                                      OFFSET(get<T>, {0x290, 32, 0, 0})
	CMember(EPlayspaceCreationType)                    PlayspaceCreationType                                       OFFSET(get<T>, {0x2B0, 1, 0, 0})
	CMember(UClass*)                                   PlayspaceClass                                              OFFSET(get<T>, {0x2B8, 8, 0, 0})
	DMember(bool)                                      bDestroyPlayspaceOnEndPlay                                  OFFSET(get<bool>, {0x2C0, 1, 0, 0})
	CMember(APlayspace*)                               Playspace                                                   OFFSET(get<T>, {0x2C8, 8, 0, 0})
	SMember(FGameplayTagContainer)                     VolumeTags                                                  OFFSET(get<T>, {0x2D0, 32, 0, 0})
	CMember(UOverlapComponent*)                        BoundsComponent                                             OFFSET(get<T>, {0x2F0, 8, 0, 0})
};



	/// Functions
	// Function /Script/PlayspaceSystem.GameplayVolume.UpdateSize
	// void UpdateSize(FVector& NewScale);                                                                                      // [0x6bb702c] Native|Public|HasOutParms|HasDefaults 
	// Function /Script/PlayspaceSystem.GameplayVolume.OnOverlappedPawnControllerChanged
	// void OnOverlappedPawnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController);             // [0x6bb6bb8] Native|Protected     
	// Function /Script/PlayspaceSystem.GameplayVolume.InitializeBoundsComponent
	// void InitializeBoundsComponent(UOverlapComponent* NewBoundsComponent);                                                   // [0x6bb6794] Final|Native|Private|BlueprintCallable 
	// Function /Script/PlayspaceSystem.GameplayVolume.GetPlayspace
	// APlayspace* GetPlayspace();                                                                                              // [0x29c0cf8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
/// Class /Script/PlayspaceSystem.Playspace
/// Size: 0x02F0 (0x000290 - 0x000580)
class APlayspace : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	SMember(FMulticastInlineDelegate)                  NotifyPlayspaceUserAdded                                    OFFSET(get<T>, {0x290, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  NotifyPlayspaceUserRemoved                                  OFFSET(get<T>, {0x2B8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  NotifyPlayspaceInitialized                                  OFFSET(get<T>, {0x2E0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  NotifyStartMatch                                            OFFSET(get<T>, {0x320, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  NotifyEndMatch                                              OFFSET(get<T>, {0x348, 16, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTags                                                OFFSET(get<T>, {0x370, 32, 0, 0})
	SMember(FGameplayTag)                              RequestedPlayspaceParentTag                                 OFFSET(get<T>, {0x390, 4, 0, 0})
	CMember(TArray<UClass*>)                           ChildPlayspaceClasses                                       OFFSET(get<T>, {0x398, 16, 0, 0})
	SMember(FPlayspaceUserList)                        PlayspaceUsers                                              OFFSET(get<T>, {0x3A8, 376, 0, 0})
	CMember(TArray<APlayspace*>)                       ChildPlayspaces                                             OFFSET(get<T>, {0x520, 16, 0, 0})
	CMember(TArray<FUniqueNetIdRepl>)                  PendingUsers                                                OFFSET(get<T>, {0x530, 16, 0, 0})
	DMember(bool)                                      bAutoStartMatchOnServerStart                                OFFSET(get<bool>, {0x540, 1, 0, 0})
	CMember(EWithinBoundsEvaluationType)               BoundsEvaluationType                                        OFFSET(get<T>, {0x541, 1, 0, 0})
	CMember(UPlayspaceManagerComponent*)               PlayspaceManagerCached                                      OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(AGameplayVolume*)                          BoundGameplayVolume                                         OFFSET(get<T>, {0x550, 8, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x558, 1, 0, 0})
	DMember(bool)                                      bMatchHasEnded                                              OFFSET(get<bool>, {0x55A, 1, 0, 0})
	DMember(float)                                     MatchStartTime                                              OFFSET(get<float>, {0x55C, 4, 0, 0})
};



	/// Functions
	// Function /Script/PlayspaceSystem.Playspace.OnRep_PlayspaceUsers
	// void OnRep_PlayspaceUsers();                                                                                             // [0x1d60cbc] Final|RequiredAPI|Native|Protected 
	// Function /Script/PlayspaceSystem.Playspace.OnRep_MatchStartTime
	// void OnRep_MatchStartTime();                                                                                             // [0x3417154] RequiredAPI|Native|Protected 
	// Function /Script/PlayspaceSystem.Playspace.OnRep_bMatchHasEnded
	// void OnRep_bMatchHasEnded();                                                                                             // [0x31146a0] Final|RequiredAPI|Native|Protected 
	// Function /Script/PlayspaceSystem.Playspace.OnRep_bIsInitialized
	// void OnRep_bIsInitialized();                                                                                             // [0x5e35ca4] Final|RequiredAPI|Native|Protected 
/// Class /Script/PlayspaceSystem.PlayspaceComponent_Logic
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPlayspaceComponent_Logic : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/PlayspaceSystem.PlayspaceComponent_PlayerManager
/// Size: 0x0120 (0x0000A0 - 0x0001C0)
class UPlayspaceComponent_PlayerManager : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	CMember(TArray<FPlayspace_ControllerComponentInfo>) ControllerComponents                                       OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FPlayspace_PlayerStateComponentInfo>) PlayerStateComponents                                     OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<FPlayspace_ActorComponentInfo>)     ActorComponents                                             OFFSET(get<T>, {0xC0, 16, 0, 0})
};



	/// Functions
	// Function /Script/PlayspaceSystem.PlayspaceComponent_PlayerManager.OnPlayerPawnSet
	// void OnPlayerPawnSet(APlayerState* Player, APawn* NewPawn, APawn* OldPawn);                                              // [0x6bb6e3c] Final|Native|Protected 
/// Class /Script/PlayspaceSystem.PlayspaceLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UPlayspaceLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/PlayspaceSystem.PlayspaceLogic
/// Size: 0x0010 (0x000290 - 0x0002A0)
class APlayspaceLogic : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(APlayspace*)                               Playspace                                                   OFFSET(get<T>, {0x290, 8, 0, 0})
	DMember(bool)                                      bAutoStartMatchOnServerStart                                OFFSET(get<bool>, {0x298, 1, 0, 0})
	DMember(bool)                                      bMatchHasEnded                                              OFFSET(get<bool>, {0x29A, 1, 0, 0})
	DMember(float)                                     MatchStartTime                                              OFFSET(get<float>, {0x29C, 4, 0, 0})
};



	/// Functions
	// Function /Script/PlayspaceSystem.PlayspaceLogic.OnRep_MatchStartTime
	// void OnRep_MatchStartTime();                                                                                             // [0x2c813d4] Native|Protected     
	// Function /Script/PlayspaceSystem.PlayspaceLogic.OnRep_bMatchHasEnded
	// void OnRep_bMatchHasEnded();                                                                                             // [0xfcc560] Final|Native|Private 
/// Class /Script/PlayspaceSystem.PlayspaceManagerComponent
/// Size: 0x01B0 (0x0000A0 - 0x000250)
class UPlayspaceManagerComponent : public UGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	CMember(APlayspace*)                               RootPlayspace                                               OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(EPlayspaceRootType)                        PlayspaceRootType                                           OFFSET(get<T>, {0xC0, 1, 0, 0})
	CMember(TArray<FActorOverlapEvent>)                UnhandledEnterEvents                                        OFFSET(get<T>, {0x1E0, 16, 0, 0})
	CMember(TArray<FActorOverlapEvent>)                UnhandledExitEvents                                         OFFSET(get<T>, {0x1F0, 16, 0, 0})
	CMember(TSet<APlayerController*>)                  UnassignedPlayers                                           OFFSET(get<T>, {0x200, 80, 0, 0})
};



	/// Functions
	// Function /Script/PlayspaceSystem.PlayspaceManagerComponent.ProcessOverlapEvents
	// bool ProcessOverlapEvents(float DeltaTime);                                                                              // [0x6bb6f50] Final|Native|Private 
	// Function /Script/PlayspaceSystem.PlayspaceManagerComponent.OnRep_RootPlayspace
	// void OnRep_RootPlayspace();                                                                                              // [0x2c48724] Final|Native|Private 
	// Function /Script/PlayspaceSystem.PlayspaceManagerComponent.OnPlayerEndOverlapGameplayVolume
	// void OnPlayerEndOverlapGameplayVolume(APlayerState* PlayerState, AGameplayVolume* Volume);                               // [0x6bb6d78] Final|Native|Private 
	// Function /Script/PlayspaceSystem.PlayspaceManagerComponent.OnPlayerBeginOverlapGameplayVolume
	// void OnPlayerBeginOverlapGameplayVolume(APlayerState* PlayerState, AGameplayVolume* Volume);                             // [0x6bb6cb4] Final|Native|Private 
/// Class /Script/PlayspaceSystem.PlayspaceSpawnActor
/// Size: 0x0008 (0x000290 - 0x000298)
class APlayspaceSpawnActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(USceneComponent*)                          SceneComponent                                              OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Struct /Script/PlayspaceSystem.PlayspaceUser
/// Size: 0x004C (0x00000C - 0x000058)
class FPlayspaceUser : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FUniqueNetIdRepl)                          UserId                                                      OFFSET(get<T>, {0x10, 48, 0, 0})
	CMember(APlayspace*)                               LeafPlayspace                                               OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(APlayerState*)                             PlayerStateCached                                           OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(AController*)                              ControllerCached                                            OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/PlayspaceSystem.ReplicatedSpawnInfo
/// Size: 0x0058 (0x000000 - 0x000058)
class FReplicatedSpawnInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FVector)                                   SpawnLocation                                               OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FRotator)                                  SpawnRotation                                               OFFSET(get<T>, {0x18, 24, 0, 0})
	DMember(float)                                     ServerSpawnTime                                             OFFSET(get<float>, {0x30, 4, 0, 0})
	SMember(FVector)                                   LastLocation                                                OFFSET(get<T>, {0x38, 24, 0, 0})
	DMember(float)                                     MinTimeForCameraFadeTransition                              OFFSET(get<float>, {0x50, 4, 0, 0})
};

/// Struct /Script/PlayspaceSystem.PlayspaceSpawningInfo
/// Size: 0x0098 (0x000000 - 0x000098)
class FPlayspaceSpawningInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FUniqueNetIdRepl)                          UserId                                                      OFFSET(get<T>, {0x0, 48, 0, 0})
	CMember(TWeakObjectPtr<APlayspace*>)               RequestingPlayspace                                         OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(AActor*)                                   SpawnLocationActor                                          OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FVector)                                   SpawnLocation                                               OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FRotator)                                  SpawnRotation                                               OFFSET(get<T>, {0x58, 24, 0, 0})
	DMember(float)                                     SpawnTimeServer                                             OFFSET(get<float>, {0x70, 4, 0, 0})
	SMember(FVector)                                   LastLocation                                                OFFSET(get<T>, {0x78, 24, 0, 0})
	DMember(float)                                     MinTimeForCameraFadeTransition                              OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(bool)                                      bIsRespawnFromDeath                                         OFFSET(get<bool>, {0x94, 1, 0, 0})
};

/// Struct /Script/PlayspaceSystem.PlayspaceComponentConfiguration
/// Size: 0x0088 (0x000000 - 0x000088)
class FPlayspaceComponentConfiguration : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TWeakObjectPtr<UClass*>)                   PlayspaceComponentClass                                     OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(EPlayspaceComponentCreationType)           CreationType                                                OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FGameplayTagQuery)                         TagQuery                                                    OFFSET(get<T>, {0x28, 72, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(get<T>, {0x70, 24, 0, 0})
};

/// Struct /Script/PlayspaceSystem.PlayspaceConfiguration
/// Size: 0x0028 (0x000000 - 0x000028)
class FPlayspaceConfiguration : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UClass*>)                   PlayspaceClass                                              OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(EPlayspaceCreationType)                    CreationType                                                OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/PlayspaceSystem.Playspace_ComponentInfo_Base
/// Size: 0x0010 (0x000000 - 0x000010)
class FPlayspace_ComponentInfo_Base : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bCreateOnClient                                             OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bCreateOnServer                                             OFFSET(get<bool>, {0x9, 1, 0, 0})
};

/// Struct /Script/PlayspaceSystem.Playspace_ControllerComponentInfo
/// Size: 0x0008 (0x000010 - 0x000018)
class FPlayspace_ControllerComponentInfo : public FPlayspace_ComponentInfo_Base
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UClass*)                                   ComponentClass                                              OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/PlayspaceSystem.Playspace_PlayerStateComponentInfo
/// Size: 0x0008 (0x000010 - 0x000018)
class FPlayspace_PlayerStateComponentInfo : public FPlayspace_ComponentInfo_Base
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UClass*)                                   ComponentClass                                              OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/PlayspaceSystem.Playspace_ActorComponentInfo
/// Size: 0x0008 (0x000010 - 0x000018)
class FPlayspace_ActorComponentInfo : public FPlayspace_ComponentInfo_Base
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UClass*)                                   ComponentClass                                              OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/PlayspaceSystem.ActorOverlapEvent
/// Size: 0x0010 (0x000000 - 0x000010)
class FActorOverlapEvent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(APlayerState*)                             PlayerState                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(AGameplayVolume*)                          Volume                                                      OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/PlayspaceSystem.PlayspaceUserList
/// Size: 0x0070 (0x000108 - 0x000178)
class FPlayspaceUserList : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	CMember(TArray<FPlayspaceUser>)                    PlayspaceUsers                                              OFFSET(get<T>, {0x108, 16, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x16C, 1, 0, 0})
	CMember(APlayspace*)                               Playspace                                                   OFFSET(get<T>, {0x170, 8, 0, 0})
};

/// Enum /Script/PlayspaceSystem.EPlayspaceCreationType
/// Size: 0x05
enum EPlayspaceCreationType : uint8_t
{
	EPlayspaceCreationType__ChildOfRoot0                                             = 0,
	EPlayspaceCreationType__RootDestroy1                                             = 1,
	EPlayspaceCreationType__RootInserted2                                            = 2,
	EPlayspaceCreationType__RootDoNotClobber3                                        = 3,
	EPlayspaceCreationType__EPlayspaceCreationType_MAX4                              = 4
};

/// Enum /Script/PlayspaceSystem.EWithinBoundsEvaluationType
/// Size: 0x04
enum EWithinBoundsEvaluationType : uint8_t
{
	EWithinBoundsEvaluationType__UseOverlaps0                                        = 0,
	EWithinBoundsEvaluationType__UseBoxBounds1                                       = 1,
	EWithinBoundsEvaluationType__UseSphereBounds2                                    = 2,
	EWithinBoundsEvaluationType__EWithinBoundsEvaluationType_MAX3                    = 3
};

/// Enum /Script/PlayspaceSystem.EPlayspaceComponentCreationType
/// Size: 0x04
enum EPlayspaceComponentCreationType : uint8_t
{
	EPlayspaceComponentCreationType__Root0                                           = 0,
	EPlayspaceComponentCreationType__ByLocation1                                     = 1,
	EPlayspaceComponentCreationType__ByTags2                                         = 2,
	EPlayspaceComponentCreationType__EPlayspaceComponentCreationType_MAX3            = 3
};

/// Enum /Script/PlayspaceSystem.EPlayspaceRootType
/// Size: 0x03
enum EPlayspaceRootType : uint8_t
{
	EPlayspaceRootType__ShouldBeRoot0                                                = 0,
	EPlayspaceRootType__ShouldBeClobbered1                                           = 1,
	EPlayspaceRootType__EPlayspaceRootType_MAX2                                      = 2
};

