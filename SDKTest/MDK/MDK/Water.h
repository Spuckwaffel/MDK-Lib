
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: Niagara
/// dependency: NiagaraCore

/// Class /Script/Water.WaterBodyMeshComponent
/// Size: 0x0000 (0x000620 - 0x000620)
class UWaterBodyMeshComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1568;

public:
};

/// Class /Script/Water.WaterBodyStaticMeshComponent
/// Size: 0x0000 (0x000620 - 0x000620)
class UWaterBodyStaticMeshComponent : public UWaterBodyMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1568;

public:
};

/// Class /Script/Water.BuoyancyComponent
/// Size: 0x0168 (0x0000A0 - 0x000208)
class UBuoyancyComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	CMember(TArray<FSphericalPontoon>)                 Pontoons                                                    ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEnteredWaterDelegate                                      ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnExitedWaterDelegate                                       ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FBuoyancyData)                             BuoyancyData                                                ___ OFFSET(get<T>, {0xD0, 144, 0, 0})
	CMember(TArray<UWaterBodyComponent*>)              CurrentWaterBodyComponents                                  ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(UPrimitiveComponent*)                      SimulatingComponent                                         ___ OFFSET(get<T>, {0x170, 8, 0, 0})
};

/// Class /Script/Water.BuoyancyManager
/// Size: 0x00C8 (0x000290 - 0x000358)
class ABuoyancyManager : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	CMember(TArray<UBuoyancyComponent*>)               BuoyancyComponents                                          ___ OFFSET(get<T>, {0x2E0, 16, 0, 0})
};

/// Class /Script/Water.EnvQueryTest_InsideWaterBody
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UEnvQueryTest_InsideWaterBody : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	DMember(bool)                                      bIncludeWaves                                               ___ OFFSET(get<bool>, {0x1F8, 1, 0, 0})
	DMember(bool)                                      bSimpleWaves                                                ___ OFFSET(get<bool>, {0x1F9, 1, 0, 0})
	DMember(bool)                                      bIgnoreExclusionVolumes                                     ___ OFFSET(get<bool>, {0x1FA, 1, 0, 0})
};

/// Class /Script/Water.GerstnerWaterWaveGeneratorBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UGerstnerWaterWaveGeneratorBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Water.GerstnerWaterWaveGeneratorSimple
/// Size: 0x0038 (0x000028 - 0x000060)
class UGerstnerWaterWaveGeneratorSimple : public UGerstnerWaterWaveGeneratorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(int32_t)                                   NumWaves                                                    ___ OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   Seed                                                        ___ OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(float)                                     Randomness                                                  ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     MinWavelength                                               ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     MaxWavelength                                               ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     WavelengthFalloff                                           ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     MinAmplitude                                                ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     MaxAmplitude                                                ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     AmplitudeFalloff                                            ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     WindAngleDeg                                                ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     DirectionAngularSpreadDeg                                   ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     SmallWaveSteepness                                          ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     LargeWaveSteepness                                          ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     SteepnessFalloff                                            ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
};

/// Class /Script/Water.GerstnerWaterWaveGeneratorSpectrum
/// Size: 0x0018 (0x000028 - 0x000040)
class UGerstnerWaterWaveGeneratorSpectrum : public UGerstnerWaterWaveGeneratorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(EWaveSpectrumType)                         SpectrumType                                                ___ OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(TArray<FGerstnerWaveOctave>)               Octaves                                                     ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/Water.WaterWavesBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UWaterWavesBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Water.WaterWaves
/// Size: 0x0000 (0x000028 - 0x000028)
class UWaterWaves : public UWaterWavesBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Water.GerstnerWaterWaves
/// Size: 0x0020 (0x000028 - 0x000048)
class UGerstnerWaterWaves : public UWaterWaves
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(UGerstnerWaterWaveGeneratorBase*)          GerstnerWaveGenerator                                       ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<FGerstnerWave>)                     GerstnerWaves                                               ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(float)                                     MaxWaveHeight                                               ___ OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Class /Script/Water.GerstnerWaterWaveSubsystem
/// Size: 0x0018 (0x000030 - 0x000048)
class UGerstnerWaterWaveSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/Water.LakeCollisionComponent
/// Size: 0x0020 (0x000570 - 0x000590)
class ULakeCollisionComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1424;

public:
	CMember(UBodySetup*)                               CachedBodySetup                                             ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	SMember(FVector)                                   BoxExtent                                                   ___ OFFSET(get<T>, {0x570, 24, 0, 0})
};

