
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
/// dependency: GameFeatures
/// dependency: ModularGameplay
/// dependency: UMG

/// Class /Script/MatchmakingPortalUI.FortControllerComponent_CreativeMatchmaking
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UFortControllerComponent_CreativeMatchmaking : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(UFortGameActivity*)                        CachedGameActivity                                          OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(UClass*)                                   CreativeMatchmakingFeedbackClass                            OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(UClass*)                                   IslandModal                                                 OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(UFortCreativeMatchmakingFeedback*)         CreativeMatchmakingFeedbackWidget                           OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(UFortActivityDetailsModal*)                MatchmakingPortalModalWidget                                OFFSET(get<T>, {0xC8, 8, 0, 0})


	/// Functions
	// Function /Script/MatchmakingPortalUI.FortControllerComponent_CreativeMatchmaking.OnCreativeReadyCheckStatusChanged
	// void OnCreativeReadyCheckStatusChanged(EInGameReadyCheckStatus InGameReadyCheckStatus);                                  // [0xa57b190] Final|Native|Protected 
};

/// Class /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback
/// Size: 0x0090 (0x000400 - 0x000490)
class UFortCreativeMatchmakingFeedback : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
	CMember(UInputComponent*)                          ReadyAndCancelInputComponent                                OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UFortActivityScalingTextBlock*)            Text_IslandName                                             OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UFortActivityScalingTextBlock*)            Text_MatchmakingStatus                                      OFFSET(get<T>, {0x420, 8, 0, 0})
	DMember(bool)                                      bIsCancelingMatchmaking                                     OFFSET(get<bool>, {0x43C, 1, 0, 0})
	DMember(bool)                                      bIsLocalPartyMemberReady                                    OFFSET(get<bool>, {0x43D, 1, 0, 0})
	DMember(bool)                                      bHasPushedInputComponent                                    OFFSET(get<bool>, {0x43E, 1, 0, 0})
	CMember(UFortGameActivity*)                        CachedGameActivity                                          OFFSET(get<T>, {0x458, 8, 0, 0})
	DMember(bool)                                      bHasError                                                   OFFSET(get<bool>, {0x460, 1, 0, 0})
	SMember(FText)                                     MatchmakingStatusText                                       OFFSET(getStruct<T>, {0x468, 24, 0, 0})
	CMember(UFortKeybindWidget*)                       Action_HoldKeybindWidget                                    OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(UFortCTAButton*)                           Action_MobileButton                                         OFFSET(get<T>, {0x488, 8, 0, 0})


	/// Functions
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.PushInputComponent
	// void PushInputComponent();                                                                                               // [0xa57b2a4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.PopInputComponent
	// void PopInputComponent();                                                                                                // [0xa57b290] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.PlayOutro
	// void PlayOutro();                                                                                                        // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.PlayIntro
	// void PlayIntro();                                                                                                        // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.OnUserStartedHoldActionNotification
	// void OnUserStartedHoldActionNotification();                                                                              // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.OnTakeActionNotification
	// void OnTakeActionNotification();                                                                                         // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.OnOutroFinished
	// void OnOutroFinished();                                                                                                  // [0x35fe9f4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.OnMatchmakingStatusTextUpdated
	// void OnMatchmakingStatusTextUpdated();                                                                                   // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.OnLockStateChanged
	// void OnLockStateChanged(bool bLockState);                                                                                // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.OnCreativeReadyCheckStatusChanged
	// void OnCreativeReadyCheckStatusChanged(EInGameReadyCheckStatus InGameReadyCheckStatus);                                  // [0xa57b210] Final|Native|Protected 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.OnCancelNotification
	// void OnCancelNotification();                                                                                             // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.IsPartyLeader
	// bool IsPartyLeader();                                                                                                    // [0xa57b16c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.IsLocalPlayerReady
	// bool IsLocalPlayerReady();                                                                                               // [0xa57b118] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.HoldReleased
	// void HoldReleased();                                                                                                     // [0xa57b104] Final|Native|Protected 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.HoldPressed
	// void HoldPressed();                                                                                                      // [0xa57b0f0] Final|Native|Protected 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.HoldAction
	// void HoldAction();                                                                                                       // [0xa57b0dc] Final|Native|Protected 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.HandleCancelMatchmaking
	// void HandleCancelMatchmaking();                                                                                          // [0xa57ae18] Final|Native|Protected 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.GetTimeToDisplayMessageBeforeFadeOut
	// float GetTimeToDisplayMessageBeforeFadeOut();                                                                            // [0xa57adfc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.CanCancelMatchmaking
	// bool CanCancelMatchmaking();                                                                                             // [0xa57ad70] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback.BP_OnCreativeReadyCheckStatusChanged
	// void BP_OnCreativeReadyCheckStatusChanged(EInGameReadyCheckStatus InGameReadyCheckStatus);                               // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup
