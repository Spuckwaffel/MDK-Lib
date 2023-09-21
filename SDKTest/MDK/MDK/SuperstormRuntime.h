
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FieldSystemEngine
/// dependency: ModularGameplay
/// dependency: NetCore

/// Class /Script/SuperstormRuntime.TempestLightningComponent
/// Size: 0x0378 (0x0000A0 - 0x000418)
class UTempestLightningComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1048;

public:
	CMember(UClass*)                                   LightningBoltClass                                          ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TArray<FTempestLightningBoltEffectContainer>) LightningBoltTargetEffectContainers                      ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(UTargetingPreset*)                         LightningBoltTargetingPreset                                ___ OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(UEnvQuery*)                                FindTargetablePawnsQuery                                    ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(UEnvQuery*)                                FindTargetableLocationQuery                                 ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
	SMember(FName)                                     EnvironmentQueryParamName_LightningRadius                   ___ OFFSET(get<T>, {0xD0, 4, 0, 0})
	SMember(FName)                                     EnvironmentQueryParamName_MinLightningTargetDistance        ___ OFFSET(get<T>, {0xD4, 4, 0, 0})
	SMember(FScalableFloat)                            LightningCloudHeight                                        ___ OFFSET(get<T>, {0xD8, 40, 0, 0})
	SMember(FScalableFloat)                            LightningRadius                                             ___ OFFSET(get<T>, {0x100, 40, 0, 0})
	SMember(FScalableFloat)                            MinLightningTargetDistance                                  ___ OFFSET(get<T>, {0x128, 40, 0, 0})
	SMember(FScalableFloat)                            LightningFrequencyMin                                       ___ OFFSET(get<T>, {0x150, 40, 0, 0})
	SMember(FScalableFloat)                            LightningFrequencyMax                                       ___ OFFSET(get<T>, {0x178, 40, 0, 0})
	SMember(FScalableFloat)                            LightningBoltsMin                                           ___ OFFSET(get<T>, {0x1A0, 40, 0, 0})
	SMember(FScalableFloat)                            LightningBoltsMax                                           ___ OFFSET(get<T>, {0x1C8, 40, 0, 0})
	SMember(FScalableFloat)                            LightningBoltIntervalMin                                    ___ OFFSET(get<T>, {0x1F0, 40, 0, 0})
	SMember(FScalableFloat)                            LightningBoltIntervalMax                                    ___ OFFSET(get<T>, {0x218, 40, 0, 0})
	SMember(FScalableFloat)                            LightningBoltSeparationDistance                             ___ OFFSET(get<T>, {0x240, 40, 0, 0})
	SMember(FScalableFloat)                            LightningStruckPawnReselectionInterval                      ___ OFFSET(get<T>, {0x268, 40, 0, 0})
	SMember(FScalableFloat)                            LightningBoltTelegraphDuration                              ___ OFFSET(get<T>, {0x290, 40, 0, 0})
	SMember(FScalableFloat)                            LightningBoltImpactIgnitionRadius                           ___ OFFSET(get<T>, {0x2B8, 40, 0, 0})
	SMember(FScalableFloat)                            LightningBoltGrassIgnitionRadius                            ___ OFFSET(get<T>, {0x2E0, 40, 0, 0})
	SMember(FScalableFloat)                            LightningBoltGrassFirePropagationFuel                       ___ OFFSET(get<T>, {0x308, 40, 0, 0})
	SMember(FGameplayTag)                              LightningAreaTargetTelegraphCue                             ___ OFFSET(get<T>, {0x330, 4, 0, 0})
	SMember(FGameplayTag)                              LightningBoltTargetTelegraphCue                             ___ OFFSET(get<T>, {0x334, 4, 0, 0})
	CMember(TArray<FTempestLightningBoltData>)         LightningBoltData                                           ___ OFFSET(get<T>, {0x338, 16, 0, 0})
};

/// Class /Script/SuperstormRuntime.TempestTornadoForcesComponent
/// Size: 0x0490 (0x0000A0 - 0x000530)
class UTempestTornadoForcesComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1328;

