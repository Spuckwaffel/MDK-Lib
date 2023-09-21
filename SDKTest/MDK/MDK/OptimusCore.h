
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
	SMember(FName)                                     AttributeName                                               ___ OFFSET(get<T>, {0x28, 4, 0, 0})
};

/// Class /Script/OptimusCore.OptimusSkinnedMeshVertexAttributeDataProvider
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusSkinnedMeshVertexAttributeDataProvider : public UComputeDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(USkinnedMeshComponent*)                    SkinnedMeshComponent                                        ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FName)                                     AttributeName                                               ___ OFFSET(get<T>, {0x30, 4, 0, 0})
};

/// Class /Script/OptimusCore.OptimusKernelSource
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UOptimusKernelSource : public UComputeKernelSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FString)                                   Source                                                      ___ OFFSET(get<T>, {0x98, 16, 0, 0})
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
	SMember(FOptimusAnimAttributeArray)                AttributeArray                                              ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/OptimusCore.OptimusAnimAttributeDataProvider
/// Size: 0x0020 (0x000028 - 0x000048)
class UOptimusAnimAttributeDataProvider : public UComputeDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(USkeletalMeshComponent*)                   SkeletalMesh                                                ___ OFFSET(get<T>, {0x28, 8, 0, 0})
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
	CMember(USkinnedMeshComponent*)                    SkinnedMesh                                                 ___ OFFSET(get<T>, {0x28, 8, 0, 0})
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
	CMember(USkinnedMeshComponent*)                    SkinnedMesh                                                 ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/OptimusCore.OptimusCustomComputeKernelDataInterface
/// Size: 0x0018 (0x000028 - 0x000040)
class UOptimusCustomComputeKernelDataInterface : public UComputeDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TWeakObjectPtr<UOptimusComponentSourceBinding*>) ComponentSourceBinding                                ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FString)                                   NumThreadsExpression                                        ___ OFFSET(get<T>, {0x30, 16, 0, 0})
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
	SMember(FOptimusDebugDrawParameters)               DebugDrawParameters                                         ___ OFFSET(get<T>, {0x28, 20, 0, 0})
};

/// Class /Script/OptimusCore.OptimusDebugDrawDataProvider
/// Size: 0x0020 (0x000028 - 0x000048)
class UOptimusDebugDrawDataProvider : public UComputeDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(UPrimitiveComponent*)                      PrimitiveComponent                                          ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FOptimusDebugDrawParameters)               DebugDrawParameters                                         ___ OFFSET(get<T>, {0x30, 20, 0, 0})
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
	CMember(USkinnedMeshComponent*)                    SkinnedMesh                                                 ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/OptimusCore.OptimusGraphDataInterface
/// Size: 0x0018 (0x000028 - 0x000040)
class UOptimusGraphDataInterface : public UComputeDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FOptimusGraphVariableDescription>)  Variables                                                   ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(int32_t)                                   ParameterBufferSize                                         ___ OFFSET(get<int32_t>, {0x38, 4, 0, 0})
};

/// Class /Script/OptimusCore.OptimusGraphDataProvider
/// Size: 0x0028 (0x000028 - 0x000050)
class UOptimusGraphDataProvider : public UComputeDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UMeshComponent*)                           MeshComponent                                               ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UOptimusDeformerInstance*)                 DeformerInstance                                            ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<FOptimusGraphVariableDescription>)  Variables                                                   ___ OFFSET(get<T>, {0x38, 16, 0, 0})
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
	CMember(USkinnedMeshComponent*)                    SkinnedMesh                                                 ___ OFFSET(get<T>, {0x28, 8, 0, 0})
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
	CMember(USkinnedMeshComponent*)                    SkinnedMesh                                                 ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/OptimusCore.OptimusRawBufferDataInterface