/// Size: 0x01A0 (0x000410 - 0x0005B0)
class UFortMatchmakingPortalPopup : public UFortPortalHUDDetails
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
	CMember(UFortActivityDetailsModal*)                MatchmakingPortalModalWidget                                OFFSET(get<T>, {0x430, 8, 0, 0})
	SMember(FVector)                                   WorldPointerLocation                                        OFFSET(getStruct<T>, {0x438, 24, 0, 0})
	SMember(FText)                                     CreatorNameTextFormat                                       OFFSET(getStruct<T>, {0x450, 24, 0, 0})
	CMember(TWeakObjectPtr<UHeaderDescriptionHUDComponent*>) CachedHUDComponent                                    OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UClass*)                                   IslandModal                                                 OFFSET(get<T>, {0x470, 8, 0, 0})
	SMember(FMatchmakingPortalPopupData)               CachedIslandData                                            OFFSET(getStruct<T>, {0x478, 96, 0, 0})
	SMember(FText)                                     InvalidLinkCodeWarningText                                  OFFSET(getStruct<T>, {0x4D8, 24, 0, 0})
	DMember(float)                                     MatchmakingFeedbackDelayTime                                OFFSET(get<float>, {0x4F0, 4, 0, 0})
	DMember(bool)                                      bIsWithinPortalRange                                        OFFSET(get<bool>, {0x4F4, 1, 1, 0})
	CMember(UCommonRichTextBlock*)                     RichText_CreatorName                                        OFFSET(get<T>, {0x4F8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_IslandName                                             OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(UDynamicEntryBox*)                         EntryBox_ActivityTags                                       OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(UFortKeybindWidget*)                       GlobalActionKeybindWidget                                   OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(UFortGameActivity*)                        CachedGameActivity                                          OFFSET(get<T>, {0x518, 8, 0, 0})
	SMember(FText)                                     InteractionMessage                                          OFFSET(getStruct<T>, {0x520, 24, 0, 0})
	SMember(FText)                                     InteractionMessage_Disabled                                 OFFSET(getStruct<T>, {0x538, 24, 0, 0})
	SMember(FText)                                     InteractionMessage_PartyLeadOnly                            OFFSET(getStruct<T>, {0x550, 24, 0, 0})


	/// Functions
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.UpdateVisuals
	// void UpdateVisuals(UHeaderDescriptionHUDComponent* HUDComponent);                                                        // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.OnShowPortalPopup
	// void OnShowPortalPopup(bool bShow, bool bAnimate);                                                                       // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.OnPlayerCanInteractChanged
	// void OnPlayerCanInteractChanged(bool bPlayerCanInteract, FText& Message);                                                // [0x101681c] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.OnLockStateChanged
	// void OnLockStateChanged();                                                                                               // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.IsInteractingDeviceAMatchmakingPortal
	// bool IsInteractingDeviceAMatchmakingPortal();                                                                            // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HasActivityToShow
	// bool HasActivityToShow();                                                                                                // [0xa57b0ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleWidgetUpdate
	// void HandleWidgetUpdate();                                                                                               // [0xa57b098] Final|Native|Public  
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleStartedRespawn
	// void HandleStartedRespawn(AFortPlayerControllerZone* PlayerController);                                                  // [0xa57b018] Final|Native|Public  
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleOnPortalDetailsVisibilityCheck
	// void HandleOnPortalDetailsVisibilityCheck(bool bShowWidget);                                                             // [0x101681c] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleLoadScreenChanged
	// void HandleLoadScreenChanged(AFortPlayerControllerAthena* PlayerController, bool bLoadScreenEnabled, FText HUDReason);   // [0xa57aef0] Final|Native|Public  
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleHUDShow
	// void HandleHUDShow(bool bShow, bool bShouldAnimate);                                                                     // [0xa57ae2c] Final|Native|Public  
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.GetMatchmakingFeedbackWidget
	// UFortAthenaCreativeMatchmakingWidget* GetMatchmakingFeedbackWidget(UCommonActivatableWidget* MatchmakingFeedbackContainer); // [0x101681c] Event|Protected|BlueprintEvent|Const 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.GetIslandData
	// bool GetIslandData(FMatchmakingPortalPopupData& OutIslandData, UHeaderDescriptionHUDComponent* HUDComponent);            // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup.BindOverlapEvents
	// void BindOverlapEvents();                                                                                                // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/MatchmakingPortalUI.FortModalBackground
/// Size: 0x0038 (0x000400 - 0x000438)
class UFortModalBackground : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	CMember(UCommonButtonBase*)                        Button_Back                                                 OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_BackBoard                                            OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CloseTouch                                           OFFSET(get<T>, {0x430, 8, 0, 0})


	/// Functions
	// Function /Script/MatchmakingPortalUI.FortModalBackground.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, UTexture* InTexture);                                                        // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/MatchmakingPortalUI.FortUIGameFeatureAction_OverridePortalHUDDetails
/// Size: 0x0020 (0x000028 - 0x000048)
class UFortUIGameFeatureAction_OverridePortalHUDDetails : public UFortUIGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UClass*>)                   SoftPortalHUDDetailsClass                                   OFFSET(get<T>, {0x28, 32, 0, 0})
};

