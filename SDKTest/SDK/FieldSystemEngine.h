/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package FieldSystemEngine.

/// Struct /Script/FieldSystemEngine.FieldObjectCommands
/// Size: 0x0030 (0x000000 - 0x000030)
class FFieldObjectCommands : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FName>)                             TargetNames                                                 ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<UFieldNodeBase*>)                   RootNodes                                                   ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<UFieldSystemMetaData*>)             MetaDatas                                                   ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Class /Script/FieldSystemEngine.FieldSystemActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AFieldSystemActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(UFieldSystemComponent*)                    FieldSystemComponent                                        ___ OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/FieldSystemEngine.FieldSystem
/// Size: 0x0010 (0x000028 - 0x000038)
class UFieldSystem : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/FieldSystemEngine.FieldSystemComponent
/// Size: 0x00D0 (0x000570 - 0x000640)
class UFieldSystemComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1600;

public:
	CMember(UFieldSystem*)                             FieldSystem                                                 ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	DMember(bool)                                      bIsWorldField                                               ___ OFFSET(get<bool>, {0x570, 1, 0, 0})
	DMember(bool)                                      bIsChaosField                                               ___ OFFSET(get<bool>, {0x571, 1, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    SupportedSolvers                                            ___ OFFSET(get<T>, {0x578, 16, 0, 0})
	SMember(FFieldObjectCommands)                      ConstructionCommands                                        ___ OFFSET(get<T>, {0x588, 48, 0, 0})
	SMember(FFieldObjectCommands)                      BufferCommands                                              ___ OFFSET(get<T>, {0x5B8, 48, 0, 0})
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaData
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFieldSystemMetaData : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaDataIteration
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UFieldSystemMetaDataIteration : public UFieldSystemMetaData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(int32_t)                                   Iterations                                                  ___ OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaDataProcessingResolution
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TEnumAsByte<EFieldResolutionType>)         ResolutionType                                              ___ OFFSET(get<T>, {0xA0, 1, 0, 0})
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaDataFilter
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UFieldSystemMetaDataFilter : public UFieldSystemMetaData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TEnumAsByte<EFieldFilterType>)             FilterType                                                  ___ OFFSET(get<T>, {0xA0, 1, 0, 0})
	CMember(TEnumAsByte<EFieldObjectType>)             ObjectType                                                  ___ OFFSET(get<T>, {0xA1, 1, 0, 0})
	CMember(TEnumAsByte<EFieldPositionType>)           PositionType                                                ___ OFFSET(get<T>, {0xA2, 1, 0, 0})
};

/// Class /Script/FieldSystemEngine.FieldNodeBase
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFieldNodeBase : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/FieldSystemEngine.FieldNodeInt
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFieldNodeInt : public UFieldNodeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/FieldSystemEngine.FieldNodeFloat
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFieldNodeFloat : public UFieldNodeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/FieldSystemEngine.FieldNodeVector
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFieldNodeVector : public UFieldNodeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/FieldSystemEngine.UniformInteger
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UUniformInteger : public UFieldNodeInt
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(int32_t)                                   Magnitude                                                   ___ OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
};

/// Class /Script/FieldSystemEngine.RadialIntMask
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class URadialIntMask : public UFieldNodeInt
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(float)                                     Radius                                                      ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
	SMember(FVector)                                   Position                                                    ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
	DMember(int32_t)                                   InteriorValue                                               ___ OFFSET(get<int32_t>, {0xC0, 4, 0, 0})
	DMember(int32_t)                                   ExteriorValue                                               ___ OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
	CMember(TEnumAsByte<ESetMaskConditionType>)        SetMaskCondition                                            ___ OFFSET(get<T>, {0xC8, 1, 0, 0})
};

/// Class /Script/FieldSystemEngine.UniformScalar
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UUniformScalar : public UFieldNodeFloat
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(float)                                     Magnitude                                                   ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
};

/// Class /Script/FieldSystemEngine.WaveScalar
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UWaveScalar : public UFieldNodeFloat
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(float)                                     Magnitude                                                   ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
	SMember(FVector)                                   Position                                                    ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
	DMember(float)                                     WaveLength                                                  ___ OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     Period                                                      ___ OFFSET(get<float>, {0xC4, 4, 0, 0})
	CMember(TEnumAsByte<EWaveFunctionType>)            Function                                                    ___ OFFSET(get<T>, {0xC8, 1, 0, 0})
	CMember(TEnumAsByte<EFieldFalloffType>)            Falloff                                                     ___ OFFSET(get<T>, {0xC9, 1, 0, 0})
};

