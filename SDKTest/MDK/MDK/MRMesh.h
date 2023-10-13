
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/MRMesh.MeshReconstructorBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshReconstructorBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MRMesh.MeshReconstructorBase.StopReconstruction
	// void StopReconstruction();                                                                                               // [0x1296620] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.StartReconstruction
	// void StartReconstruction();                                                                                              // [0x2627840] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.PauseReconstruction
	// void PauseReconstruction();                                                                                              // [0x1f7db90] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionStarted
	// bool IsReconstructionStarted();                                                                                          // [0x262db60] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionPaused
	// bool IsReconstructionPaused();                                                                                           // [0x1f7db60] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MeshReconstructorBase.DisconnectMRMesh
	// void DisconnectMRMesh();                                                                                                 // [0x1f7db10] Native|Public        
	// Function /Script/MRMesh.MeshReconstructorBase.ConnectMRMesh
	// FMRMeshConfiguration ConnectMRMesh(UMRMeshComponent* Mesh);                                                              // [0x1f7da00] Native|Public        
};

/// Class /Script/MRMesh.MRMeshComponent
/// Size: 0x0050 (0x000640 - 0x000690)
class UMRMeshComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1680;

public:
	CMember(UMaterialInterface*)                       Material                                                    OFFSET(get<T>, {0x648, 8, 0, 0})
	CMember(UMeshReconstructorBase*)                   MeshReconstructor                                           OFFSET(get<T>, {0x650, 8, 0, 0})
	DMember(bool)                                      bEnableCollision                                            OFFSET(get<bool>, {0x658, 1, 0, 0})
	CMember(TArray<UBodySetup*>)                       BodySetups                                                  OFFSET(get<T>, {0x660, 16, 0, 0})


	/// Functions
	// Function /Script/MRMesh.MRMeshComponent.GetReconstructor
	// UMeshReconstructorBase* GetReconstructor();                                                                              // [0x1f7db30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.ConnectReconstructor
	// void ConnectReconstructor(UMeshReconstructorBase* Reconstructor);                                                        // [0x1f7da90] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/MRMesh.MRMeshConfiguration
/// Size: 0x0001 (0x000000 - 0x000001)
class FMRMeshConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

