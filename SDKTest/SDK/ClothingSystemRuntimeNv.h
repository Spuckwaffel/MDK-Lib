/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ClothingSystemRuntimeNv.

/// Struct /Script/ClothingSystemRuntimeNv.ClothConstraintSetupNv
/// Size: 0x0010 (0x000000 - 0x000010)
class FClothConstraintSetupNv : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Stiffness                                                   ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     StiffnessMultiplier                                         ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     StretchLimit                                                ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     CompressionLimit                                            ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Class /Script/ClothingSystemRuntimeNv.ClothConfigNv
/// Size: 0x0178 (0x000028 - 0x0001A0)
class UClothConfigNv : public UClothConfigCommon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	CMember(EClothingWindMethodNv)                     ClothingWindMethod                                          ___ OFFSET(get<T>, {0x28, 1, 0, 0})
	SMember(FClothConstraintSetupNv)                   VerticalConstraint                                          ___ OFFSET(get<T>, {0x2C, 16, 0, 0})
	SMember(FClothConstraintSetupNv)                   HorizontalConstraint                                        ___ OFFSET(get<T>, {0x3C, 16, 0, 0})
	SMember(FClothConstraintSetupNv)                   BendConstraint                                              ___ OFFSET(get<T>, {0x4C, 16, 0, 0})
	SMember(FClothConstraintSetupNv)                   ShearConstraint                                             ___ OFFSET(get<T>, {0x5C, 16, 0, 0})
	DMember(float)                                     SelfCollisionRadius                                         ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     SelfCollisionStiffness                                      ___ OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     SelfCollisionCullScale                                      ___ OFFSET(get<float>, {0x74, 4, 0, 0})
	SMember(FVector)                                   Damping                                                     ___ OFFSET(get<T>, {0x78, 24, 0, 0})
	DMember(float)                                     Friction                                                    ___ OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(float)                                     WindDragCoefficient                                         ___ OFFSET(get<float>, {0x94, 4, 0, 0})
	DMember(float)                                     WindLiftCoefficient                                         ___ OFFSET(get<float>, {0x98, 4, 0, 0})
	SMember(FVector)                                   LinearDrag                                                  ___ OFFSET(get<T>, {0xA0, 24, 0, 0})
	SMember(FVector)                                   AngularDrag                                                 ___ OFFSET(get<T>, {0xB8, 24, 0, 0})
	SMember(FVector)                                   LinearInertiaScale                                          ___ OFFSET(get<T>, {0xD0, 24, 0, 0})
	SMember(FVector)                                   AngularInertiaScale                                         ___ OFFSET(get<T>, {0xE8, 24, 0, 0})
	SMember(FVector)                                   CentrifugalInertiaScale                                     ___ OFFSET(get<T>, {0x100, 24, 0, 0})
	DMember(float)                                     SolverFrequency                                             ___ OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(float)                                     StiffnessFrequency                                          ___ OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(float)                                     GravityScale                                                ___ OFFSET(get<float>, {0x120, 4, 0, 0})
	SMember(FVector)                                   GravityOverride                                             ___ OFFSET(get<T>, {0x128, 24, 0, 0})
	DMember(bool)                                      bUseGravityOverride                                         ___ OFFSET(get<bool>, {0x140, 1, 0, 0})
	DMember(float)                                     TetherStiffness                                             ___ OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(float)                                     TetherLimit                                                 ___ OFFSET(get<float>, {0x148, 4, 0, 0})
	DMember(float)                                     CollisionThickness                                          ___ OFFSET(get<float>, {0x14C, 4, 0, 0})
	DMember(float)                                     AnimDriveSpringStiffness                                    ___ OFFSET(get<float>, {0x150, 4, 0, 0})
	DMember(float)                                     AnimDriveDamperStiffness                                    ___ OFFSET(get<float>, {0x154, 4, 0, 0})
	CMember(EClothingWindMethod_Legacy)                WindMethod                                                  ___ OFFSET(get<T>, {0x158, 1, 0, 0})
	SMember(FClothConstraintSetup_Legacy)              VerticalConstraintConfig                                    ___ OFFSET(get<T>, {0x15C, 16, 0, 0})
	SMember(FClothConstraintSetup_Legacy)              HorizontalConstraintConfig                                  ___ OFFSET(get<T>, {0x16C, 16, 0, 0})
	SMember(FClothConstraintSetup_Legacy)              BendConstraintConfig                                        ___ OFFSET(get<T>, {0x17C, 16, 0, 0})
	SMember(FClothConstraintSetup_Legacy)              ShearConstraintConfig                                       ___ OFFSET(get<T>, {0x18C, 16, 0, 0})
};

/// Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
/// Size: 0x0000 (0x000028 - 0x000028)
class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
/// Size: 0x0000 (0x000090 - 0x000090)
class UClothingSimulationInteractorNv : public UClothingSimulationInteractor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
/// Size: 0x0040 (0x0000E0 - 0x000120)
class UClothPhysicalMeshDataNv_Legacy : public UClothPhysicalMeshDataBase_Legacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<float>)                             MaxDistances                                                ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(TArray<float>)                             BackstopDistances                                           ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
	CMember(TArray<float>)                             BackstopRadiuses                                            ___ OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(TArray<float>)                             AnimDriveMultipliers                                        ___ OFFSET(get<T>, {0x110, 16, 0, 0})
};

/// Enum /Script/ClothingSystemRuntimeNv.EClothingWindMethodNv
/// Size: 0x03
enum EClothingWindMethodNv : uint8_t
{
	EClothingWindMethodNv__Legacy0                                                   = 0,
	EClothingWindMethodNv__Accurate1                                                 = 1,
	EClothingWindMethodNv__EClothingWindMethodNv_MAX2                                = 2
};

