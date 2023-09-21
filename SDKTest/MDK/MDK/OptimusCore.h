
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: ComputeFramework
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/OptimusCore.OptimusComponentBindingProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusComponentBindingProvider : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OptimusCore.OptimusComputeKernelProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusComputeKernelProvider : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OptimusCore.OptimusDataInterfaceProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusDataInterfaceProvider : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OptimusCore.OptimusDeprecatedExecutionDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusDeprecatedExecutionDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OptimusCore.OptimusExecutionDomainProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusExecutionDomainProvider : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OptimusCore.OptimusGeneratedClassDefiner
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusGeneratedClassDefiner : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OptimusCore.OptimusNodeAdderPinProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusNodeAdderPinProvider : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OptimusCore.OptimusNodeFunctionLibraryOwner
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusNodeFunctionLibraryOwner : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OptimusCore.OptimusNodeGraphCollectionOwner
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusNodeGraphCollectionOwner : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OptimusCore.OptimusNodePinRouter
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusNodePinRouter : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OptimusCore.OptimusParameterBindingProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusParameterBindingProvider : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OptimusCore.OptimusPathResolver
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusPathResolver : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OptimusCore.OptimusShaderTextProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusShaderTextProvider : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OptimusCore.OptimusValueProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusValueProvider : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OptimusCore.OptimusComputeDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusComputeDataInterface : public UComputeDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OptimusCore.OptimusSkinnedMeshVertexAttributeDataInterface
/// Size: 0x0008 (0x000028 - 0x000030)
class UOptimusSkinnedMeshVertexAttributeDataInterface : public UOptimusComputeDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     AttributeName                                               OFFSET(getStruct<T>, {0x28, 4, 0, 0})
};

/// Class /Script/OptimusCore.OptimusSkinnedMeshVertexAttributeDataProvider
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusSkinnedMeshVertexAttributeDataProvider : public UComputeDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(USkinnedMeshComponent*)                    SkinnedMeshComponent                                        OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FName)                                     AttributeName                                               OFFSET(getStruct<T>, {0x30, 4, 0, 0})
};

/// Class /Script/OptimusCore.OptimusKernelSource
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UOptimusKernelSource : public UComputeKernelSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FString)                                   Source                                                      OFFSET(getStruct<T>, {0x98, 16, 0, 0})
};

/// Class /Script/OptimusCore.OptimusComponentSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusComponentSource : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OptimusCore.OptimusSceneComponentSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusSceneComponentSource : public UOptimusComponentSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OptimusCore.OptimusSkinnedMeshComponentSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusSkinnedMeshComponentSource : public UOptimusComponentSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OptimusCore.OptimusSkeletalMeshComponentSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusSkeletalMeshComponentSource : public UOptimusSkinnedMeshComponentSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OptimusCore.OptimusAnimAttributeDataInterface
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusAnimAttributeDataInterface : public UOptimusComputeDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FOptimusAnimAttributeArray)                AttributeArray                                              OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Class /Script/OptimusCore.OptimusAnimAttributeDataProvider
/// Size: 0x0020 (0x000028 - 0x000048)
class UOptimusAnimAttributeDataProvider : public UComputeDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(USkeletalMeshComponent*)                   SkeletalMesh                                                OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/OptimusCore.OptimusClothDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusClothDataInterface : public UOptimusComputeDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OptimusCore.OptimusClothDataProvider
/// Size: 0x0008 (0x000028 - 0x000030)
class UOptimusClothDataProvider : public UComputeDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(USkinnedMeshComponent*)                    SkinnedMesh                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/OptimusCore.OptimusConnectivityDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusConnectivityDataInterface : public UOptimusComputeDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OptimusCore.OptimusConnectivityDataProvider
/// Size: 0x0018 (0x000028 - 0x000040)
class UOptimusConnectivityDataProvider : public UComputeDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(USkinnedMeshComponent*)                    SkinnedMesh                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/OptimusCore.OptimusCustomComputeKernelDataInterface
/// Size: 0x0018 (0x000028 - 0x000040)
class UOptimusCustomComputeKernelDataInterface : public UComputeDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TWeakObjectPtr<UOptimusComponentSourceBinding*>) ComponentSourceBinding                                OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FString)                                   NumThreadsExpression                                        OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Class /Script/OptimusCore.OptimusCustomComputeKernelDataProvider
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusCustomComputeKernelDataProvider : public UComputeDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/OptimusCore.OptimusDebugDrawDataInterface
/// Size: 0x0018 (0x000028 - 0x000040)
class UOptimusDebugDrawDataInterface : public UOptimusComputeDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FOptimusDebugDrawParameters)               DebugDrawParameters                                         OFFSET(getStruct<T>, {0x28, 20, 0, 0})
};

/// Class /Script/OptimusCore.OptimusDebugDrawDataProvider
/// Size: 0x0020 (0x000028 - 0x000048)
class UOptimusDebugDrawDataProvider : public UComputeDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(UPrimitiveComponent*)                      PrimitiveComponent                                          OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FOptimusDebugDrawParameters)               DebugDrawParameters                                         OFFSET(getStruct<T>, {0x30, 20, 0, 0})
};

/// Class /Script/OptimusCore.OptimusDuplicateVerticesDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusDuplicateVerticesDataInterface : public UOptimusComputeDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OptimusCore.OptimusDuplicateVerticesDataProvider
/// Size: 0x0008 (0x000028 - 0x000030)
class UOptimusDuplicateVerticesDataProvider : public UComputeDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(USkinnedMeshComponent*)                    SkinnedMesh                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/OptimusCore.OptimusGraphDataInterface
/// Size: 0x0018 (0x000028 - 0x000040)
class UOptimusGraphDataInterface : public UComputeDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FOptimusGraphVariableDescription>)  Variables                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(int32_t)                                   ParameterBufferSize                                         OFFSET(get<int32_t>, {0x38, 4, 0, 0})
};

