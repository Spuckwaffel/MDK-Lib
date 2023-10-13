
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AnimGraphRuntime
/// dependency: Engine

/// Struct /Script/ImmediatePhysics.AnimNode_RigidBody
/// Size: 0x0478 (0x000118 - 0x000590)
class FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1424;

public:
	CMember(UPhysicsAsset*)                            OverridePhysicsAsset                                        OFFSET(get<T>, {0x118, 8, 0, 0})
	SMember(FVector)                                   OverrideWorldGravity                                        OFFSET(getStruct<T>, {0x120, 12, 0, 0})
	SMember(FVector)                                   ExternalForce                                               OFFSET(getStruct<T>, {0x12C, 12, 0, 0})
	SMember(FVector)                                   ComponentLinearAccScale                                     OFFSET(getStruct<T>, {0x138, 12, 0, 0})
	SMember(FVector)                                   ComponentLinearVelScale                                     OFFSET(getStruct<T>, {0x144, 12, 0, 0})
	SMember(FVector)                                   ComponentAppliedLinearAccClamp                              OFFSET(getStruct<T>, {0x150, 12, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            OverlapChannel                                              OFFSET(get<T>, {0x15C, 1, 0, 0})
	DMember(bool)                                      bEnableWorldGeometry                                        OFFSET(get<bool>, {0x15D, 1, 0, 0})
	CMember(ESimulationSpace)                          SimulationSpace                                             OFFSET(get<T>, {0x160, 4, 0, 0})
	DMember(bool)                                      bOverrideWorldGravity                                       OFFSET(get<bool>, {0x164, 1, 0, 0})
	DMember(float)                                     CachedBoundsScale                                           OFFSET(get<float>, {0x168, 4, 0, 0})
	DMember(bool)                                      bTransferBoneVelocities                                     OFFSET(get<bool>, {0x16C, 1, 0, 0})
	DMember(bool)                                      bFreezeIncomingPoseOnStart                                  OFFSET(get<bool>, {0x16D, 1, 0, 0})
	DMember(bool)                                      bComponentSpaceSimulation                                   OFFSET(get<bool>, {0x16E, 1, 0, 0})
};

/// Enum /Script/ImmediatePhysics.ESimulationSpace
/// Size: 0x04
enum ESimulationSpace : uint8_t
{
	ESimulationSpace__ComponentSpace0                                                = 0,
	ESimulationSpace__WorldSpace1                                                    = 1,
	ESimulationSpace__RootBoneSpace2                                                 = 2,
	ESimulationSpace__ESimulationSpace_MAX3                                          = 3
};

