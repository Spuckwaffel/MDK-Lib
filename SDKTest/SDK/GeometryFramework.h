/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package GeometryFramework.

/// Struct /Script/GeometryFramework.DynamicMeshChangeInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FDynamicMeshChangeInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EDynamicMeshChangeType)                    Type                                                        ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EDynamicMeshAttributeChangeFlags)          Flags                                                       ___ OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(bool)                                      bIsRevertChange                                             ___ OFFSET(get<bool>, {0x2, 1, 0, 0})
};

/// Class /Script/GeometryFramework.MeshCommandChangeTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshCommandChangeTarget : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GeometryFramework.MeshReplacementCommandChangeTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshReplacementCommandChangeTarget : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GeometryFramework.MeshVertexCommandChangeTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshVertexCommandChangeTarget : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GeometryFramework.BaseDynamicMeshComponent
/// Size: 0x0070 (0x0005A0 - 0x000610)
class UBaseDynamicMeshComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1552;

public:
	DMember(bool)                                      bExplicitShowWireframe                                      ___ OFFSET(get<bool>, {0x5C0, 1, 0, 0})
	SMember(FLinearColor)                              WireframeColor                                              ___ OFFSET(get<T>, {0x5C4, 16, 0, 0})
	CMember(EDynamicMeshComponentColorOverrideMode)    ColorMode                                                   ___ OFFSET(get<T>, {0x5D4, 1, 0, 0})
	SMember(FColor)                                    ConstantColor                                               ___ OFFSET(get<T>, {0x5D8, 4, 0, 0})
	CMember(EDynamicMeshVertexColorTransformMode)      ColorSpaceMode                                              ___ OFFSET(get<T>, {0x5DC, 1, 0, 0})
	DMember(bool)                                      bEnableFlatShading                                          ___ OFFSET(get<bool>, {0x5DD, 1, 0, 0})
	DMember(bool)                                      bEnableViewModeOverrides                                    ___ OFFSET(get<bool>, {0x5DE, 1, 0, 0})
	CMember(UMaterialInterface*)                       OverrideRenderMaterial                                      ___ OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(UMaterialInterface*)                       SecondaryRenderMaterial                                     ___ OFFSET(get<T>, {0x5E8, 8, 0, 0})
	DMember(bool)                                      bEnableRayTracing                                           ___ OFFSET(get<bool>, {0x5F1, 1, 0, 0})
	CMember(TArray<UMaterialInterface*>)               BaseMaterials                                               ___ OFFSET(get<T>, {0x5F8, 16, 0, 0})
};

/// Class /Script/GeometryFramework.DynamicMeshComponent
/// Size: 0x0260 (0x000610 - 0x000870)
class UDynamicMeshComponent : public UBaseDynamicMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2160;

public:
	CMember(UDynamicMesh*)                             MeshObject                                                  ___ OFFSET(get<T>, {0x610, 8, 0, 0})
	CMember(EDynamicMeshComponentTangentsMode)         TangentsType                                                ___ OFFSET(get<T>, {0x750, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionTraceFlag>)          CollisionType                                               ___ OFFSET(get<T>, {0x790, 1, 0, 0})
	DMember(bool)                                      bUseAsyncCooking                                            ___ OFFSET(get<bool>, {0x791, 1, 0, 0})
	DMember(bool)                                      bEnableComplexCollision                                     ___ OFFSET(get<bool>, {0x792, 1, 0, 0})
	DMember(bool)                                      bDeferCollisionUpdates                                      ___ OFFSET(get<bool>, {0x793, 1, 0, 0})
	CMember(UBodySetup*)                               MeshBodySetup                                               ___ OFFSET(get<T>, {0x798, 8, 0, 0})
	SMember(FKAggregateGeom)                           AggGeom                                                     ___ OFFSET(get<T>, {0x7D8, 120, 0, 0})
	CMember(TArray<UBodySetup*>)                       AsyncBodySetupQueue                                         ___ OFFSET(get<T>, {0x850, 16, 0, 0})
};

/// Class /Script/GeometryFramework.DynamicMeshActor
/// Size: 0x0018 (0x000290 - 0x0002A8)
class ADynamicMeshActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	CMember(UDynamicMeshComponent*)                    DynamicMeshComponent                                        ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	DMember(bool)                                      bEnableComputeMeshPool                                      ___ OFFSET(get<bool>, {0x298, 1, 0, 0})
	CMember(UDynamicMeshPool*)                         DynamicMeshPool                                             ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
};