/// Size: 0x0050 (0x000028 - 0x000078)
class UOptimusRawBufferDataInterface : public UOptimusComputeDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FShaderValueTypeHandle)                    ValueType                                                   ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FOptimusDataDomain)                        DataDomain                                                  ___ OFFSET(get<T>, {0x30, 64, 0, 0})
	CMember(TWeakObjectPtr<UOptimusComponentSourceBinding*>) ComponentSourceBinding                                ___ OFFSET(get<T>, {0x70, 8, 0, 0})
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
	SMember(FName)                                     ResourceName                                                ___ OFFSET(get<T>, {0x78, 4, 0, 0})
};

/// Class /Script/OptimusCore.OptimusRawBufferDataProvider
/// Size: 0x0058 (0x000028 - 0x000080)
class UOptimusRawBufferDataProvider : public UComputeDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TWeakObjectPtr<UActorComponent*>)          Component                                                   ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TWeakObjectPtr<UOptimusComponentSource*>)  ComponentSource                                             ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FOptimusDataDomain)                        DataDomain                                                  ___ OFFSET(get<T>, {0x38, 64, 0, 0})
	DMember(int32_t)                                   ElementStride                                               ___ OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	DMember(int32_t)                                   RawStride                                                   ___ OFFSET(get<int32_t>, {0x7C, 4, 0, 0})
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
	CMember(USceneComponent*)                          SceneComponent                                              ___ OFFSET(get<T>, {0x28, 8, 0, 0})
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
	CMember(USkinnedMeshComponent*)                    SkinnedMesh                                                 ___ OFFSET(get<T>, {0x28, 8, 0, 0})
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
	CMember(USkinnedMeshComponent*)                    SkinnedMesh                                                 ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/OptimusCore.OptimusSkinnedMeshExecDataInterface
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusSkinnedMeshExecDataInterface : public UOptimusComputeDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(EOptimusSkinnedMeshExecDomain)             Domain                                                      ___ OFFSET(get<T>, {0x30, 1, 0, 0})
};

/// Class /Script/OptimusCore.OptimusSkinnedMeshExecDataProvider
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusSkinnedMeshExecDataProvider : public UComputeDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(USkinnedMeshComponent*)                    SkinnedMesh                                                 ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(EOptimusSkinnedMeshExecDomain)             Domain                                                      ___ OFFSET(get<T>, {0x30, 1, 0, 0})
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
	CMember(USkinnedMeshComponent*)                    SkinnedMesh                                                 ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/OptimusCore.OptimusNode
/// Size: 0x00E8 (0x000028 - 0x000110)
class UOptimusNode : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FText)                                     DisplayName                                                 ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FVector2D)                                 GraphPosition                                               ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<UOptimusNodePin*>)                  Pins                                                        ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TSet<FName>)                               ExpandedPins                                                ___ OFFSET(get<T>, {0x68, 80, 0, 0})
	CMember(EOptimusDiagnosticLevel)                   DiagnosticLevel                                             ___ OFFSET(get<T>, {0xB8, 1, 0, 0})
};

