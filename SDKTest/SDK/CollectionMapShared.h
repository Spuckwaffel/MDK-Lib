/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package CollectionMapShared.

/// Class /Script/CollectionMapShared.AthenaCollectionScreenMapBase
/// Size: 0x0088 (0x000630 - 0x0006B8)
class UAthenaCollectionScreenMapBase : public UAthenaCollectionScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1720;

public:
	CMember(UAthenaFullScreenMapBase*)                 MapWidget                                                   ___ OFFSET(get<T>, {0x630, 8, 0, 0})
	CMember(UClass*)                                   CollectionIconType                                          ___ OFFSET(get<T>, {0x640, 8, 0, 0})
	CMember(TMap<FGameplayTag, UAthenaMapCollectionIcon*>) MapCollectionIcons                                      ___ OFFSET(get<T>, {0x648, 80, 0, 0})
};

/// Class /Script/CollectionMapShared.AthenaMapCollectionIcon
/// Size: 0x0000 (0x000370 - 0x000370)
class UAthenaMapCollectionIcon : public UAthenaMapNavigableIconCustom
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

