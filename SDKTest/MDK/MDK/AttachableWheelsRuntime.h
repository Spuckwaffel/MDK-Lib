
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AttachableWheelsRuntime.AttachableWheel
/// Size: 0x0088 (0x000290 - 0x000318)
class AAttachableWheel : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(UStaticMeshComponent*)                     WheelMeshComponent                                          ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	SMember(FRotator)                                  WheelOrientation                                            ___ OFFSET(get<T>, {0x298, 24, 0, 0})
	DMember(float)                                     WheelDistance                                               ___ OFFSET(get<float>, {0x2B0, 4, 0, 0})
	CMember(UPhysicsConstraintComponent*)              AxleConstraint                                              ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	SMember(FAttachableWheelAttachData)                AttachData                                                  ___ OFFSET(get<T>, {0x2C0, 88, 0, 0})
};

/// Class /Script/AttachableWheelsRuntime.AttachableWheelsComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UAttachableWheelsComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TSet<AAttachableWheel*>)                   AttachedWheels                                              ___ OFFSET(get<T>, {0xA0, 80, 0, 0})
};

/// Struct /Script/AttachableWheelsRuntime.AttachableWheelAttachData
/// Size: 0x0058 (0x000000 - 0x000058)
class FAttachableWheelAttachData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TWeakObjectPtr<UPrimitiveComponent*>)      PrimitiveComponent                                          ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   Pos                                                         ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Axis1                                                       ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Axis2                                                       ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	SMember(FName)                                     AttachmentName                                              ___ OFFSET(get<T>, {0x50, 4, 0, 0})
};

