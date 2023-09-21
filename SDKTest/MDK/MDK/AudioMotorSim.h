
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AudioMotorSim.AudioMotorModelComponent
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UAudioMotorModelComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(TArray<FMotorSimEntry>)                    SimComponents                                               ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<TScriptInterface>)                  AudioComponents                                             ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Class /Script/AudioMotorSim.AudioMotorSim
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioMotorSim : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioMotorSim.AudioMotorSimComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UAudioMotorSimComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/AudioMotorSim.AudioMotorSimOutput
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioMotorSimOutput : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/AudioMotorSim.AudioMotorSimInputContext
/// Size: 0x002C (0x000000 - 0x00002C)
class FAudioMotorSimInputContext : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 44;

public:
	DMember(float)                                     DeltaTime                                                   ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Speed                                                       ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ForwardSpeed                                                ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     SideSpeed                                                   ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     UpSpeed                                                     ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Throttle                                                    ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Brake                                                       ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     SurfaceFrictionModifier                                     ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     MotorFrictionModifier                                       ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     Boost                                                       ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(bool)                                      bDriving                                                    ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bGrounded                                                   ___ OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bCanShift                                                   ___ OFFSET(get<bool>, {0x2A, 1, 0, 0})
	DMember(bool)                                      bClutchEngaged                                              ___ OFFSET(get<bool>, {0x2B, 1, 0, 0})
};

/// Struct /Script/AudioMotorSim.AudioMotorSimRuntimeContext
/// Size: 0x0014 (0x000000 - 0x000014)
class FAudioMotorSimRuntimeContext : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(bool)                                      bShifting                                                   ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   Gear                                                        ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     RPM                                                         ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Volume                                                      ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Pitch                                                       ___ OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/AudioMotorSim.MotorSimEntry
/// Size: 0x0018 (0x000000 - 0x000018)
class FMotorSimEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TScriptInterface<Class>)                   Sim                                                         ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   SortOrder                                                   ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

