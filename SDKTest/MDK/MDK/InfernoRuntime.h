
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Curie
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: Niagara
/// dependency: NiagaraCore

/// Class /Script/InfernoRuntime.FortCurieElementAttachHandlerVoxelFire
/// Size: 0x0000 (0x000090 - 0x000090)
class UFortCurieElementAttachHandlerVoxelFire : public UFortCurieElementAttachHandlerFire
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/InfernoRuntime.FortCurieElementAttachConditionHandlerVoxelFire
/// Size: 0x0000 (0x000040 - 0x000040)
class UFortCurieElementAttachConditionHandlerVoxelFire : public UFortCurieElementAttachConditionHandlerFire
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/InfernoRuntime.FortCurieVoxelFirePropagationManagerConfig
/// Size: 0x0048 (0x000130 - 0x000178)
class UFortCurieVoxelFirePropagationManagerConfig : public UFortCurieFirePropagationManagerConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	SMember(FFortCurieVoxelPropagationProperties)      DefaultPropagationProperties                                ___ OFFSET(get<T>, {0x130, 24, 0, 0})
	SMember(FName)                                     PropagationPropertiesRegistry                               ___ OFFSET(get<T>, {0x148, 4, 0, 0})
	DMember(float)                                     PropagationNoiseMinimum                                     ___ OFFSET(get<float>, {0x14C, 4, 0, 0})
	DMember(float)                                     PropagationNoiseMaximum                                     ___ OFFSET(get<float>, {0x150, 4, 0, 0})
	DMember(float)                                     PropagationSpeedNoiseRange                                  ___ OFFSET(get<float>, {0x154, 4, 0, 0})
	DMember(float)                                     PropagationMinimumSpeed                                     ___ OFFSET(get<float>, {0x158, 4, 0, 0})
	DMember(float)                                     PropagationMinimumTime                                      ___ OFFSET(get<float>, {0x15C, 4, 0, 0})
	DMember(float)                                     VoxelOverlapExpansionFactor                                 ___ OFFSET(get<float>, {0x160, 4, 0, 0})
	DMember(bool)                                      bAllowPerMaterialPropagationProperties                      ___ OFFSET(get<bool>, {0x164, 1, 0, 0})
	DMember(float)                                     ActorPropagationInteractMagnitude                           ___ OFFSET(get<float>, {0x168, 4, 0, 0})
	DMember(float)                                     MovedActorGrassIgnitionDelay                                ___ OFFSET(get<float>, {0x16C, 4, 0, 0})
	DMember(float)                                     MovedActorGrassGridCellZExpansion                           ___ OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     MovedActorGroundTraceZRange                                 ___ OFFSET(get<float>, {0x174, 4, 0, 0})
};

/// Class /Script/InfernoRuntime.FortCurieVoxelFirePropagationManager
/// Size: 0x0650 (0x000030 - 0x000680)
class UFortCurieVoxelFirePropagationManager : public UFortCurieManagerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1664;

public:
	SMember(FFortCurieVoxelFirePropagationManagerTickFunction) PrimaryTickFunction                                 ___ OFFSET(get<T>, {0x40, 48, 0, 0})
	CMember(UFortCurieVoxelFirePropagationManagerConfig*) InternalManagerConfig                                    ___ OFFSET(get<T>, {0x668, 8, 0, 0})
};

/// Class /Script/InfernoRuntime.FortCurieVoxelFireDebugParticleDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortCurieVoxelFireDebugParticleDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InfernoRuntime.FortCurieVoxelFireDebugNiagaraDataInterface
/// Size: 0x0000 (0x000038 - 0x000038)
class UFortCurieVoxelFireDebugNiagaraDataInterface : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/InfernoRuntime.FortCurieVoxelFireNativeFXHandlerConfig
/// Size: 0x0058 (0x000168 - 0x0001C0)
class UFortCurieVoxelFireNativeFXHandlerConfig : public UFortCurieNativeFXHandlerConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	CMember(UNiagaraSystem*)                           WorldFireSystem                                             ___ OFFSET(get<T>, {0x168, 8, 0, 0})
	CMember(UNiagaraSystem*)                           WorldFireDebugSystem                                        ___ OFFSET(get<T>, {0x170, 8, 0, 0})
	CMember(UTextureRenderTarget2D*)                   LandscapeCharRenderTarget                                   ___ OFFSET(get<T>, {0x178, 8, 0, 0})
	CMember(UMaterialParameterCollection*)             MaterialParameterCollection                                 ___ OFFSET(get<T>, {0x180, 8, 0, 0})
	SMember(FName)                                     PlayerWorldFireSystemLightScalabilityParamName              ___ OFFSET(get<T>, {0x188, 4, 0, 0})
	SMember(FName)                                     LandscapeBiasParameterName                                  ___ OFFSET(get<T>, {0x18C, 4, 0, 0})
	SMember(FName)                                     LandscapeDivisorParameterName                               ___ OFFSET(get<T>, {0x190, 4, 0, 0})
	DMember(float)                                     LandscapeFireRandomLocationRadius                           ___ OFFSET(get<float>, {0x194, 4, 0, 0})
	DMember(float)                                     MinLandscapeFireSphericalBounds                             ___ OFFSET(get<float>, {0x198, 4, 0, 0})
	DMember(float)                                     MaxLandscapeFireSphericalBounds                             ___ OFFSET(get<float>, {0x19C, 4, 0, 0})
	DMember(float)                                     LandscapeCharInterpSpeed                                    ___ OFFSET(get<float>, {0x1A0, 4, 0, 0})
	DMember(float)                                     LandscapeIgnitionParticleMovementSpeed                      ___ OFFSET(get<float>, {0x1A4, 4, 0, 0})
	DMember(bool)                                      bUseVoxelFireAmbientAudio                                   ___ OFFSET(get<bool>, {0x1A8, 1, 0, 0})
	CMember(USoundBase*)                               StructureFireAmbientSound                                   ___ OFFSET(get<T>, {0x1B0, 8, 0, 0})
	CMember(USoundBase*)                               GrassFireAmbientSound                                       ___ OFFSET(get<T>, {0x1B8, 8, 0, 0})
};

