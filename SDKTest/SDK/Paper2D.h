/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Paper2D.

/// Struct /Script/Paper2D.IntMargin
/// Size: 0x0010 (0x000000 - 0x000010)
class FIntMargin : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Left                                                        ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Top                                                         ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Right                                                       ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Bottom                                                      ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/Paper2D.SpriteDrawCallRecord
/// Size: 0x0140 (0x000000 - 0x000140)
class FSpriteDrawCallRecord : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FVector)                                   Destination                                                 ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	CMember(UTexture*)                                 BaseTexture                                                 ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FColor)                                    Color                                                       ___ OFFSET(get<T>, {0x50, 4, 0, 0})
};

/// Struct /Script/Paper2D.SpriteGeometryShape
/// Size: 0x0040 (0x000000 - 0x000040)
class FSpriteGeometryShape : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(ESpriteShapeType)                          ShapeType                                                   ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<FVector2D>)                         Vertices                                                    ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FVector2D)                                 BoxSize                                                     ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FVector2D)                                 BoxPosition                                                 ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(float)                                     Rotation                                                    ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(bool)                                      bNegativeWinding                                            ___ OFFSET(get<bool>, {0x3C, 1, 0, 0})
};

/// Struct /Script/Paper2D.SpriteGeometryCollection
/// Size: 0x0030 (0x000000 - 0x000030)
class FSpriteGeometryCollection : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FSpriteGeometryShape>)              Shapes                                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TEnumAsByte<ESpritePolygonMode>)           GeometryType                                                ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(int32_t)                                   PixelsPerSubdivisionX                                       ___ OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   PixelsPerSubdivisionY                                       ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(bool)                                      bAvoidVertexMerging                                         ___ OFFSET(get<bool>, {0x1C, 1, 0, 0})
	DMember(float)                                     AlphaThreshold                                              ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     DetailAmount                                                ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     SimplifyEpsilon                                             ___ OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Struct /Script/Paper2D.SpriteAssetInitParameters
/// Size: 0x0040 (0x000000 - 0x000040)
class FSpriteAssetInitParameters : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/Paper2D.PaperFlipbookKeyFrame
/// Size: 0x0010 (0x000000 - 0x000010)
class FPaperFlipbookKeyFrame : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UPaperSprite*)                             Sprite                                                      ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   FrameRun                                                    ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/Paper2D.SpriteInstanceData
/// Size: 0x0090 (0x000000 - 0x000090)
class FSpriteInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FMatrix)                                   Transform                                                   ___ OFFSET(get<T>, {0x0, 128, 0, 0})
	CMember(UPaperSprite*)                             SourceSprite                                                ___ OFFSET(get<T>, {0x80, 8, 0, 0})
	SMember(FColor)                                    VertexColor                                                 ___ OFFSET(get<T>, {0x88, 4, 0, 0})
	DMember(int32_t)                                   MaterialIndex                                               ___ OFFSET(get<int32_t>, {0x8C, 4, 0, 0})
};

/// Struct /Script/Paper2D.PaperSpriteSocket
/// Size: 0x0070 (0x000000 - 0x000070)
class FPaperSpriteSocket : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FTransform)                                LocalTransform                                              ___ OFFSET(get<T>, {0x0, 96, 0, 0})
	SMember(FName)                                     SocketName                                                  ___ OFFSET(get<T>, {0x60, 4, 0, 0})
};

/// Struct /Script/Paper2D.PaperSpriteAtlasSlot
/// Size: 0x0038 (0x000000 - 0x000038)
class FPaperSpriteAtlasSlot : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TWeakObjectPtr<UPaperSprite*>)             SpriteRef                                                   ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(int32_t)                                   AtlasIndex                                                  ___ OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   X                                                           ___ OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   Y                                                           ___ OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   Width                                                       ___ OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   Height                                                      ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Struct /Script/Paper2D.PaperTileInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FPaperTileInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UPaperTileSet*)                            TileSet                                                     ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   PackedTileIndex                                             ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/Paper2D.PaperTileMetadata
/// Size: 0x0040 (0x000000 - 0x000040)
class FPaperTileMetadata : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     UserDataName                                                ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FSpriteGeometryCollection)                 CollisionData                                               ___ OFFSET(get<T>, {0x8, 48, 0, 0})
	DMember(char)                                      TerrainMembership                                           ___ OFFSET(get<char>, {0x38, 4, 0, 0})
};

