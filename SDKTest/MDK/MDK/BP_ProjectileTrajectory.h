
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C
/// Size: 0x0048 (0x000318 - 0x000360)
class ABP_ProjectileTrajectory_C : public AFortProjectileTrajectory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x318, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Target                                                      OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(USplineComponent*)                         Spline                                                      OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x330, 8, 0, 0})
	DMember(int32_t)                                   MaxMeshCount                                                OFFSET(get<int32_t>, {0x338, 4, 0, 0})
	CMember(TArray<USplineMeshComponent*>)             SplineMeshComponents                                        OFFSET(get<T>, {0x340, 16, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 SplineMID                                                   OFFSET(get<T>, {0x350, 8, 0, 0})
	DMember(float)                                     SplineFadeDistance                                          OFFSET(get<float>, {0x358, 4, 0, 0})
	DMember(float)                                     SplineFadeStartDistance                                     OFFSET(get<float>, {0x35C, 4, 0, 0})


	/// Functions
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetTrajectorySpline
	// void SetTrajectorySpline(TArray<FVector>& SplinePoints, TArray<FVector>& SplineTangents);                                // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetTrajectoryFromNative
	// void SetTrajectoryFromNative(TArray<FVector>& SplinePoints, TArray<FVector>& SplineTangents);                            // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ExecuteUbergraph_BP_ProjectileTrajectory
	// void ExecuteUbergraph_BP_ProjectileTrajectory(int32_t EntryPoint);                                                       // [0x154a140] HasDefaults          
};

