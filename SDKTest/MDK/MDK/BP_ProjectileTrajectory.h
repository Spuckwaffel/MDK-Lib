
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C
/// Size: 0x0051 (0x0002B8 - 0x000309)
class ABP_ProjectileTrajectory_C : public AFortProjectileTrajectory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 777;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     InvalidTarget                                               ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Target                                                      ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	DMember(int32_t)                                   MaxMeshCount                                                ___ OFFSET(get<int32_t>, {0x2D0, 4, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 SplineMID                                                   ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	DMember(double)                                    SplineFadeDistance                                          ___ OFFSET(get<double>, {0x2E0, 8, 0, 0})
	DMember(double)                                    SplineFadeStartDistance                                     ___ OFFSET(get<double>, {0x2E8, 8, 0, 0})
	CMember(UObject*)                                  TrajectoryOwner                                             ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	DMember(bool)                                      ShouldUpdate                                                ___ OFFSET(get<bool>, {0x2F8, 1, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 InvalidSplineMID                                            ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	DMember(bool)                                      bIsTrajectoryValid                                          ___ OFFSET(get<bool>, {0x308, 1, 0, 0})
};