/// Class /Script/FieldSystemEngine.RadialFalloff
/// Size: 0x0038 (0x0000A0 - 0x0000D8)
class URadialFalloff : public UFieldNodeFloat
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	DMember(float)                                     Magnitude                                                   ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     MinRange                                                    ___ OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     MaxRange                                                    ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     Default                                                     ___ OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     Radius                                                      ___ OFFSET(get<float>, {0xB0, 4, 0, 0})
	SMember(FVector)                                   Position                                                    ___ OFFSET(get<T>, {0xB8, 24, 0, 0})
	CMember(TEnumAsByte<EFieldFalloffType>)            Falloff                                                     ___ OFFSET(get<T>, {0xD0, 1, 0, 0})
};

/// Class /Script/FieldSystemEngine.PlaneFalloff
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UPlaneFalloff : public UFieldNodeFloat
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	DMember(float)                                     Magnitude                                                   ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     MinRange                                                    ___ OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     MaxRange                                                    ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     Default                                                     ___ OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     Distance                                                    ___ OFFSET(get<float>, {0xB0, 4, 0, 0})
	SMember(FVector)                                   Position                                                    ___ OFFSET(get<T>, {0xB8, 24, 0, 0})
	SMember(FVector)                                   Normal                                                      ___ OFFSET(get<T>, {0xD0, 24, 0, 0})
	CMember(TEnumAsByte<EFieldFalloffType>)            Falloff                                                     ___ OFFSET(get<T>, {0xE8, 1, 0, 0})
};

/// Class /Script/FieldSystemEngine.BoxFalloff
/// Size: 0x0080 (0x0000A0 - 0x000120)
class UBoxFalloff : public UFieldNodeFloat
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	DMember(float)                                     Magnitude                                                   ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     MinRange                                                    ___ OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     MaxRange                                                    ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     Default                                                     ___ OFFSET(get<float>, {0xAC, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0xB0, 96, 0, 0})
	CMember(TEnumAsByte<EFieldFalloffType>)            Falloff                                                     ___ OFFSET(get<T>, {0x110, 1, 0, 0})
};

/// Class /Script/FieldSystemEngine.NoiseField
/// Size: 0x0070 (0x0000A0 - 0x000110)
class UNoiseField : public UFieldNodeFloat
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	DMember(float)                                     MinRange                                                    ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     MaxRange                                                    ___ OFFSET(get<float>, {0xA4, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0xB0, 96, 0, 0})
};

/// Class /Script/FieldSystemEngine.UniformVector
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UUniformVector : public UFieldNodeVector
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(float)                                     Magnitude                                                   ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
	SMember(FVector)                                   Direction                                                   ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
};

/// Class /Script/FieldSystemEngine.RadialVector
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class URadialVector : public UFieldNodeVector
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(float)                                     Magnitude                                                   ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
	SMember(FVector)                                   Position                                                    ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
};

/// Class /Script/FieldSystemEngine.RandomVector
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class URandomVector : public UFieldNodeVector
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(float)                                     Magnitude                                                   ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
};

/// Class /Script/FieldSystemEngine.OperatorField
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UOperatorField : public UFieldNodeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(float)                                     Magnitude                                                   ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
	CMember(UFieldNodeBase*)                           RightField                                                  ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(UFieldNodeBase*)                           LeftField                                                   ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TEnumAsByte<EFieldOperationType>)          Operation                                                   ___ OFFSET(get<T>, {0xB8, 1, 0, 0})
};

/// Class /Script/FieldSystemEngine.ToIntegerField
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UToIntegerField : public UFieldNodeInt
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(UFieldNodeFloat*)                          FloatField                                                  ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Class /Script/FieldSystemEngine.ToFloatField
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UToFloatField : public UFieldNodeFloat
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(UFieldNodeInt*)                            IntField                                                    ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Class /Script/FieldSystemEngine.CullingField
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UCullingField : public UFieldNodeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(UFieldNodeBase*)                           Culling                                                     ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(UFieldNodeBase*)                           Field                                                       ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(TEnumAsByte<EFieldCullingOperationType>)   Operation                                                   ___ OFFSET(get<T>, {0xB0, 1, 0, 0})
};

/// Class /Script/FieldSystemEngine.ReturnResultsTerminal
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UReturnResultsTerminal : public UFieldNodeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

