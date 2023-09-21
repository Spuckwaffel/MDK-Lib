
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio
/// Size: 0x0010 (0x000120 - 0x000130)
class UFortMobileActionButtonBehavior_ToggleRadio : public UFortMobileActionButtonBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(UPaperSprite*)                             ToggleRadioOffSprite                                        OFFSET(get<T>, {0x120, 8, 0, 0})


	/// Functions
	// Function /Script/SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioStopped
	// void HandleRadioStopped(UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                              // [0x9871b34] Final|Native|Private 
	// Function /Script/SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioPlaying
	// void HandleRadioPlaying(UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                              // [0x9871974] Final|Native|Private 
};

/// Class /Script/SrirachaRanchUI.RadioPlayerWidgetBase
/// Size: 0x0050 (0x000310 - 0x000360)
class URadioPlayerWidgetBase : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	SMember(FFortPrioritizedWidgetData)                PriorityData                                                OFFSET(get<T>, {0x350, 2, 0, 0})
	CMember(UStreamingRadioPlayerComponent*)           LastValidComp                                               OFFSET(get<T>, {0x358, 8, 0, 0})


	/// Functions
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.SetControllable
	// void SetControllable(bool bCanControl);                                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnSourcePlaying
	// void OnSourcePlaying(UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnSourceFinished
	// void OnSourceFinished(UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                                // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnShouldShowDueToEntrance
	// void OnShouldShowDueToEntrance();                                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnRadioStopped
	// void OnRadioStopped(UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation LastSource);                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnLoadingNewSource
	// void OnLoadingNewSource(UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnFailedToOpenSource
	// void OnFailedToOpenSource(UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                            // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnDisconnectFromComp
	// void OnDisconnectFromComp();                                                                                             // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnControllerGainedNewFortPawn
	// void OnControllerGainedNewFortPawn(AFortPawn* FortPawn);                                                                 // [0x9871d1c] Final|Native|Protected 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.NativeExitedVehicle
	// void NativeExitedVehicle();                                                                                              // [0x9871d08] Final|Native|Protected 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.NativeEnteredVehicle
	// void NativeEnteredVehicle();                                                                                             // [0x9871cf4] Final|Native|Protected 
};

