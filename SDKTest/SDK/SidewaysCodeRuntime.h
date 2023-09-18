/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package SidewaysCodeRuntime.

/// Class /Script/SidewaysCodeRuntime.SidewaysCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class USidewaysCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SidewaysCodeRuntime.FortControllerComponent_Sideways
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UFortControllerComponent_Sideways : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FTimerHandle)                              UpdateClosestSidewaysHandle                                 ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/SidewaysCodeRuntime.PlayspaceComponent_SidewaysDimension
/// Size: 0x0050 (0x0000F8 - 0x000148)
class UPlayspaceComponent_SidewaysDimension : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(UAthenaAIServiceLoot*)                     CachedAIServiceLoot                                         ___ OFFSET(get<T>, {0x140, 8, 0, 0})
};

/// Class /Script/SidewaysCodeRuntime.PlayspaceComponent_SidewaysEncounter
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UPlayspaceComponent_SidewaysEncounter : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /Script/SidewaysCodeRuntime.SidewaysStateComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class USidewaysStateComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(ESidewaysState)                            SidewaysState                                               ___ OFFSET(get<T>, {0xA0, 1, 0, 0})
	CMember(ASidewaysPlayspace*)                       SidewaysPlayspace                                           ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSidewaysStateChangedDelegate                              ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Class /Script/SidewaysCodeRuntime.SidewaysStateComponent_Player
/// Size: 0x0048 (0x0000C8 - 0x000110)
class USidewaysStateComponent_Player : public USidewaysStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(TWeakObjectPtr<UMaterialParameterCollection*>) SidewaysMaterialParameterCollection                     ___ OFFSET(get<T>, {0xC8, 32, 0, 0})
	SMember(FName)                                     SidewaysBubbleLocationParameterNamesForLocalPlayers         ___ OFFSET(get<T>, {0xE8, 8, 0, 0})
	SMember(FName)                                     SidewaysBubbleRadiusParameterNamesForLocalPlayers           ___ OFFSET(get<T>, {0xF0, 8, 0, 0})
	DMember(float)                                     ExtraCorruptionRadius                                       ___ OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(float)                                     MinRadiusToHaveAnyCorruption                                ___ OFFSET(get<float>, {0xFC, 4, 0, 0})
	DMember(float)                                     MaxRadiusForScalingExtraCorruptionRadius                    ___ OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(float)                                     UpdateFrequency                                             ___ OFFSET(get<float>, {0x104, 4, 0, 0})
};

/// Class /Script/SidewaysCodeRuntime.SidewaysFeatureAction_HoldGlobalData
/// Size: 0x0030 (0x000028 - 0x000058)
class USidewaysFeatureAction_HoldGlobalData : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TWeakObjectPtr<UMaterialParameterCollection*>) SidewaysMaterialParameterCollection                     ___ OFFSET(get<T>, {0x28, 32, 0, 0})
	SMember(FName)                                     SidewaysBubbleLocationParameterNamesForLocalPlayers         ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FName)                                     SidewaysBubbleRadiusParameterNamesForLocalPlayers           ___ OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Class /Script/SidewaysCodeRuntime.SidewaysLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USidewaysLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SidewaysCodeRuntime.SidewaysPlayspace
/// Size: 0x0000 (0x000698 - 0x000698)
class ASidewaysPlayspace : public AFortPlayspace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1688;

public:
};

/// Class /Script/SidewaysCodeRuntime.SidewaysVolume
/// Size: 0x0000 (0x000330 - 0x000330)
class ASidewaysVolume : public AGameplayVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
};

/// Enum /Script/SidewaysCodeRuntime.ESidewaysState
/// Size: 0x03
enum ESidewaysState : uint8_t
{
	ESidewaysState__InNormalWorld0                                                   = 0,
	ESidewaysState__InSidewaysWorld1                                                 = 1,
	ESidewaysState__ESidewaysState_MAX2                                              = 2
};