/// Struct /Script/Paper2D.PaperTileSetTerrain
/// Size: 0x0018 (0x000000 - 0x000018)
class FPaperTileSetTerrain : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   TerrainName                                                 ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   CenterTileIndex                                             ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/Paper2D.PaperTerrainMaterialRule
/// Size: 0x0038 (0x000000 - 0x000038)
class FPaperTerrainMaterialRule : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UPaperSprite*)                             StartCap                                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<UPaperSprite*>)                     Body                                                        ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(UPaperSprite*)                             EndCap                                                      ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	DMember(float)                                     MinimumAngle                                                ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     MaximumAngle                                                ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(bool)                                      bEnableCollision                                            ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(float)                                     CollisionOffset                                             ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   DrawOrder                                                   ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Class /Script/Paper2D.PaperCharacter
/// Size: 0x0010 (0x000660 - 0x000670)
class APaperCharacter : public ACharacter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
	CMember(UPaperFlipbookComponent*)                  Sprite                                                      ___ OFFSET(get<T>, {0x660, 8, 0, 0})
};

/// Class /Script/Paper2D.PaperFlipbook
/// Size: 0x0028 (0x000028 - 0x000050)
class UPaperFlipbook : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     FramesPerSecond                                             ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	CMember(TArray<FPaperFlipbookKeyFrame>)            Keyframes                                                   ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(UMaterialInterface*)                       DefaultMaterial                                             ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(TEnumAsByte<EFlipbookCollisionMode>)       CollisionSource                                             ___ OFFSET(get<T>, {0x48, 1, 0, 0})
};

/// Class /Script/Paper2D.PaperFlipbookActor
/// Size: 0x0008 (0x000290 - 0x000298)
class APaperFlipbookActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(UPaperFlipbookComponent*)                  RenderComponent                                             ___ OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/Paper2D.PaperFlipbookComponent
/// Size: 0x0050 (0x0005A0 - 0x0005F0)
class UPaperFlipbookComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1520;

public:
	CMember(UPaperFlipbook*)                           SourceFlipbook                                              ___ OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(UMaterialInterface*)                       Material                                                    ___ OFFSET(get<T>, {0x5A8, 8, 0, 0})
	DMember(float)                                     PlayRate                                                    ___ OFFSET(get<float>, {0x5B0, 4, 0, 0})
	DMember(bool)                                      bLooping                                                    ___ OFFSET(get<bool>, {0x5B4, 1, 1, 0})
	DMember(bool)                                      bReversePlayback                                            ___ OFFSET(get<bool>, {0x5B4, 1, 1, 1})
	DMember(bool)                                      bPlaying                                                    ___ OFFSET(get<bool>, {0x5B4, 1, 1, 2})
	DMember(float)                                     AccumulatedTime                                             ___ OFFSET(get<float>, {0x5B8, 4, 0, 0})
	DMember(int32_t)                                   CachedFrameIndex                                            ___ OFFSET(get<int32_t>, {0x5BC, 4, 0, 0})
	SMember(FLinearColor)                              SpriteColor                                                 ___ OFFSET(get<T>, {0x5C0, 16, 0, 0})
	CMember(UBodySetup*)                               CachedBodySetup                                             ___ OFFSET(get<T>, {0x5D0, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFinishedPlaying                                           ___ OFFSET(get<T>, {0x5D8, 16, 0, 0})
};

/// Class /Script/Paper2D.PaperGroupedSpriteActor
/// Size: 0x0008 (0x000290 - 0x000298)
class APaperGroupedSpriteActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(UPaperGroupedSpriteComponent*)             RenderComponent                                             ___ OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/Paper2D.PaperGroupedSpriteComponent
/// Size: 0x0030 (0x0005A0 - 0x0005D0)
class UPaperGroupedSpriteComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
	CMember(TArray<UMaterialInterface*>)               InstanceMaterials                                           ___ OFFSET(get<T>, {0x5A0, 16, 0, 0})
	CMember(TArray<FSpriteInstanceData>)               PerInstanceSpriteData                                       ___ OFFSET(get<T>, {0x5B0, 16, 0, 0})
};

