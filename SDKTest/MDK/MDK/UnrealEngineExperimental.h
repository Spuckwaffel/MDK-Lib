
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ModularGameplay

/// Class /Script/UnrealEngineExperimental.ControllerComponentDebugDraw
/// Size: 0x0068 (0x0000A0 - 0x000108)
class UControllerComponentDebugDraw : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(TArray<FPersistentLineBatcher>)            PersistentLineBatchers                                      OFFSET(get<T>, {0xA0, 16, 0, 0})


	/// Functions
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.SetDebugDrawEnabled
	// void SetDebugDrawEnabled(bool bEnabled, uint32_t ChannelId);                                                             // [0x66c5ebc] RequiredAPI|Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.Reset
	// void Reset(uint32_t ChannelId);                                                                                          // [0x66c5d64] RequiredAPI|Net|NetReliableNative|Event|Public|NetClient|Const 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.DrawDebugSphereInternal
	// void DrawDebugSphereInternal(FVector Center, float Radius, int32_t Segments, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // [0x66c5370] Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.DrawDebugPointInternal
	// void DrawDebugPointInternal(FVector Position, float Size, FColor Color, bool bPersistentLines, float Lifetime, uint32_t ChannelId, uint32_t InstanceID); // [0x66c4ba4] Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.DrawDebugLineInternal
	// void DrawDebugLineInternal(FVector LineStart, FVector LineEnd, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // [0x66c42c0] Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.DrawDebugDirectionalArrowInternal
	// void DrawDebugDirectionalArrowInternal(FVector LineStart, FVector LineEnd, float ArrowSize, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // [0x66c38d0] Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.DrawDebugCylinderInternal
	// void DrawDebugCylinderInternal(FVector Start, FVector End, float Radius, int32_t Segments, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // [0x66c2dd4] Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.DrawDebugConeInternal
	// void DrawDebugConeInternal(FVector Origin, FVector Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // [0x66c20bc] Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.DrawDebugCapsuleInternal
	// void DrawDebugCapsuleInternal(FVector Center, float HalfHeight, float Radius, FQuat Rotation, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // [0x66c15c0] Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.DrawDebugBoxInternal
	// void DrawDebugBoxInternal(FVector Center, FVector Extent, FQuat Rotation, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // [0x66c0bd4] Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.ClearChannel
	// void ClearChannel(uint32_t ChannelId);                                                                                   // [0x66c0a7c] RequiredAPI|Net|NetReliableNative|Event|Public|NetClient|Const 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.Clear
	// void Clear(uint32_t ChannelId, uint32_t InstanceID);                                                                     // [0x66c0800] RequiredAPI|Net|NetReliableNative|Event|Public|NetClient|Const 
};

/// Struct /Script/UnrealEngineExperimental.PersistentLineBatcher
/// Size: 0x0010 (0x000000 - 0x000010)
class FPersistentLineBatcher : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(ULineBatchComponent*)                      PersistentLineBatcher                                       OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/UnrealEngineExperimental.ScriptDiagnosticSourceLocation
/// Size: 0x0020 (0x000000 - 0x000020)
class FScriptDiagnosticSourceLocation : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   FilePath                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FIntPoint)                                 RowSpan                                                     OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FIntPoint)                                 ColSpan                                                     OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/UnrealEngineExperimental.ScriptDiagnosticMessage
/// Size: 0x0058 (0x000000 - 0x000058)
class FScriptDiagnosticMessage : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TEnumAsByte<EScriptDiagnosticMessageType>) MessageType                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FDateTime)                                 Timestamp                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FString)                                   Channel                                                     OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FText)                                     MessageStr                                                  OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FScriptDiagnosticSourceLocation)           SourceLocation                                              OFFSET(get<T>, {0x38, 32, 0, 0})
};

/// Struct /Script/UnrealEngineExperimental.ScriptScreenLogMessage
/// Size: 0x0008 (0x000058 - 0x000060)
class FScriptScreenLogMessage : public FScriptDiagnosticMessage
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FColor)                                    ScreenColor                                                 OFFSET(get<T>, {0x58, 4, 0, 0})
	DMember(float)                                     DisplayDuration                                             OFFSET(get<float>, {0x5C, 4, 0, 0})
};

/// Enum /Script/UnrealEngineExperimental.EScriptDiagnosticMessageType
/// Size: 0x06
enum EScriptDiagnosticMessageType : uint8_t
{
	EScriptDiagnosticMessageType__Debug0                                             = 0,
	EScriptDiagnosticMessageType__Verbose1                                           = 1,
	EScriptDiagnosticMessageType__Normal2                                            = 2,
	EScriptDiagnosticMessageType__Warning3                                           = 3,
	EScriptDiagnosticMessageType__Error4                                             = 4,
	EScriptDiagnosticMessageType__EScriptDiagnosticMessageType_MAX5                  = 5
};