/// Class /Script/OptimusCore.OptimusNode_DataInterface
/// Size: 0x0018 (0x000110 - 0x000128)
class UOptimusNode_DataInterface : public UOptimusNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(UClass*)                                   DataInterfaceClass                                          ___ OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(UOptimusComputeDataInterface*)             DataInterfaceData                                           ___ OFFSET(get<T>, {0x120, 8, 0, 0})
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
	CMember(UOptimusComponentSourceBinding*)           Binding                                                     ___ OFFSET(get<T>, {0x118, 8, 0, 0})
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
	SMember(FName)                                     category                                                    ___ OFFSET(get<T>, {0x200, 4, 0, 0})
	SMember(FName)                                     KernelName                                                  ___ OFFSET(get<T>, {0x204, 4, 0, 0})
	SMember(FOptimusExecutionDomain)                   ExecutionDomain                                             ___ OFFSET(get<T>, {0x208, 4, 0, 0})
	SMember(FIntVector)                                GroupSize                                                   ___ OFFSET(get<T>, {0x20C, 12, 0, 0})
	CMember(TArray<FOptimusParameterBinding>)          InputBindings                                               ___ OFFSET(get<T>, {0x218, 16, 0, 0})
	CMember(TArray<FOptimusParameterBinding>)          OutputBindings                                              ___ OFFSET(get<T>, {0x228, 16, 0, 0})
	SMember(FString)                                   ShaderSource                                                ___ OFFSET(get<T>, {0x238, 16, 0, 0})
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
	SMember(FOptimusDataTypeRef)                       DataType                                                    ___ OFFSET(get<T>, {0x200, 12, 0, 0})
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
	SMember(FName)                                     category                                                    ___ OFFSET(get<T>, {0x138, 4, 0, 0})
	SMember(FOptimusValidatedName)                     KernelName                                                  ___ OFFSET(get<T>, {0x13C, 4, 0, 0})
	SMember(FOptimusExecutionDomain)                   ExecutionDomain                                             ___ OFFSET(get<T>, {0x140, 4, 0, 0})
	SMember(FIntVector)                                GroupSize                                                   ___ OFFSET(get<T>, {0x144, 12, 0, 0})
	CMember(TArray<FOptimus_ShaderBinding>)            Parameters                                                  ___ OFFSET(get<T>, {0x150, 16, 0, 0})
	CMember(TArray<FOptimusParameterBinding>)          InputBindings                                               ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(TArray<FOptimusParameterBinding>)          OutputBindings                                              ___ OFFSET(get<T>, {0x170, 16, 0, 0})
	SMember(FOptimusParameterBindingArray)             InputBindingArray                                           ___ OFFSET(get<T>, {0x180, 16, 0, 0})
	SMember(FOptimusParameterBindingArray)             OutputBindingArray                                          ___ OFFSET(get<T>, {0x190, 16, 0, 0})
	CMember(TArray<FOptimusSecondaryInputBindingsGroup>) SecondaryInputBindingGroups                               ___ OFFSET(get<T>, {0x1A0, 16, 0, 0})
	CMember(TArray<UComputeSource*>)                   AdditionalSources                                           ___ OFFSET(get<T>, {0x1B0, 16, 0, 0})
	SMember(FOptimusShaderText)                        ShaderSource                                                ___ OFFSET(get<T>, {0x1C0, 32, 0, 0})
};

/// Class /Script/OptimusCore.OptimusNode_FunctionReference
/// Size: 0x0010 (0x000110 - 0x000120)
class UOptimusNode_FunctionReference : public UOptimusNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(UOptimusFunctionNodeGraph*)                FunctionGraph                                               ___ OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Class /Script/OptimusCore.OptimusNode_ResourceAccessorBase
/// Size: 0x0070 (0x000110 - 0x000180)
class UOptimusNode_ResourceAccessorBase : public UOptimusNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(TWeakObjectPtr<UOptimusResourceDescription*>) ResourceDesc                                             ___ OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(EOptimusBufferWriteType)                   WriteType                                                   ___ OFFSET(get<T>, {0x128, 1, 0, 0})
	SMember(FOptimusNode_ResourceAccessorBase_DuplicationInfo) DuplicationInfo                                     ___ OFFSET(get<T>, {0x130, 80, 0, 0})
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
	CMember(TWeakObjectPtr<UOptimusVariableDescription*>) VariableDesc                                             ___ OFFSET(get<T>, {0x118, 8, 0, 0})
	SMember(FOptimusNode_GetVariable_DuplicationInfo)  DuplicationInfo                                             ___ OFFSET(get<T>, {0x120, 32, 0, 0})
};

