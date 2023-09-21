
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/


/// Struct /Engine/Transient.ChaosDestructionEvent_SWC
/// Size: 0x0044 (0x000000 - 0x000044)
class FChaosDestructionEvent_SWC : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 68;

public:
	SMember(FVector3f)                                 Position                                                    ___ OFFSET(get<T>, {0x0, 12, 0, 0})
	SMember(FVector3f)                                 Normal                                                      ___ OFFSET(get<T>, {0xC, 12, 0, 0})
	SMember(FVector3f)                                 Velocity                                                    ___ OFFSET(get<T>, {0x18, 12, 0, 0})
	SMember(FVector3f)                                 AngularVelocity                                             ___ OFFSET(get<T>, {0x24, 12, 0, 0})
	DMember(float)                                     ExtentMin                                                   ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     ExtentMax                                                   ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   ParticleID                                                  ___ OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(float)                                     Time                                                        ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   Type                                                        ___ OFFSET(get<int32_t>, {0x40, 4, 0, 0})
};

