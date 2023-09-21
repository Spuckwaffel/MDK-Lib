
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/EntityCore.EntityComponent
/// Size: 0x0030 (0x000028 - 0x000058)
class UEntityComponent : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/EntityCore.EntityDataBackedComponent
/// Size: 0x0008 (0x000058 - 0x000060)
class UEntityDataBackedComponent : public UEntityComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/EntityCore.EntityPositionComponent
/// Size: 0x0000 (0x000060 - 0x000060)
class UEntityPositionComponent : public UEntityDataBackedComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/EntityCore.EntityRotationComponent
/// Size: 0x0000 (0x000060 - 0x000060)
class UEntityRotationComponent : public UEntityDataBackedComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/EntityCore.EntityScaleComponent
/// Size: 0x0000 (0x000060 - 0x000060)
class UEntityScaleComponent : public UEntityDataBackedComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/EntityCore.EntityCoreDataBackedRelativePositionComponent
/// Size: 0x0000 (0x000060 - 0x000060)
class UEntityCoreDataBackedRelativePositionComponent : public UEntityDataBackedComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/EntityCore.Entity
/// Size: 0x0010 (0x000028 - 0x000038)
class UEntity : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(ULevel*)                                   Level                                                       ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/EntityCore.EntityCoreSubsystem
/// Size: 0x0120 (0x000030 - 0x000150)
class UEntityCoreSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(TMap<uint32_t, FEntityComponentContainer>) ComponentMap                                                ___ OFFSET(get<T>, {0x40, 80, 0, 0})
	CMember(TArray<UEntityComponent*>)                 ComponentArray                                              ___ OFFSET(get<T>, {0xE8, 16, 0, 0})
	CMember(TMap<uint32_t, UEntity*>)                  Entities                                                    ___ OFFSET(get<T>, {0xF8, 80, 0, 0})
};

/// Class /Script/EntityCore.EntityEnableableComponent
/// Size: 0x0020 (0x000058 - 0x000078)
class UEntityEnableableComponent : public UEntityComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      IsEnabled                                                   ___ OFFSET(get<bool>, {0x58, 1, 1, 0})
	DMember(bool)                                      LastIsEnabled                                               ___ OFFSET(get<bool>, {0x58, 1, 1, 1})
};

/// Class /Script/EntityCore.EntityTickableComponent
/// Size: 0x0038 (0x000078 - 0x0000B0)
class UEntityTickableComponent : public UEntityEnableableComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/EntityCore.EntityScriptComponent
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UEntityScriptComponent : public UEntityTickableComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Struct /Script/EntityCore.ComponentData
/// Size: 0x0001 (0x000000 - 0x000001)
class FComponentData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/EntityCore.EntityPositionComponentData
/// Size: 0x0017 (0x000001 - 0x000018)
class FEntityPositionComponentData : public FComponentData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVector)                                   WorldPosition                                               ___ OFFSET(get<T>, {0x0, 24, 0, 0})
};

/// Struct /Script/EntityCore.EntityRotationComponentData
/// Size: 0x0017 (0x000001 - 0x000018)
class FEntityRotationComponentData : public FComponentData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FRotator)                                  WorldRotation                                               ___ OFFSET(get<T>, {0x0, 24, 0, 0})
};

/// Struct /Script/EntityCore.EntityScaleComponentData
/// Size: 0x0017 (0x000001 - 0x000018)
class FEntityScaleComponentData : public FComponentData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVector)                                   WorldScale3D                                                ___ OFFSET(get<T>, {0x0, 24, 0, 0})
};

/// Struct /Script/EntityCore.EntityCoreSystemRelativePositionComponentData
/// Size: 0x001F (0x000001 - 0x000020)
class FEntityCoreSystemRelativePositionComponentData : public FComponentData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EntityCore.EntityComponentContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FEntityComponentContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<UEntityComponent*>)                 Array                                                       ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/EntityCore.EntityTickFunction
/// Size: 0x0008 (0x000028 - 0x000030)
class FEntityTickFunction : public FTickFunction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Enum /Script/EntityCore.EMovementType
/// Size: 0x04
enum EMovementType : uint8_t
{
	EMovementType__SweepPhysics0                                                     = 0,
	EMovementType__TeleportPhysics1                                                  = 1,
	EMovementType__ResetPhysics2                                                     = 2,
	EMovementType__EMovementType_MAX3                                                = 3
};