/// Class /Script/GeometryFramework.DynamicMeshGenerator
/// Size: 0x0000 (0x000028 - 0x000028)
class UDynamicMeshGenerator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GeometryFramework.DynamicMesh
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UDynamicMesh : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FMulticastInlineDelegate)                  MeshModifiedBPEvent                                         ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(UDynamicMeshGenerator*)                    MeshGenerator                                               ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(bool)                                      bEnableMeshGenerator                                        ___ OFFSET(get<bool>, {0xA8, 1, 0, 0})
};

/// Class /Script/GeometryFramework.DynamicMeshPool
/// Size: 0x0020 (0x000028 - 0x000048)
class UDynamicMeshPool : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<UDynamicMesh*>)                     CachedMeshes                                                ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<UDynamicMesh*>)                     AllCreatedMeshes                                            ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Enum /Script/GeometryFramework.EDynamicMeshComponentTangentsMode
/// Size: 0x05
enum EDynamicMeshComponentTangentsMode : uint8_t
{
	EDynamicMeshComponentTangentsMode__NoTangents0                                   = 0,
	EDynamicMeshComponentTangentsMode__AutoCalculated1                               = 1,
	EDynamicMeshComponentTangentsMode__ExternallyProvided2                           = 2,
	EDynamicMeshComponentTangentsMode__Default3                                      = 255,
	EDynamicMeshComponentTangentsMode__EDynamicMeshComponentTangentsMode_MAX4        = 256
};

/// Enum /Script/GeometryFramework.EDynamicMeshComponentColorOverrideMode
/// Size: 0x05
enum EDynamicMeshComponentColorOverrideMode : uint8_t
{
	EDynamicMeshComponentColorOverrideMode__None0                                    = 0,
	EDynamicMeshComponentColorOverrideMode__VertexColors1                            = 1,
	EDynamicMeshComponentColorOverrideMode__Polygroups2                              = 2,
	EDynamicMeshComponentColorOverrideMode__Constant3                                = 3,
	EDynamicMeshComponentColorOverrideMode__EDynamicMeshComponentColorOverrideMode_MAX4 = 4
};

/// Enum /Script/GeometryFramework.EDynamicMeshVertexColorTransformMode
/// Size: 0x04
enum EDynamicMeshVertexColorTransformMode : uint8_t
{
	EDynamicMeshVertexColorTransformMode__NoTransform0                               = 0,
	EDynamicMeshVertexColorTransformMode__LinearToSRGB1                              = 1,
	EDynamicMeshVertexColorTransformMode__SRGBToLinear2                              = 2,
	EDynamicMeshVertexColorTransformMode__EDynamicMeshVertexColorTransformMode_MAX3  = 3
};

/// Enum /Script/GeometryFramework.EDynamicMeshComponentRenderUpdateMode
/// Size: 0x04
enum EDynamicMeshComponentRenderUpdateMode : uint8_t
{
	EDynamicMeshComponentRenderUpdateMode__NoUpdate0                                 = 0,
	EDynamicMeshComponentRenderUpdateMode__FullUpdate1                               = 1,
	EDynamicMeshComponentRenderUpdateMode__FastUpdate2                               = 2,
	EDynamicMeshComponentRenderUpdateMode__EDynamicMeshComponentRenderUpdateMode_MAX3 = 3
};

/// Enum /Script/GeometryFramework.EDynamicMeshChangeType
/// Size: 0x07
enum EDynamicMeshChangeType : uint8_t
{
	EDynamicMeshChangeType__GeneralEdit0                                             = 0,
	EDynamicMeshChangeType__MeshChange1                                              = 1,
	EDynamicMeshChangeType__MeshReplacementChange2                                   = 2,
	EDynamicMeshChangeType__MeshVertexChange3                                        = 3,
	EDynamicMeshChangeType__DeformationEdit4                                         = 4,
	EDynamicMeshChangeType__AttributeEdit5                                           = 5,
	EDynamicMeshChangeType__EDynamicMeshChangeType_MAX6                              = 6
};

/// Enum /Script/GeometryFramework.EDynamicMeshAttributeChangeFlags
/// Size: 0x08
enum EDynamicMeshAttributeChangeFlags : uint8_t
{
	EDynamicMeshAttributeChangeFlags__Unknown0                                       = 0,
	EDynamicMeshAttributeChangeFlags__MeshTopology1                                  = 1,
	EDynamicMeshAttributeChangeFlags__VertexPositions2                               = 2,
	EDynamicMeshAttributeChangeFlags__NormalsTangents3                               = 4,
	EDynamicMeshAttributeChangeFlags__VertexColors4                                  = 8,
	EDynamicMeshAttributeChangeFlags__UVs5                                           = 16,
	EDynamicMeshAttributeChangeFlags__TriangleGroups6                                = 32,
	EDynamicMeshAttributeChangeFlags__EDynamicMeshAttributeChangeFlags_MAX7          = 33
};