/// Class /Script/InfernoRuntime.FortCurieVoxelFireNativeFXHandler
/// Size: 0x0328 (0x000040 - 0x000368)
class UFortCurieVoxelFireNativeFXHandler : public UFortCurieNativeFXHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	CMember(TSet<UFortCurieComponent*>)                PendingUpdateComponents                                     ___ OFFSET(get<T>, {0x70, 80, 0, 0})
	CMember(TSet<UFortCurieComponent*>)                PendingRemoveComponents                                     ___ OFFSET(get<T>, {0xC0, 80, 0, 0})
	CMember(TArray<UFortCurieWorldNiagaraComponent*>)  WorldFireNiagaraSystems                                     ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(TArray<UFortCurieWorldNiagaraComponent*>)  WorldFireDebugNiagaraSystems                                ___ OFFSET(get<T>, {0x170, 16, 0, 0})
	DMember(float)                                     WorldSystemFireParticleSignificanceRequirement              ___ OFFSET(get<float>, {0x180, 4, 0, 0})
	DMember(float)                                     WorldSystemIgnitionParticleSignificanceRequirement          ___ OFFSET(get<float>, {0x184, 4, 0, 0})
	DMember(float)                                     AudioGrassFireSignificanceRequirement                       ___ OFFSET(get<float>, {0x188, 4, 0, 0})
	DMember(float)                                     AudioActorFireSignificanceRequirement                       ___ OFFSET(get<float>, {0x18C, 4, 0, 0})
	SMember(FRandomStream)                             RandomStream                                                ___ OFFSET(get<T>, {0x190, 8, 0, 0})
	SMember(FBox)                                      GrassFireBounds                                             ___ OFFSET(get<T>, {0x198, 56, 0, 0})
	DMember(float)                                     LandscapeCharInterpSpeed                                    ___ OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(float)                                     TimeSinceAudioUpdate                                        ___ OFFSET(get<float>, {0x1D4, 4, 0, 0})
	CMember(TArray<FFortCurieVoxelFireParticleGrassData>) CachedFireParticleGrassData                              ___ OFFSET(get<T>, {0x1D8, 16, 0, 0})
	CMember(TArray<FFortCurieFireParticleActorData>)   CachedFireParticleActorData                                 ___ OFFSET(get<T>, {0x1E8, 16, 0, 0})
	CMember(TSet<FFortSpatialCellIndex>)               CachedBurningGrassGridCells                                 ___ OFFSET(get<T>, {0x258, 80, 0, 0})
	CMember(TMap<FFortSpatialCellIndex, UAudioComponent*>) GrassAudioMap                                           ___ OFFSET(get<T>, {0x2A8, 80, 0, 0})
	CMember(TArray<UAudioComponent*>)                  PreallocatedAudioComponents                                 ___ OFFSET(get<T>, {0x348, 16, 0, 0})
	SMember(FTimerHandle)                              AudioComponentCleanupTimerHandle                            ___ OFFSET(get<T>, {0x358, 8, 0, 0})
	DMember(double)                                    PreviousLandscapeCharTickTime                               ___ OFFSET(get<double>, {0x360, 8, 0, 0})
};

/// Class /Script/InfernoRuntime.FortCurieVoxelFireParticleDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortCurieVoxelFireParticleDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InfernoRuntime.FortCurieVoxelFireNiagaraDataInterface
/// Size: 0x0000 (0x000038 - 0x000038)
class UFortCurieVoxelFireNiagaraDataInterface : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/InfernoRuntime.InfernoCurieVoxelFireAudioParticleDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UInfernoCurieVoxelFireAudioParticleDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InfernoRuntime.InfernoCurieVoxelFireAudioNiagaraDataInterface
/// Size: 0x0000 (0x000038 - 0x000038)
class UInfernoCurieVoxelFireAudioNiagaraDataInterface : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/InfernoRuntime.FortCurieVoxelPropagationProperties
/// Size: 0x0010 (0x000008 - 0x000018)
class FFortCurieVoxelPropagationProperties : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     PropagationZDirectionDownMultiplier                         ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     PropagationZDirectionUpMultiplier                           ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     PropagationBaseDelay                                        ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     PropagationBaseSpeed                                        ___ OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/InfernoRuntime.FortCurieVoxelFirePropagationManagerTickFunction
/// Size: 0x0008 (0x000028 - 0x000030)
class FFortCurieVoxelFirePropagationManagerTickFunction : public FTickFunction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/InfernoRuntime.FortCurieVoxelFireParticleGrassData
/// Size: 0x0058 (0x000000 - 0x000058)
class FFortCurieVoxelFireParticleGrassData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

