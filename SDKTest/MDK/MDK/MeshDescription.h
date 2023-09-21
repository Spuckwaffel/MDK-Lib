
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/MeshDescription.MeshDescriptionBase
/// Size: 0x02C8 (0x000028 - 0x0002F0)
class UMeshDescriptionBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
};

/// Class /Script/MeshDescription.MeshDescriptionBaseBulkData
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshDescriptionBaseBulkData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/MeshDescription.ElementID
/// Size: 0x0004 (0x000000 - 0x000004)
class FElementID : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   IDValue                                                     OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/MeshDescription.VertexID
/// Size: 0x0000 (0x000004 - 0x000004)
class FVertexID : public FElementID
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/MeshDescription.VertexInstanceID
/// Size: 0x0000 (0x000004 - 0x000004)
class FVertexInstanceID : public FElementID
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/MeshDescription.EdgeID
/// Size: 0x0000 (0x000004 - 0x000004)
class FEdgeID : public FElementID
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/MeshDescription.UVID
/// Size: 0x0000 (0x000004 - 0x000004)
class FUVID : public FElementID
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/MeshDescription.TriangleID
/// Size: 0x0000 (0x000004 - 0x000004)
class FTriangleID : public FElementID
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/MeshDescription.PolygonGroupID
/// Size: 0x0000 (0x000004 - 0x000004)
class FPolygonGroupID : public FElementID
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/MeshDescription.PolygonID
/// Size: 0x0000 (0x000004 - 0x000004)
class FPolygonID : public FElementID
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/MeshDescription.BoneID
/// Size: 0x0000 (0x000004 - 0x000004)
class FBoneID : public FElementID
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Enum /Script/MeshDescription.EComputeNTBsOptions
/// Size: 0x05
enum EComputeNTBsOptions : uint8_t
{
	EComputeNTBsOptions__None0                                                       = 0,
	EComputeNTBsOptions__Normals1                                                    = 1,
	EComputeNTBsOptions__Tangents2                                                   = 2,
	EComputeNTBsOptions__WeightedNTBs3                                               = 4,
	EComputeNTBsOptions__EComputeNTBsOptions_MAX4                                    = 5
};

