/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package NaniteDisplacedMesh.

/// Struct /Script/NaniteDisplacedMesh.NaniteDisplacedMeshDisplacementMap
/// Size: 0x0010 (0x000000 - 0x000010)
class FNaniteDisplacedMeshDisplacementMap : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UTexture2D*)                               Texture                                                     ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     Magnitude                                                   ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Center                                                      ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/NaniteDisplacedMesh.NaniteDisplacedMeshParams
/// Size: 0x0001 (0x000000 - 0x000001)
class FNaniteDisplacedMeshParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Class /Script/NaniteDisplacedMesh.NaniteDisplacedMesh
/// Size: 0x0058 (0x000028 - 0x000080)
class UNaniteDisplacedMesh : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/NaniteDisplacedMesh.NaniteDisplacedMeshComponent
/// Size: 0x0010 (0x000620 - 0x000630)
class UNaniteDisplacedMeshComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1584;

public:
	CMember(UNaniteDisplacedMesh*)                     DisplacedMesh                                               ___ OFFSET(get<T>, {0x620, 8, 0, 0})
};

