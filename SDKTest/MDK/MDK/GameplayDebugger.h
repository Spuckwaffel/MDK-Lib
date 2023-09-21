
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Class /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator
/// Size: 0x00B8 (0x000290 - 0x000348)
class AGameplayDebuggerCategoryReplicator : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(APlayerController*)                        OwnerPC                                                     OFFSET(get<T>, {0x290, 8, 0, 0})
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x298, 1, 0, 0})
	SMember(FGameplayDebuggerNetPack)                  ReplicatedData                                              OFFSET(get<T>, {0x2A0, 24, 0, 0})
	SMember(FGameplayDebuggerDebugActor)               DebugActor                                                  OFFSET(get<T>, {0x2B8, 16, 0, 0})
	SMember(FGameplayDebuggerVisLogSync)               VisLogSync                                                  OFFSET(get<T>, {0x2C8, 16, 0, 0})
	CMember(UGameplayDebuggerRenderingComponent*)      RenderingComp                                               OFFSET(get<T>, {0x2D8, 8, 0, 0})
};



	/// Functions
	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetViewPoint
	// void ServerSetViewPoint(FVector InViewLocation, FVector InViewDirection);                                                // [0x6378f18] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|HasDefaults|NetValidate 
	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetEnabled
	// void ServerSetEnabled(bool bEnable);                                                                                     // [0x6378e68] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetDebugActor
	// void ServerSetDebugActor(AActor* Actor, bool bSelectInEditor);                                                           // [0x6378d70] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetCategoryEnabled
	// void ServerSetCategoryEnabled(int32_t CategoryId, bool bEnable);                                                         // [0x6378c78] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendExtensionInputEvent
	// void ServerSendExtensionInputEvent(int32_t ExtensionId, int32_t HandlerId);                                              // [0x6378b90] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendCategoryInputEvent
	// void ServerSendCategoryInputEvent(int32_t CategoryId, int32_t HandlerId);                                                // [0x6378aa8] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerResetViewPoint
	// void ServerResetViewPoint();                                                                                             // [0x6378a5c] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.OnRep_ReplicatedData
	// void OnRep_ReplicatedData();                                                                                             // [0x6378a1c] Final|RequiredAPI|Native|Protected 
	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.ClientDataPackPacket
	// void ClientDataPackPacket(FGameplayDebuggerDataPackRPCParams Params);                                                    // [0x6378898] RequiredAPI|Net|NetReliableNative|Event|Protected|NetClient 
/// Class /Script/GameplayDebugger.GameplayDebuggerConfig
/// Size: 0x0230 (0x000028 - 0x000258)
class UGameplayDebuggerConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 600;

public:
	SMember(FKey)                                      ActivationKey                                               OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FKey)                                      CategoryRowNextKey                                          OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FKey)                                      CategoryRowPrevKey                                          OFFSET(get<T>, {0x58, 24, 0, 0})
	SMember(FKey)                                      CategorySlot0                                               OFFSET(get<T>, {0x70, 24, 0, 0})
	SMember(FKey)                                      CategorySlot1                                               OFFSET(get<T>, {0x88, 24, 0, 0})
	SMember(FKey)                                      CategorySlot2                                               OFFSET(get<T>, {0xA0, 24, 0, 0})
	SMember(FKey)                                      CategorySlot3                                               OFFSET(get<T>, {0xB8, 24, 0, 0})
	SMember(FKey)                                      CategorySlot4                                               OFFSET(get<T>, {0xD0, 24, 0, 0})
	SMember(FKey)                                      CategorySlot5                                               OFFSET(get<T>, {0xE8, 24, 0, 0})
	SMember(FKey)                                      CategorySlot6                                               OFFSET(get<T>, {0x100, 24, 0, 0})
	SMember(FKey)                                      CategorySlot7                                               OFFSET(get<T>, {0x118, 24, 0, 0})
	SMember(FKey)                                      CategorySlot8                                               OFFSET(get<T>, {0x130, 24, 0, 0})
	SMember(FKey)                                      CategorySlot9                                               OFFSET(get<T>, {0x148, 24, 0, 0})
	DMember(float)                                     DebugCanvasPaddingLeft                                      OFFSET(get<float>, {0x160, 4, 0, 0})
	DMember(float)                                     DebugCanvasPaddingRight                                     OFFSET(get<float>, {0x164, 4, 0, 0})
	DMember(float)                                     DebugCanvasPaddingTop                                       OFFSET(get<float>, {0x168, 4, 0, 0})
	DMember(float)                                     DebugCanvasPaddingBottom                                    OFFSET(get<float>, {0x16C, 4, 0, 0})
	DMember(bool)                                      bDebugCanvasEnableTextShadow                                OFFSET(get<bool>, {0x170, 1, 0, 0})
	CMember(TArray<FGameplayDebuggerCategoryConfig>)   Categories                                                  OFFSET(get<T>, {0x178, 16, 0, 0})
	CMember(TArray<FGameplayDebuggerExtensionConfig>)  Extensions                                                  OFFSET(get<T>, {0x188, 16, 0, 0})
};