public:
	SMember(FMulticastInlineDelegate)                  OnActorAddedToTornadoForces                                 ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActorRemovedFromTornadoForces                             ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ConfigHandle                                                ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<FGameplayTag>)                      PhysicsPresetTagsAngularDampingToOverride                   ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FScalableFloat)                            AngularDampingOverride                                      ___ OFFSET(get<T>, {0xE0, 40, 0, 0})
	CMember(UClass*)                                   PawnInGE                                                    ___ OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(TMap<EFortPhysicsObjectType, FScalableFloat>) ObjectTypeToMaxCapCount                                  ___ OFFSET(get<T>, {0x110, 80, 0, 0})
	SMember(FGameplayTagContainer)                     TagsToIgnore                                                ___ OFFSET(get<T>, {0x160, 32, 0, 0})
	CMember(UClass*)                                   RecentlyRemovedGE                                           ___ OFFSET(get<T>, {0x180, 8, 0, 0})
	CMember(UTargetingPreset*)                         TargetingPreset                                             ___ OFFSET(get<T>, {0x188, 8, 0, 0})
	SMember(FGameplayTag)                              DamageSetByCallerTag                                        ___ OFFSET(get<T>, {0x190, 4, 0, 0})
	CMember(UClass*)                                   PeriodicDamageGE                                            ___ OFFSET(get<T>, {0x198, 8, 0, 0})
	CMember(UClass*)                                   BurstDamageGE                                               ___ OFFSET(get<T>, {0x1A0, 8, 0, 0})
	SMember(FGameplayTag)                              TornadoActiveCue                                            ___ OFFSET(get<T>, {0x1A8, 4, 0, 0})
	SMember(FGameplayTag)                              PlayerNearCue                                               ___ OFFSET(get<T>, {0x1AC, 4, 0, 0})
	SMember(FGameplayTag)                              PawnInCue                                                   ___ OFFSET(get<T>, {0x1B0, 4, 0, 0})
	SMember(FScalableFloat)                            PlayerNearRange                                             ___ OFFSET(get<T>, {0x1B8, 40, 0, 0})
	SMember(FGameplayTagContainer)                     BlockAbilitiesWithTag                                       ___ OFFSET(get<T>, {0x1E0, 32, 0, 0})
	SMember(FTornadoClientSimulationArray)             ActorsToClientSimulate                                      ___ OFFSET(get<T>, {0x200, 280, 0, 0})
	SMember(FTargetingRequestHandle)                   AsyncTargetingHandle                                        ___ OFFSET(get<T>, {0x430, 4, 0, 0})
	CMember(TSet<AFortPlayerPawn*>)                    PreviouslyNearPlayers                                       ___ OFFSET(get<T>, {0x438, 80, 0, 0})
};

/// Class /Script/SuperstormRuntime.TornadoRadialForce
/// Size: 0x0038 (0x000298 - 0x0002D0)
class ATornadoRadialForce : public AFieldSystemActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	DMember(float)                                     Radius                                                      ___ OFFSET(get<float>, {0x298, 4, 0, 0})
	DMember(float)                                     Strength                                                    ___ OFFSET(get<float>, {0x29C, 4, 0, 0})
	DMember(float)                                     StartTime                                                   ___ OFFSET(get<float>, {0x2A0, 4, 0, 0})
	DMember(float)                                     StopTime                                                    ___ OFFSET(get<float>, {0x2A4, 4, 0, 0})
	DMember(float)                                     IncomingDuration                                            ___ OFFSET(get<float>, {0x2A8, 4, 0, 0})
	DMember(float)                                     OutgoingDuration                                            ___ OFFSET(get<float>, {0x2AC, 4, 0, 0})
	CMember(URadialVector*)                            RadialVector                                                ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(URadialFalloff*)                           RadialFalloff                                               ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UOperatorField*)                           OperatorField                                               ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
};

/// Struct /Script/SuperstormRuntime.TempestLightningBoltEffectContainer
/// Size: 0x0050 (0x000000 - 0x000050)
class FTempestLightningBoltEffectContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTagQuery)                         TargetFilter                                                ___ OFFSET(get<T>, {0x0, 72, 0, 0})
	CMember(UClass*)                                   GameplayEffect                                              ___ OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Struct /Script/SuperstormRuntime.TempestLightningBoltData
