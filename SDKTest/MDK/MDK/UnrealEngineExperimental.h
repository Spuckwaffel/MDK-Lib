
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
	CMember(TArray<FPersistentLineBatcher>)            PersistentLineBatchers                                      ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Struct /Script/UnrealEngineExperimental.PersistentLineBatcher
/// Size: 0x0010 (0x000000 - 0x000010)
class FPersistentLineBatcher : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(ULineBatchComponent*)                      PersistentLineBatcher                                       ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/UnrealEngineExperimental.ScriptDiagnosticSourceLocation
/// Size: 0x0020 (0x000000 - 0x000020)
class FScriptDiagnosticSourceLocation : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   FilePath                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FIntPoint)                                 RowSpan                                                     ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FIntPoint)                                 ColSpan                                                     ___ OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/UnrealEngineExperimental.ScriptDiagnosticMessage
/// Size: 0x0058 (0x000000 - 0x000058)
class FScriptDiagnosticMessage : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TEnumAsByte<EScriptDiagnosticMessageType>) MessageType                                                 ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FDateTime)                                 Timestamp                                                   ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FString)                                   Channel                                                     ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FText)                                     MessageStr                                                  ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FScriptDiagnosticSourceLocation)           SourceLocation                                              ___ OFFSET(get<T>, {0x38, 32, 0, 0})
};

/// Struct /Script/UnrealEngineExperimental.ScriptScreenLogMessage
/// Size: 0x0008 (0x000058 - 0x000060)
class FScriptScreenLogMessage : public FScriptDiagnosticMessage
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FColor)                                    ScreenColor                                                 ___ OFFSET(get<T>, {0x58, 4, 0, 0})
	DMember(float)                                     DisplayDuration                                             ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
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

