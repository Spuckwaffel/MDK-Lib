/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ChaosNiagara.

/// Struct /Script/ChaosNiagara.ChaosDestructionEvent
/// Size: 0x0078 (0x000000 - 0x000078)
class FChaosDestructionEvent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FVector)                                   Position                                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Normal                                                      ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   Velocity                                                    ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   AngularVelocity                                             ___ OFFSET(get<T>, {0x48, 24, 0, 0})
	DMember(float)                                     ExtentMin                                                   ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     ExtentMax                                                   ___ OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(int32_t)                                   ParticleID                                                  ___ OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	DMember(float)                                     Time                                                        ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(int32_t)                                   Type                                                        ___ OFFSET(get<int32_t>, {0x70, 4, 0, 0})
};

/// Class /Script/ChaosNiagara.NiagaraDataInterfaceChaosDestruction
/// Size: 0x0310 (0x000038 - 0x000348)
class UNiagaraDataInterfaceChaosDestruction : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(TSet<AChaosSolverActor*>)                  ChaosSolverActorSet                                         ___ OFFSET(get<T>, {0x38, 80, 0, 0})
	CMember(EDataSourceTypeEnum)                       DataSourceType                                              ___ OFFSET(get<T>, {0x88, 1, 0, 0})
	DMember(int32_t)                                   DataProcessFrequency                                        ___ OFFSET(get<int32_t>, {0x8C, 4, 0, 0})
	DMember(int32_t)                                   MaxNumberOfDataEntriesToSpawn                               ___ OFFSET(get<int32_t>, {0x90, 4, 0, 0})
	DMember(bool)                                      DoSpawn                                                     ___ OFFSET(get<bool>, {0x94, 1, 0, 0})
	SMember(FVector2D)                                 SpawnMultiplierMinMax                                       ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	DMember(float)                                     SpawnChance                                                 ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
	SMember(FVector2D)                                 ImpulseToSpawnMinMax                                        ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FVector2D)                                 SpeedToSpawnMinMax                                          ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FVector2D)                                 MassToSpawnMinMax                                           ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FVector2D)                                 ExtentMinToSpawnMinMax                                      ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
	SMember(FVector2D)                                 ExtentMaxToSpawnMinMax                                      ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
	SMember(FVector2D)                                 VolumeToSpawnMinMax                                         ___ OFFSET(get<T>, {0x100, 16, 0, 0})
	SMember(FVector2D)                                 SolverTimeToSpawnMinMax                                     ___ OFFSET(get<T>, {0x110, 16, 0, 0})
	DMember(int32_t)                                   SurfaceTypeToSpawn                                          ___ OFFSET(get<int32_t>, {0x120, 4, 0, 0})
	CMember(ELocationFilteringModeEnum)                LocationFilteringMode                                       ___ OFFSET(get<T>, {0x124, 1, 0, 0})
	CMember(ELocationXToSpawnEnum)                     LocationXToSpawn                                            ___ OFFSET(get<T>, {0x125, 1, 0, 0})
	SMember(FVector2D)                                 LocationXToSpawnMinMax                                      ___ OFFSET(get<T>, {0x128, 16, 0, 0})
	CMember(ELocationYToSpawnEnum)                     LocationYToSpawn                                            ___ OFFSET(get<T>, {0x138, 1, 0, 0})
	SMember(FVector2D)                                 LocationYToSpawnMinMax                                      ___ OFFSET(get<T>, {0x140, 16, 0, 0})
	CMember(ELocationZToSpawnEnum)                     LocationZToSpawn                                            ___ OFFSET(get<T>, {0x150, 1, 0, 0})
	SMember(FVector2D)                                 LocationZToSpawnMinMax                                      ___ OFFSET(get<T>, {0x158, 16, 0, 0})
	DMember(float)                                     TrailMinSpeedToSpawn                                        ___ OFFSET(get<float>, {0x168, 4, 0, 0})
	CMember(EDataSortTypeEnum)                         DataSortingType                                             ___ OFFSET(get<T>, {0x16C, 1, 0, 0})
	DMember(bool)                                      bGetExternalCollisionData                                   ___ OFFSET(get<bool>, {0x16D, 1, 0, 0})
	DMember(bool)                                      DoSpatialHash                                               ___ OFFSET(get<bool>, {0x16E, 1, 0, 0})
	SMember(FVector)                                   SpatialHashVolumeMin                                        ___ OFFSET(get<T>, {0x170, 24, 0, 0})
	SMember(FVector)                                   SpatialHashVolumeMax                                        ___ OFFSET(get<T>, {0x188, 24, 0, 0})
	SMember(FVector)                                   SpatialHashVolumeCellSize                                   ___ OFFSET(get<T>, {0x1A0, 24, 0, 0})
	DMember(int32_t)                                   MaxDataPerCell                                              ___ OFFSET(get<int32_t>, {0x1B8, 4, 0, 0})
	DMember(bool)                                      bApplyMaterialsFilter                                       ___ OFFSET(get<bool>, {0x1BC, 1, 0, 0})
	CMember(TSet<UPhysicalMaterial*>)                  ChaosBreakingMaterialSet                                    ___ OFFSET(get<T>, {0x1C0, 80, 0, 0})
	DMember(bool)                                      bGetExternalBreakingData                                    ___ OFFSET(get<bool>, {0x210, 1, 0, 0})
	DMember(bool)                                      bGetExternalTrailingData                                    ___ OFFSET(get<bool>, {0x211, 1, 0, 0})
	SMember(FVector2D)                                 RandomPositionMagnitudeMinMax                               ___ OFFSET(get<T>, {0x218, 16, 0, 0})
	DMember(float)                                     InheritedVelocityMultiplier                                 ___ OFFSET(get<float>, {0x228, 4, 0, 0})
	CMember(ERandomVelocityGenerationTypeEnum)         RandomVelocityGenerationType                                ___ OFFSET(get<T>, {0x22C, 1, 0, 0})
	SMember(FVector2D)                                 RandomVelocityMagnitudeMinMax                               ___ OFFSET(get<T>, {0x230, 16, 0, 0})
	DMember(float)                                     SpreadAngleMax                                              ___ OFFSET(get<float>, {0x240, 4, 0, 0})
	SMember(FVector)                                   VelocityOffsetMin                                           ___ OFFSET(get<T>, {0x248, 24, 0, 0})
	SMember(FVector)                                   VelocityOffsetMax                                           ___ OFFSET(get<T>, {0x260, 24, 0, 0})
	SMember(FVector2D)                                 FinalVelocityMagnitudeMinMax                                ___ OFFSET(get<T>, {0x278, 16, 0, 0})
	DMember(float)                                     MaxLatency                                                  ___ OFFSET(get<float>, {0x288, 4, 0, 0})
	CMember(EDebugTypeEnum)                            DebugType                                                   ___ OFFSET(get<T>, {0x28C, 1, 0, 0})
	DMember(int32_t)                                   LastSpawnedPointID                                          ___ OFFSET(get<int32_t>, {0x290, 4, 0, 0})
	DMember(float)                                     LastSpawnTime                                               ___ OFFSET(get<float>, {0x294, 4, 0, 0})
	DMember(float)                                     SolverTime                                                  ___ OFFSET(get<float>, {0x2A8, 4, 0, 0})
	DMember(float)                                     TimeStampOfLastProcessedData                                ___ OFFSET(get<float>, {0x2AC, 4, 0, 0})
};

