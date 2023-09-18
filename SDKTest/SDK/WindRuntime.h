/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package WindRuntime.

/// Struct /Script/WindRuntime.RootMotionSource_ConstantWindForce
/// Size: 0x0020 (0x0000E0 - 0x000100)
class FRootMotionSource_ConstantWindForce : public FRootMotionSource
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FVector)                                   Force                                                       ___ OFFSET(get<T>, {0xD8, 24, 0, 0})
	CMember(UCurveFloat*)                              StrengthOverTime                                            ___ OFFSET(get<T>, {0xF0, 8, 0, 0})
};

/// Struct /Script/WindRuntime.PhysicsWindSplineAsyncInPersistent
/// Size: 0x01F0 (0x000000 - 0x0001F0)
class FPhysicsWindSplineAsyncInPersistent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Struct /Script/WindRuntime.PhysicsWindSplineAsyncOutContinuous
/// Size: 0x0001 (0x000000 - 0x000001)
class FPhysicsWindSplineAsyncOutContinuous : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/WindRuntime.WindSplineTargetDatum
/// Size: 0x001C (0x00000C - 0x000028)
class FWindSplineTargetDatum : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Target                                                      ___ OFFSET(get<T>, {0xC, 8, 0, 0})
};

/// Struct /Script/WindRuntime.WindSplineTargetData
/// Size: 0x00B0 (0x000108 - 0x0001B8)
class FWindSplineTargetData : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	CMember(TArray<FWindSplineTargetDatum>)            Items                                                       ___ OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Struct /Script/WindRuntime.WindSplineForceModifiers
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FWindSplineForceModifiers : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FScalableFloat)                            ForwardForceMagnitudeMultiplier                             ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            ReverseForceMagnitudeMultiplier                             ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceOuterRadiusAccelerationMultiplier                ___ OFFSET(get<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceInnerRadiusDecelerationMultiplier                ___ OFFSET(get<T>, {0x78, 40, 0, 0})
};

/// Struct /Script/WindRuntime.WindSplineTagBasedForceModifiers
/// Size: 0x00E8 (0x000000 - 0x0000E8)
class FWindSplineTagBasedForceModifiers : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FGameplayTagQuery)                         Query                                                       ___ OFFSET(get<T>, {0x0, 72, 0, 0})
	SMember(FWindSplineForceModifiers)                 Modifier                                                    ___ OFFSET(get<T>, {0x48, 160, 0, 0})
};

/// Struct /Script/WindRuntime.WindSplineTargetEffects
/// Size: 0x0060 (0x000000 - 0x000060)
class FWindSplineTargetEffects : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FGameplayTagQuery)                         Filter                                                      ___ OFFSET(get<T>, {0x0, 72, 0, 0})
	SMember(FGameplayTag)                              Cue                                                         ___ OFFSET(get<T>, {0x48, 4, 0, 0})
	CMember(TArray<UClass*>)                           GameplayEffects                                             ___ OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/WindRuntime.WindSplineBlockageID
/// Size: 0x0004 (0x000000 - 0x000004)
class FWindSplineBlockageID : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint32_t)                                  ID                                                          ___ OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/WindRuntime.WindSplineSubDivBlockage
/// Size: 0x0008 (0x000000 - 0x000008)
class FWindSplineSubDivBlockage : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   SubDivIdx                                                   ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     StartSectionLength                                          ___ OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/WindRuntime.WindSplineBlockage
/// Size: 0x0024 (0x00000C - 0x000030)
class FWindSplineBlockage : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FWindSplineBlockageID)                     ID                                                          ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	CMember(TArray<FWindSplineSubDivBlockage>)         SubDivBlockages                                             ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(float)                                     ActivationTime                                              ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     DeactivationTime                                            ___ OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Struct /Script/WindRuntime.WindSplineBlockageArray
/// Size: 0x0010 (0x000108 - 0x000118)
class FWindSplineBlockageArray : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<FWindSplineBlockage>)               Items                                                       ___ OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Struct /Script/WindRuntime.WindSplineMeshData
/// Size: 0x0018 (0x000000 - 0x000018)
class FWindSplineMeshData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<UMaterialInstanceDynamic*>)         MeshMaterials                                               ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Class /Script/WindRuntime.FortPlayerWindTunnelAnimInstance
/// Size: 0x0000 (0x0015D0 - 0x0015D0)
class UFortPlayerWindTunnelAnimInstance : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5584;

