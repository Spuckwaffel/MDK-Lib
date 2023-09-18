/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package GameplayDebugger.

/// Struct /Script/GameplayDebugger.GameplayDebuggerDataPackRPCParams
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameplayDebuggerDataPackRPCParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     CategoryName                                                ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   DataPackIdx                                                 ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FGameplayDebuggerDataPackHeader)           Header                                                      ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<char>)                              Data                                                        ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerDataPackHeader
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayDebuggerDataPackHeader : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int16_t)                                   DataVersion                                                 ___ OFFSET(get<int16_t>, {0x0, 2, 0, 0})
	DMember(int16_t)                                   SyncCounter                                                 ___ OFFSET(get<int16_t>, {0x2, 2, 0, 0})
	DMember(int32_t)                                   DataSize                                                    ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   DataOffset                                                  ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bIsCompressed                                               ___ OFFSET(get<bool>, {0xC, 1, 1, 0})
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerCategoryData
/// Size: 0x0040 (0x000000 - 0x000040)
class FGameplayDebuggerCategoryData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     CategoryName                                                ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FString>)                           TextLines                                                   ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FGameplayDebuggerShape>)            Shapes                                                      ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FGameplayDebuggerDataPackHeader>)   DataPacks                                                   ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bIsEnabled                                                  ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerShape
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameplayDebuggerShape : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FVector>)                           ShapeData                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Description                                                 ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FColor)                                    Color                                                       ___ OFFSET(get<T>, {0x20, 4, 0, 0})
	CMember(EGameplayDebuggerShape)                    Type                                                        ___ OFFSET(get<T>, {0x24, 1, 0, 0})
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerNetPack
/// Size: 0x0018 (0x000000 - 0x000018)
class FGameplayDebuggerNetPack : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(AGameplayDebuggerCategoryReplicator*)      Owner                                                       ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FGameplayDebuggerCategoryData>)     SavedData                                                   ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerDebugActor
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayDebuggerDebugActor : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Actor                                                       ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     ActorName                                                   ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(int16_t)                                   SyncCounter                                                 ___ OFFSET(get<int16_t>, {0xC, 2, 0, 0})
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerVisLogSync
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayDebuggerVisLogSync : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   DeviceIDs                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerInputConfig
/// Size: 0x0030 (0x000000 - 0x000030)
class FGameplayDebuggerInputConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   ConfigName                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FKey)                                      Key                                                         ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	DMember(bool)                                      bModShift                                                   ___ OFFSET(get<bool>, {0x28, 1, 1, 0})
	DMember(bool)                                      bModCtrl                                                    ___ OFFSET(get<bool>, {0x28, 1, 1, 1})
	DMember(bool)                                      bModAlt                                                     ___ OFFSET(get<bool>, {0x28, 1, 1, 2})
	DMember(bool)                                      bModCmd                                                     ___ OFFSET(get<bool>, {0x28, 1, 1, 3})
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerCategoryConfig
/// Size: 0x0030 (0x000000 - 0x000030)
class FGameplayDebuggerCategoryConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   CategoryName                                                ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   SlotIdx                                                     ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(EGameplayDebuggerOverrideMode)             ActiveInGame                                                ___ OFFSET(get<T>, {0x14, 1, 0, 0})
	CMember(EGameplayDebuggerOverrideMode)             ActiveInSimulate                                            ___ OFFSET(get<T>, {0x15, 1, 0, 0})
	CMember(EGameplayDebuggerOverrideMode)             Hidden                                                      ___ OFFSET(get<T>, {0x16, 1, 0, 0})
	DMember(bool)                                      bOverrideSlotIdx                                            ___ OFFSET(get<bool>, {0x18, 1, 1, 0})
	CMember(TArray<FGameplayDebuggerInputConfig>)      InputHandlers                                               ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerExtensionConfig
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameplayDebuggerExtensionConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   ExtensionName                                               ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(EGameplayDebuggerOverrideMode)             UseExtension                                                ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(TArray<FGameplayDebuggerInputConfig>)      InputHandlers                                               ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerPlayerData
/// Size: 0x0018 (0x000000 - 0x000018)
class FGameplayDebuggerPlayerData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UGameplayDebuggerLocalController*)         Controller                                                  ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UInputComponent*)                          InputComponent                                              ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(AGameplayDebuggerCategoryReplicator*)      Replicator                                                  ___ OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Class /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator
/// Size: 0x00B8 (0x000290 - 0x000348)
class AGameplayDebuggerCategoryReplicator : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(APlayerController*)                        OwnerPC                                                     ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	DMember(bool)                                      bIsEnabled                                                  ___ OFFSET(get<bool>, {0x298, 1, 0, 0})
	SMember(FGameplayDebuggerNetPack)                  ReplicatedData                                              ___ OFFSET(get<T>, {0x2A0, 24, 0, 0})
	SMember(FGameplayDebuggerDebugActor)               DebugActor                                                  ___ OFFSET(get<T>, {0x2B8, 16, 0, 0})
	SMember(FGameplayDebuggerVisLogSync)               VisLogSync                                                  ___ OFFSET(get<T>, {0x2C8, 16, 0, 0})
	CMember(UGameplayDebuggerRenderingComponent*)      RenderingComp                                               ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
};