/// Class /Script/ChaosNiagara.NiagaraDataInterfaceGeometryCollection
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceGeometryCollection : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(AGeometryCollectionActor*)                 GeometryCollectionActor                                     ___ OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/ChaosNiagara.NiagaraDataInterfacePhysicsField
/// Size: 0x0000 (0x000038 - 0x000038)
class UNiagaraDataInterfacePhysicsField : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Enum /Script/ChaosNiagara.EDataSortTypeEnum
/// Size: 0x05
enum EDataSortTypeEnum : uint8_t
{
	EDataSortTypeEnum__ChaosNiagara_DataSortType_NoSorting0                          = 0,
	EDataSortTypeEnum__ChaosNiagara_DataSortType_RandomShuffle1                      = 1,
	EDataSortTypeEnum__ChaosNiagara_DataSortType_SortByMassMaxToMin2                 = 2,
	EDataSortTypeEnum__ChaosNiagara_DataSortType_SortByMassMinToMax3                 = 3,
	EDataSortTypeEnum__ChaosNiagara_Max4                                             = 4
};

/// Enum /Script/ChaosNiagara.ERandomVelocityGenerationTypeEnum
/// Size: 0x04
enum ERandomVelocityGenerationTypeEnum : uint8_t
{
	ERandomVelocityGenerationTypeEnum__ChaosNiagara_RandomVelocityGenerationType_RandomDistribution0 = 0,
	ERandomVelocityGenerationTypeEnum__ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers1 = 1,
	ERandomVelocityGenerationTypeEnum__ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased2 = 2,
	ERandomVelocityGenerationTypeEnum__ChaosNiagara_Max3                             = 3
};

