
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: InterchangeCore

/// Class /Script/InterchangeNodes.InterchangeAnimationTrackSetNode
/// Size: 0x0030 (0x000060 - 0x000090)
class UInterchangeAnimationTrackSetNode : public UInterchangeBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/InterchangeNodes.InterchangeAnimationTrackBaseNode
/// Size: 0x0010 (0x000060 - 0x000070)
class UInterchangeAnimationTrackBaseNode : public UInterchangeBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode
/// Size: 0x0040 (0x000070 - 0x0000B0)
class UInterchangeAnimationTrackSetInstanceNode : public UInterchangeAnimationTrackBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/InterchangeNodes.InterchangeAnimationTrackNode
/// Size: 0x0050 (0x000070 - 0x0000C0)
class UInterchangeAnimationTrackNode : public UInterchangeAnimationTrackBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/InterchangeNodes.InterchangeTransformAnimationTrackNode
/// Size: 0x0010 (0x0000C0 - 0x0000D0)
class UInterchangeTransformAnimationTrackNode : public UInterchangeAnimationTrackNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode
/// Size: 0x0220 (0x000070 - 0x000290)
class UInterchangeSkeletalAnimationTrackNode : public UInterchangeAnimationTrackBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
};

/// Class /Script/InterchangeNodes.InterchangePhysicalCameraNode
/// Size: 0x0040 (0x000060 - 0x0000A0)
class UInterchangePhysicalCameraNode : public UInterchangeBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/InterchangeNodes.InterchangeStandardCameraNode
/// Size: 0x0060 (0x000060 - 0x0000C0)
class UInterchangeStandardCameraNode : public UInterchangeBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/InterchangeNodes.InterchangeBaseLightNode
/// Size: 0x0040 (0x000060 - 0x0000A0)
class UInterchangeBaseLightNode : public UInterchangeBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/InterchangeNodes.InterchangeLightNode
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UInterchangeLightNode : public UInterchangeBaseLightNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/InterchangeNodes.InterchangePointLightNode
/// Size: 0x0020 (0x0000D0 - 0x0000F0)
class UInterchangePointLightNode : public UInterchangeLightNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/InterchangeNodes.InterchangeSpotLightNode
/// Size: 0x0020 (0x0000F0 - 0x000110)
class UInterchangeSpotLightNode : public UInterchangePointLightNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
};

/// Class /Script/InterchangeNodes.InterchangeRectLightNode
/// Size: 0x0020 (0x0000D0 - 0x0000F0)
class UInterchangeRectLightNode : public UInterchangeLightNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/InterchangeNodes.InterchangeDirectionalLightNode
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UInterchangeDirectionalLightNode : public UInterchangeBaseLightNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/InterchangeNodes.InterchangeTextureNode
/// Size: 0x0030 (0x000060 - 0x000090)
class UInterchangeTextureNode : public UInterchangeBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/InterchangeNodes.InterchangeTexture2DArrayNode
/// Size: 0x0000 (0x000090 - 0x000090)
class UInterchangeTexture2DArrayNode : public UInterchangeTextureNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/InterchangeNodes.InterchangeTextureCubeArrayNode
/// Size: 0x0000 (0x000090 - 0x000090)
class UInterchangeTextureCubeArrayNode : public UInterchangeTextureNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/InterchangeNodes.InterchangeTextureCubeNode
/// Size: 0x0000 (0x000090 - 0x000090)
class UInterchangeTextureCubeNode : public UInterchangeTextureNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/InterchangeNodes.InterchangeTextureLightProfileNode
/// Size: 0x0000 (0x000090 - 0x000090)
class UInterchangeTextureLightProfileNode : public UInterchangeTextureNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/InterchangeNodes.InterchangeVariantSetNode
/// Size: 0x0040 (0x000060 - 0x0000A0)
class UInterchangeVariantSetNode : public UInterchangeBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/InterchangeNodes.InterchangeSceneVariantSetsNode
/// Size: 0x0020 (0x000060 - 0x000080)
class UInterchangeSceneVariantSetsNode : public UInterchangeBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/InterchangeNodes.InterchangeVolumeTextureNode
/// Size: 0x0000 (0x000090 - 0x000090)
class UInterchangeVolumeTextureNode : public UInterchangeTextureNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/InterchangeNodes.InterchangeMaterialInstanceNode
/// Size: 0x0010 (0x000060 - 0x000070)
class UInterchangeMaterialInstanceNode : public UInterchangeBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/InterchangeNodes.InterchangeMeshNode
/// Size: 0x0188 (0x000060 - 0x0001E8)
class UInterchangeMeshNode : public UInterchangeBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
};

/// Class /Script/InterchangeNodes.InterchangeSceneNode
/// Size: 0x02C0 (0x000060 - 0x000320)
class UInterchangeSceneNode : public UInterchangeBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
};

