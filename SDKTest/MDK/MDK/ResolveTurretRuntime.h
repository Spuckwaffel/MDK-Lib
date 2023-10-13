
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/ResolveTurretRuntime.FortPlayerAnimInstance_AntiVehMountedTurret
/// Size: 0x0030 (0x0015E0 - 0x001610)
class UFortPlayerAnimInstance_AntiVehMountedTurret : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5648;

public:
	SMember(FVector)                                   HandAttachL                                                 OFFSET(getStruct<T>, {0x15D8, 24, 0, 0})
	SMember(FVector)                                   HandAttachR                                                 OFFSET(getStruct<T>, {0x15F0, 24, 0, 0})
	SMember(FName)                                     HandAttachBoneNameL                                         OFFSET(getStruct<T>, {0x1608, 4, 0, 0})
	SMember(FName)                                     HandAttachBoneNameR                                         OFFSET(getStruct<T>, {0x160C, 4, 0, 0})
};

/// Class /Script/ResolveTurretRuntime.FortVehicleAnimInstance_AntiVehMountedTurret
/// Size: 0x0000 (0x000620 - 0x000620)
class UFortVehicleAnimInstance_AntiVehMountedTurret : public UFortMountedTurretAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1568;

public:
};

/// Class /Script/ResolveTurretRuntime.FortVehicleAnimInstance_SevenMountedTurret
/// Size: 0x0000 (0x000620 - 0x000620)
class UFortVehicleAnimInstance_SevenMountedTurret : public UFortMountedTurretAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1568;

public:
};