/// Class /Script/Water.NiagaraDataInterfaceWater
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceWater : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UWaterBodyComponent*)                      SourceBodyComponent                                         ___ OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Water.NiagaraWaterFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraWaterFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Water.OceanCollisionComponent
/// Size: 0x0040 (0x000570 - 0x0005B0)
class UOceanCollisionComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
	CMember(UBodySetup*)                               CachedBodySetup                                             ___ OFFSET(get<T>, {0x568, 8, 0, 0})
};

/// Class /Script/Water.OceanBoxCollisionComponent
/// Size: 0x0000 (0x0005B0 - 0x0005B0)
class UOceanBoxCollisionComponent : public UBoxComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
};

/// Class /Script/Water.WaterBody
/// Size: 0x0050 (0x000290 - 0x0002E0)
class AWaterBody : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(UWaterSplineComponent*)                    SplineComp                                                  ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(UWaterSplineMetadata*)                     WaterSplineMetadata                                         ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(UWaterBodyComponent*)                      WaterBodyComponent                                          ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	DMember(int32_t)                                   WaterBodyIndex                                              ___ OFFSET(get<int32_t>, {0x2B0, 4, 0, 0})
	CMember(EWaterBodyType)                            WaterBodyType                                               ___ OFFSET(get<T>, {0x2B4, 1, 0, 0})
	CMember(UWaterWavesBase*)                          WaterWaves                                                  ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UWaterBodyInfoMeshComponent*)              WaterInfoMeshComponent                                      ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UWaterBodyInfoMeshComponent*)              DilatedWaterInfoMeshComponent                               ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(TArray<UWaterBodyStaticMeshComponent*>)    WaterBodyStaticMeshComponents                               ___ OFFSET(get<T>, {0x2D0, 16, 0, 0})
};

/// Class /Script/Water.WaterBodyGenerator
/// Size: 0x0000 (0x000028 - 0x000028)
class UWaterBodyGenerator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Water.WaterBodyComponent
/// Size: 0x0F90 (0x000570 - 0x001500)
class UWaterBodyComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5376;

