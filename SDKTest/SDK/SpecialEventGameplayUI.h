/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package SpecialEventGameplayUI.

/// Struct /Script/SpecialEventGameplayUI.CinematicWidgetData
/// Size: 0x0010 (0x000000 - 0x000010)
class FCinematicWidgetData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     WidgetEntryName                                             ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(UClass*)                                   WidgetClass                                                 ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Class /Script/SpecialEventGameplayUI.FortGameplayCinematicHostWidget
/// Size: 0x0038 (0x000310 - 0x000348)
class UFortGameplayCinematicHostWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	SMember(FName)                                     IntroWidgetEntryName                                        ___ OFFSET(get<T>, {0x310, 4, 0, 0})
	CMember(TArray<FCinematicWidgetData>)              WidgetEntries                                               ___ OFFSET(get<T>, {0x318, 16, 0, 0})
	CMember(UAthenaLoadingScreenItemDefinition*)       LoadingScreenDefinition                                     ___ OFFSET(get<T>, {0x328, 8, 0, 0})
};

/// Class /Script/SpecialEventGameplayUI.FortGameplayCinematicWidget
/// Size: 0x0020 (0x0003E8 - 0x000408)
class UFortGameplayCinematicWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1032;

public:
	DMember(bool)                                      bSkipCinematics                                             ___ OFFSET(get<bool>, {0x3F0, 1, 0, 0})
};

/// Class /Script/SpecialEventGameplayUI.FortGameplayIntroPanelWidget
/// Size: 0x0020 (0x0003E8 - 0x000408)
class UFortGameplayIntroPanelWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1032;

public:
};

/// Class /Script/SpecialEventGameplayUI.SpecialEventCursorWidget
/// Size: 0x0020 (0x0002A8 - 0x0002C8)
class USpecialEventCursorWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
	DMember(bool)                                      bAutomaticallyChangeVisibility                              ___ OFFSET(get<bool>, {0x2B0, 1, 0, 0})
	CMember(USpecialEventCursorPawnComponent*)         CursorPawnComponent                                         ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
};

/// Class /Script/SpecialEventGameplayUI.SpecialEventPlayerInfoWidget
/// Size: 0x0020 (0x000310 - 0x000330)
class USpecialEventPlayerInfoWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FMulticastInlineDelegate)                  OnRepresentedPlayerStateChanged                             ___ OFFSET(get<T>, {0x318, 16, 0, 0})
};

/// Class /Script/SpecialEventGameplayUI.SpecialEventUILibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USpecialEventUILibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