/// Class /Script/OptimusCore.OptimusNode_GraphTerminal
/// Size: 0x0018 (0x000110 - 0x000128)
class UOptimusNode_GraphTerminal : public UOptimusNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(EOptimusTerminalType)                      TerminalType                                                ___ OFFSET(get<T>, {0x118, 4, 0, 0})
	CMember(TWeakObjectPtr<UOptimusNodeSubGraph*>)     OwningGraph                                                 ___ OFFSET(get<T>, {0x11C, 8, 0, 0})
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
	CMember(UOptimusNodeSubGraph*)                     SubGraph                                                    ___ OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Class /Script/OptimusCore.OptimusActionStack
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UOptimusActionStack : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	DMember(int32_t)                                   TransactedActionIndex                                       ___ OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Class /Script/OptimusCore.OptimusComponentSourceBinding
/// Size: 0x0028 (0x000028 - 0x000050)
class UOptimusComponentSourceBinding : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     BindingName                                                 ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	CMember(UClass*)                                   ComponentType                                               ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<FName>)                             ComponentTags                                               ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      bIsPrimaryBinding                                           ___ OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Class /Script/OptimusCore.OptimusComputeGraph
/// Size: 0x0010 (0x000090 - 0x0000A0)
class UOptimusComputeGraph : public UComputeGraph
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TArray<TWeakObjectPtr>)                    KernelToNode                                                ___ OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Class /Script/OptimusCore.OptimusComponentSourceBindingContainer
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusComponentSourceBindingContainer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<UOptimusComponentSourceBinding*>)   Bindings                                                    ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/OptimusCore.OptimusVariableContainer
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusVariableContainer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<UOptimusVariableDescription*>)      Descriptions                                                ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/OptimusCore.OptimusResourceContainer
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusResourceContainer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<UOptimusResourceDescription*>)      Descriptions                                                ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/OptimusCore.OptimusDeformer
/// Size: 0x0100 (0x000028 - 0x000128)
class UOptimusDeformer : public UMeshDeformer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(USkeletalMesh*)                            Mesh                                                        ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TArray<FOptimusComputeGraphInfo>)          ComputeGraphs                                               ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(UOptimusActionStack*)                      ActionStack                                                 ___ OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(EOptimusDeformerStatus)                    Status                                                      ___ OFFSET(get<T>, {0x68, 4, 0, 0})
	CMember(TArray<UOptimusNodeGraph*>)                Graphs                                                      ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(UOptimusComponentSourceBindingContainer*)  Bindings                                                    ___ OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(UOptimusVariableContainer*)                Variables                                                   ___ OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(UOptimusResourceContainer*)                Resources                                                   ___ OFFSET(get<T>, {0x90, 8, 0, 0})
};

/// Class /Script/OptimusCore.OptimusDeformerInstanceSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class UOptimusDeformerInstanceSettings : public UMeshDeformerInstanceSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TWeakObjectPtr<UOptimusDeformer*>)         Deformer                                                    ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<FOptimusDeformerInstanceComponentBinding>) Bindings                                             ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/OptimusCore.OptimusDeformerInstance
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UOptimusDeformerInstance : public UMeshDeformerInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TWeakObjectPtr<UMeshComponent*>)           MeshComponent                                               ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TWeakObjectPtr<UOptimusDeformerInstanceSettings*>) InstanceSettings                                    ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<FOptimusDeformerInstanceExecInfo>)  ComputeGraphExecInfos                                       ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(UOptimusVariableContainer*)                Variables                                                   ___ OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/OptimusCore.OptimusNodeGraph
/// Size: 0x0058 (0x000028 - 0x000080)
class UOptimusNodeGraph : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(EOptimusNodeGraphType)                     GraphType                                                   ___ OFFSET(get<T>, {0x30, 4, 0, 0})
	CMember(TArray<UOptimusNode*>)                     Nodes                                                       ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<UOptimusNodeLink*>)                 Links                                                       ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<UOptimusNodeGraph*>)                Subgraphs                                                   ___ OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Class /Script/OptimusCore.OptimusNodeSubGraph