/// Class /Script/GameplayDebugger.GameplayDebuggerUserSettings
/// Size: 0x0010 (0x000030 - 0x000040)
class UGameplayDebuggerUserSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bEnableGameplayDebuggerInEditor                             OFFSET(get<bool>, {0x30, 1, 1, 0})
	DMember(float)                                     MaxViewDistance                                             OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     MaxViewAngle                                                OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   FontSize                                                    OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
};

/// Class /Script/GameplayDebugger.GameplayDebuggerLocalController
/// Size: 0x0060 (0x000028 - 0x000088)
class UGameplayDebuggerLocalController : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(AGameplayDebuggerCategoryReplicator*)      CachedReplicator                                            OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(AGameplayDebuggerPlayerManager*)           CachedPlayerManager                                         OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(AActor*)                                   DebugActorCandidate                                         OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UFont*)                                    HUDFont                                                     OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/GameplayDebugger.GameplayDebuggerPlayerManager
/// Size: 0x0030 (0x000290 - 0x0002C0)
class AGameplayDebuggerPlayerManager : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	CMember(TArray<FGameplayDebuggerPlayerData>)       PlayerData                                                  OFFSET(get<T>, {0x298, 16, 0, 0})
	CMember(TArray<AGameplayDebuggerCategoryReplicator*>) PendingRegistrations                                     OFFSET(get<T>, {0x2A8, 16, 0, 0})
};

/// Class /Script/GameplayDebugger.GameplayDebuggerRenderingComponent
/// Size: 0x0060 (0x0005C0 - 0x000620)
class UGameplayDebuggerRenderingComponent : public UDebugDrawComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1568;

