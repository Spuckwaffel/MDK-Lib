/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package VerseAssets.

/// Class /Script/VerseAssets.VerseAssetPtr
/// Size: 0x0050 (0x000030 - 0x000080)
class UVerseAssetPtr : public UVerseAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TWeakObjectPtr<UObject*>)                  AssetForEditor                                              ___ OFFSET(get<T>, {0x30, 32, 0, 0})
	SMember(FName)                                     AssetPathName                                               ___ OFFSET(get<T>, {0x50, 4, 0, 0})
	CMember(UObject*)                                  Object                                                      ___ OFFSET(get<T>, {0x58, 8, 0, 0})
};