public:
	CMember(UPhysicalMaterial*)                        PhysicalMaterial                                            ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	DMember(float)                                     TargetWaveMaskDepth                                         ___ OFFSET(get<float>, {0x570, 4, 0, 0})
	DMember(float)                                     MaxWaveHeightOffset                                         ___ OFFSET(get<float>, {0x574, 4, 0, 0})
	SMember(FUnderwaterPostProcessSettings)            UnderwaterPostProcessSettings                               ___ OFFSET(get<T>, {0x580, 1792, 0, 0})
	SMember(FWaterCurveSettings)                       CurveSettings                                               ___ OFFSET(get<T>, {0xC80, 32, 0, 0})
	CMember(UMaterialInterface*)                       WaterMaterial                                               ___ OFFSET(get<T>, {0xCA0, 8, 0, 0})
	CMember(UMaterialInterface*)                       WaterHLODMaterial                                           ___ OFFSET(get<T>, {0xCA8, 8, 0, 0})
	CMember(UMaterialInterface*)                       WaterStaticMeshMaterial                                     ___ OFFSET(get<T>, {0xCB0, 8, 0, 0})
	CMember(UMaterialInterface*)                       UnderwaterPostProcessMaterial                               ___ OFFSET(get<T>, {0xCB8, 8, 0, 0})
	CMember(UMaterialInterface*)                       WaterInfoMaterial                                           ___ OFFSET(get<T>, {0xCC0, 8, 0, 0})
	SMember(FWaterBodyHeightmapSettings)               WaterHeightmapSettings                                      ___ OFFSET(get<T>, {0xCC8, 128, 0, 0})
	DMember(float)                                     ShapeDilation                                               ___ OFFSET(get<float>, {0xD48, 4, 0, 0})
	DMember(float)                                     CollisionHeightOffset                                       ___ OFFSET(get<float>, {0xD4C, 4, 0, 0})
	DMember(bool)                                      bAffectsLandscape                                           ___ OFFSET(get<bool>, {0xD50, 1, 0, 0})
	SMember(FWaterBodyStaticMeshSettings)              StaticMeshSettings                                          ___ OFFSET(get<T>, {0xD58, 16, 0, 0})
	DMember(int32_t)                                   WaterBodyIndex                                              ___ OFFSET(get<int32_t>, {0xD68, 4, 0, 0})
	CMember(UStaticMesh*)                              WaterMeshOverride                                           ___ OFFSET(get<T>, {0xD70, 8, 0, 0})
	DMember(bool)                                      bAlwaysGenerateWaterMeshTiles                               ___ OFFSET(get<bool>, {0xD78, 1, 0, 0})
	DMember(int32_t)                                   OverlapMaterialPriority                                     ___ OFFSET(get<int32_t>, {0xD7C, 4, 0, 0})
	CMember(UWaterSplineMetadata*)                     WaterSplineMetadata                                         ___ OFFSET(get<T>, {0xD80, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 WaterMID                                                    ___ OFFSET(get<T>, {0xD88, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 WaterStaticMeshMID                                          ___ OFFSET(get<T>, {0xD90, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 UnderwaterPostProcessMID                                    ___ OFFSET(get<T>, {0xD98, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 WaterInfoMID                                                ___ OFFSET(get<T>, {0xDA0, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    WaterBodyIslands                                            ___ OFFSET(get<T>, {0xDA8, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    WaterBodyExclusionVolumes                                   ___ OFFSET(get<T>, {0xDB8, 16, 0, 0})
	CMember(TWeakObjectPtr<ALandscapeProxy*>)          Landscape                                                   ___ OFFSET(get<T>, {0xDC8, 8, 0, 0})
	CMember(TWeakObjectPtr<AWaterZone*>)               OwningWaterZone                                             ___ OFFSET(get<T>, {0xDD0, 32, 0, 0})
	CMember(TWeakObjectPtr<AWaterZone*>)               WaterZoneOverride                                           ___ OFFSET(get<T>, {0xDF0, 32, 0, 0})
	SMember(FPostProcessSettings)                      CurrentPostProcessSettings                                  ___ OFFSET(get<T>, {0xE10, 1760, 0, 0})
	CMember(UClass*)                                   WaterNavAreaClass                                           ___ OFFSET(get<T>, {0x14F0, 8, 0, 0})
	DMember(double)                                    FixedWaterDepth                                             ___ OFFSET(get<double>, {0x14F8, 8, 0, 0})
};

/// Class /Script/Water.CustomMeshGenerator
/// Size: 0x0008 (0x000028 - 0x000030)
class UCustomMeshGenerator : public UWaterBodyGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UStaticMeshComponent*)                     MeshComp                                                    ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/Water.WaterBodyCustom
/// Size: 0x0000 (0x0002E0 - 0x0002E0)
class AWaterBodyCustom : public AWaterBody
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
};

/// Class /Script/Water.WaterBodyCustomComponent
/// Size: 0x0010 (0x001500 - 0x001510)
class UWaterBodyCustomComponent : public UWaterBodyComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5392;

public:
	CMember(UStaticMeshComponent*)                     MeshComp                                                    ___ OFFSET(get<T>, {0x1500, 8, 0, 0})
};

/// Class /Script/Water.WaterBodyExclusionVolume
/// Size: 0x0018 (0x0002D8 - 0x0002F0)
class AWaterBodyExclusionVolume : public APhysicsVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	DMember(bool)                                      bExcludeAllOverlappingWaterBodies                           ___ OFFSET(get<bool>, {0x2D8, 1, 0, 0})
	CMember(TArray<AWaterBody*>)                       WaterBodiesToExclude                                        ___ OFFSET(get<T>, {0x2E0, 16, 0, 0})
};

/// Class /Script/Water.WaterBodyHLODBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UWaterBodyHLODBuilder : public UHLODBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Water.WaterBodyInfoMeshComponent
/// Size: 0x0000 (0x000620 - 0x000620)
class UWaterBodyInfoMeshComponent : public UWaterBodyMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1568;

public:
};

/// Class /Script/Water.WaterBodyIsland
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AWaterBodyIsland : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(UWaterSplineComponent*)                    SplineComp                                                  ___ OFFSET(get<T>, {0x298, 8, 0, 0})
};

/// Class /Script/Water.LakeGenerator
/// Size: 0x0018 (0x000028 - 0x000040)
class ULakeGenerator : public UWaterBodyGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UStaticMeshComponent*)                     LakeMeshComp                                                ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UBoxComponent*)                            LakeCollisionComp                                           ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(ULakeCollisionComponent*)                  LakeCollision                                               ___ OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Water.WaterBodyLake
/// Size: 0x0000 (0x0002E0 - 0x0002E0)
class AWaterBodyLake : public AWaterBody
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
};

/// Class /Script/Water.WaterBodyLakeComponent
/// Size: 0x0010 (0x001500 - 0x001510)
class UWaterBodyLakeComponent : public UWaterBodyComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5392;

public:
	CMember(UStaticMeshComponent*)                     LakeMeshComp                                                ___ OFFSET(get<T>, {0x1500, 8, 0, 0})
	CMember(ULakeCollisionComponent*)                  LakeCollision                                               ___ OFFSET(get<T>, {0x1508, 8, 0, 0})
};

/// Class /Script/Water.OceanGenerator
/// Size: 0x0020 (0x000028 - 0x000048)
class UOceanGenerator : public UWaterBodyGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<UOceanBoxCollisionComponent*>)      CollisionBoxes                                              ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<UOceanCollisionComponent*>)         CollisionHullSets                                           ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/Water.WaterBodyOcean
/// Size: 0x0000 (0x0002E0 - 0x0002E0)
class AWaterBodyOcean : public AWaterBody
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
};

