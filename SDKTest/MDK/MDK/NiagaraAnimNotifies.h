
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
/// Size: 0x0048 (0x000030 - 0x000078)
class UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(UNiagaraSystem*)                           Template                                                    ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FName)                                     SocketName                                                  ___ OFFSET(get<T>, {0x38, 4, 0, 0})
	SMember(FVector)                                   LocationOffset                                              ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FRotator)                                  RotationOffset                                              ___ OFFSET(get<T>, {0x58, 24, 0, 0})
	DMember(bool)                                      bDestroyAtEnd                                               ___ OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Class /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced
/// Size: 0x0068 (0x000078 - 0x0000E0)
class UAnimNotifyState_TimedNiagaraEffectAdvanced : public UAnimNotifyState_TimedNiagaraEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	DMember(bool)                                      bEnableNormalizedNotifyProgress                             ___ OFFSET(get<bool>, {0x78, 1, 0, 0})
	SMember(FName)                                     NotifyProgressUserParameter                                 ___ OFFSET(get<T>, {0x7C, 4, 0, 0})
	CMember(TArray<FCurveParameterPair>)               AnimCurves                                                  ___ OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Class /Script/NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
/// Size: 0x0098 (0x000038 - 0x0000D0)
class UAnimNotify_PlayNiagaraEffect : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(UNiagaraSystem*)                           Template                                                    ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FVector)                                   LocationOffset                                              ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FRotator)                                  RotationOffset                                              ___ OFFSET(get<T>, {0x58, 24, 0, 0})
	SMember(FVector)                                   Scale                                                       ___ OFFSET(get<T>, {0x70, 24, 0, 0})
	DMember(bool)                                      bAbsoluteScale                                              ___ OFFSET(get<bool>, {0x88, 1, 0, 0})
	DMember(bool)                                      Attached                                                    ___ OFFSET(get<bool>, {0xC0, 1, 1, 0})
	SMember(FName)                                     SocketName                                                  ___ OFFSET(get<T>, {0xC4, 4, 0, 0})
};

/// Struct /Script/NiagaraAnimNotifies.CurveParameterPair
/// Size: 0x0008 (0x000000 - 0x000008)
class FCurveParameterPair : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     AnimCurveName                                               ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     UserVariableName                                            ___ OFFSET(get<T>, {0x4, 4, 0, 0})
};