/// Class /Script/OptimusCore.OptimusGraphDataProvider
/// Size: 0x0028 (0x000028 - 0x000050)
class UOptimusGraphDataProvider : public UComputeDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UMeshComponent*)                           MeshComponent                                               OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UOptimusDeformerInstance*)                 DeformerInstance                                            OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<FOptimusGraphVariableDescription>)  Variables                                                   OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/OptimusCore.OptimusHalfEdgeDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusHalfEdgeDataInterface : public UOptimusComputeDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OptimusCore.OptimusHalfEdgeDataProvider
/// Size: 0x0028 (0x000028 - 0x000050)
class UOptimusHalfEdgeDataProvider : public UComputeDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(USkinnedMeshComponent*)                    SkinnedMesh                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/OptimusCore.OptimusMorphTargetDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusMorphTargetDataInterface : public UOptimusComputeDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OptimusCore.OptimusMorphTargetDataProvider
/// Size: 0x0008 (0x000028 - 0x000030)
class UOptimusMorphTargetDataProvider : public UComputeDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(USkinnedMeshComponent*)                    SkinnedMesh                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/OptimusCore.OptimusRawBufferDataInterface
/// Size: 0x0050 (0x000028 - 0x000078)
class UOptimusRawBufferDataInterface : public UOptimusComputeDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FShaderValueTypeHandle)                    ValueType                                                   OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	SMember(FOptimusDataDomain)                        DataDomain                                                  OFFSET(getStruct<T>, {0x30, 64, 0, 0})
	CMember(TWeakObjectPtr<UOptimusComponentSourceBinding*>) ComponentSourceBinding                                OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Class /Script/OptimusCore.OptimusTransientBufferDataInterface
/// Size: 0x0000 (0x000078 - 0x000078)
class UOptimusTransientBufferDataInterface : public UOptimusRawBufferDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/OptimusCore.OptimusPersistentBufferDataInterface
/// Size: 0x0008 (0x000078 - 0x000080)
class UOptimusPersistentBufferDataInterface : public UOptimusRawBufferDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     ResourceName                                                OFFSET(getStruct<T>, {0x78, 4, 0, 0})
};

/// Class /Script/OptimusCore.OptimusRawBufferDataProvider
/// Size: 0x0058 (0x000028 - 0x000080)
class UOptimusRawBufferDataProvider : public UComputeDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TWeakObjectPtr<UActorComponent*>)          Component                                                   OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TWeakObjectPtr<UOptimusComponentSource*>)  ComponentSource                                             OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FOptimusDataDomain)                        DataDomain                                                  OFFSET(getStruct<T>, {0x38, 64, 0, 0})
	DMember(int32_t)                                   ElementStride                                               OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	DMember(int32_t)                                   RawStride                                                   OFFSET(get<int32_t>, {0x7C, 4, 0, 0})
};

/// Class /Script/OptimusCore.OptimusTransientBufferDataProvider
/// Size: 0x0000 (0x000080 - 0x000080)
class UOptimusTransientBufferDataProvider : public UOptimusRawBufferDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/OptimusCore.OptimusPersistentBufferDataProvider
/// Size: 0x0018 (0x000080 - 0x000098)
class UOptimusPersistentBufferDataProvider : public UOptimusRawBufferDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/OptimusCore.OptimusSceneDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusSceneDataInterface : public UOptimusComputeDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OptimusCore.OptimusSceneDataProvider
/// Size: 0x0008 (0x000028 - 0x000030)
class UOptimusSceneDataProvider : public UComputeDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(USceneComponent*)                          SceneComponent                                              OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/OptimusCore.OptimusSkeletonDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusSkeletonDataInterface : public UOptimusComputeDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OptimusCore.OptimusSkeletonDataProvider
/// Size: 0x0008 (0x000028 - 0x000030)
class UOptimusSkeletonDataProvider : public UComputeDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(USkinnedMeshComponent*)                    SkinnedMesh                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/OptimusCore.OptimusSkinnedMeshDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusSkinnedMeshDataInterface : public UOptimusComputeDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OptimusCore.OptimusSkinnedMeshDataProvider
/// Size: 0x0008 (0x000028 - 0x000030)
class UOptimusSkinnedMeshDataProvider : public UComputeDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(USkinnedMeshComponent*)                    SkinnedMesh                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/OptimusCore.OptimusSkinnedMeshExecDataInterface
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusSkinnedMeshExecDataInterface : public UOptimusComputeDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(EOptimusSkinnedMeshExecDomain)             Domain                                                      OFFSET(get<T>, {0x30, 1, 0, 0})
};

/// Class /Script/OptimusCore.OptimusSkinnedMeshExecDataProvider
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusSkinnedMeshExecDataProvider : public UComputeDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(USkinnedMeshComponent*)                    SkinnedMesh                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(EOptimusSkinnedMeshExecDomain)             Domain                                                      OFFSET(get<T>, {0x30, 1, 0, 0})
};

/// Class /Script/OptimusCore.OptimusSkinnedMeshWriteDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusSkinnedMeshWriteDataInterface : public UOptimusComputeDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OptimusCore.OptimusSkinnedMeshWriteDataProvider
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusSkinnedMeshWriteDataProvider : public UComputeDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(USkinnedMeshComponent*)                    SkinnedMesh                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/OptimusCore.OptimusNode
/// Size: 0x00E8 (0x000028 - 0x000110)
class UOptimusNode : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector2D)                                 GraphPosition                                               OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	CMember(TArray<UOptimusNodePin*>)                  Pins                                                        OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TSet<FName>)                               ExpandedPins                                                OFFSET(get<T>, {0x68, 80, 0, 0})
	CMember(EOptimusDiagnosticLevel)                   DiagnosticLevel                                             OFFSET(get<T>, {0xB8, 1, 0, 0})


	/// Functions
	// Function /Script/OptimusCore.OptimusNode.SetGraphPosition
	// bool SetGraphPosition(FVector2D& InPosition);                                                                            // [0x9cb011c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNode.GetNodeName
	// FName GetNodeName();                                                                                                     // [0x9caeb8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNode.GetNodeCategory
	// FName GetNodeCategory();                                                                                                 // [0x9caeb5c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNode.GetGraphPosition
	// FVector2D GetGraphPosition();                                                                                            // [0x9caeb04] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNode.GetDisplayName
	// FText GetDisplayName();                                                                                                  // [0x950f3e4] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/OptimusCore.OptimusNode_DataInterface
/// Size: 0x0018 (0x000110 - 0x000128)
class UOptimusNode_DataInterface : public UOptimusNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(UClass*)                                   DataInterfaceClass                                          OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(UOptimusComputeDataInterface*)             DataInterfaceData                                           OFFSET(get<T>, {0x120, 8, 0, 0})
};

