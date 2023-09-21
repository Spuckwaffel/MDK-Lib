
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: InterchangeCore

/// Class /Script/InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode
/// Size: 0x0030 (0x000140 - 0x000170)
class UInterchangeAnimationTrackSetFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode
/// Size: 0x0030 (0x000140 - 0x000170)
class UInterchangeActorFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode
/// Size: 0x0040 (0x000170 - 0x0001B0)
class UInterchangePhysicalCameraFactoryNode : public UInterchangeActorFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode
/// Size: 0x0060 (0x000170 - 0x0001D0)
class UInterchangeStandardCameraFactoryNode : public UInterchangeActorFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode
/// Size: 0x0040 (0x000170 - 0x0001B0)
class UInterchangeBaseLightFactoryNode : public UInterchangeActorFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeDirectionalLightFactoryNode
/// Size: 0x0000 (0x0001B0 - 0x0001B0)
class UInterchangeDirectionalLightFactoryNode : public UInterchangeBaseLightFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode
/// Size: 0x0030 (0x0001B0 - 0x0001E0)
class UInterchangeLightFactoryNode : public UInterchangeBaseLightFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeRectLightFactoryNode
/// Size: 0x0020 (0x0001E0 - 0x000200)
class UInterchangeRectLightFactoryNode : public UInterchangeLightFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangePointLightFactoryNode
/// Size: 0x0020 (0x0001E0 - 0x000200)
class UInterchangePointLightFactoryNode : public UInterchangeLightFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeSpotLightFactoryNode
/// Size: 0x0020 (0x000200 - 0x000220)
class UInterchangeSpotLightFactoryNode : public UInterchangePointLightFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode
/// Size: 0x0030 (0x000140 - 0x000170)
class UInterchangePhysicsAssetFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode
/// Size: 0x0020 (0x000140 - 0x000160)
class UInterchangeSceneVariantSetsFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode
/// Size: 0x0050 (0x000140 - 0x000190)
class UInterchangeSkeletonFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode
/// Size: 0x0290 (0x000140 - 0x0003D0)
class UInterchangeTextureFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode
/// Size: 0x0030 (0x0003D0 - 0x000400)
class UInterchangeTexture2DArrayFactoryNode : public UInterchangeTextureFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode
/// Size: 0x0098 (0x0003D0 - 0x000468)
class UInterchangeTexture2DFactoryNode : public UInterchangeTextureFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1128;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeTextureCubeArrayFactoryNode
/// Size: 0x0000 (0x0003D0 - 0x0003D0)
class UInterchangeTextureCubeArrayFactoryNode : public UInterchangeTextureFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeTextureCubeFactoryNode
/// Size: 0x0000 (0x0003D0 - 0x0003D0)
class UInterchangeTextureCubeFactoryNode : public UInterchangeTextureFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode
/// Size: 0x0020 (0x000468 - 0x000488)
class UInterchangeTextureLightProfileFactoryNode : public UInterchangeTexture2DFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1160;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeVolumeTextureFactoryNode
/// Size: 0x0000 (0x0003D0 - 0x0003D0)
class UInterchangeVolumeTextureFactoryNode : public UInterchangeTextureFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode
/// Size: 0x0340 (0x000140 - 0x000480)
class UInterchangeAnimSequenceFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode
/// Size: 0x0020 (0x000140 - 0x000160)
class UInterchangeCommonPipelineDataFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeBaseMaterialFactoryNode
/// Size: 0x0000 (0x000140 - 0x000140)
class UInterchangeBaseMaterialFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode
/// Size: 0x0070 (0x000140 - 0x0001B0)
class UInterchangeMaterialFactoryNode : public UInterchangeBaseMaterialFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMaterialExpressionFactoryNode
/// Size: 0x0010 (0x000140 - 0x000150)
class UInterchangeMaterialExpressionFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode
/// Size: 0x0020 (0x000140 - 0x000160)
class UInterchangeMaterialInstanceFactoryNode : public UInterchangeBaseMaterialFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMaterialFunctionCallExpressionFactoryNode
/// Size: 0x0010 (0x000150 - 0x000160)
class UInterchangeMaterialFunctionCallExpressionFactoryNode : public UInterchangeMaterialExpressionFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMaterialFunctionFactoryNode
/// Size: 0x0000 (0x000140 - 0x000140)
class UInterchangeMaterialFunctionFactoryNode : public UInterchangeBaseMaterialFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode
/// Size: 0x0098 (0x000170 - 0x000208)
class UInterchangeMeshActorFactoryNode : public UInterchangeActorFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode
/// Size: 0x0170 (0x000140 - 0x0002B0)
class UInterchangeMeshFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeSceneImportAssetFactoryNode
/// Size: 0x0000 (0x000140 - 0x000140)
class UInterchangeSceneImportAssetFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode
/// Size: 0x00C8 (0x0002B0 - 0x000378)
class UInterchangeSkeletalMeshFactoryNode : public UInterchangeMeshFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode
/// Size: 0x0030 (0x000140 - 0x000170)
class UInterchangeSkeletalMeshLodDataNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode
/// Size: 0x00E8 (0x0002B0 - 0x000398)
class UInterchangeStaticMeshFactoryNode : public UInterchangeMeshFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode
/// Size: 0x00C0 (0x000140 - 0x000200)
class UInterchangeStaticMeshLodDataNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Enum /Script/InterchangeFactoryNodes.EInterchangeSkeletalMeshContentType
/// Size: 0x04
enum EInterchangeSkeletalMeshContentType : uint8_t
{
	EInterchangeSkeletalMeshContentType__All0                                        = 0,
	EInterchangeSkeletalMeshContentType__Geometry1                                   = 1,
	EInterchangeSkeletalMeshContentType__SkinningWeights2                            = 2,
	EInterchangeSkeletalMeshContentType__MAX3                                        = 3
};

