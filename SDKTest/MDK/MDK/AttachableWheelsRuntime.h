
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
	CMember(UStaticMeshComponent*)                     WheelMeshComponent                                          OFFSET(get<T>, {0x290, 8, 0, 0})
	SMember(FRotator)                                  WheelOrientation                                            OFFSET(get<T>, {0x298, 24, 0, 0})
	DMember(float)                                     WheelDistance                                               OFFSET(get<float>, {0x2B0, 4, 0, 0})
	CMember(UPhysicsConstraintComponent*)              AxleConstraint                                              OFFSET(get<T>, {0x2B8, 8, 0, 0})
	SMember(FAttachableWheelAttachData)                AttachData                                                  OFFSET(get<T>, {0x2C0, 88, 0, 0})
};



	/// Functions
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.OnRep_AttachData
	// void OnRep_AttachData(FAttachableWheelAttachData& AttachDataPrev);                                                       // [0x9eb172c] Final|Native|Protected|HasOutParms 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.OnPhysicsStateChanged
	// void OnPhysicsStateChanged(UPrimitiveComponent* PrimitiveComponent, EComponentPhysicsStateChange StateChange);           // [0x9eb1668] Final|Native|Protected 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.OnDetached
	// void OnDetached(UPrimitiveComponent* DetachedComponent);                                                                 // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.OnAttached
	// void OnAttached(UPrimitiveComponent* AttachedComponent);                                                                 // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.GetWorldSpaceAttachData
	// bool GetWorldSpaceAttachData(FAttachableWheelAttachData& OutAttachData, UPrimitiveComponent* PrimitiveComponent, FName BodyName); // [0x9eb1258] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.GetAttachedComponent
	// UPrimitiveComponent* GetAttachedComponent();                                                                             // [0x9eb0f28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.DrawDebug
	// void DrawDebug();                                                                                                        // [0x2d79908] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.DetachFrom
	// bool DetachFrom(UPrimitiveComponent* InComponent);                                                                       // [0x9eb0e80] Final|Native|Public|BlueprintCallable 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.Detach
	// void Detach();                                                                                                           // [0x9eb0dec] Final|Native|Public|BlueprintCallable 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.AttachTo
	// bool AttachTo(UPrimitiveComponent* InComponent, FVector& WorldLocation, FVector& AxleDirection);                         // [0x9eb0c08] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.AttachInPlace
	// bool AttachInPlace(UPrimitiveComponent* InComponent);                                                                    // [0x9eb0b78] Final|Native|Public|BlueprintCallable 
/// Class /Script/AttachableWheelsRuntime.AttachableWheelsComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UAttachableWheelsComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TSet<AAttachableWheel*>)                   AttachedWheels                                              OFFSET(get<T>, {0xA0, 80, 0, 0})
};



	/// Functions
	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.OnWheelDetached
	// void OnWheelDetached(AAttachableWheel* AttachedWheel);                                                                   // [0x1ebf994] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.OnWheelAttached
	// void OnWheelAttached(AAttachableWheel* AttachedWheel);                                                                   // [0x1ebf994] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.HandleWheelDetached_Internal
	// bool HandleWheelDetached_Internal(AAttachableWheel* AttachedWheel);                                                      // [0x9eb15d8] Final|Native|Protected 
	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.HandleWheelAttached_Internal
	// bool HandleWheelAttached_Internal(AAttachableWheel* AttachedWheel);                                                      // [0x9eb1548] Final|Native|Protected 
	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.GetAttachedWheels
	// TArray<AAttachableWheel*> GetAttachedWheels();                                                                           // [0x9eb11ec] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.GetAttachedWheelClosestOnAxis
	// AAttachableWheel* GetAttachedWheelClosestOnAxis(FVector& Point, float& OutClosetDistanceToAxis, FVector& OutClosestPointOnAxis, FVector& OutClosestAxis); // [0x9eb0f4c] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.DrawDebug
	// void DrawDebug();                                                                                                        // [0x2d79908] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.DetachAllWheels
	// int32_t DetachAllWheels();                                                                                               // [0x9eb0e00] Final|RequiredAPI|Native|Public|BlueprintCallable 
/// Struct /Script/AttachableWheelsRuntime.AttachableWheelAttachData
/// Size: 0x0058 (0x000000 - 0x000058)
class FAttachableWheelAttachData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TWeakObjectPtr<UPrimitiveComponent*>)      PrimitiveComponent                                          OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   Pos                                                         OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Axis1                                                       OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Axis2                                                       OFFSET(get<T>, {0x38, 24, 0, 0})
	SMember(FName)                                     AttachmentName                                              OFFSET(get<T>, {0x50, 4, 0, 0})
};

