
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
	SMember(FMulticastInlineDelegate)                  OnMeshTrackerUpdated                                        ___ OFFSET(get<T>, {0x2A0, 16, 0, 0})
	DMember(bool)                                      ScanWorld                                                   ___ OFFSET(get<bool>, {0x2B0, 1, 0, 0})
	DMember(bool)                                      RequestNormals                                              ___ OFFSET(get<bool>, {0x2B1, 1, 0, 0})
	DMember(bool)                                      RequestVertexConfidence                                     ___ OFFSET(get<bool>, {0x2B2, 1, 0, 0})
	CMember(EMeshTrackerVertexColorMode)               VertexColorMode                                             ___ OFFSET(get<T>, {0x2B3, 1, 0, 0})
	CMember(TArray<FColor>)                            BlockVertexColors                                           ___ OFFSET(get<T>, {0x2B8, 16, 0, 0})
	SMember(FLinearColor)                              VertexColorFromConfidenceZero                               ___ OFFSET(get<T>, {0x2C8, 16, 0, 0})
	SMember(FLinearColor)                              VertexColorFromConfidenceOne                                ___ OFFSET(get<T>, {0x2D8, 16, 0, 0})
	DMember(float)                                     UpdateInterval                                              ___ OFFSET(get<float>, {0x2E8, 4, 0, 0})
	CMember(UMRMeshComponent*)                         MRMesh                                                      ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
};

/// Class /Script/MRMesh.MRMeshBodyHolder
/// Size: 0x0200 (0x000028 - 0x000228)
class UMRMeshBodyHolder : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	CMember(UBodySetup*)                               BodySetup                                                   ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FBodyInstance)                             BodyInstance                                                ___ OFFSET(get<T>, {0x38, 392, 0, 0})
};

/// Class /Script/MRMesh.MRMeshComponent
/// Size: 0x0080 (0x000570 - 0x0005F0)
class UMRMeshComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1520;

public:
	CMember(UMaterialInterface*)                       Material                                                    ___ OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UMaterialInterface*)                       WireframeMaterial                                           ___ OFFSET(get<T>, {0x578, 8, 0, 0})
	DMember(bool)                                      bCreateMeshProxySections                                    ___ OFFSET(get<bool>, {0x580, 1, 0, 0})
	DMember(bool)                                      bUpdateNavMeshOnMeshUpdate                                  ___ OFFSET(get<bool>, {0x581, 1, 0, 0})
	DMember(bool)                                      bNeverCreateCollisionMesh                                   ___ OFFSET(get<bool>, {0x583, 1, 0, 0})
	CMember(TArray<UMRMeshBodyHolder*>)                BodyHolders                                                 ___ OFFSET(get<T>, {0x5C8, 16, 0, 0})
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
class FMRMeshConfiguration : public MDKStruct
{ 
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

