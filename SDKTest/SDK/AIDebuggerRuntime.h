/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AIDebuggerRuntime.

/// Class /Script/AIDebuggerRuntime.AIDebuggerCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UAIDebuggerCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIDebuggerRuntime.AIDebuggerRendererComponent
/// Size: 0x00A0 (0x000570 - 0x000610)
class UAIDebuggerRendererComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1552;

public:
	CMember(UMaterial*)                                NavMeshMaterial                                             ___ OFFSET(get<T>, {0x600, 8, 0, 0})
	DMember(float)                                     NavLinkLineThickness                                        ___ OFFSET(get<float>, {0x608, 4, 0, 0})
	DMember(float)                                     NavLinkMaxDrawDistance                                      ___ OFFSET(get<float>, {0x60C, 4, 0, 0})
};

/// Class /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger
/// Size: 0x0038 (0x0000A8 - 0x0000E0)
class UFortControllerComponent_AIDebugger : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(APlayerController*)                        OwnerPC                                                     ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(UClass*)                                   NavMeshRendererComponentClass                               ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
	DMember(char)                                      DefaultEnabledVisualizers                                   ___ OFFSET(get<char>, {0xB8, 1, 0, 0})
	DMember(int32_t)                                   DefaultNavDataIndexToDisplay                                ___ OFFSET(get<int32_t>, {0xBC, 4, 0, 0})
	DMember(char)                                      EnabledVisualizers                                          ___ OFFSET(get<char>, {0xC0, 1, 0, 0})
	DMember(char)                                      NumNavMeshes                                                ___ OFFSET(get<char>, {0xC1, 1, 0, 0})
};

/// Enum /Script/AIDebuggerRuntime.EAIDebuggerVisualization
/// Size: 0x03
enum EAIDebuggerVisualization : uint8_t
{
	EAIDebuggerVisualization__INVALID0                                               = 0,
	EAIDebuggerVisualization__NavMesh1                                               = 1,
	EAIDebuggerVisualization__EAIDebuggerVisualization_MAX2                          = 2
};

