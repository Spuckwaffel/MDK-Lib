/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package VirtualHeightfieldMesh.

/// Class /Script/VirtualHeightfieldMesh.HeightfieldMinMaxTexture
/// Size: 0x0048 (0x000028 - 0x000070)
class UHeightfieldMinMaxTexture : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(UTexture2D*)                               Texture                                                     ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UTexture2D*)                               LodBiasTexture                                              ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UTexture2D*)                               LodBiasMinMaxTexture                                        ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(int32_t)                                   MaxCPULevels                                                ___ OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	CMember(TArray<FVector2D>)                         TextureData                                                 ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FIntPoint)                                 TextureDataSize                                             ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(TArray<int32_t>)                           TextureDataMips                                             ___ OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/VirtualHeightfieldMesh.MaterialExpressionHeightfieldMinMaxTexture
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UMaterialExpressionHeightfieldMinMaxTexture : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(UHeightfieldMinMaxTexture*)                MinMaxTexture                                               ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TEnumAsByte<EMaterialSamplerType>)         SamplerType                                                 ___ OFFSET(get<T>, {0xB8, 1, 0, 0})
};

/// Class /Script/VirtualHeightfieldMesh.VirtualHeightfieldMesh
/// Size: 0x0008 (0x000290 - 0x000298)
class AVirtualHeightfieldMesh : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(UVirtualHeightfieldMeshComponent*)         VirtualHeightfieldMeshComponent                             ___ OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent
/// Size: 0x0070 (0x000570 - 0x0005E0)
class UVirtualHeightfieldMeshComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1504;

public:
	CMember(TWeakObjectPtr<ARuntimeVirtualTextureVolume*>) VirtualTexture                                          ___ OFFSET(get<T>, {0x568, 32, 0, 0})
	CMember(ARuntimeVirtualTextureVolume*)             VirtualTextureRef                                           ___ OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UObject*)                                  VirtualTextureThumbnail                                     ___ OFFSET(get<T>, {0x590, 8, 0, 0})
	DMember(bool)                                      bCopyBoundsButton                                           ___ OFFSET(get<bool>, {0x598, 1, 0, 0})
	CMember(UHeightfieldMinMaxTexture*)                MinMaxTexture                                               ___ OFFSET(get<T>, {0x5A0, 8, 0, 0})
	DMember(int32_t)                                   NumMinMaxTextureBuildLevels                                 ___ OFFSET(get<int32_t>, {0x5A8, 4, 0, 0})
	DMember(bool)                                      bBuildMinMaxTextureButton                                   ___ OFFSET(get<bool>, {0x5AC, 1, 0, 0})
	CMember(UMaterialInterface*)                       Material                                                    ___ OFFSET(get<T>, {0x5B0, 8, 0, 0})
	DMember(float)                                     LOD0ScreenSize                                              ___ OFFSET(get<float>, {0x5B8, 4, 0, 0})
	DMember(float)                                     Lod0Distribution                                            ___ OFFSET(get<float>, {0x5BC, 4, 0, 0})
	DMember(float)                                     LodDistribution                                             ___ OFFSET(get<float>, {0x5C0, 4, 0, 0})
	DMember(float)                                     LodBiasScale                                                ___ OFFSET(get<float>, {0x5C4, 4, 0, 0})
	DMember(int32_t)                                   NumForceLoadLods                                            ___ OFFSET(get<int32_t>, {0x5C8, 4, 0, 0})
	DMember(int32_t)                                   NumOcclusionLods                                            ___ OFFSET(get<int32_t>, {0x5CC, 4, 0, 0})
	DMember(bool)                                      bHiddenInEditor                                             ___ OFFSET(get<bool>, {0x5D0, 1, 0, 0})
	DMember(bool)                                      bWorldPositionOffsetVelocity                                ___ OFFSET(get<bool>, {0x5D1, 1, 0, 0})
};

