
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/Renderer.SparseVolumeTextureViewerComponent
/// Size: 0x0040 (0x000580 - 0x0005C0)
class USparseVolumeTextureViewerComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1472;

public:
	CMember(USparseVolumeTexture*)                     SparseVolumeTexturePreview                                  OFFSET(get<T>, {0x578, 8, 0, 0})
	DMember(bool)                                      bAnimate                                                    OFFSET(get<bool>, {0x580, 1, 1, 0})
	DMember(bool)                                      bReversePlayback                                            OFFSET(get<bool>, {0x580, 1, 1, 1})
	DMember(bool)                                      bBlockingStreamingRequests                                  OFFSET(get<bool>, {0x580, 1, 1, 2})
	DMember(float)                                     AnimationFrame                                              OFFSET(get<float>, {0x584, 4, 0, 0})
	DMember(float)                                     FrameRate                                                   OFFSET(get<float>, {0x588, 4, 0, 0})
	DMember(float)                                     AnimationTime                                               OFFSET(get<float>, {0x58C, 4, 0, 0})
	CMember(TEnumAsByte<ESparseVolumeTexturePreviewAttribute>) PreviewAttribute                                    OFFSET(get<T>, {0x590, 1, 0, 0})
	DMember(int32_t)                                   MipLevel                                                    OFFSET(get<int32_t>, {0x594, 4, 0, 0})
	DMember(float)                                     Extinction                                                  OFFSET(get<float>, {0x598, 4, 0, 0})
};

/// Class /Script/Renderer.SparseVolumeTextureViewer
/// Size: 0x0008 (0x000290 - 0x000298)
class ASparseVolumeTextureViewer : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(USparseVolumeTextureViewerComponent*)      SparseVolumeTextureViewerComponent                          OFFSET(get<T>, {0x290, 8, 0, 0})
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

