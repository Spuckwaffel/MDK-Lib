
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: ModularGameplay
/// dependency: UMG

/// Class /Script/VictoryCrownsUI.FortUIManagerComponent_VictoryCrowns
/// Size: 0x00B0 (0x0000A8 - 0x000158)
class UFortUIManagerComponent_VictoryCrowns : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(UClass*)                                   VictoryCrownsIndicatorClass                                 OFFSET(get<T>, {0xA8, 8, 0, 0})
	SMember(FUserWidgetPool)                           IndicatorPool                                               OFFSET(getStruct<T>, {0xB0, 136, 0, 0})


	/// Functions
	// Function /Script/VictoryCrownsUI.FortUIManagerComponent_VictoryCrowns.RebuildBearerIndicators
	// void RebuildBearerIndicators(TArray<AFortPlayerStateAthena*>& CrownBearerList);                                          // [0xa2f0440] Final|Native|Protected|HasOutParms 
};

/// Class /Script/VictoryCrownsUI.VictoryCrownsBearerInfoBase
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UVictoryCrownsBearerInfoBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(TWeakObjectPtr<AFortPlayerStateAthena*>)   WeakPSA                                                     OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_PlayerName                                             OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Script/VictoryCrownsUI.VictoryCrownsBearerInfoBase.SetPlayerState
	// void SetPlayerState(AFortPlayerStateAthena* InPlayerState);                                                              // [0xa2f058c] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryCrownsUI.VictoryCrownsBearerInfoBase.OnSetPlayerState
	// void OnSetPlayerState(AFortPlayerStateAthena* PSA);                                                                      // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/VictoryCrownsUI.VictoryCrownsIndicator
/// Size: 0x0028 (0x0003D0 - 0x0003F8)
class UVictoryCrownsIndicator : public UFortActorIndicatorWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1016;

public:
};

/// Class /Script/VictoryCrownsUI.VictoryCrownsPlacementOverlay
/// Size: 0x0000 (0x000348 - 0x000348)
class UVictoryCrownsPlacementOverlay : public UPostGamePlacementOverlay
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
};

/// Class /Script/VictoryCrownsUI.VictoryCrownsPlayerInfoWidget
/// Size: 0x0010 (0x000328 - 0x000338)
class UVictoryCrownsPlayerInfoWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
};

/// Class /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget
/// Size: 0x0050 (0x000400 - 0x000450)
class UVictoryCrownsPreGameWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
	CMember(UDynamicEntryBox*)                         EntryBox_BearerList                                         OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UCommonActionWidget*)                      TipActionWidget                                             OFFSET(get<T>, {0x408, 8, 0, 0})
	SMember(FDataTableRowHandle)                       CloseObjectInputAction                                      OFFSET(getStruct<T>, {0x410, 16, 0, 0})


	/// Functions
	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.UnregisterCloseButtonInput
	// void UnregisterCloseButtonInput();                                                                                       // [0xa2f060c] Final|Native|Private 
	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.StartFadeOut
	// void StartFadeOut();                                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.RegisterCloseButtonInput
	// void RegisterCloseButtonInput();                                                                                         // [0xa2f0578] Final|Native|Private 
	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.RebuildBearerList
	// void RebuildBearerList(TArray<AFortPlayerStateAthena*>& CrownBearerList);                                                // [0xa2f04dc] Final|Native|Private|HasOutParms 
	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType CurrentInput);                                                                // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.OnCloseActionsComplete
	// void OnCloseActionsComplete();                                                                                           // [0xa2f0424] Final|Native|Protected|BlueprintCallable 
	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.OnButtonCloseProgress
	// void OnButtonCloseProgress(float Progress);                                                                              // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.OnButtonClose
	// void OnButtonClose();                                                                                                    // [0x101681c] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.FadeOutTimerFinished
	// void FadeOutTimerFinished();                                                                                             // [0xa2f0350] Final|Native|Private 
};

