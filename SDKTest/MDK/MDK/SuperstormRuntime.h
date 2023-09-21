
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
	CMember(UClass*)                                   LightningBoltClass                                          OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TArray<FTempestLightningBoltEffectContainer>) LightningBoltTargetEffectContainers                      OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(UTargetingPreset*)                         LightningBoltTargetingPreset                                OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(UEnvQuery*)                                FindTargetablePawnsQuery                                    OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(UEnvQuery*)                                FindTargetableLocationQuery                                 OFFSET(get<T>, {0xC8, 8, 0, 0})
	SMember(FName)                                     EnvironmentQueryParamName_LightningRadius                   OFFSET(get<T>, {0xD0, 4, 0, 0})
	SMember(FName)                                     EnvironmentQueryParamName_MinLightningTargetDistance        OFFSET(get<T>, {0xD4, 4, 0, 0})
	SMember(FScalableFloat)                            LightningCloudHeight                                        OFFSET(get<T>, {0xD8, 40, 0, 0})
	SMember(FScalableFloat)                            LightningRadius                                             OFFSET(get<T>, {0x100, 40, 0, 0})
	SMember(FScalableFloat)                            MinLightningTargetDistance                                  OFFSET(get<T>, {0x128, 40, 0, 0})
	SMember(FScalableFloat)                            LightningFrequencyMin                                       OFFSET(get<T>, {0x150, 40, 0, 0})
	SMember(FScalableFloat)                            LightningFrequencyMax                                       OFFSET(get<T>, {0x178, 40, 0, 0})
	SMember(FScalableFloat)                            LightningBoltsMin                                           OFFSET(get<T>, {0x1A0, 40, 0, 0})
	SMember(FScalableFloat)                            LightningBoltsMax                                           OFFSET(get<T>, {0x1C8, 40, 0, 0})
	SMember(FScalableFloat)                            LightningBoltIntervalMin                                    OFFSET(get<T>, {0x1F0, 40, 0, 0})
	SMember(FScalableFloat)                            LightningBoltIntervalMax                                    OFFSET(get<T>, {0x218, 40, 0, 0})
	SMember(FScalableFloat)                            LightningBoltSeparationDistance                             OFFSET(get<T>, {0x240, 40, 0, 0})
	SMember(FScalableFloat)                            LightningStruckPawnReselectionInterval                      OFFSET(get<T>, {0x268, 40, 0, 0})
	SMember(FScalableFloat)                            LightningBoltTelegraphDuration                              OFFSET(get<T>, {0x290, 40, 0, 0})
	SMember(FScalableFloat)                            LightningBoltImpactIgnitionRadius                           OFFSET(get<T>, {0x2B8, 40, 0, 0})
	SMember(FScalableFloat)                            LightningBoltGrassIgnitionRadius                            OFFSET(get<T>, {0x2E0, 40, 0, 0})
	SMember(FScalableFloat)                            LightningBoltGrassFirePropagationFuel                       OFFSET(get<T>, {0x308, 40, 0, 0})
	SMember(FGameplayTag)                              LightningAreaTargetTelegraphCue                             OFFSET(get<T>, {0x330, 4, 0, 0})
	SMember(FGameplayTag)                              LightningBoltTargetTelegraphCue                             OFFSET(get<T>, {0x334, 4, 0, 0})
	CMember(TArray<FTempestLightningBoltData>)         LightningBoltData                                           OFFSET(get<T>, {0x338, 16, 0, 0})


	/// Functions
	// Function /Script/SuperstormRuntime.TempestLightningComponent.GetLightningRadius
	// float GetLightningRadius();                                                                                              // [0x9e875c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SuperstormRuntime.TempestLightningComponent.GetCloudHeight
	// float GetCloudHeight();                                                                                                  // [0x9e87594] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SuperstormRuntime.TempestTornadoForcesComponent
/// Size: 0x0490 (0x0000A0 - 0x000530)
class UTempestTornadoForcesComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1328;