/// Class /Script/GameplayDebugger.GameplayDebuggerConfig
/// Size: 0x0230 (0x000028 - 0x000258)
class UGameplayDebuggerConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 600;

public:
	SMember(FKey)                                      ActivationKey                                               ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FKey)                                      CategoryRowNextKey                                          ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FKey)                                      CategoryRowPrevKey                                          ___ OFFSET(get<T>, {0x58, 24, 0, 0})
	SMember(FKey)                                      CategorySlot0                                               ___ OFFSET(get<T>, {0x70, 24, 0, 0})
	SMember(FKey)                                      CategorySlot1                                               ___ OFFSET(get<T>, {0x88, 24, 0, 0})
	SMember(FKey)                                      CategorySlot2                                               ___ OFFSET(get<T>, {0xA0, 24, 0, 0})
	SMember(FKey)                                      CategorySlot3                                               ___ OFFSET(get<T>, {0xB8, 24, 0, 0})
	SMember(FKey)                                      CategorySlot4                                               ___ OFFSET(get<T>, {0xD0, 24, 0, 0})
	SMember(FKey)                                      CategorySlot5                                               ___ OFFSET(get<T>, {0xE8, 24, 0, 0})
	SMember(FKey)                                      CategorySlot6                                               ___ OFFSET(get<T>, {0x100, 24, 0, 0})
	SMember(FKey)                                      CategorySlot7                                               ___ OFFSET(get<T>, {0x118, 24, 0, 0})
	SMember(FKey)                                      CategorySlot8                                               ___ OFFSET(get<T>, {0x130, 24, 0, 0})
	SMember(FKey)                                      CategorySlot9                                               ___ OFFSET(get<T>, {0x148, 24, 0, 0})
	DMember(float)                                     DebugCanvasPaddingLeft                                      ___ OFFSET(get<float>, {0x160, 4, 0, 0})
	DMember(float)                                     DebugCanvasPaddingRight                                     ___ OFFSET(get<float>, {0x164, 4, 0, 0})
	DMember(float)                                     DebugCanvasPaddingTop                                       ___ OFFSET(get<float>, {0x168, 4, 0, 0})
	DMember(float)                                     DebugCanvasPaddingBottom                                    ___ OFFSET(get<float>, {0x16C, 4, 0, 0})
	DMember(bool)                                      bDebugCanvasEnableTextShadow                                ___ OFFSET(get<bool>, {0x170, 1, 0, 0})
	CMember(TArray<FGameplayDebuggerCategoryConfig>)   Categories                                                  ___ OFFSET(get<T>, {0x178, 16, 0, 0})
	CMember(TArray<FGameplayDebuggerExtensionConfig>)  Extensions                                                  ___ OFFSET(get<T>, {0x188, 16, 0, 0})
};

/// Class /Script/GameplayDebugger.GameplayDebuggerUserSettings
/// Size: 0x0010 (0x000030 - 0x000040)
class UGameplayDebuggerUserSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bEnableGameplayDebuggerInEditor                             ___ OFFSET(get<bool>, {0x30, 1, 1, 0})
	DMember(float)                                     MaxViewDistance                                             ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     MaxViewAngle                                                ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   FontSize                                                    ___ OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
};

/// Class /Script/GameplayDebugger.GameplayDebuggerLocalController
/// Size: 0x0060 (0x000028 - 0x000088)
class UGameplayDebuggerLocalController : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(AGameplayDebuggerCategoryReplicator*)      CachedReplicator                                            ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(AGameplayDebuggerPlayerManager*)           CachedPlayerManager                                         ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(AActor*)                                   DebugActorCandidate                                         ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UFont*)                                    HUDFont                                                     ___ OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/GameplayDebugger.GameplayDebuggerPlayerManager
/// Size: 0x0030 (0x000290 - 0x0002C0)
class AGameplayDebuggerPlayerManager : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	CMember(TArray<FGameplayDebuggerPlayerData>)       PlayerData                                                  ___ OFFSET(get<T>, {0x298, 16, 0, 0})
	CMember(TArray<AGameplayDebuggerCategoryReplicator*>) PendingRegistrations                                     ___ OFFSET(get<T>, {0x2A8, 16, 0, 0})
};

/// Class /Script/GameplayDebugger.GameplayDebuggerRenderingComponent
/// Size: 0x0060 (0x0005C0 - 0x000620)
class UGameplayDebuggerRenderingComponent : public UDebugDrawComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1568;

public:
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