/// Class /Script/Water.WaterBodyOceanComponent
/// Size: 0x0060 (0x001500 - 0x001560)
class UWaterBodyOceanComponent : public UWaterBodyComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5472;

public:
	CMember(TArray<UOceanBoxCollisionComponent*>)      CollisionBoxes                                              ___ OFFSET(get<T>, {0x1500, 16, 0, 0})
	CMember(TArray<UOceanCollisionComponent*>)         CollisionHullSets                                           ___ OFFSET(get<T>, {0x1510, 16, 0, 0})
	SMember(FVector)                                   CollisionExtents                                            ___ OFFSET(get<T>, {0x1520, 24, 0, 0})
	SMember(FVector2D)                                 OceanExtents                                                ___ OFFSET(get<T>, {0x1538, 16, 0, 0})
	SMember(FVector2D)                                 SavedZoneLocation                                           ___ OFFSET(get<T>, {0x1548, 16, 0, 0})
	DMember(float)                                     HeightOffset                                                ___ OFFSET(get<float>, {0x1558, 4, 0, 0})
};

/// Class /Script/Water.RiverGenerator
/// Size: 0x0010 (0x000028 - 0x000038)
class URiverGenerator : public UWaterBodyGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<USplineMeshComponent*>)             SplineMeshComponents                                        ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/Water.WaterBodyRiver
/// Size: 0x0000 (0x0002E0 - 0x0002E0)
class AWaterBodyRiver : public AWaterBody
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
};

/// Class /Script/Water.WaterBodyRiverComponent
/// Size: 0x0030 (0x001500 - 0x001530)
class UWaterBodyRiverComponent : public UWaterBodyComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5424;