/// Class /Script/OptimusCore.OptimusNode_AnimAttributeDataInterface
/// Size: 0x0000 (0x000128 - 0x000128)
class UOptimusNode_AnimAttributeDataInterface : public UOptimusNode_DataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Script/OptimusCore.OptimusNode_ComponentSource
/// Size: 0x0010 (0x000110 - 0x000120)
class UOptimusNode_ComponentSource : public UOptimusNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(UOptimusComponentSourceBinding*)           Binding                                                     OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Class /Script/OptimusCore.OptimusNode_ComputeKernelBase
/// Size: 0x0008 (0x000110 - 0x000118)
class UOptimusNode_ComputeKernelBase : public UOptimusNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
};

/// Class /Script/OptimusCore.OptimusNode_ComputeKernelFunctionGeneratorClass
/// Size: 0x0048 (0x000200 - 0x000248)
class UOptimusNode_ComputeKernelFunctionGeneratorClass : public UClass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 584;

public:
	SMember(FName)                                     category                                                    OFFSET(getStruct<T>, {0x200, 4, 0, 0})
	SMember(FName)                                     KernelName                                                  OFFSET(getStruct<T>, {0x204, 4, 0, 0})
	SMember(FOptimusExecutionDomain)                   ExecutionDomain                                             OFFSET(getStruct<T>, {0x208, 4, 0, 0})
	SMember(FIntVector)                                GroupSize                                                   OFFSET(getStruct<T>, {0x20C, 12, 0, 0})
	CMember(TArray<FOptimusParameterBinding>)          InputBindings                                               OFFSET(get<T>, {0x218, 16, 0, 0})
	CMember(TArray<FOptimusParameterBinding>)          OutputBindings                                              OFFSET(get<T>, {0x228, 16, 0, 0})
	SMember(FString)                                   ShaderSource                                                OFFSET(getStruct<T>, {0x238, 16, 0, 0})
};

/// Class /Script/OptimusCore.OptimusNode_ComputeKernelFunction
/// Size: 0x0000 (0x000118 - 0x000118)
class UOptimusNode_ComputeKernelFunction : public UOptimusNode_ComputeKernelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
};

/// Class /Script/OptimusCore.OptimusNode_ConstantValueGeneratorClass
/// Size: 0x0010 (0x000200 - 0x000210)
class UOptimusNode_ConstantValueGeneratorClass : public UClass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FOptimusDataTypeRef)                       DataType                                                    OFFSET(getStruct<T>, {0x200, 12, 0, 0})
};

/// Class /Script/OptimusCore.OptimusNode_ConstantValue
/// Size: 0x0010 (0x000110 - 0x000120)
class UOptimusNode_ConstantValue : public UOptimusNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /Script/OptimusCore.OptimusNode_CustomComputeKernel
/// Size: 0x00C8 (0x000118 - 0x0001E0)
class UOptimusNode_CustomComputeKernel : public UOptimusNode_ComputeKernelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FName)                                     category                                                    OFFSET(getStruct<T>, {0x138, 4, 0, 0})
	SMember(FOptimusValidatedName)                     KernelName                                                  OFFSET(getStruct<T>, {0x13C, 4, 0, 0})
	SMember(FOptimusExecutionDomain)                   ExecutionDomain                                             OFFSET(getStruct<T>, {0x140, 4, 0, 0})
	SMember(FIntVector)                                GroupSize                                                   OFFSET(getStruct<T>, {0x144, 12, 0, 0})
	CMember(TArray<FOptimus_ShaderBinding>)            Parameters                                                  OFFSET(get<T>, {0x150, 16, 0, 0})
	CMember(TArray<FOptimusParameterBinding>)          InputBindings                                               OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(TArray<FOptimusParameterBinding>)          OutputBindings                                              OFFSET(get<T>, {0x170, 16, 0, 0})
	SMember(FOptimusParameterBindingArray)             InputBindingArray                                           OFFSET(getStruct<T>, {0x180, 16, 0, 0})
	SMember(FOptimusParameterBindingArray)             OutputBindingArray                                          OFFSET(getStruct<T>, {0x190, 16, 0, 0})
	CMember(TArray<FOptimusSecondaryInputBindingsGroup>) SecondaryInputBindingGroups                               OFFSET(get<T>, {0x1A0, 16, 0, 0})
	CMember(TArray<UComputeSource*>)                   AdditionalSources                                           OFFSET(get<T>, {0x1B0, 16, 0, 0})
	SMember(FOptimusShaderText)                        ShaderSource                                                OFFSET(getStruct<T>, {0x1C0, 32, 0, 0})
};

/// Class /Script/OptimusCore.OptimusNode_FunctionReference
/// Size: 0x0010 (0x000110 - 0x000120)
class UOptimusNode_FunctionReference : public UOptimusNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(UOptimusFunctionNodeGraph*)                FunctionGraph                                               OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Class /Script/OptimusCore.OptimusNode_ResourceAccessorBase
/// Size: 0x0070 (0x000110 - 0x000180)
class UOptimusNode_ResourceAccessorBase : public UOptimusNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(TWeakObjectPtr<UOptimusResourceDescription*>) ResourceDesc                                             OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(EOptimusBufferWriteType)                   WriteType                                                   OFFSET(get<T>, {0x128, 1, 0, 0})
	SMember(FOptimusNode_ResourceAccessorBase_DuplicationInfo) DuplicationInfo                                     OFFSET(getStruct<T>, {0x130, 80, 0, 0})
};

/// Class /Script/OptimusCore.OptimusNode_GetResource
/// Size: 0x0000 (0x000180 - 0x000180)
class UOptimusNode_GetResource : public UOptimusNode_ResourceAccessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
};

/// Class /Script/OptimusCore.OptimusNode_GetVariable
/// Size: 0x0030 (0x000110 - 0x000140)
class UOptimusNode_GetVariable : public UOptimusNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(TWeakObjectPtr<UOptimusVariableDescription*>) VariableDesc                                             OFFSET(get<T>, {0x118, 8, 0, 0})
	SMember(FOptimusNode_GetVariable_DuplicationInfo)  DuplicationInfo                                             OFFSET(getStruct<T>, {0x120, 32, 0, 0})
};

/// Class /Script/OptimusCore.OptimusNode_GraphTerminal
/// Size: 0x0018 (0x000110 - 0x000128)
class UOptimusNode_GraphTerminal : public UOptimusNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(EOptimusTerminalType)                      TerminalType                                                OFFSET(get<T>, {0x118, 4, 0, 0})
	CMember(TWeakObjectPtr<UOptimusNodeSubGraph*>)     OwningGraph                                                 OFFSET(get<T>, {0x11C, 8, 0, 0})
};