/// Class /Script/Paper2D.PaperRuntimeSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UPaperRuntimeSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bEnableSpriteAtlasGroups                                    ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bEnableTerrainSplineEditing                                 ___ OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bResizeSpriteDataToMatchTextures                            ___ OFFSET(get<bool>, {0x2A, 1, 0, 0})
};

/// Class /Script/Paper2D.PaperSprite
/// Size: 0x0090 (0x000028 - 0x0000B8)
class UPaperSprite : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TArray<UTexture*>)                         AdditionalSourceTextures                                    ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FVector2D)                                 BakedSourceUV                                               ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FVector2D)                                 BakedSourceDimension                                        ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(UTexture2D*)                               BakedSourceTexture                                          ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(UMaterialInterface*)                       DefaultMaterial                                             ___ OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(UMaterialInterface*)                       AlternateMaterial                                           ___ OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(TArray<FPaperSpriteSocket>)                Sockets                                                     ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TEnumAsByte<ESpriteCollisionMode>)         SpriteCollisionDomain                                       ___ OFFSET(get<T>, {0x90, 1, 0, 0})
	DMember(float)                                     PixelsPerUnrealUnit                                         ___ OFFSET(get<float>, {0x94, 4, 0, 0})
	CMember(UBodySetup*)                               BodySetup                                                   ___ OFFSET(get<T>, {0x98, 8, 0, 0})
	DMember(int32_t)                                   AlternateMaterialSplitIndex                                 ___ OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	CMember(TArray<FVector4>)                          BakedRenderData                                             ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
};

/// Class /Script/Paper2D.PaperSpriteActor
/// Size: 0x0008 (0x000290 - 0x000298)
class APaperSpriteActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(UPaperSpriteComponent*)                    RenderComponent                                             ___ OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/Paper2D.PaperSpriteAtlas
/// Size: 0x0000 (0x000028 - 0x000028)
class UPaperSpriteAtlas : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Paper2D.PaperSpriteBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Paper2D.PaperSpriteComponent
/// Size: 0x0020 (0x0005A0 - 0x0005C0)
class UPaperSpriteComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1472;

public:
	CMember(UPaperSprite*)                             SourceSprite                                                ___ OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(UMaterialInterface*)                       MaterialOverride                                            ___ OFFSET(get<T>, {0x5A8, 8, 0, 0})
	SMember(FLinearColor)                              SpriteColor                                                 ___ OFFSET(get<T>, {0x5B0, 16, 0, 0})
};