public:
};

/// Class /Script/WindRuntime.WindCheatManager
/// Size: 0x0018 (0x000028 - 0x000040)
class UWindCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UClass*)                                   InflateEffectClass                                          ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UClass*)                                   DeflateEffectClass                                          ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(int32_t)                                   MinBalloonsOnPlayer                                         ___ OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   MaxBalloonsOnPlayer                                         ___ OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
};

/// Class /Script/WindRuntime.WindField
/// Size: 0x0108 (0x000298 - 0x0003A0)
class AWindField : public AFieldSystemActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	DMember(float)                                     StartTime                                                   ___ OFFSET(get<float>, {0x298, 4, 0, 0})
	DMember(float)                                     StopTime                                                    ___ OFFSET(get<float>, {0x29C, 4, 0, 0})
	DMember(float)                                     IncomingDuration                                            ___ OFFSET(get<float>, {0x2A0, 4, 0, 0})
	DMember(float)                                     OutgoingDuration                                            ___ OFFSET(get<float>, {0x2A4, 4, 0, 0})
	DMember(float)                                     StrengthMultiplier                                          ___ OFFSET(get<float>, {0x2A8, 4, 0, 0})
	DMember(bool)                                      bIsActive                                                   ___ OFFSET(get<bool>, {0x2AC, 1, 0, 0})
};

/// Class /Script/WindRuntime.LinearWindField
/// Size: 0x0090 (0x0003A0 - 0x000430)
class ALinearWindField : public AWindField
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	SMember(FVector)                                   Direction                                                   ___ OFFSET(get<T>, {0x3A0, 24, 0, 0})
	DMember(float)                                     FieldStrength                                               ___ OFFSET(get<float>, {0x3B8, 4, 0, 0})
	DMember(float)                                     ForceStrength                                               ___ OFFSET(get<float>, {0x3BC, 4, 0, 0})
	SMember(FName)                                     PawnForceName                                               ___ OFFSET(get<T>, {0x3C0, 4, 0, 0})
	DMember(float)                                     PawnForceStrength                                           ___ OFFSET(get<float>, {0x3C4, 4, 0, 0})
	CMember(URadialVector*)                            RadialVector                                                ___ OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(URadialFalloff*)                           RadialFalloff                                               ___ OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(UOperatorField*)                           OperatorField                                               ___ OFFSET(get<T>, {0x3D8, 8, 0, 0})
};

/// Class /Script/WindRuntime.RadialWindField
/// Size: 0x0150 (0x0003A0 - 0x0004F0)
class ARadialWindField : public AWindField
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1264;

public:
	SMember(FScalableFloat)                            FieldRadius                                                 ___ OFFSET(get<T>, {0x3A0, 40, 0, 0})
	SMember(FScalableFloat)                            FieldStrength                                               ___ OFFSET(get<T>, {0x3C8, 40, 0, 0})
	SMember(FScalableFloat)                            ForceRadius                                                 ___ OFFSET(get<T>, {0x3F0, 40, 0, 0})
	SMember(FScalableFloat)                            ForceStrength                                               ___ OFFSET(get<T>, {0x418, 40, 0, 0})
	CMember(UCurveFloat*)                              ForceStrengthDistanceFalloff                                ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	SMember(FName)                                     PawnForceName                                               ___ OFFSET(get<T>, {0x448, 4, 0, 0})
	SMember(FScalableFloat)                            PawnForceStrength                                           ___ OFFSET(get<T>, {0x450, 40, 0, 0})
	CMember(UCurveFloat*)                              PawnForceStrengthDistanceFalloff                            ___ OFFSET(get<T>, {0x478, 8, 0, 0})
	DMember(bool)                                      bPawnForceIsPush                                            ___ OFFSET(get<bool>, {0x480, 1, 0, 0})
	CMember(URadialVector*)                            RadialVector                                                ___ OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(URadialFalloff*)                           RadialFalloff                                               ___ OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(UOperatorField*)                           OperatorField                                               ___ OFFSET(get<T>, {0x498, 8, 0, 0})
};

