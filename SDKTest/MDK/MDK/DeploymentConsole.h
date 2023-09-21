
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/DeploymentConsole.DeploymentConsoleComponent
/// Size: 0x0198 (0x0000A0 - 0x000238)
class UDeploymentConsoleComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
	CMember(TArray<FDeploymentConsoleAircraftData>)    Aircrafts                                                   ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	SMember(FScalableFloat)                            RadiusPercentForRespawnMin                                  ___ OFFSET(get<T>, {0xD8, 40, 0, 0})
	SMember(FScalableFloat)                            RadiusPercentForRespawnMax                                  ___ OFFSET(get<T>, {0x100, 40, 0, 0})
	SMember(FScalableFloat)                            MaxRespawnRadius                                            ___ OFFSET(get<T>, {0x128, 40, 0, 0})
	SMember(FScalableFloat)                            TeamMemberSpread                                            ___ OFFSET(get<T>, {0x150, 40, 0, 0})
	SMember(FScalableFloat)                            TraceForGroundStart                                         ___ OFFSET(get<T>, {0x178, 40, 0, 0})
	SMember(FScalableFloat)                            TraceForGroundEnd                                           ___ OFFSET(get<T>, {0x1A0, 40, 0, 0})
	SMember(FScalableFloat)                            MinHeightFromGround                                         ___ OFFSET(get<T>, {0x1C8, 40, 0, 0})
	SMember(FScalableFloat)                            MinHeightFromZero                                           ___ OFFSET(get<T>, {0x1F0, 40, 0, 0})
	CMember(TArray<FVector2D>)                         SpawnPoints                                                 ___ OFFSET(get<T>, {0x218, 16, 0, 0})
	CMember(TArray<FDeploymentConsoleTeamData>)        TeamSpawnData                                               ___ OFFSET(get<T>, {0x228, 16, 0, 0})
};

/// Class /Script/DeploymentConsole.FortAthenaMutator_CR_Respawn
/// Size: 0x0000 (0x000338 - 0x000338)
class AFortAthenaMutator_CR_Respawn : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
};

/// Struct /Script/DeploymentConsole.DeploymentConsoleAircraftData
/// Size: 0x0010 (0x000000 - 0x000010)
class FDeploymentConsoleAircraftData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(char)                                      Team                                                        ___ OFFSET(get<char>, {0x0, 1, 0, 0})
	CMember(AFortAthenaAircraft*)                      Aircraft                                                    ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/DeploymentConsole.DeploymentConsoleTeamData
/// Size: 0x0018 (0x000000 - 0x000018)
class FDeploymentConsoleTeamData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(char)                                      Team                                                        ___ OFFSET(get<char>, {0x0, 1, 0, 0})
	CMember(TArray<FVector2D>)                         SpawnLocations                                              ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