public:
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerDataPackRPCParams
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameplayDebuggerDataPackRPCParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     CategoryName                                                OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   DataPackIdx                                                 OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FGameplayDebuggerDataPackHeader)           Header                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<char>)                              Data                                                        OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerDataPackHeader
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayDebuggerDataPackHeader : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int16_t)                                   DataVersion                                                 OFFSET(get<int16_t>, {0x0, 2, 0, 0})
	DMember(int16_t)                                   SyncCounter                                                 OFFSET(get<int16_t>, {0x2, 2, 0, 0})
	DMember(int32_t)                                   DataSize                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   DataOffset                                                  OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bIsCompressed                                               OFFSET(get<bool>, {0xC, 1, 1, 0})
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerCategoryData
/// Size: 0x0040 (0x000000 - 0x000040)
class FGameplayDebuggerCategoryData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     CategoryName                                                OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FString>)                           TextLines                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FGameplayDebuggerShape>)            Shapes                                                      OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FGameplayDebuggerDataPackHeader>)   DataPacks                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerShape
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameplayDebuggerShape : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FVector>)                           ShapeData                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Description                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FColor)                                    Color                                                       OFFSET(get<T>, {0x20, 4, 0, 0})
	CMember(EGameplayDebuggerShape)                    Type                                                        OFFSET(get<T>, {0x24, 1, 0, 0})
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerNetPack
/// Size: 0x0018 (0x000000 - 0x000018)
class FGameplayDebuggerNetPack : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(AGameplayDebuggerCategoryReplicator*)      Owner                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FGameplayDebuggerCategoryData>)     SavedData                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerDebugActor
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayDebuggerDebugActor : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     ActorName                                                   OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(int16_t)                                   SyncCounter                                                 OFFSET(get<int16_t>, {0xC, 2, 0, 0})
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerVisLogSync
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayDebuggerVisLogSync : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   DeviceIDs                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerInputConfig
/// Size: 0x0030 (0x000000 - 0x000030)
class FGameplayDebuggerInputConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   ConfigName                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FKey)                                      Key                                                         OFFSET(get<T>, {0x10, 24, 0, 0})
	DMember(bool)                                      bModShift                                                   OFFSET(get<bool>, {0x28, 1, 1, 0})
	DMember(bool)                                      bModCtrl                                                    OFFSET(get<bool>, {0x28, 1, 1, 1})
	DMember(bool)                                      bModAlt                                                     OFFSET(get<bool>, {0x28, 1, 1, 2})
	DMember(bool)                                      bModCmd                                                     OFFSET(get<bool>, {0x28, 1, 1, 3})
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerCategoryConfig
/// Size: 0x0030 (0x000000 - 0x000030)
class FGameplayDebuggerCategoryConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   CategoryName                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   SlotIdx                                                     OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(EGameplayDebuggerOverrideMode)             ActiveInGame                                                OFFSET(get<T>, {0x14, 1, 0, 0})
	CMember(EGameplayDebuggerOverrideMode)             ActiveInSimulate                                            OFFSET(get<T>, {0x15, 1, 0, 0})
	CMember(EGameplayDebuggerOverrideMode)             Hidden                                                      OFFSET(get<T>, {0x16, 1, 0, 0})
	DMember(bool)                                      bOverrideSlotIdx                                            OFFSET(get<bool>, {0x18, 1, 1, 0})
	CMember(TArray<FGameplayDebuggerInputConfig>)      InputHandlers                                               OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerExtensionConfig
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameplayDebuggerExtensionConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   ExtensionName                                               OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(EGameplayDebuggerOverrideMode)             UseExtension                                                OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(TArray<FGameplayDebuggerInputConfig>)      InputHandlers                                               OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerPlayerData
/// Size: 0x0018 (0x000000 - 0x000018)
class FGameplayDebuggerPlayerData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UGameplayDebuggerLocalController*)         Controller                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UInputComponent*)                          InputComponent                                              OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(AGameplayDebuggerCategoryReplicator*)      Replicator                                                  OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Enum /Script/GameplayDebugger.EGameplayDebuggerOverrideMode
/// Size: 0x04
enum EGameplayDebuggerOverrideMode : uint8_t
{
	EGameplayDebuggerOverrideMode__Enable0                                           = 0,
	EGameplayDebuggerOverrideMode__Disable1                                          = 1,
	EGameplayDebuggerOverrideMode__UseDefault2                                       = 2,
	EGameplayDebuggerOverrideMode__EGameplayDebuggerOverrideMode_MAX3                = 3
};

/// Enum /Script/GameplayDebugger.EGameplayDebuggerShape
/// Size: 0x13
enum EGameplayDebuggerShape : uint8_t
{
	EGameplayDebuggerShape__Invalid0                                                 = 0,
	EGameplayDebuggerShape__Point1                                                   = 1,
	EGameplayDebuggerShape__Segment2                                                 = 2,
	EGameplayDebuggerShape__Box3                                                     = 3,
	EGameplayDebuggerShape__Cone4                                                    = 4,
	EGameplayDebuggerShape__Cylinder5                                                = 5,
	EGameplayDebuggerShape__Circle6                                                  = 6,
	EGameplayDebuggerShape__Rectangle7                                               = 7,
	EGameplayDebuggerShape__Capsule8                                                 = 8,
	EGameplayDebuggerShape__Polygon9                                                 = 9,
	EGameplayDebuggerShape__Polyline10                                               = 10,
	EGameplayDebuggerShape__Arrow11                                                  = 11,
	EGameplayDebuggerShape__EGameplayDebuggerShape_MAX12                             = 12
};

