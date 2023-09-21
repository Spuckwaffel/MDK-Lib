
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
	// void RebuildBearerIndicators(TArray<AFortPlayerStateAthena*>& CrownBearerList);                                          // [0x9e96dfc] Final|Native|Protected|HasOutParms 
};

/// Class /Script/VictoryCrownsUI.VictoryCrownsBearerInfoBase
/// Size: 0x0010 (0x0002D0 - 0x0002E0)
class UVictoryCrownsBearerInfoBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(TWeakObjectPtr<AFortPlayerStateAthena*>)   WeakPSA                                                     OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_PlayerName                                             OFFSET(get<T>, {0x2D8, 8, 0, 0})


	/// Functions
	// Function /Script/VictoryCrownsUI.VictoryCrownsBearerInfoBase.SetPlayerState
	// void SetPlayerState(AFortPlayerStateAthena* InPlayerState);                                                              // [0x9e96f48] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryCrownsUI.VictoryCrownsBearerInfoBase.OnSetPlayerState
	// void OnSetPlayerState(AFortPlayerStateAthena* PSA);                                                                      // [0x1ebf994] Event|Protected|BlueprintEvent 
};

/// Class /Script/VictoryCrownsUI.VictoryCrownsIndicator
/// Size: 0x0028 (0x0003B8 - 0x0003E0)
class UVictoryCrownsIndicator : public UFortActorIndicatorWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
};

/// Class /Script/VictoryCrownsUI.VictoryCrownsPlacementOverlay
/// Size: 0x0000 (0x000330 - 0x000330)
class UVictoryCrownsPlacementOverlay : public UPostGamePlacementOverlay
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
};

/// Class /Script/VictoryCrownsUI.VictoryCrownsPlayerInfoWidget
/// Size: 0x0010 (0x000310 - 0x000320)
class UVictoryCrownsPlayerInfoWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
};

/// Class /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget
/// Size: 0x0050 (0x0003E8 - 0x000438)
class UVictoryCrownsPreGameWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	CMember(UDynamicEntryBox*)                         EntryBox_BearerList                                         OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(UCommonActionWidget*)                      TipActionWidget                                             OFFSET(get<T>, {0x3F0, 8, 0, 0})
	SMember(FDataTableRowHandle)                       CloseObjectInputAction                                      OFFSET(getStruct<T>, {0x3F8, 16, 0, 0})


	/// Functions
	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.UnregisterCloseButtonInput
	// void UnregisterCloseButtonInput();                                                                                       // [0x9e96fc8] Final|Native|Private 
	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.StartFadeOut
	// void StartFadeOut();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.RegisterCloseButtonInput
	// void RegisterCloseButtonInput();                                                                                         // [0x9e96f34] Final|Native|Private 
	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.RebuildBearerList
	// void RebuildBearerList(TArray<AFortPlayerStateAthena*>& CrownBearerList);                                                // [0x9e96e98] Final|Native|Private|HasOutParms 
	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType CurrentInput);                                                                // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.OnCloseActionsComplete
	// void OnCloseActionsComplete();                                                                                           // [0x9e96de0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.OnButtonCloseProgress
	// void OnButtonCloseProgress(float Progress);                                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.OnButtonClose
	// void OnButtonClose();                                                                                                    // [0x1ebf994] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.FadeOutTimerFinished
	// void FadeOutTimerFinished();                                                                                             // [0x9e96d0c] Final|Native|Private 
};