/// Class /Script/WindRuntime.WindSplineComponent
/// Size: 0x0DF0 (0x000670 - 0x001460)
class UWindSplineComponent : public USplineComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5216;

public:
	SMember(FScalableFloat)                            DisableSafeZonePhaseIndex                                   ___ OFFSET(get<T>, {0x688, 40, 0, 0})
	CMember(UStaticMesh*)                              StaticMesh                                                  ___ OFFSET(get<T>, {0x6B0, 8, 0, 0})
	CMember(UStaticMesh*)                              StartStaticMesh                                             ___ OFFSET(get<T>, {0x6B8, 8, 0, 0})
	CMember(UStaticMesh*)                              EndStaticMesh                                               ___ OFFSET(get<T>, {0x6C0, 8, 0, 0})
	CMember(TEnumAsByte<ESplineMeshAxis>)              MeshForwardAxis                                             ___ OFFSET(get<T>, {0x6C8, 1, 0, 0})
	SMember(FScalableFloat)                            MeshRollVariance                                            ___ OFFSET(get<T>, {0x6D0, 40, 0, 0})
	SMember(FName)                                     ActiveSectionStartMaterialParamName                         ___ OFFSET(get<T>, {0x6F8, 4, 0, 0})
	SMember(FName)                                     ActiveSectionEndMaterialParamName                           ___ OFFSET(get<T>, {0x6FC, 4, 0, 0})
	SMember(FScalableFloat)                            TargetingRefreshRate                                        ___ OFFSET(get<T>, {0x700, 40, 0, 0})
	SMember(FScalableFloat)                            TargetingRadius                                             ___ OFFSET(get<T>, {0x728, 40, 0, 0})
	CMember(TArray<TEnumAsByte>)                       TargetObjectTypes                                           ___ OFFSET(get<T>, {0x750, 16, 0, 0})
	SMember(FGameplayTagQuery)                         TargetTagQuery                                              ___ OFFSET(get<T>, {0x760, 72, 0, 0})
	SMember(FGameplayTagQuery)                         BlockageTagQuery                                            ___ OFFSET(get<T>, {0x7A8, 72, 0, 0})
	SMember(FScalableFloat)                            BlockageSubdivisions                                        ___ OFFSET(get<T>, {0x7F0, 40, 0, 0})
	CMember(TArray<FWindSplineTargetEffects>)          TargetEffects                                               ___ OFFSET(get<T>, {0x818, 16, 0, 0})
	CMember(TMap<EFortPhysicsObjectType, FScalableFloat>) ObjectTypeToMaxTargetCount                               ___ OFFSET(get<T>, {0x828, 80, 0, 0})
	SMember(FScalableFloat)                            MaxTargetCountReachedExpelDuration                          ___ OFFSET(get<T>, {0x878, 40, 0, 0})
	SMember(FScalableFloat)                            SkydivingLandingAngle                                       ___ OFFSET(get<T>, {0x8A0, 40, 0, 0})
	SMember(FScalableFloat)                            RampUpSpeed                                                 ___ OFFSET(get<T>, {0x8C8, 40, 0, 0})
	SMember(FScalableFloat)                            RampDownSpeed                                               ___ OFFSET(get<T>, {0x8F0, 40, 0, 0})
	SMember(FScalableFloat)                            ForwardForceFallOffStartDistance                            ___ OFFSET(get<T>, {0x918, 40, 0, 0})
	SMember(FScalableFloat)                            ForwardForceMagnitude                                       ___ OFFSET(get<T>, {0x940, 40, 0, 0})
	SMember(FScalableFloat)                            ReverseForceMagnitude                                       ___ OFFSET(get<T>, {0x968, 40, 0, 0})
	SMember(FScalableFloat)                            ForwardForceDistanceFallOffExponent                         ___ OFFSET(get<T>, {0x990, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceInnerRadius                                      ___ OFFSET(get<T>, {0x9B8, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceOuterRadiusAcceleration                          ___ OFFSET(get<T>, {0x9E0, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceInnerRadiusDeceleration                          ___ OFFSET(get<T>, {0xA08, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceInnerRadiusSpeedThreshold                        ___ OFFSET(get<T>, {0xA30, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceOuterRadiusSpeedThreshold                        ___ OFFSET(get<T>, {0xA58, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceMaxReductionFromSteering                         ___ OFFSET(get<T>, {0xA80, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceMaxMultiplierWhenSteering                        ___ OFFSET(get<T>, {0xAA8, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceMaxSteerAngle                                    ___ OFFSET(get<T>, {0xAD0, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceLowVelocityThreshold                             ___ OFFSET(get<T>, {0xAF8, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceLowVelocityMinValue                              ___ OFFSET(get<T>, {0xB20, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceSteeringReduceAccelerationPower                  ___ OFFSET(get<T>, {0xB48, 40, 0, 0})
	SMember(FScalableFloat)                            InwardForceSteeringReduceDecelerationPower                  ___ OFFSET(get<T>, {0xB70, 40, 0, 0})
	CMember(TMap<EFortPhysicsSimSize, FWindSplineForceModifiers>) SizeForceModifiers                               ___ OFFSET(get<T>, {0xB98, 80, 0, 0})
	CMember(TMap<EFortPhysicsObjectType, FWindSplineForceModifiers>) ObjectTypeForceModifiers                      ___ OFFSET(get<T>, {0xBE8, 80, 0, 0})
	CMember(TArray<FWindSplineTagBasedForceModifiers>) QueryBasedForceModifiers                                    ___ OFFSET(get<T>, {0xC38, 16, 0, 0})
	SMember(FGameplayTagQuery)                         PawnSkydivingTimeLimitQuery                                 ___ OFFSET(get<T>, {0xC48, 72, 0, 0})
	SMember(FScalableFloat)                            PawnSkydivingTimeLimit                                      ___ OFFSET(get<T>, {0xC90, 40, 0, 0})
	SMember(FScalableFloat)                            PawnSkydivingMinDistanceAboveGround                         ___ OFFSET(get<T>, {0xCB8, 40, 0, 0})
	SMember(FScalableFloat)                            AutoWakeUpPhysicsObjects                                    ___ OFFSET(get<T>, {0xCE0, 40, 0, 0})
	SMember(FScalableFloat)                            FieldMagnitudeBase                                          ___ OFFSET(get<T>, {0xD08, 40, 0, 0})
	SMember(FScalableFloat)                            FieldMinMagnitudeAfterFalloff                               ___ OFFSET(get<T>, {0xD30, 40, 0, 0})
	SMember(FScalableFloat)                            FieldMaxMagnitudeAfterFalloff                               ___ OFFSET(get<T>, {0xD58, 40, 0, 0})
	CMember(UClass*)                                   PlayerWindAnimationLayer                                    ___ OFFSET(get<T>, {0xD80, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnWindSplineDisabled                                        ___ OFFSET(get<T>, {0xD88, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnWindSplineEnabled                                         ___ OFFSET(get<T>, {0xD98, 16, 0, 0})
	SMember(FWindSplineTargetData)                     TargetData                                                  ___ OFFSET(get<T>, {0xDA8, 440, 0, 0})
	SMember(FWindSplineBlockageArray)                  Blockages                                                   ___ OFFSET(get<T>, {0xF60, 280, 0, 0})
	CMember(UFieldSystemComponent*)                    FieldSystemComponent                                        ___ OFFSET(get<T>, {0x1078, 8, 0, 0})
	CMember(UUniformVector*)                           UniformVector                                               ___ OFFSET(get<T>, {0x1080, 8, 0, 0})
	CMember(UBoxFalloff*)                              BoxFalloff                                                  ___ OFFSET(get<T>, {0x1088, 8, 0, 0})
	CMember(UOperatorField*)                           BoxOperatorField                                            ___ OFFSET(get<T>, {0x1090, 8, 0, 0})
	CMember(TArray<FWindSplineMeshData>)               MeshDataArray                                               ___ OFFSET(get<T>, {0x1098, 16, 0, 0})
	CMember(TArray<UFXSystemComponent*>)               FXComponents                                                ___ OFFSET(get<T>, {0x10A8, 16, 0, 0})
};

