
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/MRMesh.MockDataMeshTrackerComponent
/// Size: 0x0070 (0x0002A0 - 0x000310)
class UMockDataMeshTrackerComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FMulticastInlineDelegate)                  OnMeshTrackerUpdated                                        OFFSET(getStruct<T>, {0x2A0, 16, 0, 0})
	DMember(bool)                                      ScanWorld                                                   OFFSET(get<bool>, {0x2B0, 1, 0, 0})
	DMember(bool)                                      RequestNormals                                              OFFSET(get<bool>, {0x2B1, 1, 0, 0})
	DMember(bool)                                      RequestVertexConfidence                                     OFFSET(get<bool>, {0x2B2, 1, 0, 0})
	CMember(EMeshTrackerVertexColorMode)               VertexColorMode                                             OFFSET(get<T>, {0x2B3, 1, 0, 0})
	CMember(TArray<FColor>)                            BlockVertexColors                                           OFFSET(get<T>, {0x2B8, 16, 0, 0})
	SMember(FLinearColor)                              VertexColorFromConfidenceZero                               OFFSET(getStruct<T>, {0x2C8, 16, 0, 0})
	SMember(FLinearColor)                              VertexColorFromConfidenceOne                                OFFSET(getStruct<T>, {0x2D8, 16, 0, 0})
	DMember(float)                                     UpdateInterval                                              OFFSET(get<float>, {0x2E8, 4, 0, 0})
	CMember(UMRMeshComponent*)                         MRMesh                                                      OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
	// void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<float>& Confidence); // [0x101681c] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
	// void DisconnectMRMesh(UMRMeshComponent* InMRMeshPtr);                                                                    // [0x58368c8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
	// void ConnectMRMesh(UMRMeshComponent* InMRMeshPtr);                                                                       // [0x58367c4] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/MRMesh.MRMeshBodyHolder
/// Size: 0x0200 (0x000028 - 0x000228)
class UMRMeshBodyHolder : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	CMember(UBodySetup*)                               BodySetup                                                   OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FBodyInstance)                             BodyInstance                                                OFFSET(getStruct<T>, {0x38, 392, 0, 0})
};

/// Class /Script/MRMesh.MRMeshComponent
/// Size: 0x0080 (0x000580 - 0x000600)
class UMRMeshComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1536;

public:
	CMember(UMaterialInterface*)                       Material                                                    OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UMaterialInterface*)                       WireframeMaterial                                           OFFSET(get<T>, {0x588, 8, 0, 0})
	DMember(bool)                                      bCreateMeshProxySections                                    OFFSET(get<bool>, {0x590, 1, 0, 0})
	DMember(bool)                                      bUpdateNavMeshOnMeshUpdate                                  OFFSET(get<bool>, {0x591, 1, 0, 0})
	DMember(bool)                                      bNeverCreateCollisionMesh                                   OFFSET(get<bool>, {0x593, 1, 0, 0})
	CMember(TArray<UMRMeshBodyHolder*>)                BodyHolders                                                 OFFSET(get<T>, {0x5D8, 16, 0, 0})


	/// Functions
	// Function /Script/MRMesh.MRMeshComponent.SetWireframeMaterial
	// void SetWireframeMaterial(UMaterialInterface* InMaterial);                                                               // [0x5836bb0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetWireframeColor
	// void SetWireframeColor(FLinearColor& InColor);                                                                           // [0x5836b28] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetUseWireframe
	// void SetUseWireframe(bool bUseWireframe);                                                                                // [0x5836aa0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetEnableMeshOcclusion
	// void SetEnableMeshOcclusion(bool bEnable);                                                                               // [0x5836a20] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.RequestNavMeshUpdate
	// void RequestNavMeshUpdate();                                                                                             // [0x58369fc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.IsConnected
	// bool IsConnected();                                                                                                      // [0x58369a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetWireframeColor
	// FLinearColor GetWireframeColor();                                                                                        // [0x583698c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetUseWireframe
	// bool GetUseWireframe();                                                                                                  // [0x5836974] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetEnableMeshOcclusion
	// bool GetEnableMeshOcclusion();                                                                                           // [0x583695c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.ForceNavMeshUpdate
	// void ForceNavMeshUpdate();                                                                                               // [0x5836948] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.Clear
	// void Clear();                                                                                                            // [0x5836724] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/MRMesh.MeshReconstructorBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshReconstructorBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
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

/// Enum /Script/MRMesh.EMeshTrackerVertexColorMode
/// Size: 0x04
enum EMeshTrackerVertexColorMode : uint8_t
{
	EMeshTrackerVertexColorMode__None0                                               = 0,
	EMeshTrackerVertexColorMode__Confidence1                                         = 1,
	EMeshTrackerVertexColorMode__Block2                                              = 2,
	EMeshTrackerVertexColorMode__EMeshTrackerVertexColorMode_MAX3                    = 3
};