/// Class /Script/OptimusCore.OptimusNode_Resource
/// Size: 0x0000 (0x000180 - 0x000180)
class UOptimusNode_Resource : public UOptimusNode_ResourceAccessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
};

/// Class /Script/OptimusCore.OptimusNode_SetResource
/// Size: 0x0000 (0x000180 - 0x000180)
class UOptimusNode_SetResource : public UOptimusNode_ResourceAccessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
};

/// Class /Script/OptimusCore.OptimusNode_SubGraphReference
/// Size: 0x0010 (0x000110 - 0x000120)
class UOptimusNode_SubGraphReference : public UOptimusNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(UOptimusNodeSubGraph*)                     SubGraph                                                    OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Class /Script/OptimusCore.OptimusActionStack
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UOptimusActionStack : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	DMember(int32_t)                                   TransactedActionIndex                                       OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Class /Script/OptimusCore.OptimusComponentSourceBinding
/// Size: 0x0028 (0x000028 - 0x000050)
class UOptimusComponentSourceBinding : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     BindingName                                                 OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	CMember(UClass*)                                   ComponentType                                               OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<FName>)                             ComponentTags                                               OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      bIsPrimaryBinding                                           OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Class /Script/OptimusCore.OptimusComputeGraph
/// Size: 0x0010 (0x000090 - 0x0000A0)
class UOptimusComputeGraph : public UComputeGraph
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TArray<TWeakObjectPtr>)                    KernelToNode                                                OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Class /Script/OptimusCore.OptimusComponentSourceBindingContainer
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusComponentSourceBindingContainer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<UOptimusComponentSourceBinding*>)   Bindings                                                    OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/OptimusCore.OptimusVariableContainer
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusVariableContainer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<UOptimusVariableDescription*>)      Descriptions                                                OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/OptimusCore.OptimusResourceContainer
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusResourceContainer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<UOptimusResourceDescription*>)      Descriptions                                                OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/OptimusCore.OptimusDeformer
/// Size: 0x0100 (0x000028 - 0x000128)
class UOptimusDeformer : public UMeshDeformer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(USkeletalMesh*)                            Mesh                                                        OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TArray<FOptimusComputeGraphInfo>)          ComputeGraphs                                               OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(UOptimusActionStack*)                      ActionStack                                                 OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(EOptimusDeformerStatus)                    Status                                                      OFFSET(get<T>, {0x68, 4, 0, 0})
	CMember(TArray<UOptimusNodeGraph*>)                Graphs                                                      OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(UOptimusComponentSourceBindingContainer*)  Bindings                                                    OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(UOptimusVariableContainer*)                Variables                                                   OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(UOptimusResourceContainer*)                Resources                                                   OFFSET(get<T>, {0x90, 8, 0, 0})


	/// Functions
	// Function /Script/OptimusCore.OptimusDeformer.GetVariables
	// TArray<UOptimusVariableDescription*> GetVariables();                                                                     // [0x9caec20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusDeformer.GetResources
	// TArray<UOptimusResourceDescription*> GetResources();                                                                     // [0x9caeba4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusDeformer.GetComponentBindings
	// TArray<UOptimusComponentSourceBinding*> GetComponentBindings();                                                          // [0x9caea64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/OptimusCore.OptimusDeformerInstanceSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class UOptimusDeformerInstanceSettings : public UMeshDeformerInstanceSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TWeakObjectPtr<UOptimusDeformer*>)         Deformer                                                    OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<FOptimusDeformerInstanceComponentBinding>) Bindings                                             OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/OptimusCore.OptimusDeformerInstance
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UOptimusDeformerInstance : public UMeshDeformerInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TWeakObjectPtr<UMeshComponent*>)           MeshComponent                                               OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TWeakObjectPtr<UOptimusDeformerInstanceSettings*>) InstanceSettings                                    OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<FOptimusDeformerInstanceExecInfo>)  ComputeGraphExecInfos                                       OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(UOptimusVariableContainer*)                Variables                                                   OFFSET(get<T>, {0x48, 8, 0, 0})


	/// Functions
	// Function /Script/OptimusCore.OptimusDeformerInstance.SetVectorVariable
	// bool SetVectorVariable(FName InVariableName, FVector& InValue);                                                          // [0x9cb04dc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusDeformerInstance.SetVector4Variable
	// bool SetVector4Variable(FName InVariableName, FVector4& InValue);                                                        // [0x9cb03f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusDeformerInstance.SetTransformVariable
	// bool SetTransformVariable(FName InVariableName, FTransform& InValue);                                                    // [0x9cb0298] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusDeformerInstance.SetIntVariable
	// bool SetIntVariable(FName InVariableName, int32_t InValue);                                                              // [0x9cb01c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusDeformerInstance.SetFloatVariable
	// bool SetFloatVariable(FName InVariableName, double InValue);                                                             // [0x9cb0054] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusDeformerInstance.SetBoolVariable
	// bool SetBoolVariable(FName InVariableName, bool InValue);                                                                // [0x9caff7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusDeformerInstance.GetVariables
	// TArray<UOptimusVariableDescription*> GetVariables();                                                                     // [0x9caec40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusDeformerInstance.EnqueueTriggerGraph
	// bool EnqueueTriggerGraph(FName InTriggerGraphName);                                                                      // [0x9cae8ec] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OptimusCore.OptimusNodeGraph