/// Class /Script/Paper2D.PaperTileLayer
/// Size: 0x0070 (0x000028 - 0x000098)
class UPaperTileLayer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FText)                                     LayerName                                                   ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	DMember(int32_t)                                   LayerWidth                                                  ___ OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   LayerHeight                                                 ___ OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(bool)                                      bHiddenInGame                                               ___ OFFSET(get<bool>, {0x48, 1, 1, 0})
	DMember(bool)                                      bLayerCollides                                              ___ OFFSET(get<bool>, {0x48, 1, 1, 1})
	DMember(bool)                                      bOverrideCollisionThickness                                 ___ OFFSET(get<bool>, {0x48, 1, 1, 2})
	DMember(bool)                                      bOverrideCollisionOffset                                    ___ OFFSET(get<bool>, {0x48, 1, 1, 3})
	DMember(float)                                     CollisionThicknessOverride                                  ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     CollisionOffsetOverride                                     ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	SMember(FLinearColor)                              LayerColor                                                  ___ OFFSET(get<T>, {0x54, 16, 0, 0})
	DMember(int32_t)                                   AllocatedWidth                                              ___ OFFSET(get<int32_t>, {0x64, 4, 0, 0})
	DMember(int32_t)                                   AllocatedHeight                                             ___ OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	CMember(TArray<FPaperTileInfo>)                    AllocatedCells                                              ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(UPaperTileSet*)                            TileSet                                                     ___ OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(TArray<int32_t>)                           AllocatedGrid                                               ___ OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Class /Script/Paper2D.PaperTileMap
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UPaperTileMap : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(int32_t)                                   MapWidth                                                    ___ OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   MapHeight                                                   ___ OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   TileWidth                                                   ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   TileHeight                                                  ___ OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(float)                                     PixelsPerUnrealUnit                                         ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     SeparationPerTileX                                          ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     SeparationPerTileY                                          ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     SeparationPerLayer                                          ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	CMember(TWeakObjectPtr<UPaperTileSet*>)            SelectedTileSet                                             ___ OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(UMaterialInterface*)                       Material                                                    ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TArray<UPaperTileLayer*>)                  TileLayers                                                  ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(float)                                     CollisionThickness                                          ___ OFFSET(get<float>, {0x80, 4, 0, 0})
	CMember(TEnumAsByte<ESpriteCollisionMode>)         SpriteCollisionDomain                                       ___ OFFSET(get<T>, {0x84, 1, 0, 0})
	CMember(TEnumAsByte<ETileMapProjectionMode>)       ProjectionMode                                              ___ OFFSET(get<T>, {0x85, 1, 0, 0})
	DMember(int32_t)                                   HexSideLength                                               ___ OFFSET(get<int32_t>, {0x88, 4, 0, 0})
	CMember(UBodySetup*)                               BodySetup                                                   ___ OFFSET(get<T>, {0x90, 8, 0, 0})
	DMember(int32_t)                                   LayerNameIndex                                              ___ OFFSET(get<int32_t>, {0x98, 4, 0, 0})
};

/// Class /Script/Paper2D.PaperTileMapActor
/// Size: 0x0008 (0x000290 - 0x000298)
class APaperTileMapActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(UPaperTileMapComponent*)                   RenderComponent                                             ___ OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/Paper2D.PaperTileMapComponent
/// Size: 0x0050 (0x0005A0 - 0x0005F0)
class UPaperTileMapComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1520;

public:
	DMember(int32_t)                                   MapWidth                                                    ___ OFFSET(get<int32_t>, {0x5A0, 4, 0, 0})
	DMember(int32_t)                                   MapHeight                                                   ___ OFFSET(get<int32_t>, {0x5A4, 4, 0, 0})
	DMember(int32_t)                                   TileWidth                                                   ___ OFFSET(get<int32_t>, {0x5A8, 4, 0, 0})
	DMember(int32_t)                                   TileHeight                                                  ___ OFFSET(get<int32_t>, {0x5AC, 4, 0, 0})
	CMember(UPaperTileSet*)                            DefaultLayerTileSet                                         ___ OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(UMaterialInterface*)                       Material                                                    ___ OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(TArray<UPaperTileLayer*>)                  TileLayers                                                  ___ OFFSET(get<T>, {0x5C0, 16, 0, 0})
	SMember(FLinearColor)                              TileMapColor                                                ___ OFFSET(get<T>, {0x5D0, 16, 0, 0})
	DMember(int32_t)                                   UseSingleLayerIndex                                         ___ OFFSET(get<int32_t>, {0x5E0, 4, 0, 0})
	DMember(bool)                                      bUseSingleLayer                                             ___ OFFSET(get<bool>, {0x5E4, 1, 0, 0})
	CMember(UPaperTileMap*)                            TileMap                                                     ___ OFFSET(get<T>, {0x5E8, 8, 0, 0})
};

