
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/VirtualHeightfieldMesh.HeightfieldMinMaxTexture
/// Size: 0x0048 (0x000028 - 0x000070)
class UHeightfieldMinMaxTexture : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(UTexture2D*)                               Texture                                                     OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UTexture2D*)                               LodBiasTexture                                              OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UTexture2D*)                               LodBiasMinMaxTexture                                        OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(int32_t)                                   MaxCPULevels                                                OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	CMember(TArray<FVector2D>)                         TextureData                                                 OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FIntPoint)                                 TextureDataSize                                             OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(TArray<int32_t>)                           TextureDataMips                                             OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/VirtualHeightfieldMesh.MaterialExpressionHeightfieldMinMaxTexture
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UMaterialExpressionHeightfieldMinMaxTexture : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(UHeightfieldMinMaxTexture*)                MinMaxTexture                                               OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TEnumAsByte<EMaterialSamplerType>)         SamplerType                                                 OFFSET(get<T>, {0xB8, 1, 0, 0})
};

/// Class /Script/VirtualHeightfieldMesh.VirtualHeightfieldMesh
/// Size: 0x0008 (0x000290 - 0x000298)
class AVirtualHeightfieldMesh : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(UVirtualHeightfieldMeshComponent*)         VirtualHeightfieldMeshComponent                             OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent
/// Size: 0x0070 (0x000570 - 0x0005E0)
class UVirtualHeightfieldMeshComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1504;

public:
	CMember(TWeakObjectPtr<ARuntimeVirtualTextureVolume*>) VirtualTexture                                          OFFSET(get<T>, {0x568, 32, 0, 0})
	CMember(ARuntimeVirtualTextureVolume*)             VirtualTextureRef                                           OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UObject*)                                  VirtualTextureThumbnail                                     OFFSET(get<T>, {0x590, 8, 0, 0})
	DMember(bool)                                      bCopyBoundsButton                                           OFFSET(get<bool>, {0x598, 1, 0, 0})
	CMember(UHeightfieldMinMaxTexture*)                MinMaxTexture                                               OFFSET(get<T>, {0x5A0, 8, 0, 0})
	DMember(int32_t)                                   NumMinMaxTextureBuildLevels                                 OFFSET(get<int32_t>, {0x5A8, 4, 0, 0})
	DMember(bool)                                      bBuildMinMaxTextureButton                                   OFFSET(get<bool>, {0x5AC, 1, 0, 0})
	CMember(UMaterialInterface*)                       Material                                                    OFFSET(get<T>, {0x5B0, 8, 0, 0})
	DMember(float)                                     LOD0ScreenSize                                              OFFSET(get<float>, {0x5B8, 4, 0, 0})
	DMember(float)                                     Lod0Distribution                                            OFFSET(get<float>, {0x5BC, 4, 0, 0})
	DMember(float)                                     LodDistribution                                             OFFSET(get<float>, {0x5C0, 4, 0, 0})
	DMember(float)                                     LodBiasScale                                                OFFSET(get<float>, {0x5C4, 4, 0, 0})
	DMember(int32_t)                                   NumForceLoadLods                                            OFFSET(get<int32_t>, {0x5C8, 4, 0, 0})
	DMember(int32_t)                                   NumOcclusionLods                                            OFFSET(get<int32_t>, {0x5CC, 4, 0, 0})
	DMember(bool)                                      bHiddenInEditor                                             OFFSET(get<bool>, {0x5D0, 1, 0, 0})
	DMember(bool)                                      bWorldPositionOffsetVelocity                                OFFSET(get<bool>, {0x5D1, 1, 0, 0})


	/// Functions
	// Function /Script/VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent.GatherHideFlags
	// void GatherHideFlags(bool& InOutHidePrimitivesInEditor, bool& InOutHidePrimitivesInGame);                                // [0xa35d4e8] Final|Native|Protected|HasOutParms|Const 
};