public:
	CMember(TArray<USplineMeshComponent*>)             SplineMeshComponents                                        ___ OFFSET(get<T>, {0x1500, 16, 0, 0})
	CMember(UMaterialInterface*)                       LakeTransitionMaterial                                      ___ OFFSET(get<T>, {0x1510, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 LakeTransitionMID                                           ___ OFFSET(get<T>, {0x1518, 8, 0, 0})
	CMember(UMaterialInterface*)                       OceanTransitionMaterial                                     ___ OFFSET(get<T>, {0x1520, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 OceanTransitionMID                                          ___ OFFSET(get<T>, {0x1528, 8, 0, 0})
};

/// Class /Script/Water.WaterBrushActorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UWaterBrushActorInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Water.WaterMeshComponent
/// Size: 0x0140 (0x0005A0 - 0x0006E0)
class UWaterMeshComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1760;

public:
	DMember(int32_t)                                   ForceCollapseDensityLevel                                   ___ OFFSET(get<int32_t>, {0x5A0, 4, 0, 0})
	CMember(UMaterialInterface*)                       FarDistanceMaterial                                         ___ OFFSET(get<T>, {0x5A8, 8, 0, 0})
	DMember(float)                                     FarDistanceMeshExtent                                       ___ OFFSET(get<float>, {0x5B0, 4, 0, 0})
	DMember(float)                                     TileSize                                                    ___ OFFSET(get<float>, {0x5B4, 4, 0, 0})
	SMember(FIntPoint)                                 ExtentInTiles                                               ___ OFFSET(get<T>, {0x5B8, 8, 0, 0})
	SMember(FIntPoint)                                 LocalTessellationExtentInTiles                              ___ OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(TSet<UMaterialInterface*>)                 UsedMaterials                                               ___ OFFSET(get<T>, {0x670, 80, 0, 0})
	DMember(bool)                                      bUseFarMeshWithoutOcean                                     ___ OFFSET(get<bool>, {0x6C0, 1, 0, 0})
	DMember(int32_t)                                   TessellationFactor                                          ___ OFFSET(get<int32_t>, {0x6D0, 4, 0, 0})
	DMember(float)                                     LODScale                                                    ___ OFFSET(get<float>, {0x6D4, 4, 0, 0})
};

/// Class /Script/Water.WaterRuntimeSettings
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UWaterRuntimeSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TEnumAsByte<ECollisionChannel>)            CollisionChannelForWaterTraces                              ___ OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(TWeakObjectPtr<UMaterialParameterCollection*>) MaterialParameterCollection                             ___ OFFSET(get<T>, {0x38, 32, 0, 0})
	DMember(float)                                     WaterBodyIconWorldZOffset                                   ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	SMember(FName)                                     DefaultWaterCollisionProfileName                            ___ OFFSET(get<T>, {0x5C, 4, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInterface*>)       DefaultWaterInfoMaterial                                    ___ OFFSET(get<T>, {0x60, 32, 0, 0})
	CMember(UClass*)                                   WaterBodyRiverComponentClass                                ___ OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(UClass*)                                   WaterBodyLakeComponentClass                                 ___ OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(UClass*)                                   WaterBodyOceanComponentClass                                ___ OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(UClass*)                                   WaterBodyCustomComponentClass                               ___ OFFSET(get<T>, {0x98, 8, 0, 0})
	DMember(bool)                                      bWarnOnMismatchOceanExtent                                  ___ OFFSET(get<bool>, {0xA0, 1, 0, 0})
};

/// Class /Script/Water.WaterSplineComponent
/// Size: 0x0020 (0x000670 - 0x000690)
class UWaterSplineComponent : public USplineComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1680;

public:
	SMember(FWaterSplineCurveDefaults)                 WaterSplineDefaults                                         ___ OFFSET(get<T>, {0x668, 16, 0, 0})
	SMember(FWaterSplineCurveDefaults)                 PreviousWaterSplineDefaults                                 ___ OFFSET(get<T>, {0x678, 16, 0, 0})
};

/// Class /Script/Water.WaterSplineMetadata
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UWaterSplineMetadata : public USplineMetadata
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FInterpCurveFloat)                         Depth                                                       ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FInterpCurveFloat)                         WaterVelocityScalar                                         ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FInterpCurveFloat)                         RiverWidth                                                  ___ OFFSET(get<T>, {0x58, 24, 0, 0})
	SMember(FInterpCurveFloat)                         AudioIntensity                                              ___ OFFSET(get<T>, {0x70, 24, 0, 0})
	SMember(FInterpCurveVector)                        WaterVelocity                                               ___ OFFSET(get<T>, {0x88, 24, 0, 0})
};

/// Class /Script/Water.WaterSubsystem
/// Size: 0x00D0 (0x000040 - 0x000110)
class UWaterSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(ABuoyancyManager*)                         BuoyancyManager                                             ___ OFFSET(get<T>, {0x78, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCameraUnderwaterStateChanged                              ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnWaterScalabilityChanged                                   ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(UStaticMesh*)                              DefaultRiverMesh                                            ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(UStaticMesh*)                              DefaultLakeMesh                                             ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(UMaterialParameterCollection*)             MaterialParameterCollection                                 ___ OFFSET(get<T>, {0xD8, 8, 0, 0})
};

/// Class /Script/Water.WaterWavesAsset
/// Size: 0x0008 (0x000028 - 0x000030)
class UWaterWavesAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UWaterWaves*)                              WaterWaves                                                  ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/Water.WaterWavesAssetReference
/// Size: 0x0008 (0x000028 - 0x000030)
class UWaterWavesAssetReference : public UWaterWavesBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UWaterWavesAsset*)                         WaterWavesAsset                                             ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/Water.WaterZone
/// Size: 0x0090 (0x000290 - 0x000320)
class AWaterZone : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(UTextureRenderTarget2D*)                   WaterInfoTexture                                            ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    OwnedWaterBodies                                            ___ OFFSET(get<T>, {0x298, 16, 0, 0})
	SMember(FIntPoint)                                 RenderTargetResolution                                      ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UWaterMeshComponent*)                      WaterMesh                                                   ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	SMember(FVector2D)                                 ZoneExtent                                                  ___ OFFSET(get<T>, {0x2B8, 16, 0, 0})
	DMember(float)                                     CaptureZOffset                                              ___ OFFSET(get<float>, {0x2C8, 4, 0, 0})
	DMember(bool)                                      bHalfPrecisionTexture                                       ___ OFFSET(get<bool>, {0x2CC, 1, 0, 0})
	DMember(int32_t)                                   VelocityBlurRadius                                          ___ OFFSET(get<int32_t>, {0x2D0, 4, 0, 0})
	DMember(int32_t)                                   OverlapPriority                                             ___ OFFSET(get<int32_t>, {0x2D4, 4, 0, 0})
	DMember(bool)                                      bEnableLocalOnlyTessellation                                ___ OFFSET(get<bool>, {0x2D8, 1, 0, 0})
	SMember(FVector)                                   LocalTessellationExtent                                     ___ OFFSET(get<T>, {0x2E0, 24, 0, 0})
};

