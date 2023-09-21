
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: ClothingSystemRuntimeCommon
/// dependency: ClothingSystemRuntimeInterface
/// dependency: CoreUObject

/// Class /Script/ChaosCloth.ChaosClothConfig
/// Size: 0x00F0 (0x000028 - 0x000118)
class UChaosClothConfig : public UClothConfigCommon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(EClothMassMode)                            MassMode                                                    OFFSET(get<T>, {0x28, 1, 0, 0})
	DMember(float)                                     UniformMass                                                 OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     TotalMass                                                   OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     Density                                                     OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     MinPerParticleMass                                          OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FChaosClothWeightedValue)                  EdgeStiffnessWeighted                                       OFFSET(get<T>, {0x3C, 8, 0, 0})
	SMember(FChaosClothWeightedValue)                  BendingStiffnessWeighted                                    OFFSET(get<T>, {0x44, 8, 0, 0})
	DMember(bool)                                      bUseBendingElements                                         OFFSET(get<bool>, {0x4C, 1, 0, 0})
	DMember(float)                                     BucklingRatio                                               OFFSET(get<float>, {0x50, 4, 0, 0})
	SMember(FChaosClothWeightedValue)                  BucklingStiffnessWeighted                                   OFFSET(get<T>, {0x54, 8, 0, 0})
	SMember(FChaosClothWeightedValue)                  AreaStiffnessWeighted                                       OFFSET(get<T>, {0x5C, 8, 0, 0})
	DMember(float)                                     VolumeStiffness                                             OFFSET(get<float>, {0x64, 4, 0, 0})
	SMember(FChaosClothWeightedValue)                  TetherStiffness                                             OFFSET(get<T>, {0x68, 8, 0, 0})
	SMember(FChaosClothWeightedValue)                  TetherScale                                                 OFFSET(get<T>, {0x70, 8, 0, 0})
	DMember(bool)                                      bUseGeodesicDistance                                        OFFSET(get<bool>, {0x78, 1, 0, 0})
	DMember(float)                                     ShapeTargetStiffness                                        OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(float)                                     CollisionThickness                                          OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     FrictionCoefficient                                         OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(bool)                                      bUseCCD                                                     OFFSET(get<bool>, {0x88, 1, 0, 0})
	DMember(bool)                                      bUseSelfCollisions                                          OFFSET(get<bool>, {0x89, 1, 0, 0})
	DMember(float)                                     SelfCollisionThickness                                      OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(float)                                     SelfCollisionFriction                                       OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(bool)                                      bUseSelfIntersections                                       OFFSET(get<bool>, {0x94, 1, 0, 0})
	DMember(bool)                                      bUseLegacyBackstop                                          OFFSET(get<bool>, {0x95, 1, 0, 0})
	DMember(float)                                     DampingCoefficient                                          OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     LocalDampingCoefficient                                     OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(bool)                                      bUsePointBasedWindModel                                     OFFSET(get<bool>, {0xA0, 1, 0, 0})
	SMember(FChaosClothWeightedValue)                  Drag                                                        OFFSET(get<T>, {0xA4, 8, 0, 0})
	SMember(FChaosClothWeightedValue)                  Lift                                                        OFFSET(get<T>, {0xAC, 8, 0, 0})
	DMember(bool)                                      bUseGravityOverride                                         OFFSET(get<bool>, {0xB4, 1, 0, 0})
	DMember(float)                                     GravityScale                                                OFFSET(get<float>, {0xB8, 4, 0, 0})
	SMember(FVector)                                   Gravity                                                     OFFSET(get<T>, {0xC0, 24, 0, 0})
	SMember(FChaosClothWeightedValue)                  Pressure                                                    OFFSET(get<T>, {0xD8, 8, 0, 0})
	SMember(FChaosClothWeightedValue)                  AnimDriveStiffness                                          OFFSET(get<T>, {0xE0, 8, 0, 0})
	SMember(FChaosClothWeightedValue)                  AnimDriveDamping                                            OFFSET(get<T>, {0xE8, 8, 0, 0})
	SMember(FVector)                                   LinearVelocityScale                                         OFFSET(get<T>, {0xF0, 24, 0, 0})
	DMember(float)                                     AngularVelocityScale                                        OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(float)                                     FictitiousAngularScale                                      OFFSET(get<float>, {0x10C, 4, 0, 0})
	DMember(bool)                                      bUseTetrahedralConstraints                                  OFFSET(get<bool>, {0x110, 1, 0, 0})
	DMember(bool)                                      bUseThinShellVolumeConstraints                              OFFSET(get<bool>, {0x111, 1, 0, 0})
	DMember(bool)                                      bUseContinuousCollisionDetection                            OFFSET(get<bool>, {0x112, 1, 0, 0})
};