/// Size: 0x0078 (0x000000 - 0x000078)
class FTempestLightningBoltData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(AFortPawn*)                                SourcePawn                                                  ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(AFortGameplayEffectDeliveryActor*)         LightningBolt                                               ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TArray<AActor*>)                           TargetActors                                                ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<AFortPawn*>)                        TargetPawns                                                 ___ OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/SuperstormRuntime.TornadoActorInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FTornadoActorInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/SuperstormRuntime.TornadoObjectForceModifiers
/// Size: 0x0010 (0x000000 - 0x000010)
class FTornadoObjectForceModifiers : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     TangentVelocityMultiplier                                   ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     HeightVelocityMultiplier                                    ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     DragMultiplier                                              ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     TorqueMultiplier                                            ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/SuperstormRuntime.TornadoConfigEntry
/// Size: 0x0130 (0x000008 - 0x000138)
class FTornadoConfigEntry : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	DMember(float)                                     EyeBufferDistance                                           ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(UCurveFloat*)                              TargetOrbitRadiusCurve                                      ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(float)                                     TargetOrbitRadius                                           ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     OrbitStrength                                               ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     TargetTangentVelocity                                       ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     TangentVelocityVariance                                     ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     TangentAcceleration                                         ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     TangentAccelerationVariance                                 ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     TangentAngleOffset                                          ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     TargetHeightVelocity                                        ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     HeightVelocityVariance                                      ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     HeightAcceleration                                          ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     HeightAccelerationVariance                                  ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     TorqueStrength                                              ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     TorqueVariance                                              ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     TimeToForceEject                                            ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     HeightToForceEject                                          ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     DepthToForceEject                                           ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     DistanceToForceEject                                        ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     EjectionBoost                                               ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     MaxDragVelocity                                             ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     DragCoefficient1                                            ___ OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     DragCoefficient2                                            ___ OFFSET(get<float>, {0x68, 4, 0, 0})
	CMember(TMap<EFortPhysicsSimSize, FTornadoObjectForceModifiers>) SizeForceModifiers                            ___ OFFSET(get<T>, {0x70, 80, 0, 0})
	CMember(TMap<EFortPhysicsObjectType, FTornadoObjectForceModifiers>) ObjectTypeForceModifiers                   ___ OFFSET(get<T>, {0xC0, 80, 0, 0})
	DMember(float)                                     PlayerGravityFloorOffset                                    ___ OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(float)                                     PlayerGravityFloorWidth                                     ___ OFFSET(get<float>, {0x114, 4, 0, 0})
	DMember(float)                                     PlayerGravityFloorGravityScalar                             ___ OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(float)                                     PeriodicDamageToPawns                                       ___ OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(float)                                     PeriodicDamageToProps                                       ___ OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(float)                                     BurstDamageToStaticActors                                   ___ OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(float)                                     ChancePerSecondToApplyBurstDamage                           ___ OFFSET(get<float>, {0x128, 4, 0, 0})
	DMember(bool)                                      bAllowPickupPlayers                                         ___ OFFSET(get<bool>, {0x12C, 1, 0, 0})
	DMember(bool)                                      bAllowPickupPawns                                           ___ OFFSET(get<bool>, {0x12D, 1, 0, 0})
	DMember(bool)                                      bAllowPickupVehicles                                        ___ OFFSET(get<bool>, {0x12E, 1, 0, 0})
	DMember(bool)                                      bAllowPickupProjectiles                                     ___ OFFSET(get<bool>, {0x12F, 1, 0, 0})
	DMember(bool)                                      bAffectStaticObjects                                        ___ OFFSET(get<bool>, {0x130, 1, 0, 0})
	CMember(EFortPhysicsSimSize)                       MaxAllowedPhysicsObjectSize                                 ___ OFFSET(get<T>, {0x131, 1, 0, 0})
	CMember(EFortPhysicsSimSize)                       MinAllowedPhysicsObjectSize                                 ___ OFFSET(get<T>, {0x132, 1, 0, 0})
};

/// Struct /Script/SuperstormRuntime.TornadoSimulationData
/// Size: 0x0034 (0x00000C - 0x000040)
class FTornadoSimulationData : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Actor                                                       ___ OFFSET(get<T>, {0xC, 8, 0, 0})
	CMember(EFortPhysicsObjectType)                    ObjectType                                                  ___ OFFSET(get<T>, {0x14, 1, 0, 0})
	DMember(float)                                     TangentVelocity                                             ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     TangentAccel                                                ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     HeightVelocity                                              ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     HeightAccel                                                 ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	SMember(FVector)                                   Torque                                                      ___ OFFSET(get<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/SuperstormRuntime.TornadoTelemetryStats
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FTornadoTelemetryStats : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TMap<EFortPhysicsObjectType, int32_t>)     NumActorsEnteredByType                                      ___ OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TSet<FUniqueNetIdRepl>)                    EnteredPlayerAccountIds                                     ___ OFFSET(get<T>, {0x50, 80, 0, 0})
	DMember(int32_t)                                   NumPreBuiltStructuresDestroyed                              ___ OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	DMember(int32_t)                                   NumPlayerBuiltStructuresDestroyed                           ___ OFFSET(get<int32_t>, {0xA4, 4, 0, 0})
};

/// Struct /Script/SuperstormRuntime.TornadoClientSimulationArray
/// Size: 0x0010 (0x000108 - 0x000118)
class FTornadoClientSimulationArray : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<FTornadoSimulationData>)            ActorsToSimulateArray                                       ___ OFFSET(get<T>, {0x108, 16, 0, 0})
};