/// Struct /Script/Water.SphericalPontoon
/// Size: 0x02D0 (0x000000 - 0x0002D0)
class FSphericalPontoon : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FName)                                     CenterSocket                                                ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FVector)                                   RelativeLocation                                            ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(float)                                     Radius                                                      ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      bFXEnabled                                                  ___ OFFSET(get<bool>, {0x24, 1, 0, 0})
	SMember(FVector)                                   LocalForce                                                  ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FVector)                                   CenterLocation                                              ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FQuat)                                     SocketRotation                                              ___ OFFSET(get<T>, {0x60, 32, 0, 0})
	SMember(FVector)                                   Offset                                                      ___ OFFSET(get<T>, {0x80, 24, 0, 0})
	DMember(float)                                     WaterHeight                                                 ___ OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(float)                                     WaterDepth                                                  ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     ImmersionDepth                                              ___ OFFSET(get<float>, {0xA4, 4, 0, 0})
	SMember(FVector)                                   WaterPlaneLocation                                          ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
	SMember(FVector)                                   WaterPlaneNormal                                            ___ OFFSET(get<T>, {0xC0, 24, 0, 0})
	SMember(FVector)                                   WaterSurfacePosition                                        ___ OFFSET(get<T>, {0xD8, 24, 0, 0})
	SMember(FVector)                                   WaterVelocity                                               ___ OFFSET(get<T>, {0xF0, 24, 0, 0})
	DMember(int32_t)                                   WaterBodyIndex                                              ___ OFFSET(get<int32_t>, {0x108, 4, 0, 0})
	DMember(bool)                                      bIsInWater                                                  ___ OFFSET(get<bool>, {0x10C, 1, 0, 0})
	CMember(UWaterBodyComponent*)                      CurrentWaterBodyComponent                                   ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
};

/// Struct /Script/Water.BuoyancyData
/// Size: 0x0090 (0x000000 - 0x000090)
class FBuoyancyData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<FSphericalPontoon>)                 Pontoons                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bCenterPontoonsOnCOM                                        ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     BuoyancyCoefficient                                         ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     BuoyancyDamp                                                ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     BuoyancyDamp2                                               ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     BuoyancyRampMinVelocity                                     ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     BuoyancyRampMaxVelocity                                     ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     BuoyancyRampMax                                             ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     MaxBuoyantForce                                             ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(bool)                                      bApplyDragForcesInWater                                     ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(float)                                     DragCoefficient                                             ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     DragCoefficient2                                            ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     AngularDragCoefficient                                      ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     MaxDragSpeed                                                ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(bool)                                      bApplyRiverForces                                           ___ OFFSET(get<bool>, {0x44, 1, 0, 0})
	DMember(int32_t)                                   RiverPontoonIndex                                           ___ OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(float)                                     WaterShorePushFactor                                        ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     RiverTraversalPathWidth                                     ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     MaxShorePushForce                                           ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     WaterVelocityStrength                                       ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     MaxWaterForce                                               ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(bool)                                      bAlwaysAllowLateralPush                                     ___ OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(bool)                                      bAllowCurrentWhenMovingFastUpstream                         ___ OFFSET(get<bool>, {0x61, 1, 0, 0})
	DMember(bool)                                      bApplyDownstreamAngularRotation                             ___ OFFSET(get<bool>, {0x62, 1, 0, 0})
	SMember(FVector)                                   DownstreamAxisOfRotation                                    ___ OFFSET(get<T>, {0x68, 24, 0, 0})
	DMember(float)                                     DownstreamRotationStrength                                  ___ OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     DownstreamRotationStiffness                                 ___ OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     DownstreamRotationAngularDamping                            ___ OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     DownstreamMaxAcceleration                                   ___ OFFSET(get<float>, {0x8C, 4, 0, 0})
};