public:
	SMember(FMulticastInlineDelegate)                  OnActorAddedToTornadoForces                                 OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActorRemovedFromTornadoForces                             OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ConfigHandle                                                OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<FGameplayTag>)                      PhysicsPresetTagsAngularDampingToOverride                   OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FScalableFloat)                            AngularDampingOverride                                      OFFSET(get<T>, {0xE0, 40, 0, 0})
	CMember(UClass*)                                   PawnInGE                                                    OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(TMap<EFortPhysicsObjectType, FScalableFloat>) ObjectTypeToMaxCapCount                                  OFFSET(get<T>, {0x110, 80, 0, 0})
	SMember(FGameplayTagContainer)                     TagsToIgnore                                                OFFSET(get<T>, {0x160, 32, 0, 0})
	CMember(UClass*)                                   RecentlyRemovedGE                                           OFFSET(get<T>, {0x180, 8, 0, 0})
	CMember(UTargetingPreset*)                         TargetingPreset                                             OFFSET(get<T>, {0x188, 8, 0, 0})
	SMember(FGameplayTag)                              DamageSetByCallerTag                                        OFFSET(get<T>, {0x190, 4, 0, 0})
	CMember(UClass*)                                   PeriodicDamageGE                                            OFFSET(get<T>, {0x198, 8, 0, 0})
	CMember(UClass*)                                   BurstDamageGE                                               OFFSET(get<T>, {0x1A0, 8, 0, 0})
	SMember(FGameplayTag)                              TornadoActiveCue                                            OFFSET(get<T>, {0x1A8, 4, 0, 0})
	SMember(FGameplayTag)                              PlayerNearCue                                               OFFSET(get<T>, {0x1AC, 4, 0, 0})
	SMember(FGameplayTag)                              PawnInCue                                                   OFFSET(get<T>, {0x1B0, 4, 0, 0})
	SMember(FScalableFloat)                            PlayerNearRange                                             OFFSET(get<T>, {0x1B8, 40, 0, 0})
	SMember(FGameplayTagContainer)                     BlockAbilitiesWithTag                                       OFFSET(get<T>, {0x1E0, 32, 0, 0})
	SMember(FTornadoClientSimulationArray)             ActorsToClientSimulate                                      OFFSET(get<T>, {0x200, 280, 0, 0})
	SMember(FTargetingRequestHandle)                   AsyncTargetingHandle                                        OFFSET(get<T>, {0x430, 4, 0, 0})
	CMember(TSet<AFortPlayerPawn*>)                    PreviouslyNearPlayers                                       OFFSET(get<T>, {0x438, 80, 0, 0})


	/// Functions
	// Function /Script/SuperstormRuntime.TempestTornadoForcesComponent.OnVehicleInTornadoPlayerExit
	// void OnVehicleInTornadoPlayerExit(AFortPlayerControllerAthena* PlayerController, AFortAthenaVehicle* Vehicle);           // [0x9e8768c] Final|Native|Private 
	// Function /Script/SuperstormRuntime.TempestTornadoForcesComponent.IsActorInTornado
	// bool IsActorInTornado(AActor* Actor);                                                                                    // [0x9e875fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SuperstormRuntime.TornadoRadialForce
/// Size: 0x0038 (0x000298 - 0x0002D0)
class ATornadoRadialForce : public AFieldSystemActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x298, 4, 0, 0})
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0x29C, 4, 0, 0})
	DMember(float)                                     StartTime                                                   OFFSET(get<float>, {0x2A0, 4, 0, 0})
	DMember(float)                                     StopTime                                                    OFFSET(get<float>, {0x2A4, 4, 0, 0})
	DMember(float)                                     IncomingDuration                                            OFFSET(get<float>, {0x2A8, 4, 0, 0})
	DMember(float)                                     OutgoingDuration                                            OFFSET(get<float>, {0x2AC, 4, 0, 0})
	CMember(URadialVector*)                            RadialVector                                                OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(URadialFalloff*)                           RadialFalloff                                               OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UOperatorField*)                           OperatorField                                               OFFSET(get<T>, {0x2C8, 8, 0, 0})
};

/// Struct /Script/SuperstormRuntime.TempestLightningBoltEffectContainer
/// Size: 0x0050 (0x000000 - 0x000050)
class FTempestLightningBoltEffectContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTagQuery)                         TargetFilter                                                OFFSET(get<T>, {0x0, 72, 0, 0})
	CMember(UClass*)                                   GameplayEffect                                              OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Struct /Script/SuperstormRuntime.TempestLightningBoltData
/// Size: 0x0078 (0x000000 - 0x000078)
class FTempestLightningBoltData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(AFortPawn*)                                SourcePawn                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(AFortGameplayEffectDeliveryActor*)         LightningBolt                                               OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TArray<AActor*>)                           TargetActors                                                OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<AFortPawn*>)                        TargetPawns                                                 OFFSET(get<T>, {0x60, 16, 0, 0})
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
	DMember(float)                                     TangentVelocityMultiplier                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     HeightVelocityMultiplier                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     DragMultiplier                                              OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     TorqueMultiplier                                            OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/SuperstormRuntime.TornadoConfigEntry