/// Size: 0x0058 (0x000028 - 0x000080)
class UOptimusNodeGraph : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(EOptimusNodeGraphType)                     GraphType                                                   OFFSET(get<T>, {0x30, 4, 0, 0})
	CMember(TArray<UOptimusNode*>)                     Nodes                                                       OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<UOptimusNodeLink*>)                 Links                                                       OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<UOptimusNodeGraph*>)                Subgraphs                                                   OFFSET(get<T>, {0x58, 16, 0, 0})


	/// Functions
	// Function /Script/OptimusCore.OptimusNodeGraph.RenameGraph
	// bool RenameGraph(UOptimusNodeGraph* InGraph, FString InNewName);                                                         // [0x9caf8a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.RemoveNodes
	// bool RemoveNodes(TArray<UOptimusNode*>& InNodes);                                                                        // [0x9caf1e8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.RemoveNode
	// bool RemoveNode(UOptimusNode* InNode);                                                                                   // [0x9caf158] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.RemoveLink
	// bool RemoveLink(UOptimusNodePin* InNodeOutputPin, UOptimusNodePin* InNodeInputPin);                                      // [0x9caf038] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.RemoveAllLinks
	// bool RemoveAllLinks(UOptimusNodePin* InNodePin);                                                                         // [0x9caefa8] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.MoveGraph
	// bool MoveGraph(UOptimusNodeGraph* InGraph, int32_t InInsertBefore);                                                      // [0x9caeee4] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.IsSubGraphReference
	// bool IsSubGraphReference(UOptimusNode* InNode);                                                                          // [0x9caee4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNodeGraph.IsKernelFunction
	// bool IsKernelFunction(UOptimusNode* InNode);                                                                             // [0x9caedc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNodeGraph.IsFunctionReference
	// bool IsFunctionReference(UOptimusNode* InNode);                                                                          // [0x9caed28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNodeGraph.IsFunctionGraph
	// bool IsFunctionGraph();                                                                                                  // [0x9caed10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNodeGraph.IsExecutionGraph
	// bool IsExecutionGraph();                                                                                                 // [0x9caecf8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNodeGraph.IsCustomKernel
	// bool IsCustomKernel(UOptimusNode* InNode);                                                                               // [0x9caec60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNodeGraph.GetGraphType
	// EOptimusNodeGraphType GetGraphType();                                                                                    // [0x597e8bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNodeGraph.GetGraphs
	// TArray<UOptimusNodeGraph*> GetGraphs();                                                                                  // [0x9caeb1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNodeGraph.GetGraphIndex
	// int32_t GetGraphIndex();                                                                                                 // [0x9caeae0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNodeGraph.ExpandCollapsedNodes
	// TArray<UOptimusNode*> ExpandCollapsedNodes(UOptimusNode* InFunctionNode);                                                // [0x9cae9c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.DuplicateNodes
	// bool DuplicateNodes(TArray<UOptimusNode*>& InNodes, FVector2D& InPosition);                                              // [0x9cae1cc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.DuplicateNode
	// UOptimusNode* DuplicateNode(UOptimusNode* InNode, FVector2D& InPosition);                                                // [0x9cae018] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.ConvertFunctionToCustomKernel
	// UOptimusNode* ConvertFunctionToCustomKernel(UOptimusNode* InKernelFunction);                                             // [0x9cadf88] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.ConvertCustomKernelToFunction
	// UOptimusNode* ConvertCustomKernelToFunction(UOptimusNode* InCustomKernel);                                               // [0x9cadef8] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.CollapseNodesToSubGraph
	// UOptimusNode* CollapseNodesToSubGraph(TArray<UOptimusNode*>& InNodes);                                                   // [0x9cad83c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.CollapseNodesToFunction
	// UOptimusNode* CollapseNodesToFunction(TArray<UOptimusNode*>& InNodes);                                                   // [0x9cad198] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.AddVariableGetNode
	// UOptimusNode* AddVariableGetNode(UOptimusVariableDescription* InVariableDesc, FVector2D& InPosition);                    // [0x9cad090] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.AddValueNode
	// UOptimusNode* AddValueNode(FOptimusDataTypeRef InDataTypeRef, FVector2D& InPosition);                                    // [0x9cacea4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.AddResourceSetNode
	// UOptimusNode* AddResourceSetNode(UOptimusResourceDescription* InResourceDesc, FVector2D& InPosition);                    // [0x9cacd9c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.AddResourceNode
	// UOptimusNode* AddResourceNode(UOptimusResourceDescription* InResourceDesc, FVector2D& InPosition);                       // [0x9cacc94] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.AddResourceGetNode
	// UOptimusNode* AddResourceGetNode(UOptimusResourceDescription* InResourceDesc, FVector2D& InPosition);                    // [0x9cacb8c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.AddNode
	// UOptimusNode* AddNode(UClass* InNodeClass, FVector2D& InPosition);                                                       // [0x9caca98] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.AddLink
	// bool AddLink(UOptimusNodePin* InNodeOutputPin, UOptimusNodePin* InNodeInputPin);                                         // [0x9cac9d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.AddDataInterfaceNode
	// UOptimusNode* AddDataInterfaceNode(UClass* InDataInterfaceClass, FVector2D& InPosition);                                 // [0x9cac8f8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.AddComponentBindingGetNode
	// UOptimusNode* AddComponentBindingGetNode(UOptimusComponentSourceBinding* InComponentBinding, FVector2D& InPosition);     // [0x9cac81c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/OptimusCore.OptimusNodeSubGraph
/// Size: 0x0030 (0x000080 - 0x0000B0)
class UOptimusNodeSubGraph : public UOptimusNodeGraph
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<FOptimusParameterBinding>)          InputBindings                                               OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FOptimusParameterBinding>)          OutputBindings                                              OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TWeakObjectPtr<UOptimusNode_GraphTerminal*>) EntryNode                                                 OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TWeakObjectPtr<UOptimusNode_GraphTerminal*>) ReturnNode                                                OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/OptimusCore.OptimusFunctionNodeGraph
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UOptimusFunctionNodeGraph : public UOptimusNodeSubGraph
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FName)                                     category                                                    OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
};

/// Class /Script/OptimusCore.OptimusNodeLink
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusNodeLink : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UOptimusNodePin*)                          NodeOutputPin                                               OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UOptimusNodePin*)                          NodeInputPin                                                OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/OptimusCore.OptimusNodePin
/// Size: 0x0068 (0x000028 - 0x000090)
class UOptimusNodePin : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(bool)                                      bIsGroupingPin                                              OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(EOptimusNodePinDirection)                  Direction                                                   OFFSET(get<T>, {0x29, 1, 0, 0})
	CMember(EOptimusNodePinStorageType)                StorageType                                                 OFFSET(get<T>, {0x2A, 1, 0, 0})
	SMember(FOptimusDataDomain)                        DataDomain                                                  OFFSET(getStruct<T>, {0x30, 64, 0, 0})
	SMember(FOptimusDataTypeRef)                       DataType                                                    OFFSET(getStruct<T>, {0x70, 12, 0, 0})
	CMember(TArray<UOptimusNodePin*>)                  SubPins                                                     OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Class /Script/OptimusCore.OptimusResourceDescription
