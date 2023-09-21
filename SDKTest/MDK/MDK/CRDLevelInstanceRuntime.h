
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: PlayspaceSystem

/// Class /Script/CRDLevelInstanceRuntime.FortAthenaMutator_LevelInstanceDevice
/// Size: 0x0008 (0x000338 - 0x000340)
class AFortAthenaMutator_LevelInstanceDevice : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	CMember(TWeakObjectPtr<ALevelInstanceGameplayVolume*>) CachedGameplayVolume                                    ___ OFFSET(get<T>, {0x338, 8, 0, 0})
};

/// Class /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume
/// Size: 0x0188 (0x000330 - 0x0004B8)
class ALevelInstanceGameplayVolume : public AGameplayVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1208;

public:
	SMember(FMulticastInlineDelegate)                  OnLevelInstanceResolved                                     ___ OFFSET(get<T>, {0x338, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDisabledStateChanged                                      ___ OFFSET(get<T>, {0x378, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLevelInstanceGuidChanged                                  ___ OFFSET(get<T>, {0x388, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLevelInstanceNameChanged                                  ___ OFFSET(get<T>, {0x398, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLevelInstanceSizeChanged                                  ___ OFFSET(get<T>, {0x3A8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLevelInstanceContentCollectionChanged                     ___ OFFSET(get<T>, {0x3B8, 16, 0, 0})
	DMember(bool)                                      bEditMode                                                   ___ OFFSET(get<bool>, {0x3C9, 1, 0, 0})
	DMember(bool)                                      bDisabled                                                   ___ OFFSET(get<bool>, {0x3CA, 1, 0, 0})
	CMember(ESpatialLoadingState)                      LoadingState                                                ___ OFFSET(get<T>, {0x3CB, 1, 0, 0})
	SMember(FString)                                   LevelInstanceName                                           ___ OFFSET(get<T>, {0x3D0, 16, 0, 0})
	DMember(bool)                                      bInstanceLoaded                                             ___ OFFSET(get<bool>, {0x3E0, 1, 0, 0})
	DMember(bool)                                      bWantsLevelLoaded                                           ___ OFFSET(get<bool>, {0x3E1, 1, 0, 0})
	DMember(bool)                                      bConvertStructuresToProps                                   ___ OFFSET(get<bool>, {0x3E3, 1, 0, 0})
	CMember(AFortMinigame*)                            CachedMinigame                                              ___ OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(UFortMutatorListComponent*)                MutatorListComponent                                        ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UFortClassTrackerComponent*)               ClassFilterComponent                                        ___ OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(TArray<UClass*>)                           BlacklistedClasses                                          ___ OFFSET(get<T>, {0x400, 16, 0, 0})
	SMember(FGuid)                                     LevelInstanceSaveActorGuid                                  ___ OFFSET(get<T>, {0x460, 16, 0, 0})
	CMember(AFortLevelInstanceSaveActor*)              LevelInstanceSaveActor                                      ___ OFFSET(get<T>, {0x470, 8, 0, 0})
};

/// Class /Script/CRDLevelInstanceRuntime.LevelInstanceItemListComponent
/// Size: 0x0000 (0x000128 - 0x000128)
class ULevelInstanceItemListComponent : public UFortMinigameItemContainerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

