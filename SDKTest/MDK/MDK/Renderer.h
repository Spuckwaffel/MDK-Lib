
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/Renderer.SparseVolumeTextureViewerComponent
/// Size: 0x0040 (0x000570 - 0x0005B0)
class USparseVolumeTextureViewerComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
	CMember(USparseVolumeTexture*)                     SparseVolumeTexturePreview                                  ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	DMember(bool)                                      bAnimate                                                    ___ OFFSET(get<bool>, {0x570, 1, 1, 0})
	DMember(bool)                                      bReversePlayback                                            ___ OFFSET(get<bool>, {0x570, 1, 1, 1})
	DMember(bool)                                      bBlockingStreamingRequests                                  ___ OFFSET(get<bool>, {0x570, 1, 1, 2})
	DMember(float)                                     AnimationFrame                                              ___ OFFSET(get<float>, {0x574, 4, 0, 0})
	DMember(float)                                     FrameRate                                                   ___ OFFSET(get<float>, {0x578, 4, 0, 0})
	DMember(float)                                     AnimationTime                                               ___ OFFSET(get<float>, {0x57C, 4, 0, 0})
	CMember(TEnumAsByte<ESparseVolumeTexturePreviewAttribute>) PreviewAttribute                                    ___ OFFSET(get<T>, {0x580, 1, 0, 0})
	DMember(int32_t)                                   MipLevel                                                    ___ OFFSET(get<int32_t>, {0x584, 4, 0, 0})
	DMember(float)                                     Extinction                                                  ___ OFFSET(get<float>, {0x588, 4, 0, 0})
};

/// Class /Script/Renderer.SparseVolumeTextureViewer
/// Size: 0x0008 (0x000290 - 0x000298)
class ASparseVolumeTextureViewer : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(USparseVolumeTextureViewerComponent*)      SparseVolumeTextureViewerComponent                          ___ OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Enum /Script/Renderer.ESparseVolumeTexturePreviewAttribute
/// Size: 0x09
enum ESparseVolumeTexturePreviewAttribute : uint8_t
{
	ESVTPA_AttributesA_R0                                                            = 0,
	ESVTPA_AttributesA_G1                                                            = 1,
	ESVTPA_AttributesA_B2                                                            = 2,
	ESVTPA_AttributesA_A3                                                            = 3,
	ESVTPA_AttributesB_R4                                                            = 4,
	ESVTPA_AttributesB_G5                                                            = 5,
	ESVTPA_AttributesB_B6                                                            = 6,
	ESVTPA_AttributesB_A7                                                            = 7,
	ESVTPA_MAX8                                                                      = 8
};