/// Enum /Script/ChaosNiagara.EDebugTypeEnum
/// Size: 0x04
enum EDebugTypeEnum : uint8_t
{
	EDebugTypeEnum__ChaosNiagara_DebugType_NoDebug0                                  = 0,
	EDebugTypeEnum__ChaosNiagara_DebugType_ColorBySolver1                            = 1,
	EDebugTypeEnum__ChaosNiagara_DebugType_ColorByParticleIndex2                     = 2,
	EDebugTypeEnum__ChaosNiagara_Max3                                                = 3
};

/// Enum /Script/ChaosNiagara.EDataSourceTypeEnum
/// Size: 0x04
enum EDataSourceTypeEnum : uint8_t
{
	EDataSourceTypeEnum__ChaosNiagara_DataSourceType_Collision0                      = 0,
	EDataSourceTypeEnum__ChaosNiagara_DataSourceType_Breaking1                       = 1,
	EDataSourceTypeEnum__ChaosNiagara_DataSourceType_Trailing2                       = 2,
	EDataSourceTypeEnum__ChaosNiagara_Max3                                           = 3
};

/// Enum /Script/ChaosNiagara.ELocationFilteringModeEnum
/// Size: 0x03
enum ELocationFilteringModeEnum : uint8_t
{
	ELocationFilteringModeEnum__ChaosNiagara_LocationFilteringMode_Inclusive0        = 0,
	ELocationFilteringModeEnum__ChaosNiagara_LocationFilteringMode_Exclusive1        = 1,
	ELocationFilteringModeEnum__ChaosNiagara_Max2                                    = 2
};

/// Enum /Script/ChaosNiagara.ELocationXToSpawnEnum
/// Size: 0x05
enum ELocationXToSpawnEnum : uint8_t
{
	ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_None0                       = 0,
	ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_Min1                        = 1,
	ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_Max2                        = 2,
	ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_MinMax3                     = 3,
	ELocationXToSpawnEnum__ChaosNiagara_Max4                                         = 4
};

/// Enum /Script/ChaosNiagara.ELocationYToSpawnEnum
/// Size: 0x05
enum ELocationYToSpawnEnum : uint8_t
{
	ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_None0                       = 0,
	ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_Min1                        = 1,
	ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_Max2                        = 2,
	ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_MinMax3                     = 3,
	ELocationYToSpawnEnum__ChaosNiagara_Max4                                         = 4
};

/// Enum /Script/ChaosNiagara.ELocationZToSpawnEnum
/// Size: 0x05
enum ELocationZToSpawnEnum : uint8_t
{
	ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_None0                       = 0,
	ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_Min1                        = 1,
	ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_Max2                        = 2,
	ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_MinMax3                     = 3,
	ELocationZToSpawnEnum__ChaosNiagara_Max4                                         = 4
};