/// Struct /Script/Water.WaterBodyStaticMeshSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FWaterBodyStaticMeshSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bEnableWaterBodyStaticMesh                                  ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bSectionWaterBodyStaticMesh                                 ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(double)                                    SectionSize                                                 ___ OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /Script/Water.WaterBodyWeightmapSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FWaterBodyWeightmapSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     FalloffWidth                                                ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     EdgeOffset                                                  ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(UTexture2D*)                               ModulationTexture                                           ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     TextureTiling                                               ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     TextureInfluence                                            ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Midpoint                                                    ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     FinalOpacity                                                ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/Water.WaterCurveSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FWaterCurveSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bUseCurveChannel                                            ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(UCurveFloat*)                              ElevationCurveAsset                                         ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     ChannelEdgeOffset                                           ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     ChannelDepth                                                ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     CurveRampWidth                                              ___ OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/Water.GerstnerWave
/// Size: 0x0048 (0x000000 - 0x000048)
class FGerstnerWave : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     WaveLength                                                  ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Amplitude                                                   ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Steepness                                                   ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FVector)                                   Direction                                                   ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FVector2D)                                 WaveVector                                                  ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(float)                                     WaveSpeed                                                   ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     WKA                                                         ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     Q                                                           ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     PhaseOffset                                                 ___ OFFSET(get<float>, {0x44, 4, 0, 0})
};

/// Struct /Script/Water.GerstnerWaveOctave
/// Size: 0x0014 (0x000000 - 0x000014)
class FGerstnerWaveOctave : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(int32_t)                                   NumWaves                                                    ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     AmplitudeScale                                              ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MainDirection                                               ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     SpreadAngle                                                 ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bUniformSpread                                              ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/Water.UnderwaterPostProcessSettings
/// Size: 0x0700 (0x000000 - 0x000700)
class FUnderwaterPostProcessSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1792;

public:
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     Priority                                                    ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     BlendRadius                                                 ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     BlendWeight                                                 ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	SMember(FPostProcessSettings)                      PostProcessSettings                                         ___ OFFSET(get<T>, {0x10, 1760, 0, 0})
	CMember(UMaterialInterface*)                       UnderwaterPostProcessMaterial                               ___ OFFSET(get<T>, {0x6F0, 8, 0, 0})
};

/// Struct /Script/Water.WaterBodyHeightmapSettings
/// Size: 0x0080 (0x000000 - 0x000080)
class FWaterBodyHeightmapSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(EWaterBrushBlendType)                      BlendMode                                                   ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bInvertShape                                                ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	SMember(FWaterFalloffSettings)                     FalloffSettings                                             ___ OFFSET(get<T>, {0x4, 20, 0, 0})
	SMember(FWaterBrushEffects)                        Effects                                                     ___ OFFSET(get<T>, {0x18, 96, 0, 0})
	DMember(int32_t)                                   Priority                                                    ___ OFFSET(get<int32_t>, {0x78, 4, 0, 0})
};

/// Struct /Script/Water.WaterBrushEffects
/// Size: 0x0060 (0x000000 - 0x000060)
class FWaterBrushEffects : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FWaterBrushEffectBlurring)                 Blurring                                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FWaterBrushEffectCurlNoise)                CurlNoise                                                   ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FWaterBrushEffectDisplacement)             displacement                                                ___ OFFSET(get<T>, {0x18, 40, 0, 0})
	SMember(FWaterBrushEffectSmoothBlending)           SmoothBlending                                              ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	SMember(FWaterBrushEffectTerracing)                Terracing                                                   ___ OFFSET(get<T>, {0x48, 20, 0, 0})
};