/// Class /Script/Paper2D.PaperTileSet
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UPaperTileSet : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FIntPoint)                                 TileSize                                                    ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UTexture2D*)                               TileSheet                                                   ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<UTexture*>)                         AdditionalSourceTextures                                    ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FIntMargin)                                BorderMargin                                                ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FIntPoint)                                 PerTileSpacing                                              ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	SMember(FIntPoint)                                 DrawingOffset                                               ___ OFFSET(get<T>, {0x60, 8, 0, 0})
	DMember(int32_t)                                   WidthInTiles                                                ___ OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	DMember(int32_t)                                   HeightInTiles                                               ___ OFFSET(get<int32_t>, {0x6C, 4, 0, 0})
	DMember(int32_t)                                   AllocatedWidth                                              ___ OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	DMember(int32_t)                                   AllocatedHeight                                             ___ OFFSET(get<int32_t>, {0x74, 4, 0, 0})
	CMember(TArray<FPaperTileMetadata>)                PerTileData                                                 ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<FPaperTileSetTerrain>)              Terrains                                                    ___ OFFSET(get<T>, {0x88, 16, 0, 0})
	DMember(int32_t)                                   TileWidth                                                   ___ OFFSET(get<int32_t>, {0x98, 4, 0, 0})
	DMember(int32_t)                                   TileHeight                                                  ___ OFFSET(get<int32_t>, {0x9C, 4, 0, 0})
	DMember(int32_t)                                   Margin                                                      ___ OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	DMember(int32_t)                                   Spacing                                                     ___ OFFSET(get<int32_t>, {0xA4, 4, 0, 0})
};

/// Class /Script/Paper2D.MaterialExpressionSpriteTextureSampler
/// Size: 0x0020 (0x000238 - 0x000258)
class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 600;

public:
	DMember(bool)                                      bSampleAdditionalTextures                                   ___ OFFSET(get<bool>, {0x238, 1, 0, 0})
	DMember(int32_t)                                   AdditionalSlotIndex                                         ___ OFFSET(get<int32_t>, {0x23C, 4, 0, 0})
	SMember(FText)                                     SlotDisplayName                                             ___ OFFSET(get<T>, {0x240, 24, 0, 0})
};

/// Class /Script/Paper2D.PaperTerrainActor
/// Size: 0x0018 (0x000290 - 0x0002A8)
class APaperTerrainActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	CMember(USceneComponent*)                          DummyRoot                                                   ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(UPaperTerrainSplineComponent*)             SplineComponent                                             ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(UPaperTerrainComponent*)                   RenderComponent                                             ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
};

/// Class /Script/Paper2D.PaperTerrainComponent
/// Size: 0x0050 (0x000570 - 0x0005C0)
class UPaperTerrainComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1472;

public:
	CMember(UPaperTerrainMaterial*)                    TerrainMaterial                                             ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	DMember(bool)                                      bClosedSpline                                               ___ OFFSET(get<bool>, {0x570, 1, 0, 0})
	DMember(bool)                                      bFilledSpline                                               ___ OFFSET(get<bool>, {0x571, 1, 0, 0})
	CMember(UPaperTerrainSplineComponent*)             AssociatedSpline                                            ___ OFFSET(get<T>, {0x578, 8, 0, 0})
	DMember(int32_t)                                   RandomSeed                                                  ___ OFFSET(get<int32_t>, {0x580, 4, 0, 0})
	DMember(float)                                     SegmentOverlapAmount                                        ___ OFFSET(get<float>, {0x584, 4, 0, 0})
	SMember(FLinearColor)                              TerrainColor                                                ___ OFFSET(get<T>, {0x588, 16, 0, 0})
	DMember(int32_t)                                   ReparamStepsPerSegment                                      ___ OFFSET(get<int32_t>, {0x598, 4, 0, 0})
	CMember(TEnumAsByte<ESpriteCollisionMode>)         SpriteCollisionDomain                                       ___ OFFSET(get<T>, {0x59C, 1, 0, 0})
	DMember(float)                                     CollisionThickness                                          ___ OFFSET(get<float>, {0x5A0, 4, 0, 0})
	CMember(UBodySetup*)                               CachedBodySetup                                             ___ OFFSET(get<T>, {0x5A8, 8, 0, 0})
};

/// Class /Script/Paper2D.PaperTerrainMaterial
/// Size: 0x0018 (0x000030 - 0x000048)
class UPaperTerrainMaterial : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FPaperTerrainMaterialRule>)         Rules                                                       ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(UPaperSprite*)                             InteriorFill                                                ___ OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/Paper2D.PaperTerrainSplineComponent
/// Size: 0x0010 (0x000670 - 0x000680)
class UPaperTerrainSplineComponent : public USplineComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1664;