/// Size: 0x0060 (0x000028 - 0x000088)
class UOptimusResourceDescription : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     ResourceName                                                OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FOptimusDataTypeRef)                       DataType                                                    OFFSET(getStruct<T>, {0x2C, 12, 0, 0})
	CMember(TWeakObjectPtr<UOptimusComponentSourceBinding*>) ComponentBinding                                      OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FOptimusDataDomain)                        DataDomain                                                  OFFSET(getStruct<T>, {0x40, 64, 0, 0})
	CMember(UOptimusPersistentBufferDataInterface*)    DataInterface                                               OFFSET(get<T>, {0x80, 8, 0, 0})
};

/// Class /Script/OptimusCore.OptimusSource
/// Size: 0x0018 (0x000038 - 0x000050)
class UOptimusSource : public UComputeSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   SourceText                                                  OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Class /Script/OptimusCore.OptimusValueContainerGeneratorClass
/// Size: 0x0010 (0x000200 - 0x000210)
class UOptimusValueContainerGeneratorClass : public UClass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FOptimusDataTypeRef)                       DataType                                                    OFFSET(getStruct<T>, {0x200, 12, 0, 0})
};

/// Class /Script/OptimusCore.OptimusValueContainer
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusValueContainer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OptimusCore.OptimusVariableDescription
/// Size: 0x0038 (0x000028 - 0x000060)
class UOptimusVariableDescription : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FName)                                     VariableName                                                OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	SMember(FOptimusDataTypeRef)                       DataType                                                    OFFSET(getStruct<T>, {0x3C, 12, 0, 0})
	CMember(UOptimusValueContainer*)                   DefaultValue                                                OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TArray<char>)                              ValueData                                                   OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusExecutionDomain
