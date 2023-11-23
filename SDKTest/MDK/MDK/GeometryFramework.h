
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

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
/// Size: 0x0070 (0x0005B0 - 0x000620)
class UBaseDynamicMeshComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1568;

public:
	DMember(bool)                                      bExplicitShowWireframe                                      OFFSET(get<bool>, {0x5D0, 1, 0, 0})
	SMember(FLinearColor)                              WireframeColor                                              OFFSET(getStruct<T>, {0x5D4, 16, 0, 0})
	CMember(EDynamicMeshComponentColorOverrideMode)    ColorMode                                                   OFFSET(get<T>, {0x5E4, 1, 0, 0})
	SMember(FColor)                                    ConstantColor                                               OFFSET(getStruct<T>, {0x5E8, 4, 0, 0})
	CMember(EDynamicMeshVertexColorTransformMode)      ColorSpaceMode                                              OFFSET(get<T>, {0x5EC, 1, 0, 0})
	DMember(bool)                                      bEnableFlatShading                                          OFFSET(get<bool>, {0x5ED, 1, 0, 0})
	DMember(bool)                                      bEnableViewModeOverrides                                    OFFSET(get<bool>, {0x5EE, 1, 0, 0})
	CMember(UMaterialInterface*)                       OverrideRenderMaterial                                      OFFSET(get<T>, {0x5F0, 8, 0, 0})
	CMember(UMaterialInterface*)                       SecondaryRenderMaterial                                     OFFSET(get<T>, {0x5F8, 8, 0, 0})
	DMember(bool)                                      bEnableRayTracing                                           OFFSET(get<bool>, {0x601, 1, 0, 0})
	CMember(TArray<UMaterialInterface*>)               BaseMaterials                                               OFFSET(get<T>, {0x608, 16, 0, 0})


	/// Functions
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetViewModeOverridesEnabled
	// void SetViewModeOverridesEnabled(bool bEnabled);                                                                         // [0xac58908] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetVertexColorSpaceTransformMode
	// void SetVertexColorSpaceTransformMode(EDynamicMeshVertexColorTransformMode NewMode);                                     // [0x83f1060] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetShadowsEnabled
	// void SetShadowsEnabled(bool bEnabled);                                                                                   // [0xac587f4] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetSecondaryRenderMaterial
	// void SetSecondaryRenderMaterial(UMaterialInterface* Material);                                                           // [0xac58770] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetSecondaryBuffersVisibility
	// void SetSecondaryBuffersVisibility(bool bSetVisible);                                                                    // [0xac586ec] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetOverrideRenderMaterial
	// void SetOverrideRenderMaterial(UMaterialInterface* Material);                                                            // [0xac58668] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetEnableWireframeRenderPass
	// void SetEnableWireframeRenderPass(bool bEnable);                                                                         // [0x5d45d28] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetEnableRaytracing
	// void SetEnableRaytracing(bool bSetEnabled);                                                                              // [0xac585e4] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetEnableFlatShading
	// void SetEnableFlatShading(bool bEnable);                                                                                 // [0xac58560] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetConstantOverrideColor
	// void SetConstantOverrideColor(FColor NewColor);                                                                          // [0xac581f0] RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetColorOverrideMode
	// void SetColorOverrideMode(EDynamicMeshComponentColorOverrideMode NewMode);                                               // [0xac580a8] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.HasOverrideRenderMaterial
	// bool HasOverrideRenderMaterial(int32_t K);                                                                               // [0xac57ba0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetViewModeOverridesEnabled
	// bool GetViewModeOverridesEnabled();                                                                                      // [0xac57b78] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetVertexColorSpaceTransformMode
	// EDynamicMeshVertexColorTransformMode GetVertexColorSpaceTransformMode();                                                 // [0xac57b50] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetShadowsEnabled
	// bool GetShadowsEnabled();                                                                                                // [0xac57ae4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetSecondaryRenderMaterial
	// UMaterialInterface* GetSecondaryRenderMaterial();                                                                        // [0xac57abc] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetSecondaryBuffersVisibility
	// bool GetSecondaryBuffersVisibility();                                                                                    // [0xac57a94] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetOverrideRenderMaterial
	// UMaterialInterface* GetOverrideRenderMaterial(int32_t MaterialIndex);                                                    // [0xac57a00] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetFlatShadingEnabled
	// bool GetFlatShadingEnabled();                                                                                            // [0x7af07e8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetEnableWireframeRenderPass
	// bool GetEnableWireframeRenderPass();                                                                                     // [0xac579d8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetEnableRaytracing
	// bool GetEnableRaytracing();                                                                                              // [0xac579b0] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetDynamicMesh
	// UDynamicMesh* GetDynamicMesh();                                                                                          // [0xac57988] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetConstantOverrideColor
	// FColor GetConstantOverrideColor();                                                                                       // [0xac57958] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetColorOverrideMode
	// EDynamicMeshComponentColorOverrideMode GetColorOverrideMode();                                                           // [0x25b654c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.ClearSecondaryRenderMaterial
	// void ClearSecondaryRenderMaterial();                                                                                     // [0x32bdedc] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.ClearOverrideRenderMaterial
	// void ClearOverrideRenderMaterial();                                                                                      // [0xa48d49c] RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/GeometryFramework.DynamicMeshComponent