public:
};

/// Class /Script/Paper2D.TileMapBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Enum /Script/Paper2D.ESpriteCollisionMode
/// Size: 0x04
enum ESpriteCollisionMode : uint8_t
{
	ESpriteCollisionMode__None0                                                      = 0,
	ESpriteCollisionMode__Use2DPhysics1                                              = 1,
	ESpriteCollisionMode__Use3DPhysics2                                              = 2,
	ESpriteCollisionMode__ESpriteCollisionMode_MAX3                                  = 3
};

/// Enum /Script/Paper2D.ESpriteShapeType
/// Size: 0x04
enum ESpriteShapeType : uint8_t
{
	ESpriteShapeType__Box0                                                           = 0,
	ESpriteShapeType__Circle1                                                        = 1,
	ESpriteShapeType__Polygon2                                                       = 2,
	ESpriteShapeType__ESpriteShapeType_MAX3                                          = 3
};

/// Enum /Script/Paper2D.ESpritePolygonMode
/// Size: 0x06
enum ESpritePolygonMode : uint8_t
{
	ESpritePolygonMode__SourceBoundingBox0                                           = 0,
	ESpritePolygonMode__TightBoundingBox1                                            = 1,
	ESpritePolygonMode__ShrinkWrapped2                                               = 2,
	ESpritePolygonMode__FullyCustom3                                                 = 3,
	ESpritePolygonMode__Diced4                                                       = 4,
	ESpritePolygonMode__ESpritePolygonMode_MAX5                                      = 5
};

/// Enum /Script/Paper2D.ESpritePivotMode
/// Size: 0x11
enum ESpritePivotMode : uint8_t
{
	ESpritePivotMode__Top_Left0                                                      = 0,
	ESpritePivotMode__Top_Center1                                                    = 1,
	ESpritePivotMode__Top_Right2                                                     = 2,
	ESpritePivotMode__Center_Left3                                                   = 3,
	ESpritePivotMode__Center_Center4                                                 = 4,
	ESpritePivotMode__Center_Right5                                                  = 5,
	ESpritePivotMode__Bottom_Left6                                                   = 6,
	ESpritePivotMode__Bottom_Center7                                                 = 7,
	ESpritePivotMode__Bottom_Right8                                                  = 8,
	ESpritePivotMode__Custom9                                                        = 9,
	ESpritePivotMode__ESpritePivotMode_MAX10                                         = 10
};

/// Enum /Script/Paper2D.EFlipbookCollisionMode
/// Size: 0x04
enum EFlipbookCollisionMode : uint8_t
{
	EFlipbookCollisionMode__NoCollision0                                             = 0,
	EFlipbookCollisionMode__FirstFrameCollision1                                     = 1,
	EFlipbookCollisionMode__EachFrameCollision2                                      = 2,
	EFlipbookCollisionMode__EFlipbookCollisionMode_MAX3                              = 3
};

/// Enum /Script/Paper2D.EPaperSpriteAtlasPadding
/// Size: 0x03
enum EPaperSpriteAtlasPadding : uint8_t
{
	EPaperSpriteAtlasPadding__DilateBorder0                                          = 0,
	EPaperSpriteAtlasPadding__PadWithZero1                                           = 1,
	EPaperSpriteAtlasPadding__EPaperSpriteAtlasPadding_MAX2                          = 2
};

/// Enum /Script/Paper2D.ETileMapProjectionMode
/// Size: 0x05
enum ETileMapProjectionMode : uint8_t
{
	ETileMapProjectionMode__Orthogonal0                                              = 0,
	ETileMapProjectionMode__IsometricDiamond1                                        = 1,
	ETileMapProjectionMode__IsometricStaggered2                                      = 2,
	ETileMapProjectionMode__HexagonalStaggered3                                      = 3,
	ETileMapProjectionMode__ETileMapProjectionMode_MAX4                              = 4
};