/// Class /Script/ChaosCloth.ChaosClothSharedSimConfig
/// Size: 0x0010 (0x000028 - 0x000038)
class UChaosClothSharedSimConfig : public UClothSharedConfigCommon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   IterationCount                                              OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   MaxIterationCount                                           OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   SubdivisionCount                                            OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(bool)                                      bUseLocalSpaceSimulation                                    OFFSET(get<bool>, {0x34, 1, 0, 0})
	DMember(bool)                                      bUseXPBDConstraints                                         OFFSET(get<bool>, {0x35, 1, 0, 0})
};

/// Class /Script/ChaosCloth.ChaosClothingSimulationFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class UChaosClothingSimulationFactory : public UClothingSimulationFactory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ChaosCloth.ChaosClothingInteractor
/// Size: 0x0020 (0x000030 - 0x000050)
class UChaosClothingInteractor : public UClothingInteractor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/ChaosCloth.ChaosClothingSimulationInteractor
/// Size: 0x0020 (0x000090 - 0x0000B0)
class UChaosClothingSimulationInteractor : public UClothingSimulationInteractor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Struct /Script/ChaosCloth.ChaosClothWeightedValue
/// Size: 0x0008 (0x000000 - 0x000008)
class FChaosClothWeightedValue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Low                                                         OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     High                                                        OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Enum /Script/ChaosCloth.EChaosWeightMapTarget
/// Size: 0x16
enum EChaosWeightMapTarget : uint8_t
{
	EChaosWeightMapTarget__None0                                                     = 0,
	EChaosWeightMapTarget__MaxDistance1                                              = 1,
	EChaosWeightMapTarget__BackstopDistance2                                         = 2,
	EChaosWeightMapTarget__BackstopRadius3                                           = 3,
	EChaosWeightMapTarget__AnimDriveStiffness4                                       = 4,
	EChaosWeightMapTarget__AnimDriveDamping5                                         = 5,
	EChaosWeightMapTarget__TetherStiffness6                                          = 6,
	EChaosWeightMapTarget__TetherScale7                                              = 7,
	EChaosWeightMapTarget__Drag8                                                     = 8,
	EChaosWeightMapTarget__Lift9                                                     = 9,
	EChaosWeightMapTarget__EdgeStiffness10                                           = 10,
	EChaosWeightMapTarget__BendingStiffness11                                        = 11,
	EChaosWeightMapTarget__AreaStiffness12                                           = 12,
	EChaosWeightMapTarget__BucklingStiffness13                                       = 13,
	EChaosWeightMapTarget__Pressure14                                                = 14,
	EChaosWeightMapTarget__EChaosWeightMapTarget_MAX15                               = 15
};

/// Enum /Script/ChaosCloth.EChaosClothTetherMode
/// Size: 0x05
enum EChaosClothTetherMode : uint8_t
{
	EChaosClothTetherMode__FastTetherFastLength0                                     = 0,
	EChaosClothTetherMode__AccurateTetherFastLength1                                 = 1,
	EChaosClothTetherMode__AccurateTetherAccurateLength2                             = 2,
	EChaosClothTetherMode__MaxChaosClothTetherMode3                                  = 3,
	EChaosClothTetherMode__EChaosClothTetherMode_MAX4                                = 4
};