/// Size: 0x0004 (0x000000 - 0x000004)
class FOptimusExecutionDomain : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/OptimusCore.Optimus_ShaderBinding
/// Size: 0x0010 (0x000000 - 0x000010)
class FOptimus_ShaderBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FOptimusDataTypeRef)                       DataType                                                    OFFSET(getStruct<T>, {0x4, 12, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusDataTypeRef
/// Size: 0x000C (0x000000 - 0x00000C)
class FOptimusDataTypeRef : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     TypeName                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  TypeObject                                                  OFFSET(get<T>, {0x4, 8, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusParameterBinding
/// Size: 0x0050 (0x000000 - 0x000050)
class FOptimusParameterBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FOptimusValidatedName)                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FOptimusDataTypeRef)                       DataType                                                    OFFSET(getStruct<T>, {0x4, 12, 0, 0})
	SMember(FOptimusDataDomain)                        DataDomain                                                  OFFSET(getStruct<T>, {0x10, 64, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusDataDomain
/// Size: 0x0040 (0x000000 - 0x000040)
class FOptimusDataDomain : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(EOptimusDataDomainType)                    Type                                                        OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FName>)                             DimensionNames                                              OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   Multiplier                                                  OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	SMember(FString)                                   Expression                                                  OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(TArray<FName>)                             LevelNames                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusValidatedName
/// Size: 0x0004 (0x000000 - 0x000004)
class FOptimusValidatedName : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusParameterBindingArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FOptimusParameterBindingArray : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FOptimusParameterBinding>)          InnerArray                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusShaderText
/// Size: 0x0020 (0x000000 - 0x000020)
class FOptimusShaderText : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Declarations                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ShaderText                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusAction
/// Size: 0x0018 (0x000000 - 0x000018)
class FOptimusAction : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/OptimusCore.OptimusCompoundAction
/// Size: 0x0010 (0x000018 - 0x000028)
class FOptimusCompoundAction : public FOptimusAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/OptimusCore.OptimusComponentBindingAction_AddBinding
/// Size: 0x0010 (0x000018 - 0x000028)
class FOptimusComponentBindingAction_AddBinding : public FOptimusAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/OptimusCore.OptimusComponentBindingAction_RemoveBinding
/// Size: 0x0028 (0x000018 - 0x000040)
class FOptimusComponentBindingAction_RemoveBinding : public FOptimusAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/OptimusCore.OptimusComponentBindingAction_RenameBinding
/// Size: 0x0008 (0x000018 - 0x000020)
class FOptimusComponentBindingAction_RenameBinding : public FOptimusAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/OptimusCore.OptimusComponentBindingAction_SetComponentSource
/// Size: 0x0018 (0x000018 - 0x000030)
class FOptimusComponentBindingAction_SetComponentSource : public FOptimusAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeAction_RenameNode
/// Size: 0x0040 (0x000018 - 0x000058)
class FOptimusNodeAction_RenameNode : public FOptimusAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeAction_MoveNode
/// Size: 0x0030 (0x000018 - 0x000048)
class FOptimusNodeAction_MoveNode : public FOptimusAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeAction_SetPinValue
/// Size: 0x0030 (0x000018 - 0x000048)
class FOptimusNodeAction_SetPinValue : public FOptimusAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeAction_SetPinName
/// Size: 0x0018 (0x000018 - 0x000030)
class FOptimusNodeAction_SetPinName : public FOptimusAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeAction_SetPinType
/// Size: 0x0018 (0x000018 - 0x000030)
class FOptimusNodeAction_SetPinType : public FOptimusAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeAction_SetPinDataDomain
/// Size: 0x0090 (0x000018 - 0x0000A8)
class FOptimusNodeAction_SetPinDataDomain : public FOptimusAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeAction_AddRemovePin
/// Size: 0x0098 (0x000018 - 0x0000B0)
class FOptimusNodeAction_AddRemovePin : public FOptimusAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeAction_AddPin
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class FOptimusNodeAction_AddPin : public FOptimusNodeAction_AddRemovePin
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeAction_AddGroupingPin
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class FOptimusNodeAction_AddGroupingPin : public FOptimusNodeAction_AddRemovePin
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeAction_RemovePin
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class FOptimusNodeAction_RemovePin : public FOptimusNodeAction_AddRemovePin
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeAction_MovePin
/// Size: 0x0030 (0x000018 - 0x000048)
class FOptimusNodeAction_MovePin : public FOptimusAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_AddGraph
/// Size: 0x0078 (0x000018 - 0x000090)
class FOptimusNodeGraphAction_AddGraph : public FOptimusAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_RemoveGraph
/// Size: 0x0040 (0x000018 - 0x000058)
class FOptimusNodeGraphAction_RemoveGraph : public FOptimusAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_RenameGraph
/// Size: 0x0018 (0x000018 - 0x000030)
class FOptimusNodeGraphAction_RenameGraph : public FOptimusAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_AddNode
/// Size: 0x0088 (0x000018 - 0x0000A0)
class FOptimusNodeGraphAction_AddNode : public FOptimusAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_DuplicateNode
/// Size: 0x0088 (0x000018 - 0x0000A0)
class FOptimusNodeGraphAction_DuplicateNode : public FOptimusAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_RemoveNode
/// Size: 0x0048 (0x000018 - 0x000060)
class FOptimusNodeGraphAction_RemoveNode : public FOptimusAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_AddRemoveLink
/// Size: 0x0028 (0x000018 - 0x000040)
class FOptimusNodeGraphAction_AddRemoveLink : public FOptimusAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_AddLink
/// Size: 0x0000 (0x000040 - 0x000040)
class FOptimusNodeGraphAction_AddLink : public FOptimusNodeGraphAction_AddRemoveLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_RemoveLink
/// Size: 0x0000 (0x000040 - 0x000040)
class FOptimusNodeGraphAction_RemoveLink : public FOptimusNodeGraphAction_AddRemoveLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_ConnectAdderPin
/// Size: 0x0060 (0x000040 - 0x0000A0)
class FOptimusNodeGraphAction_ConnectAdderPin : public FOptimusNodeGraphAction_AddRemoveLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_PackageKernelFunction
/// Size: 0x0090 (0x000018 - 0x0000A8)
class FOptimusNodeGraphAction_PackageKernelFunction : public FOptimusAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_UnpackageKernelFunction
/// Size: 0x0048 (0x000018 - 0x000060)
class FOptimusNodeGraphAction_UnpackageKernelFunction : public FOptimusAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/OptimusCore.OptimusResourceAction_AddResource
/// Size: 0x0050 (0x000018 - 0x000068)
class FOptimusResourceAction_AddResource : public FOptimusAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Struct /Script/OptimusCore.OptimusResourceAction_RemoveResource
/// Size: 0x0028 (0x000018 - 0x000040)
class FOptimusResourceAction_RemoveResource : public FOptimusAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/OptimusCore.OptimusResourceAction_RenameResource
/// Size: 0x0008 (0x000018 - 0x000020)
class FOptimusResourceAction_RenameResource : public FOptimusAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/OptimusCore.OptimusResourceAction_SetDataType
/// Size: 0x0020 (0x000018 - 0x000038)
class FOptimusResourceAction_SetDataType : public FOptimusAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/OptimusCore.OptimusResourceAction_SetDataDomain
/// Size: 0x0088 (0x000018 - 0x0000A0)
class FOptimusResourceAction_SetDataDomain : public FOptimusAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Struct /Script/OptimusCore.OptimusVariableAction_AddVariable
/// Size: 0x0010 (0x000018 - 0x000028)
class FOptimusVariableAction_AddVariable : public FOptimusAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/OptimusCore.OptimusVariableAction_RemoveVariable
/// Size: 0x0038 (0x000018 - 0x000050)
class FOptimusVariableAction_RemoveVariable : public FOptimusAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/OptimusCore.OptimusVariableAction_RenameVariable
/// Size: 0x0008 (0x000018 - 0x000020)
class FOptimusVariableAction_RenameVariable : public FOptimusAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/OptimusCore.OptimusVariableAction_SetDataType
/// Size: 0x0020 (0x000018 - 0x000038)
class FOptimusVariableAction_SetDataType : public FOptimusAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/OptimusCore.OptimusAnimAttributeDescription
/// Size: 0x0040 (0x000000 - 0x000040)
class FOptimusAnimAttributeDescription : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     BoneName                                                    OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FOptimusDataTypeRef)                       DataType                                                    OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	CMember(UOptimusValueContainer*)                   DefaultValue                                                OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FString)                                   HlslId                                                      OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FName)                                     PinName                                                     OFFSET(getStruct<T>, {0x38, 4, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusAnimAttributeArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FOptimusAnimAttributeArray : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FOptimusAnimAttributeDescription>)  InnerArray                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusDebugDrawParameters
/// Size: 0x0014 (0x000000 - 0x000014)
class FOptimusDebugDrawParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(bool)                                      bForceEnable                                                OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   MaxLineCount                                                OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaxTriangleCount                                            OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MaxCharacterCount                                           OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   FontSize                                                    OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusGraphVariableDescription
/// Size: 0x0030 (0x000000 - 0x000030)
class FOptimusGraphVariableDescription : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FShaderValueTypeHandle)                    ValueType                                                   OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	CMember(TArray<char>)                              Value                                                       OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(int32_t)                                   Offset                                                      OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusSecondaryInputBindingsGroup
/// Size: 0x0018 (0x000000 - 0x000018)
class FOptimusSecondaryInputBindingsGroup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FOptimusValidatedName)                     GroupName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FOptimusParameterBindingArray)             BindingArray                                                OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusNode_GetVariable_DuplicationInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FOptimusNode_GetVariable_DuplicationInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     VariableName                                                OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FOptimusDataTypeRef)                       DataType                                                    OFFSET(getStruct<T>, {0x4, 12, 0, 0})
	SMember(FString)                                   DefaultValue                                                OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusNode_ResourceAccessorBase_DuplicationInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FOptimusNode_ResourceAccessorBase_DuplicationInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     ResourceName                                                OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FOptimusDataTypeRef)                       DataType                                                    OFFSET(getStruct<T>, {0x4, 12, 0, 0})
	SMember(FOptimusDataDomain)                        DataDomain                                                  OFFSET(getStruct<T>, {0x10, 64, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusDataType
/// Size: 0x0050 (0x000000 - 0x000050)
class FOptimusDataType : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     TypeName                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FShaderValueTypeHandle)                    ShaderValueType                                             OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	DMember(int32_t)                                   ShaderValueSize                                             OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	SMember(FName)                                     TypeCategory                                                OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  TypeObject                                                  OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(bool)                                      bHasCustomPinColor                                          OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FLinearColor)                              CustomPinColor                                              OFFSET(getStruct<T>, {0x3C, 16, 0, 0})
	CMember(EOptimusDataTypeUsageFlags)                UsageFlags                                                  OFFSET(get<T>, {0x4C, 1, 0, 0})
	CMember(EOptimusDataTypeFlags)                     TypeFlags                                                   OFFSET(get<T>, {0x4D, 1, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusComputeGraphInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FOptimusComputeGraphInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EOptimusNodeGraphType)                     GraphType                                                   OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     GraphName                                                   OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	CMember(UOptimusComputeGraph*)                     ComputeGraph                                                OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusDeformerInstanceExecInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FOptimusDeformerInstanceExecInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     GraphName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EOptimusNodeGraphType)                     GraphType                                                   OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(UComputeGraph*)                            ComputeGraph                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FComputeGraphInstance)                     ComputeGraphInstance                                        OFFSET(getStruct<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusDeformerInstanceComponentBinding
/// Size: 0x0008 (0x000000 - 0x000008)
class FOptimusDeformerInstanceComponentBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     ProviderName                                                OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     ComponentName                                               OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusVariableMetaDataEntry
/// Size: 0x0018 (0x000000 - 0x000018)
class FOptimusVariableMetaDataEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Key                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Enum /Script/OptimusCore.EOptimusDiagnosticLevel
/// Size: 0x05
enum EOptimusDiagnosticLevel : uint8_t
{
	EOptimusDiagnosticLevel__None0                                                   = 0,
	EOptimusDiagnosticLevel__Info1                                                   = 1,
	EOptimusDiagnosticLevel__Warning2                                                = 2,
	EOptimusDiagnosticLevel__Error3                                                  = 3,
	EOptimusDiagnosticLevel__EOptimusDiagnosticLevel_MAX4                            = 4
};

/// Enum /Script/OptimusCore.EOptimusBufferWriteType
/// Size: 0x06
enum EOptimusBufferWriteType : uint8_t
{
	EOptimusBufferWriteType__Write0                                                  = 0,
	EOptimusBufferWriteType__WriteAtomicAdd1                                         = 1,
	EOptimusBufferWriteType__WriteAtomicMin2                                         = 2,
	EOptimusBufferWriteType__WriteAtomicMax3                                         = 3,
	EOptimusBufferWriteType__Count4                                                  = 4,
	EOptimusBufferWriteType__EOptimusBufferWriteType_MAX5                            = 5
};

/// Enum /Script/OptimusCore.EOptimusSkinnedMeshExecDomain
/// Size: 0x04
enum EOptimusSkinnedMeshExecDomain : uint8_t
{
	EOptimusSkinnedMeshExecDomain__None0                                             = 0,
	EOptimusSkinnedMeshExecDomain__Vertex1                                           = 1,
	EOptimusSkinnedMeshExecDomain__Triangle2                                         = 2,
	EOptimusSkinnedMeshExecDomain__EOptimusSkinnedMeshExecDomain_MAX3                = 3
};

/// Enum /Script/OptimusCore.EOptimusTerminalType
/// Size: 0x04
enum EOptimusTerminalType : uint8_t
{
	EOptimusTerminalType__Unknown0                                                   = 0,
	EOptimusTerminalType__Entry1                                                     = 1,
	EOptimusTerminalType__Return2                                                    = 2,
	EOptimusTerminalType__EOptimusTerminalType_MAX3                                  = 3
};

/// Enum /Script/OptimusCore.EOptimusDataDomainType
/// Size: 0x03
enum EOptimusDataDomainType : uint8_t
{
	EOptimusDataDomainType__Dimensional0                                             = 0,
	EOptimusDataDomainType__Expression1                                              = 1,
	EOptimusDataDomainType__EOptimusDataDomainType_MAX2                              = 2
};

/// Enum /Script/OptimusCore.EOptimusDataTypeUsageFlags
/// Size: 0x05
enum EOptimusDataTypeUsageFlags : uint8_t
{
	EOptimusDataTypeUsageFlags__None0                                                = 0,
	EOptimusDataTypeUsageFlags__Resource1                                            = 1,
	EOptimusDataTypeUsageFlags__Variable2                                            = 2,
	EOptimusDataTypeUsageFlags__AnimAttributes3                                      = 4,
	EOptimusDataTypeUsageFlags__EOptimusDataTypeUsageFlags_MAX4                      = 5
};

/// Enum /Script/OptimusCore.EOptimusDataTypeFlags
/// Size: 0x04
enum EOptimusDataTypeFlags : uint8_t
{
	EOptimusDataTypeFlags__None0                                                     = 0,
	EOptimusDataTypeFlags__IsStructType1                                             = 1,
	EOptimusDataTypeFlags__ShowElements2                                             = 2,
	EOptimusDataTypeFlags__EOptimusDataTypeFlags_MAX3                                = 3
};

/// Enum /Script/OptimusCore.EOptimusDeformerStatus
/// Size: 0x05
enum EOptimusDeformerStatus : uint8_t
{
	EOptimusDeformerStatus__Compiled0                                                = 0,
	EOptimusDeformerStatus__CompiledWithWarnings1                                    = 1,
	EOptimusDeformerStatus__Modified2                                                = 2,
	EOptimusDeformerStatus__HasErrors3                                               = 3,
	EOptimusDeformerStatus__EOptimusDeformerStatus_MAX4                              = 4
};

/// Enum /Script/OptimusCore.EOptimusNodeGraphType
/// Size: 0x07
enum EOptimusNodeGraphType : uint8_t
{
	EOptimusNodeGraphType__Setup0                                                    = 0,
	EOptimusNodeGraphType__Update1                                                   = 1,
	EOptimusNodeGraphType__ExternalTrigger2                                          = 2,
	EOptimusNodeGraphType__Function3                                                 = 3,
	EOptimusNodeGraphType__SubGraph4                                                 = 4,
	EOptimusNodeGraphType__Transient5                                                = 5,
	EOptimusNodeGraphType__EOptimusNodeGraphType_MAX6                                = 6
};

/// Enum /Script/OptimusCore.EOptimusNodePinStorageType
/// Size: 0x03
enum EOptimusNodePinStorageType : uint8_t
{
	EOptimusNodePinStorageType__Value0                                               = 0,
	EOptimusNodePinStorageType__Resource1                                            = 1,
	EOptimusNodePinStorageType__EOptimusNodePinStorageType_MAX2                      = 2
};

/// Enum /Script/OptimusCore.EOptimusNodePinDirection
/// Size: 0x04
enum EOptimusNodePinDirection : uint8_t
{
	EOptimusNodePinDirection__Unknown0                                               = 0,
	EOptimusNodePinDirection__Input1                                                 = 1,
	EOptimusNodePinDirection__Output2                                                = 2,
	EOptimusNodePinDirection__EOptimusNodePinDirection_MAX3                          = 3
};

