
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: MeshDescription

/// Class /Script/StaticMeshDescription.StaticMeshDescription
/// Size: 0x0000 (0x0002F0 - 0x0002F0)
class UStaticMeshDescription : public UMeshDescriptionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
};

/// Struct /Script/StaticMeshDescription.UVMapSettings
/// Size: 0x0070 (0x000000 - 0x000070)
class FUVMapSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FVector)                                   Size                                                        OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector2D)                                 UVTile                                                      OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0x58, 24, 0, 0})
};

