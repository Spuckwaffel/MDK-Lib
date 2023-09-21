
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/CableComponent.CableActor
/// Size: 0x0008 (0x000290 - 0x000298)
class ACableActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(UCableComponent*)                          CableComponent                                              ___ OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/CableComponent.CableComponent
/// Size: 0x00B0 (0x0005A0 - 0x000650)
class UCableComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1616;

public:
	DMember(bool)                                      bAttachStart                                                ___ OFFSET(get<bool>, {0x5A0, 1, 0, 0})
	DMember(bool)                                      bAttachEnd                                                  ___ OFFSET(get<bool>, {0x5A1, 1, 0, 0})
	SMember(FComponentReference)                       AttachEndTo                                                 ___ OFFSET(get<T>, {0x5A8, 40, 0, 0})
	SMember(FName)                                     AttachEndToSocketName                                       ___ OFFSET(get<T>, {0x5D0, 4, 0, 0})
	SMember(FVector)                                   EndLocation                                                 ___ OFFSET(get<T>, {0x5D8, 24, 0, 0})
	DMember(float)                                     CableLength                                                 ___ OFFSET(get<float>, {0x5F0, 4, 0, 0})
	DMember(int32_t)                                   NumSegments                                                 ___ OFFSET(get<int32_t>, {0x5F4, 4, 0, 0})
	DMember(float)                                     SubstepTime                                                 ___ OFFSET(get<float>, {0x5F8, 4, 0, 0})
	DMember(int32_t)                                   SolverIterations                                            ___ OFFSET(get<int32_t>, {0x5FC, 4, 0, 0})
	DMember(bool)                                      bEnableStiffness                                            ___ OFFSET(get<bool>, {0x600, 1, 0, 0})
	DMember(bool)                                      bUseSubstepping                                             ___ OFFSET(get<bool>, {0x601, 1, 0, 0})
	DMember(bool)                                      bSkipCableUpdateWhenNotVisible                              ___ OFFSET(get<bool>, {0x602, 1, 0, 0})
	DMember(bool)                                      bSkipCableUpdateWhenNotOwnerRecentlyRendered                ___ OFFSET(get<bool>, {0x603, 1, 0, 0})
	DMember(bool)                                      bEnableCollision                                            ___ OFFSET(get<bool>, {0x604, 1, 0, 0})
	DMember(float)                                     CollisionFriction                                           ___ OFFSET(get<float>, {0x608, 4, 0, 0})
	SMember(FVector)                                   CableForce                                                  ___ OFFSET(get<T>, {0x610, 24, 0, 0})
	DMember(float)                                     CableGravityScale                                           ___ OFFSET(get<float>, {0x628, 4, 0, 0})
	DMember(float)                                     CableWidth                                                  ___ OFFSET(get<float>, {0x62C, 4, 0, 0})
	DMember(int32_t)                                   NumSides                                                    ___ OFFSET(get<int32_t>, {0x630, 4, 0, 0})
	DMember(float)                                     TileMaterial                                                ___ OFFSET(get<float>, {0x634, 4, 0, 0})
};

