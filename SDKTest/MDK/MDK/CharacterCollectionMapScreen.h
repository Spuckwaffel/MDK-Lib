
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CollectionMapShared
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/CharacterCollectionMapScreen.AthenaCollectionScreenMapCharacter
/// Size: 0x0008 (0x0006B8 - 0x0006C0)
class UAthenaCollectionScreenMapCharacter : public UAthenaCollectionScreenMapBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1728;

public:
	CMember(UCollectionScreenServiceVisualData*)       SharedServiceVisualData                                     OFFSET(get<T>, {0x6B8, 8, 0, 0})
};

/// Class /Script/CharacterCollectionMapScreen.CollectionNPCServiceInfoOverlay
/// Size: 0x0018 (0x0004B0 - 0x0004C8)
class UCollectionNPCServiceInfoOverlay : public UAthenaCollectionScreenInfoOverlay
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1224;

public:
	CMember(UCollectionNPCServiceContainer*)           Services                                                    OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(UImage*)                                   Image_ServiceIcon                                           OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(UCollectionScreenServiceVisualData*)       SharedServiceVisualData                                     OFFSET(get<T>, {0x4C0, 8, 0, 0})
};