/// Size: 0x0130 (0x000008 - 0x000138)
class FTornadoConfigEntry : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	DMember(float)                                     EyeBufferDistance                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(UCurveFloat*)                              TargetOrbitRadiusCurve                                      OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(float)                                     TargetOrbitRadius                                           OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     OrbitStrength                                               OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     TargetTangentVelocity                                       OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     TangentVelocityVariance                                     OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     TangentAcceleration                                         OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     TangentAccelerationVariance                                 OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     TangentAngleOffset                                          OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     TargetHeightVelocity                                        OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     HeightVelocityVariance                                      OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     HeightAcceleration                                          OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     HeightAccelerationVariance                                  OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     TorqueStrength                                              OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     TorqueVariance                                              OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     TimeToForceEject                                            OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     HeightToForceEject                                          OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     DepthToForceEject                                           OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     DistanceToForceEject                                        OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     EjectionBoost                                               OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     MaxDragVelocity                                             OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     DragCoefficient1                                            OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     DragCoefficient2                                            OFFSET(get<float>, {0x68, 4, 0, 0})
	CMember(TMap<EFortPhysicsSimSize, FTornadoObjectForceModifiers>) SizeForceModifiers                            OFFSET(get<T>, {0x70, 80, 0, 0})
	CMember(TMap<EFortPhysicsObjectType, FTornadoObjectForceModifiers>) ObjectTypeForceModifiers                   OFFSET(get<T>, {0xC0, 80, 0, 0})
	DMember(float)                                     PlayerGravityFloorOffset                                    OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(float)                                     PlayerGravityFloorWidth                                     OFFSET(get<float>, {0x114, 4, 0, 0})
	DMember(float)                                     PlayerGravityFloorGravityScalar                             OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(float)                                     PeriodicDamageToPawns                                       OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(float)                                     PeriodicDamageToProps                                       OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(float)                                     BurstDamageToStaticActors                                   OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(float)                                     ChancePerSecondToApplyBurstDamage                           OFFSET(get<float>, {0x128, 4, 0, 0})
	DMember(bool)                                      bAllowPickupPlayers                                         OFFSET(get<bool>, {0x12C, 1, 0, 0})
	DMember(bool)                                      bAllowPickupPawns                                           OFFSET(get<bool>, {0x12D, 1, 0, 0})
	DMember(bool)                                      bAllowPickupVehicles                                        OFFSET(get<bool>, {0x12E, 1, 0, 0})
	DMember(bool)                                      bAllowPickupProjectiles                                     OFFSET(get<bool>, {0x12F, 1, 0, 0})
	DMember(bool)                                      bAffectStaticObjects                                        OFFSET(get<bool>, {0x130, 1, 0, 0})
	CMember(EFortPhysicsSimSize)                       MaxAllowedPhysicsObjectSize                                 OFFSET(get<T>, {0x131, 1, 0, 0})
	CMember(EFortPhysicsSimSize)                       MinAllowedPhysicsObjectSize                                 OFFSET(get<T>, {0x132, 1, 0, 0})
};

/// Struct /Script/SuperstormRuntime.TornadoSimulationData
/// Size: 0x0034 (0x00000C - 0x000040)
class FTornadoSimulationData : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Actor                                                       OFFSET(get<T>, {0xC, 8, 0, 0})
	CMember(EFortPhysicsObjectType)                    ObjectType                                                  OFFSET(get<T>, {0x14, 1, 0, 0})
	DMember(float)                                     TangentVelocity                                             OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     TangentAccel                                                OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     HeightVelocity                                              OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     HeightAccel                                                 OFFSET(get<float>, {0x24, 4, 0, 0})
	SMember(FVector)                                   Torque                                                      OFFSET(get<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/SuperstormRuntime.TornadoTelemetryStats
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FTornadoTelemetryStats : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TMap<EFortPhysicsObjectType, int32_t>)     NumActorsEnteredByType                                      OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TSet<FUniqueNetIdRepl>)                    EnteredPlayerAccountIds                                     OFFSET(get<T>, {0x50, 80, 0, 0})
	DMember(int32_t)                                   NumPreBuiltStructuresDestroyed                              OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	DMember(int32_t)                                   NumPlayerBuiltStructuresDestroyed                           OFFSET(get<int32_t>, {0xA4, 4, 0, 0})
};

/// Struct /Script/SuperstormRuntime.TornadoClientSimulationArray
/// Size: 0x0010 (0x000108 - 0x000118)
class FTornadoClientSimulationArray : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<FTornadoSimulationData>)            ActorsToSimulateArray                                       OFFSET(get<T>, {0x108, 16, 0, 0})
};

