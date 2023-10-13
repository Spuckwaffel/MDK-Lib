
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/CollectionMapShared.AthenaCollectionScreenMapBase
/// Size: 0x0088 (0x000660 - 0x0006E8)
class UAthenaCollectionScreenMapBase : public UAthenaCollectionScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1768;

public:
	CMember(UAthenaFullScreenMapBase*)                 MapWidget                                                   OFFSET(get<T>, {0x660, 8, 0, 0})
	CMember(UClass*)                                   CollectionIconType                                          OFFSET(get<T>, {0x670, 8, 0, 0})
	CMember(TMap<FGameplayTag, UAthenaMapCollectionIcon*>) MapCollectionIcons                                      OFFSET(get<T>, {0x678, 80, 0, 0})
};

/// Class /Script/CollectionMapShared.AthenaMapCollectionIcon
/// Size: 0x0000 (0x000388 - 0x000388)
class UAthenaMapCollectionIcon : public UAthenaMapNavigableIconCustom
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
};