/// Struct /Script/Water.WaterBrushEffectTerracing
/// Size: 0x0014 (0x000000 - 0x000014)
class FWaterBrushEffectTerracing : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     TerraceAlpha                                                ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     TerraceSpacing                                              ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     TerraceSmoothness                                           ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MaskLength                                                  ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaskStartOffset                                             ___ OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/Water.WaterBrushEffectSmoothBlending
/// Size: 0x0008 (0x000000 - 0x000008)
class FWaterBrushEffectSmoothBlending : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     InnerSmoothDistance                                         ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     OuterSmoothDistance                                         ___ OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/Water.WaterBrushEffectDisplacement
/// Size: 0x0028 (0x000000 - 0x000028)
class FWaterBrushEffectDisplacement : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     DisplacementHeight                                          ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DisplacementTiling                                          ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(UTexture2D*)                               Texture                                                     ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     Midpoint                                                    ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FLinearColor)                              Channel                                                     ___ OFFSET(get<T>, {0x14, 16, 0, 0})
	DMember(float)                                     WeightmapInfluence                                          ___ OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Struct /Script/Water.WaterBrushEffectCurlNoise
/// Size: 0x0010 (0x000000 - 0x000010)
class FWaterBrushEffectCurlNoise : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Curl1Amount                                                 ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Curl2Amount                                                 ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Curl1Tiling                                                 ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Curl2Tiling                                                 ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/Water.WaterBrushEffectBlurring
/// Size: 0x0008 (0x000000 - 0x000008)
class FWaterBrushEffectBlurring : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bBlurShape                                                  ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   Radius                                                      ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/Water.WaterFalloffSettings
/// Size: 0x0014 (0x000000 - 0x000014)
class FWaterFalloffSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(EWaterBrushFalloffMode)                    FalloffMode                                                 ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     FalloffAngle                                                ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     FalloffWidth                                                ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     EdgeOffset                                                  ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     ZOffset                                                     ___ OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/Water.WaterBrushEffectCurves
/// Size: 0x0020 (0x000000 - 0x000020)
class FWaterBrushEffectCurves : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bUseCurveChannel                                            ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(UCurveFloat*)                              ElevationCurveAsset                                         ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     ChannelEdgeOffset                                           ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     ChannelDepth                                                ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     CurveRampWidth                                              ___ OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/Water.WaterSplineCurveDefaults
/// Size: 0x0010 (0x000000 - 0x000010)
class FWaterSplineCurveDefaults : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     DefaultDepth                                                ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DefaultWidth                                                ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     DefaultVelocity                                             ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     DefaultAudioIntensity                                       ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Enum /Script/Water.EBuoyancyEvent
/// Size: 0x03
enum EBuoyancyEvent : uint8_t
{
	EBuoyancyEvent__EnteredWaterBody0                                                = 0,
	EBuoyancyEvent__ExitedWaterBody1                                                 = 1,
	EBuoyancyEvent__EBuoyancyEvent_MAX2                                              = 2
};

/// Enum /Script/Water.EWaveSpectrumType
/// Size: 0x04
enum EWaveSpectrumType : uint8_t
{
	EWaveSpectrumType__Phillips0                                                     = 0,
	EWaveSpectrumType__PiersonMoskowitz1                                             = 1,
	EWaveSpectrumType__JONSWAP2                                                      = 2,
	EWaveSpectrumType__EWaveSpectrumType_MAX3                                        = 3
};

/// Enum /Script/Water.EWaterBrushBlendType
/// Size: 0x04
enum EWaterBrushBlendType : uint8_t
{
	EWaterBrushBlendType__AlphaBlend0                                                = 0,
	EWaterBrushBlendType__Min1                                                       = 1,
	EWaterBrushBlendType__Max2                                                       = 2,
	EWaterBrushBlendType__Additive3                                                  = 3
};

/// Enum /Script/Water.EWaterBodyType
/// Size: 0x06
enum EWaterBodyType : uint8_t
{
	EWaterBodyType__River0                                                           = 0,
	EWaterBodyType__Lake1                                                            = 1,
	EWaterBodyType__Ocean2                                                           = 2,
	EWaterBodyType__Transition3                                                      = 3,
	EWaterBodyType__Num4                                                             = 4,
	EWaterBodyType__EWaterBodyType_MAX5                                              = 5
};

/// Enum /Script/Water.EWaterBrushFalloffMode
/// Size: 0x03
enum EWaterBrushFalloffMode : uint8_t
{
	EWaterBrushFalloffMode__Angle0                                                   = 0,
	EWaterBrushFalloffMode__Width1                                                   = 1,
	EWaterBrushFalloffMode__EWaterBrushFalloffMode_MAX2                              = 2
};