/// Size: 0x0260 (0x000620 - 0x000880)
class UDynamicMeshComponent : public UBaseDynamicMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2176;

public:
	CMember(UDynamicMesh*)                             MeshObject                                                  OFFSET(get<T>, {0x620, 8, 0, 0})
	CMember(EDynamicMeshComponentTangentsMode)         TangentsType                                                OFFSET(get<T>, {0x760, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionTraceFlag>)          CollisionType                                               OFFSET(get<T>, {0x7A0, 1, 0, 0})
	DMember(bool)                                      bUseAsyncCooking                                            OFFSET(get<bool>, {0x7A1, 1, 0, 0})
	DMember(bool)                                      bEnableComplexCollision                                     OFFSET(get<bool>, {0x7A2, 1, 0, 0})
	DMember(bool)                                      bDeferCollisionUpdates                                      OFFSET(get<bool>, {0x7A3, 1, 0, 0})
	CMember(UBodySetup*)                               MeshBodySetup                                               OFFSET(get<T>, {0x7A8, 8, 0, 0})
	SMember(FKAggregateGeom)                           AggGeom                                                     OFFSET(getStruct<T>, {0x7E8, 120, 0, 0})
	CMember(TArray<UBodySetup*>)                       AsyncBodySetupQueue                                         OFFSET(get<T>, {0x860, 16, 0, 0})


	/// Functions
	// Function /Script/GeometryFramework.DynamicMeshComponent.ValidateMaterialSlots
	// bool ValidateMaterialSlots(bool bCreateIfMissing, bool bDeleteExtraSlots);                                               // [0xac58a10] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.UpdateCollision
	// void UpdateCollision(bool bOnlyIfPending);                                                                               // [0xac5898c] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.SetTangentsType
	// void SetTangentsType(EDynamicMeshComponentTangentsMode NewTangentsType);                                                 // [0xac58878] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.SetDynamicMesh
	// void SetDynamicMesh(UDynamicMesh* NewMesh);                                                                              // [0xac58418] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.SetDeferredCollisionUpdatesEnabled
	// void SetDeferredCollisionUpdatesEnabled(bool bEnabled, bool bImmediateUpdate);                                           // [0xac5832c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.SetComplexAsSimpleCollisionEnabled
	// void SetComplexAsSimpleCollisionEnabled(bool bEnabled, bool bImmediateUpdate);                                           // [0xac5812c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.NotifyMeshVertexAttributesModified
	// void NotifyMeshVertexAttributesModified(bool bPositions, bool bNormals, bool bUVs, bool bColors);                        // [0xac57c58] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.NotifyMeshModified
	// void NotifyMeshModified();                                                                                               // [0x5d4a31c] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.GetTangentsTypePure
	// EDynamicMeshComponentTangentsMode GetTangentsTypePure();                                                                 // [0xac57b0c] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.DynamicMeshComponent.GetTangentsType
	// EDynamicMeshComponentTangentsMode GetTangentsType();                                                                     // [0xac57b0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.DynamicMeshComponent.EnableComplexAsSimpleCollision
	// void EnableComplexAsSimpleCollision();                                                                                   // [0xac578e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.ConfigureMaterialSet
	// void ConfigureMaterialSet(TArray<UMaterialInterface*>& NewMaterialSet);                                                  // [0xac5780c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GeometryFramework.DynamicMeshActor
/// Size: 0x0018 (0x000290 - 0x0002A8)
class ADynamicMeshActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	CMember(UDynamicMeshComponent*)                    DynamicMeshComponent                                        OFFSET(get<T>, {0x290, 8, 0, 0})
	DMember(bool)                                      bEnableComputeMeshPool                                      OFFSET(get<bool>, {0x298, 1, 0, 0})
	CMember(UDynamicMeshPool*)                         DynamicMeshPool                                             OFFSET(get<T>, {0x2A0, 8, 0, 0})


	/// Functions
	// Function /Script/GeometryFramework.DynamicMeshActor.ReleaseComputeMesh
	// bool ReleaseComputeMesh(UDynamicMesh* Mesh);                                                                             // [0xac57dd8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshActor.ReleaseAllComputeMeshes
	// void ReleaseAllComputeMeshes();                                                                                          // [0xac57db0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshActor.GetDynamicMeshComponent
	// UDynamicMeshComponent* GetDynamicMeshComponent();                                                                        // [0x556d5a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.DynamicMeshActor.GetComputeMeshPool
	// UDynamicMeshPool* GetComputeMeshPool();                                                                                  // [0xac57934] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshActor.FreeAllComputeMeshes
	// void FreeAllComputeMeshes();                                                                                             // [0xac578f8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshActor.AllocateComputeMesh
	// UDynamicMesh* AllocateComputeMesh();                                                                                     // [0xac577bc] Final|RequiredAPI|Native|Public|BlueprintCallable 
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
	SMember(FMulticastInlineDelegate)                  MeshModifiedBPEvent                                         OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	CMember(UDynamicMeshGenerator*)                    MeshGenerator                                               OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(bool)                                      bEnableMeshGenerator                                        OFFSET(get<bool>, {0xA8, 1, 0, 0})


	/// Functions
	// Function /Script/GeometryFramework.DynamicMesh.ResetToCube
	// UDynamicMesh* ResetToCube();                                                                                             // [0xac57f3c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMesh.Reset
	// UDynamicMesh* Reset();                                                                                                   // [0xac57f18] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMesh.IsEmpty
	// bool IsEmpty();                                                                                                          // [0xac57c34] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.DynamicMesh.GetTriangleCount
	// int32_t GetTriangleCount();                                                                                              // [0xac57b30] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryFramework.DynamicMeshPool
/// Size: 0x0020 (0x000028 - 0x000048)
class UDynamicMeshPool : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<UDynamicMesh*>)                     CachedMeshes                                                OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<UDynamicMesh*>)                     AllCreatedMeshes                                            OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/GeometryFramework.DynamicMeshPool.ReturnMesh
	// void ReturnMesh(UDynamicMesh* Mesh);                                                                                     // [0xac57fbc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshPool.ReturnAllMeshes
	// void ReturnAllMeshes();                                                                                                  // [0xac57fa8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshPool.RequestMesh
	// UDynamicMesh* RequestMesh();                                                                                             // [0xac57ef4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshPool.FreeAllMeshes
	// void FreeAllMeshes();                                                                                                    // [0xac57920] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Struct /Script/GeometryFramework.DynamicMeshChangeInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FDynamicMeshChangeInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EDynamicMeshChangeType)                    Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EDynamicMeshAttributeChangeFlags)          Flags                                                       OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(bool)                                      bIsRevertChange                                             OFFSET(get<bool>, {0x2, 1, 0, 0})
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