/// Size: 0x0030 (0x000080 - 0x0000B0)
class UOptimusNodeSubGraph : public UOptimusNodeGraph
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<FOptimusParameterBinding>)          InputBindings                                               ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FOptimusParameterBinding>)          OutputBindings                                              ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TWeakObjectPtr<UOptimusNode_GraphTerminal*>) EntryNode                                                 ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TWeakObjectPtr<UOptimusNode_GraphTerminal*>) ReturnNode                                                ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/OptimusCore.OptimusFunctionNodeGraph
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UOptimusFunctionNodeGraph : public UOptimusNodeSubGraph
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FName)                                     category                                                    ___ OFFSET(get<T>, {0xB0, 4, 0, 0})
};

/// Class /Script/OptimusCore.OptimusNodeLink
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusNodeLink : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UOptimusNodePin*)                          NodeOutputPin                                               ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UOptimusNodePin*)                          NodeInputPin                                                ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/OptimusCore.OptimusNodePin
/// Size: 0x0068 (0x000028 - 0x000090)
class UOptimusNodePin : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(bool)                                      bIsGroupingPin                                              ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(EOptimusNodePinDirection)                  Direction                                                   ___ OFFSET(get<T>, {0x29, 1, 0, 0})
	CMember(EOptimusNodePinStorageType)                StorageType                                                 ___ OFFSET(get<T>, {0x2A, 1, 0, 0})
	SMember(FOptimusDataDomain)                        DataDomain                                                  ___ OFFSET(get<T>, {0x30, 64, 0, 0})
	SMember(FOptimusDataTypeRef)                       DataType                                                    ___ OFFSET(get<T>, {0x70, 12, 0, 0})
	CMember(TArray<UOptimusNodePin*>)                  SubPins                                                     ___ OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Class /Script/OptimusCore.OptimusResourceDescription
/// Size: 0x0060 (0x000028 - 0x000088)
class UOptimusResourceDescription : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     ResourceName                                                ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	SMember(FOptimusDataTypeRef)                       DataType                                                    ___ OFFSET(get<T>, {0x2C, 12, 0, 0})
	CMember(TWeakObjectPtr<UOptimusComponentSourceBinding*>) ComponentBinding                                      ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FOptimusDataDomain)                        DataDomain                                                  ___ OFFSET(get<T>, {0x40, 64, 0, 0})
	CMember(UOptimusPersistentBufferDataInterface*)    DataInterface                                               ___ OFFSET(get<T>, {0x80, 8, 0, 0})
};

/// Class /Script/OptimusCore.OptimusSource
/// Size: 0x0018 (0x000038 - 0x000050)
class UOptimusSource : public UComputeSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   SourceText                                                  ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/OptimusCore.OptimusValueContainerGeneratorClass
/// Size: 0x0010 (0x000200 - 0x000210)
class UOptimusValueContainerGeneratorClass : public UClass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FOptimusDataTypeRef)                       DataType                                                    ___ OFFSET(get<T>, {0x200, 12, 0, 0})
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
	SMember(FGuid)                                     Guid                                                        ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FName)                                     VariableName                                                ___ OFFSET(get<T>, {0x38, 4, 0, 0})
	SMember(FOptimusDataTypeRef)                       DataType                                                    ___ OFFSET(get<T>, {0x3C, 12, 0, 0})
	CMember(UOptimusValueContainer*)                   DefaultValue                                                ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TArray<char>)                              ValueData                                                   ___ OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusExecutionDomain
/// Size: 0x0004 (0x000000 - 0x000004)
class FOptimusExecutionDomain : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/OptimusCore.Optimus_ShaderBinding
/// Size: 0x0010 (0x000000 - 0x000010)
class FOptimus_ShaderBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FOptimusDataTypeRef)                       DataType                                                    ___ OFFSET(get<T>, {0x4, 12, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusDataTypeRef
/// Size: 0x000C (0x000000 - 0x00000C)
class FOptimusDataTypeRef : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     TypeName                                                    ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  TypeObject                                                  ___ OFFSET(get<T>, {0x4, 8, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusParameterBinding
/// Size: 0x0050 (0x000000 - 0x000050)
class FOptimusParameterBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FOptimusValidatedName)                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FOptimusDataTypeRef)                       DataType                                                    ___ OFFSET(get<T>, {0x4, 12, 0, 0})
	SMember(FOptimusDataDomain)                        DataDomain                                                  ___ OFFSET(get<T>, {0x10, 64, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusDataDomain
/// Size: 0x0040 (0x000000 - 0x000040)
class FOptimusDataDomain : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(EOptimusDataDomainType)                    Type                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FName>)                             DimensionNames                                              ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   Multiplier                                                  ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	SMember(FString)                                   Expression                                                  ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FName>)                             LevelNames                                                  ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusValidatedName
/// Size: 0x0004 (0x000000 - 0x000004)
class FOptimusValidatedName : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusParameterBindingArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FOptimusParameterBindingArray : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FOptimusParameterBinding>)          InnerArray                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusShaderText
/// Size: 0x0020 (0x000000 - 0x000020)
class FOptimusShaderText : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Declarations                                                ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ShaderText                                                  ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusAction
/// Size: 0x0018 (0x000000 - 0x000018)
class FOptimusAction : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/OptimusCore.OptimusCompoundAction
/// Size: 0x0010 (0x000018 - 0x000028)
class FOptimusCompoundAction : public FOptimusAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/OptimusCore.OptimusComponentBindingAction_AddBinding
/// Size: 0x0010 (0x000018 - 0x000028)
class FOptimusComponentBindingAction_AddBinding : public FOptimusAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/OptimusCore.OptimusComponentBindingAction_RemoveBinding
/// Size: 0x0028 (0x000018 - 0x000040)
class FOptimusComponentBindingAction_RemoveBinding : public FOptimusAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/OptimusCore.OptimusComponentBindingAction_RenameBinding
/// Size: 0x0008 (0x000018 - 0x000020)
class FOptimusComponentBindingAction_RenameBinding : public FOptimusAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/OptimusCore.OptimusComponentBindingAction_SetComponentSource
/// Size: 0x0018 (0x000018 - 0x000030)
class FOptimusComponentBindingAction_SetComponentSource : public FOptimusAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeAction_RenameNode
/// Size: 0x0040 (0x000018 - 0x000058)
class FOptimusNodeAction_RenameNode : public FOptimusAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeAction_MoveNode
/// Size: 0x0030 (0x000018 - 0x000048)
class FOptimusNodeAction_MoveNode : public FOptimusAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeAction_SetPinValue
/// Size: 0x0030 (0x000018 - 0x000048)
class FOptimusNodeAction_SetPinValue : public FOptimusAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeAction_SetPinName
/// Size: 0x0018 (0x000018 - 0x000030)
class FOptimusNodeAction_SetPinName : public FOptimusAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeAction_SetPinType
/// Size: 0x0018 (0x000018 - 0x000030)
class FOptimusNodeAction_SetPinType : public FOptimusAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeAction_SetPinDataDomain
/// Size: 0x0090 (0x000018 - 0x0000A8)
class FOptimusNodeAction_SetPinDataDomain : public FOptimusAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeAction_AddRemovePin
/// Size: 0x0098 (0x000018 - 0x0000B0)
class FOptimusNodeAction_AddRemovePin : public FOptimusAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeAction_AddPin
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class FOptimusNodeAction_AddPin : public FOptimusNodeAction_AddRemovePin
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeAction_AddGroupingPin
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class FOptimusNodeAction_AddGroupingPin : public FOptimusNodeAction_AddRemovePin
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeAction_RemovePin
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class FOptimusNodeAction_RemovePin : public FOptimusNodeAction_AddRemovePin
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeAction_MovePin
/// Size: 0x0030 (0x000018 - 0x000048)
class FOptimusNodeAction_MovePin : public FOptimusAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_AddGraph
/// Size: 0x0078 (0x000018 - 0x000090)
class FOptimusNodeGraphAction_AddGraph : public FOptimusAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_RemoveGraph
/// Size: 0x0040 (0x000018 - 0x000058)
class FOptimusNodeGraphAction_RemoveGraph : public FOptimusAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_RenameGraph
/// Size: 0x0018 (0x000018 - 0x000030)
class FOptimusNodeGraphAction_RenameGraph : public FOptimusAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_AddNode
/// Size: 0x0088 (0x000018 - 0x0000A0)
class FOptimusNodeGraphAction_AddNode : public FOptimusAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_DuplicateNode
/// Size: 0x0088 (0x000018 - 0x0000A0)
class FOptimusNodeGraphAction_DuplicateNode : public FOptimusAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_RemoveNode
/// Size: 0x0048 (0x000018 - 0x000060)
class FOptimusNodeGraphAction_RemoveNode : public FOptimusAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_AddRemoveLink
/// Size: 0x0028 (0x000018 - 0x000040)
class FOptimusNodeGraphAction_AddRemoveLink : public FOptimusAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_AddLink
/// Size: 0x0000 (0x000040 - 0x000040)
class FOptimusNodeGraphAction_AddLink : public FOptimusNodeGraphAction_AddRemoveLink
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_RemoveLink
/// Size: 0x0000 (0x000040 - 0x000040)
class FOptimusNodeGraphAction_RemoveLink : public FOptimusNodeGraphAction_AddRemoveLink
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_ConnectAdderPin
/// Size: 0x0060 (0x000040 - 0x0000A0)
class FOptimusNodeGraphAction_ConnectAdderPin : public FOptimusNodeGraphAction_AddRemoveLink
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_PackageKernelFunction
/// Size: 0x0090 (0x000018 - 0x0000A8)
class FOptimusNodeGraphAction_PackageKernelFunction : public FOptimusAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_UnpackageKernelFunction
/// Size: 0x0048 (0x000018 - 0x000060)
class FOptimusNodeGraphAction_UnpackageKernelFunction : public FOptimusAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/OptimusCore.OptimusResourceAction_AddResource
/// Size: 0x0050 (0x000018 - 0x000068)
class FOptimusResourceAction_AddResource : public FOptimusAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Struct /Script/OptimusCore.OptimusResourceAction_RemoveResource
/// Size: 0x0028 (0x000018 - 0x000040)
class FOptimusResourceAction_RemoveResource : public FOptimusAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/OptimusCore.OptimusResourceAction_RenameResource
/// Size: 0x0008 (0x000018 - 0x000020)
class FOptimusResourceAction_RenameResource : public FOptimusAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/OptimusCore.OptimusResourceAction_SetDataType
/// Size: 0x0020 (0x000018 - 0x000038)
class FOptimusResourceAction_SetDataType : public FOptimusAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/OptimusCore.OptimusResourceAction_SetDataDomain
/// Size: 0x0088 (0x000018 - 0x0000A0)
class FOptimusResourceAction_SetDataDomain : public FOptimusAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Struct /Script/OptimusCore.OptimusVariableAction_AddVariable
/// Size: 0x0010 (0x000018 - 0x000028)
class FOptimusVariableAction_AddVariable : public FOptimusAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/OptimusCore.OptimusVariableAction_RemoveVariable
/// Size: 0x0038 (0x000018 - 0x000050)
class FOptimusVariableAction_RemoveVariable : public FOptimusAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/OptimusCore.OptimusVariableAction_RenameVariable
/// Size: 0x0008 (0x000018 - 0x000020)
class FOptimusVariableAction_RenameVariable : public FOptimusAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/OptimusCore.OptimusVariableAction_SetDataType
/// Size: 0x0020 (0x000018 - 0x000038)
class FOptimusVariableAction_SetDataType : public FOptimusAction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/OptimusCore.OptimusAnimAttributeDescription
/// Size: 0x0040 (0x000000 - 0x000040)
class FOptimusAnimAttributeDescription : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     BoneName                                                    ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	SMember(FOptimusDataTypeRef)                       DataType                                                    ___ OFFSET(get<T>, {0x14, 12, 0, 0})
	CMember(UOptimusValueContainer*)                   DefaultValue                                                ___ OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FString)                                   HlslId                                                      ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FName)                                     PinName                                                     ___ OFFSET(get<T>, {0x38, 4, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusAnimAttributeArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FOptimusAnimAttributeArray : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FOptimusAnimAttributeDescription>)  InnerArray                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusDebugDrawParameters
/// Size: 0x0014 (0x000000 - 0x000014)
class FOptimusDebugDrawParameters : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(bool)                                      bForceEnable                                                ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   MaxLineCount                                                ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaxTriangleCount                                            ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MaxCharacterCount                                           ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   FontSize                                                    ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusGraphVariableDescription
/// Size: 0x0030 (0x000000 - 0x000030)
class FOptimusGraphVariableDescription : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FShaderValueTypeHandle)                    ValueType                                                   ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TArray<char>)                              Value                                                       ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(int32_t)                                   Offset                                                      ___ OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusSecondaryInputBindingsGroup
/// Size: 0x0018 (0x000000 - 0x000018)
class FOptimusSecondaryInputBindingsGroup : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FOptimusValidatedName)                     GroupName                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FOptimusParameterBindingArray)             BindingArray                                                ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusNode_GetVariable_DuplicationInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FOptimusNode_GetVariable_DuplicationInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     VariableName                                                ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FOptimusDataTypeRef)                       DataType                                                    ___ OFFSET(get<T>, {0x4, 12, 0, 0})
	SMember(FString)                                   DefaultValue                                                ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusNode_ResourceAccessorBase_DuplicationInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FOptimusNode_ResourceAccessorBase_DuplicationInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     ResourceName                                                ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FOptimusDataTypeRef)                       DataType                                                    ___ OFFSET(get<T>, {0x4, 12, 0, 0})
	SMember(FOptimusDataDomain)                        DataDomain                                                  ___ OFFSET(get<T>, {0x10, 64, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusDataType
/// Size: 0x0050 (0x000000 - 0x000050)
class FOptimusDataType : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     TypeName                                                    ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     DisplayName                                                 ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FShaderValueTypeHandle)                    ShaderValueType                                             ___ OFFSET(get<T>, {0x20, 8, 0, 0})
	DMember(int32_t)                                   ShaderValueSize                                             ___ OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	SMember(FName)                                     TypeCategory                                                ___ OFFSET(get<T>, {0x2C, 4, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  TypeObject                                                  ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(bool)                                      bHasCustomPinColor                                          ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FLinearColor)                              CustomPinColor                                              ___ OFFSET(get<T>, {0x3C, 16, 0, 0})
	CMember(EOptimusDataTypeUsageFlags)                UsageFlags                                                  ___ OFFSET(get<T>, {0x4C, 1, 0, 0})
	CMember(EOptimusDataTypeFlags)                     TypeFlags                                                   ___ OFFSET(get<T>, {0x4D, 1, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusComputeGraphInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FOptimusComputeGraphInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EOptimusNodeGraphType)                     GraphType                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     GraphName                                                   ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(UOptimusComputeGraph*)                     ComputeGraph                                                ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusDeformerInstanceExecInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FOptimusDeformerInstanceExecInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     GraphName                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(EOptimusNodeGraphType)                     GraphType                                                   ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(UComputeGraph*)                            ComputeGraph                                                ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FComputeGraphInstance)                     ComputeGraphInstance                                        ___ OFFSET(get<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusDeformerInstanceComponentBinding
/// Size: 0x0008 (0x000000 - 0x000008)
class FOptimusDeformerInstanceComponentBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     ProviderName                                                ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     ComponentName                                               ___ OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/OptimusCore.OptimusVariableMetaDataEntry
/// Size: 0x0018 (0x000000 - 0x000018)
class FOptimusVariableMetaDataEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Key                                                         ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FString)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
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

