
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/SpecialEventGameplayUI.FortGameplayCinematicHostWidget
/// Size: 0x0038 (0x000310 - 0x000348)
class UFortGameplayCinematicHostWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	SMember(FName)                                     IntroWidgetEntryName                                        OFFSET(getStruct<T>, {0x310, 4, 0, 0})
	CMember(TArray<FCinematicWidgetData>)              WidgetEntries                                               OFFSET(get<T>, {0x318, 16, 0, 0})
	CMember(UAthenaLoadingScreenItemDefinition*)       LoadingScreenDefinition                                     OFFSET(get<T>, {0x328, 8, 0, 0})
};

/// Class /Script/SpecialEventGameplayUI.FortGameplayCinematicWidget
/// Size: 0x0020 (0x0003E8 - 0x000408)
class UFortGameplayCinematicWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1032;

public:
	DMember(bool)                                      bSkipCinematics                                             OFFSET(get<bool>, {0x3F0, 1, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayUI.FortGameplayCinematicWidget.OnStartCinematic
	// void OnStartCinematic();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayUI.FortGameplayCinematicWidget.OnCinematicFinished
	// void OnCinematicFinished();                                                                                              // [0x9e58f58] Final|Native|Protected|BlueprintCallable 
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
	DMember(bool)                                      bAutomaticallyChangeVisibility                              OFFSET(get<bool>, {0x2B0, 1, 0, 0})
	CMember(USpecialEventCursorPawnComponent*)         CursorPawnComponent                                         OFFSET(get<T>, {0x2B8, 8, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayUI.SpecialEventCursorWidget.OnViewportLocationChanged
	// void OnViewportLocationChanged(USpecialEventCursorPawnComponent* InCursorPawnComponent, FVector2D& NormalizedLocation, FVector2D& ViewportLocation); // [0x9e59360] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/SpecialEventGameplayUI.SpecialEventCursorWidget.OnDesiredVisibilityChanged
	// void OnDesiredVisibilityChanged(USpecialEventCursorPawnComponent* InCursorPawnComponent, FGameplayTag& CursorModeTag, bool bShouldBeVisible); // [0x9e59124] Final|Native|Private|HasOutParms 
	// Function /Script/SpecialEventGameplayUI.SpecialEventCursorWidget.OnCursorModeChanged
	// void OnCursorModeChanged(USpecialEventCursorPawnComponent* InCursorPawnComponent, FGameplayTag& NewCursorModeTag, FGameplayTag& OldCursorModeTag); // [0x9e58f6c] Final|Native|Private|HasOutParms 
	// Function /Script/SpecialEventGameplayUI.SpecialEventCursorWidget.GetCursorModeTags
	// FGameplayTagContainer GetCursorModeTags();                                                                               // [0x9e58d8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayUI.SpecialEventCursorWidget.BP_OnDesiredVisibilityChanged
	// void BP_OnDesiredVisibilityChanged(USpecialEventCursorPawnComponent* InCursorPawnComponent, FGameplayTag& CursorModeTag, bool bShouldBeVisible); // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SpecialEventGameplayUI.SpecialEventCursorWidget.BP_OnCursorModeChanged
	// void BP_OnCursorModeChanged(USpecialEventCursorPawnComponent* InCursorPawnComponent, FGameplayTag& NewCursorModeTag, FGameplayTag& OldCursorModeTag); // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/SpecialEventGameplayUI.SpecialEventPlayerInfoWidget
/// Size: 0x0020 (0x000310 - 0x000330)
class USpecialEventPlayerInfoWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FMulticastInlineDelegate)                  OnRepresentedPlayerStateChanged                             OFFSET(getStruct<T>, {0x318, 16, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayUI.SpecialEventPlayerInfoWidget.GetRepresentedPlayerState
	// AFortPlayerStateAthena* GetRepresentedPlayerState();                                                                     // [0x9e58dc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SpecialEventGameplayUI.SpecialEventUILibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USpecialEventUILibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/SpecialEventGameplayUI.CinematicWidgetData
/// Size: 0x0010 (0x000000 - 0x000010)
class FCinematicWidgetData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     WidgetEntryName                                             OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(UClass*)                                   WidgetClass                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
};

