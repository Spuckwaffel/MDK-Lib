
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
	CMember(UCableComponent*)                          CableComponent                                              OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/CableComponent.CableComponent
/// Size: 0x00B0 (0x0005B0 - 0x000660)
class UCableComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1632;

public:
	DMember(bool)                                      bAttachStart                                                OFFSET(get<bool>, {0x5B0, 1, 0, 0})
	DMember(bool)                                      bAttachEnd                                                  OFFSET(get<bool>, {0x5B1, 1, 0, 0})
	SMember(FComponentReference)                       AttachEndTo                                                 OFFSET(getStruct<T>, {0x5B8, 40, 0, 0})
	SMember(FName)                                     AttachEndToSocketName                                       OFFSET(getStruct<T>, {0x5E0, 4, 0, 0})
	SMember(FVector)                                   EndLocation                                                 OFFSET(getStruct<T>, {0x5E8, 24, 0, 0})
	DMember(float)                                     CableLength                                                 OFFSET(get<float>, {0x600, 4, 0, 0})
	DMember(int32_t)                                   NumSegments                                                 OFFSET(get<int32_t>, {0x604, 4, 0, 0})
	DMember(float)                                     SubstepTime                                                 OFFSET(get<float>, {0x608, 4, 0, 0})
	DMember(int32_t)                                   SolverIterations                                            OFFSET(get<int32_t>, {0x60C, 4, 0, 0})
	DMember(bool)                                      bEnableStiffness                                            OFFSET(get<bool>, {0x610, 1, 0, 0})
	DMember(bool)                                      bUseSubstepping                                             OFFSET(get<bool>, {0x611, 1, 0, 0})
	DMember(bool)                                      bSkipCableUpdateWhenNotVisible                              OFFSET(get<bool>, {0x612, 1, 0, 0})
	DMember(bool)                                      bSkipCableUpdateWhenNotOwnerRecentlyRendered                OFFSET(get<bool>, {0x613, 1, 0, 0})
	DMember(bool)                                      bEnableCollision                                            OFFSET(get<bool>, {0x614, 1, 0, 0})
	DMember(float)                                     CollisionFriction                                           OFFSET(get<float>, {0x618, 4, 0, 0})
	SMember(FVector)                                   CableForce                                                  OFFSET(getStruct<T>, {0x620, 24, 0, 0})
	DMember(float)                                     CableGravityScale                                           OFFSET(get<float>, {0x638, 4, 0, 0})
	DMember(float)                                     CableWidth                                                  OFFSET(get<float>, {0x63C, 4, 0, 0})
	DMember(int32_t)                                   NumSides                                                    OFFSET(get<int32_t>, {0x640, 4, 0, 0})
	DMember(float)                                     TileMaterial                                                OFFSET(get<float>, {0x644, 4, 0, 0})


	/// Functions
	// Function /Script/CableComponent.CableComponent.SetAttachEndToComponent
	// void SetAttachEndToComponent(USceneComponent* Component, FName SocketName);                                              // [0x7415c70] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.SetAttachEndTo
	// void SetAttachEndTo(AActor* Actor, FName ComponentProperty, FName SocketName);                                           // [0x7415adc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.GetCableParticleLocations
	// void GetCableParticleLocations(TArray<FVector>& Locations);                                                              // [0x7415a40] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedComponent
	// USceneComponent* GetAttachedComponent();                                                                                 // [0x74159ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedActor
	// AActor* GetAttachedActor();                                                                                              // [0x74159c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