/// Class /Script/InterchangeNodes.InterchangeShaderPortsAPI
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterchangeShaderPortsAPI : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InterchangeNodes.InterchangeShaderNode
/// Size: 0x0010 (0x000060 - 0x000070)
class UInterchangeShaderNode : public UInterchangeBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/InterchangeNodes.InterchangeFunctionCallShaderNode
/// Size: 0x0010 (0x000070 - 0x000080)
class UInterchangeFunctionCallShaderNode : public UInterchangeShaderNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/InterchangeNodes.InterchangeShaderGraphNode
/// Size: 0x0050 (0x000070 - 0x0000C0)
class UInterchangeShaderGraphNode : public UInterchangeShaderNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/InterchangeNodes.InterchangeTexture2DNode
/// Size: 0x0098 (0x000090 - 0x000128)
class UInterchangeTexture2DNode : public UInterchangeTextureNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Script/InterchangeNodes.InterchangeTextureBlurNode
/// Size: 0x0000 (0x000128 - 0x000128)
class UInterchangeTextureBlurNode : public UInterchangeTexture2DNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Struct /Script/InterchangeNodes.InterchangeAnimationPayLoadKey
/// Size: 0x0018 (0x000000 - 0x000018)
class FInterchangeAnimationPayLoadKey : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   UniqueID                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(EInterchangeAnimationPayLoadType)          Type                                                        ___ OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/InterchangeNodes.InterchangeMeshPayLoadKey
/// Size: 0x0018 (0x000000 - 0x000018)
class FInterchangeMeshPayLoadKey : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   UniqueID                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(EInterchangeMeshPayLoadType)               Type                                                        ___ OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Enum /Script/InterchangeNodes.EInterchangeAnimationPayLoadType
/// Size: 0x07
enum EInterchangeAnimationPayLoadType : uint8_t
{
	EInterchangeAnimationPayLoadType__NONE0                                          = 0,
	EInterchangeAnimationPayLoadType__CURVE1                                         = 1,
	EInterchangeAnimationPayLoadType__MORPHTARGETCURVE2                              = 2,
	EInterchangeAnimationPayLoadType__STEPCURVE3                                     = 3,
	EInterchangeAnimationPayLoadType__BAKED4                                         = 4,
	EInterchangeAnimationPayLoadType__MORPHTARGETCURVEWEIGHTINSTANCE5                = 5,
	EInterchangeAnimationPayLoadType__EInterchangeAnimationPayLoadType_MAX6          = 6
};

/// Enum /Script/InterchangeNodes.EInterchangeAnimatedProperty
/// Size: 0x03
enum EInterchangeAnimatedProperty : uint8_t
{
	EInterchangeAnimatedProperty__None0                                              = 0,
	EInterchangeAnimatedProperty__Visibility1                                        = 1,
	EInterchangeAnimatedProperty__MAX2                                               = 2
};

/// Enum /Script/InterchangeNodes.EInterchangeCameraProjectionType
/// Size: 0x03
enum EInterchangeCameraProjectionType : uint8_t
{
	EInterchangeCameraProjectionType__Perspective0                                   = 0,
	EInterchangeCameraProjectionType__Orthographic1                                  = 1,
	EInterchangeCameraProjectionType__EInterchangeCameraProjectionType_MAX2          = 2
};

/// Enum /Script/InterchangeNodes.EInterchangeLightUnits
/// Size: 0x05
enum EInterchangeLightUnits : uint8_t
{
	EInterchangeLightUnits__Unitless0                                                = 0,
	EInterchangeLightUnits__Candelas1                                                = 1,
	EInterchangeLightUnits__Lumens2                                                  = 2,
	EInterchangeLightUnits__EV3                                                      = 3,
	EInterchangeLightUnits__EInterchangeLightUnits_MAX4                              = 4
};

/// Enum /Script/InterchangeNodes.EInterchangeTextureWrapMode
/// Size: 0x04
enum EInterchangeTextureWrapMode : uint8_t
{
	EInterchangeTextureWrapMode__Wrap0                                               = 0,
	EInterchangeTextureWrapMode__Clamp1                                              = 1,
	EInterchangeTextureWrapMode__Mirror2                                             = 2,
	EInterchangeTextureWrapMode__EInterchangeTextureWrapMode_MAX3                    = 3
};

/// Enum /Script/InterchangeNodes.EInterchangeTextureFilterMode
/// Size: 0x05
enum EInterchangeTextureFilterMode : uint8_t
{
	EInterchangeTextureFilterMode__Nearest0                                          = 0,
	EInterchangeTextureFilterMode__Bilinear1                                         = 1,
	EInterchangeTextureFilterMode__Trilinear2                                        = 2,
	EInterchangeTextureFilterMode__Default3                                          = 3,
	EInterchangeTextureFilterMode__EInterchangeTextureFilterMode_MAX4                = 4
};

/// Enum /Script/InterchangeNodes.EInterchangeMeshPayLoadType
/// Size: 0x05
enum EInterchangeMeshPayLoadType : uint8_t
{
	EInterchangeMeshPayLoadType__NONE0                                               = 0,
	EInterchangeMeshPayLoadType__STATIC1                                             = 1,
	EInterchangeMeshPayLoadType__SKELETAL2                                           = 2,
	EInterchangeMeshPayLoadType__MORPHTARGET3                                        = 3,
	EInterchangeMeshPayLoadType__EInterchangeMeshPayLoadType_MAX4                    = 4
};

