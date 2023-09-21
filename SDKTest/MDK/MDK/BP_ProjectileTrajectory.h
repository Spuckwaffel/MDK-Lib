
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     InvalidTarget                                               OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Target                                                      OFFSET(get<T>, {0x2C8, 8, 0, 0})
	DMember(int32_t)                                   MaxMeshCount                                                OFFSET(get<int32_t>, {0x2D0, 4, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 SplineMID                                                   OFFSET(get<T>, {0x2D8, 8, 0, 0})
	DMember(double)                                    SplineFadeDistance                                          OFFSET(get<double>, {0x2E0, 8, 0, 0})
	DMember(double)                                    SplineFadeStartDistance                                     OFFSET(get<double>, {0x2E8, 8, 0, 0})
	CMember(UObject*)                                  TrajectoryOwner                                             OFFSET(get<T>, {0x2F0, 8, 0, 0})
	DMember(bool)                                      ShouldUpdate                                                OFFSET(get<bool>, {0x2F8, 1, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 InvalidSplineMID                                            OFFSET(get<T>, {0x300, 8, 0, 0})
	DMember(bool)                                      bIsTrajectoryValid                                          OFFSET(get<bool>, {0x308, 1, 0, 0})


	/// Functions
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetShouldUpdateFromOwner
	// void SetShouldUpdateFromOwner(bool ShouldUpdate, UObject* Owner);                                                        // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.UpdateFromTrajectoryOwner
	// void UpdateFromTrajectoryOwner();                                                                                        // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1ebf994] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetTrajectorySpline
	// void SetTrajectorySpline(TArray<FVector>& SplinePoints, TArray<FVector>& SplineTangents);                                // [0x1ebf994] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetTrajectoryValid
	// void SetTrajectoryValid(bool bIsTrajectoryValid);                                                                        // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.UpdateTargetMeshVisibility
	// void UpdateTargetMeshVisibility();                                                                                       // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ExecuteUbergraph_BP_ProjectileTrajectory
	// void ExecuteUbergraph_BP_ProjectileTrajectory(int32_t EntryPoint);                                                       // [0x1ebf994] Final|HasDefaults    
};

