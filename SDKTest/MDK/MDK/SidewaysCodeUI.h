
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/SidewaysCodeUI.SidewaysWidgetBase
/// Size: 0x0010 (0x000328 - 0x000338)
class USidewaysWidgetBase : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(AFortPlayspaceReplicatedState*)            ReplicatedState                                             OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(ESidewaysState)                            CurrentSidewaysState                                        OFFSET(get<T>, {0x330, 1, 0, 0})


	/// Functions
	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.OnSidewaysStateChanged
	// void OnSidewaysStateChanged(USidewaysStateComponent* SidewaysStateComponent, ASidewaysPlayspace* NewPlayspace, ESidewaysState OldState, ESidewaysState NewState); // [0xa069760] Final|Native|Protected 
	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.OnParamUpdated
	// void OnParamUpdated(FGameplayTag& UpdatedParam);                                                                         // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.OnExitSideways
	// void OnExitSideways();                                                                                                   // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.OnEnterSideways
	// void OnEnterSideways(ASidewaysPlayspace* Playspace);                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.IsValidPlayspace
	// bool IsValidPlayspace(ASidewaysPlayspace* Playspace);                                                                    // [0x101681c] Event|Protected|BlueprintEvent|Const 
	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.InitializeVariables
	// void InitializeVariables();                                                                                              // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.HandleFortPawnChanged
	// void HandleFortPawnChanged(AFortPawn* PossessedPawn);                                                                    // [0xa0696e0] Final|Native|Protected 
	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.ConfigureUIFromPlayspace
	// void ConfigureUIFromPlayspace(ASidewaysPlayspace* Playspace);                                                            // [0x101681c] Event|Protected|BlueprintEvent 
};

