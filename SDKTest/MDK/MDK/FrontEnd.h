
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteGameFramework

/// Class /Game/FrontEnd/Cameras/SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C
/// Size: 0x0008 (0x000A00 - 0x000A08)
class ASpecialEventsCamera_Blueprint_C : public AFortCameraBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2568;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xA00, 8, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/Cameras/SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C.BP_OnActivated
	// void BP_OnActivated(AFortPlayerController* PlayerController);                                                            // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C.BP_OnDeactivated
	// void BP_OnDeactivated(AFortPlayerController* PlayerController);                                                          // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C.ExecuteUbergraph_SpecialEventsCamera_Blueprint
	// void ExecuteUbergraph_SpecialEventsCamera_Blueprint(int32_t EntryPoint);                                                 // [0x1d9241c] Final|HasDefaults    
};

/// Class /Game/FrontEnd/FrontEnd_GameMode.FrontEnd_GameMode_C
/// Size: 0x0008 (0x0007F0 - 0x0007F8)
class AFrontEnd_GameMode_C : public AFortGameModeFrontEnd
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2040;

public:
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x7F0, 8, 0, 0})
};

/// Class /Game/FrontEnd/FrontEnd_PlayerController.FrontEnd_PlayerController_C
/// Size: 0x0000 (0x002F70 - 0x002F70)
class AFrontEnd_PlayerController_C : public AFortPlayerControllerFrontEnd
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 12144;

public:
};

/// Class /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C
/// Size: 0x0038 (0x000290 - 0x0002C8)
class AHBOnboardingFlow_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x290, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(UFortQuestItemDefinition_Campaign*)        PlayPeriodicEventMovieQuest                                 OFFSET(get<T>, {0x2A0, 8, 0, 0})
	DMember(bool)                                      bPlayedPeriodicEventMovie                                   OFFSET(get<bool>, {0x2A8, 1, 0, 0})
	DMember(bool)                                      bHasRecheckedNeedToPlayPeriodicEventMovie                   OFFSET(get<bool>, {0x2A9, 1, 0, 0})
	SMember(FDataTableRowHandle)                       PlayPeriodicEventCineObjective                              OFFSET(getStruct<T>, {0x2B0, 16, 0, 0})
	CMember(UClass*)                                   PeriodicEventMovieAnnouncementClass                         OFFSET(get<T>, {0x2C0, 8, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.GetCampaignQuestManager
	// void GetCampaignQuestManager(UFortQuestManager*& QuestManager);                                                          // [0x1d9241c] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.RecheckNeedToPlayEventMovie
	// void RecheckNeedToPlayEventMovie(bool& WaitingToCheckAgain);                                                             // [0x1d9241c] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.NeedsToPlayEventMovie
	// bool NeedsToPlayEventMovie();                                                                                            // [0x1d9241c] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnCanceled_856A325D44ECC73B857CE5B301E90D33
	// void OnCanceled_856A325D44ECC73B857CE5B301E90D33();                                                                      // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33
	// void OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33();                                                               // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_50CD26324B96B121A5B49DA66113AE5D
	// void OnFailure_50CD26324B96B121A5B49DA66113AE5D();                                                                       // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnIgnored_50CD26324B96B121A5B49DA66113AE5D
	// void OnIgnored_50CD26324B96B121A5B49DA66113AE5D();                                                                       // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_50CD26324B96B121A5B49DA66113AE5D
	// void OnSuccess_50CD26324B96B121A5B49DA66113AE5D();                                                                       // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.HandlePlayEventCine
	// void HandlePlayEventCine();                                                                                              // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_PlayEventMovie
	// void HandleClientEvent_PlayEventMovie(UObject* EventSource, UObject* EventFocus, FFortClientEvent& ClientEvent);         // [0x1d9241c] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.StartFlow
	// void StartFlow();                                                                                                        // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.ExecuteUbergraph_HBOnboardingFlow
	// void ExecuteUbergraph_HBOnboardingFlow(int32_t EntryPoint);                                                              // [0x1d9241c] Final|HasDefaults    
};

/// Class /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C
/// Size: 0x0028 (0x000310 - 0x000338)
class AAnnounce_EventCine_C : public AFortClientAnnouncement_Cinematic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x310, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UMediaSource*)                             EventMediaSource                                            OFFSET(get<T>, {0x320, 8, 0, 0})
	DMember(bool)                                      AllowSkipping                                               OFFSET(get<bool>, {0x328, 1, 0, 0})
	CMember(UFortMediaSubtitlesPlayer*)                EventSubtitlesPlayer                                        OFFSET(get<T>, {0x330, 8, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C.OnClientAnnouncementStop
	// void OnClientAnnouncementStop();                                                                                         // [0x1d9241c] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C.OnPlayerSkippedCutscene
	// void OnPlayerSkippedCutscene();                                                                                          // [0x1d9241c] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C.HandleClientEvent_CinematicFinishedPlaying
	// void HandleClientEvent_CinematicFinishedPlaying(UObject* EventSource, UObject* EventFocus, FFortClientEvent& ClientEvent); // [0x1d9241c] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C.HandleAllowSkip
	// void HandleAllowSkip();                                                                                                  // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C.OnEnteredCinematicState
	// void OnEnteredCinematicState();                                                                                          // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C.ExecuteUbergraph_Announce_EventCine
	// void ExecuteUbergraph_Announce_EventCine(int32_t EntryPoint);                                                            // [0x1d9241c] Final|HasDefaults    
};

/// Class /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_Storm2018Cine.Announce_Storm2018Cine_C
/// Size: 0x0000 (0x000338 - 0x000338)
class AAnnounce_Storm2018Cine_C : public AAnnounce_EventCine_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
};

/// Class /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C
/// Size: 0x00B0 (0x000A00 - 0x000AB0)
class AStoreCamera_Blueprint_C : public AFortCameraBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2736;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xA00, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Mesh_DarkenBG                                               OFFSET(get<T>, {0xA08, 8, 0, 0})
	CMember(UCameraComponent*)                         CameraPlaceholderGround                                     OFFSET(get<T>, {0xA10, 8, 0, 0})
	DMember(float)                                     ChoicePack_NewTrack_0_ACA3841D4D5084BE3482FA8EBB7CE9C0      OFFSET(get<float>, {0xA18, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           ChoicePack__Direction_ACA3841D4D5084BE3482FA8EBB7CE9C0      OFFSET(get<T>, {0xA1C, 1, 0, 0})
	CMember(UTimelineComponent*)                       ChoicePack                                                  OFFSET(get<T>, {0xA20, 8, 0, 0})
	DMember(float)                                     Timeline_0_NewTrack_0_6555812E4B246E6144D3C99FC49F7FE9      OFFSET(get<float>, {0xA28, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Timeline_0__Direction_6555812E4B246E6144D3C99FC49F7FE9      OFFSET(get<T>, {0xA2C, 1, 0, 0})
	CMember(UTimelineComponent*)                       Timeline                                                    OFFSET(get<T>, {0xA30, 8, 0, 0})
	SMember(FVector)                                   CameraGroundLoc                                             OFFSET(getStruct<T>, {0xA38, 24, 0, 0})
	SMember(FRotator)                                  CameraGroundRot                                             OFFSET(getStruct<T>, {0xA50, 24, 0, 0})
	SMember(FVector)                                   CameraOriginalLoc                                           OFFSET(getStruct<T>, {0xA68, 24, 0, 0})
	SMember(FRotator)                                  CameraOriginalRot                                           OFFSET(getStruct<T>, {0xA80, 24, 0, 0})
	DMember(bool)                                      CameraInStartPos                                            OFFSET(get<bool>, {0xA98, 1, 0, 0})
	CMember(AStorePinataMaster_Parent_C*)              PinataInLevel                                               OFFSET(get<T>, {0xAA0, 8, 0, 0})
	CMember(AStoreCardReveal_Parent_C*)                CardRevealInLevel                                           OFFSET(get<T>, {0xAA8, 8, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1d9241c] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.Timeline_0__FinishedFunc
	// void Timeline_0__FinishedFunc();                                                                                         // [0x1d9241c] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.Timeline_0__UpdateFunc
	// void Timeline_0__UpdateFunc();                                                                                           // [0x1d9241c] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePack__FinishedFunc
	// void ChoicePack__FinishedFunc();                                                                                         // [0x1d9241c] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePack__UpdateFunc
	// void ChoicePack__UpdateFunc();                                                                                           // [0x1d9241c] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.BP_OnActivated
	// void BP_OnActivated(AFortPlayerController* PlayerController);                                                            // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.BP_OnDeactivated
	// void BP_OnDeactivated(AFortPlayerController* PlayerController);                                                          // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.OpeningCameraTransition
	// void OpeningCameraTransition();                                                                                          // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.ResetCamera
	// void ResetCamera();                                                                                                      // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.DarkenBGVisibility
	// void DarkenBGVisibility(bool Enable);                                                                                    // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePackFOV-Out
	// void ChoicePackFOV-Out();                                                                                                // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePackFOV-In
	// void ChoicePackFOV-In();                                                                                                 // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.ExecuteUbergraph_StoreCamera_Blueprint
	// void ExecuteUbergraph_StoreCamera_Blueprint(int32_t EntryPoint);                                                         // [0x1d9241c] Final|HasDefaults    
};

/// Class /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_Parent.StoreCardReveal_Parent_C
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AStoreCardReveal_Parent_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x290, 8, 0, 0})
	CMember(USceneComponent*)                          PinataSceneRoot                                             OFFSET(get<T>, {0x298, 8, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_Parent.StoreCardReveal_Parent_C.InitiatePinata
	// void InitiatePinata();                                                                                                   // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_Parent.StoreCardReveal_Parent_C.ExecuteUbergraph_StoreCardReveal_Parent
	// void ExecuteUbergraph_StoreCardReveal_Parent(int32_t EntryPoint);                                                        // [0x1d9241c] Final                
};

/// Class /Game/FrontEnd/FrontEndSettingsBP.FrontEndSettingsBP_C
/// Size: 0x0008 (0x0002B0 - 0x0002B8)
class AFrontEndSettingsBP_C : public AFrontEndSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x2B0, 8, 0, 0})
};

/// Class /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C
/// Size: 0x0018 (0x000A00 - 0x000A18)
class AHeroesCamera_Blueprint_C : public AFortCameraBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2584;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xA00, 8, 0, 0})
	DMember(bool)                                      MouseDown                                                   OFFSET(get<bool>, {0xA08, 1, 0, 0})
	CMember(AFortPlayerPawn*)                          Cached_Pawn                                                 OFFSET(get<T>, {0xA10, 8, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.HandleMousePress
	// void HandleMousePress();                                                                                                 // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.HandleMouseRelease
	// void HandleMouseRelease();                                                                                               // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent(FKey Key);                                                           // [0x1d9241c] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent(FKey Key);                                                           // [0x1d9241c] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_RightMouseButton_K2Node_InputKeyEvent(FKey Key);                                                          // [0x1d9241c] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_RightMouseButton_K2Node_InputKeyEvent(FKey Key);                                                          // [0x1d9241c] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.BP_OnActivated
	// void BP_OnActivated(AFortPlayerController* PlayerController);                                                            // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.BP_OnDeactivated
	// void BP_OnDeactivated(AFortPlayerController* PlayerController);                                                          // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.ExecuteUbergraph_HeroesCamera_Blueprint
	// void ExecuteUbergraph_HeroesCamera_Blueprint(int32_t EntryPoint);                                                        // [0x1d9241c] Final|HasDefaults    
};

/// Class /Game/FrontEnd/Cameras/LoginCamera_Blueprint.LoginCamera_Blueprint_C
/// Size: 0x0018 (0x000A00 - 0x000A18)
class ALoginCamera_Blueprint_C : public AFortCameraBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2584;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xA00, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     StaticMesh                                                  OFFSET(get<T>, {0xA08, 8, 0, 0})
	CMember(UCameraComponent*)                         LoginCamera                                                 OFFSET(get<T>, {0xA10, 8, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/Cameras/LoginCamera_Blueprint.LoginCamera_Blueprint_C.BP_OnActivated
	// void BP_OnActivated(AFortPlayerController* PlayerController);                                                            // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/LoginCamera_Blueprint.LoginCamera_Blueprint_C.ExecuteUbergraph_LoginCamera_Blueprint
	// void ExecuteUbergraph_LoginCamera_Blueprint(int32_t EntryPoint);                                                         // [0x1d9241c] Final|HasDefaults    
};

/// Class /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_Parent.StorePinataMaster_Parent_C
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AStorePinataMaster_Parent_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x290, 8, 0, 0})
	CMember(USceneComponent*)                          PinataSceneRoot                                             OFFSET(get<T>, {0x298, 8, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_Parent.StorePinataMaster_Parent_C.InitiatePinata
	// void InitiatePinata();                                                                                                   // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_Parent.StorePinataMaster_Parent_C.CameraResetComplete
	// void CameraResetComplete();                                                                                              // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_Parent.StorePinataMaster_Parent_C.CameraTransitionComplete
	// void CameraTransitionComplete();                                                                                         // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_Parent.StorePinataMaster_Parent_C.ExecuteUbergraph_StorePinataMaster_Parent
	// void ExecuteUbergraph_StorePinataMaster_Parent(int32_t EntryPoint);                                                      // [0x1d9241c] Final                
};

/// Class /Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C
/// Size: 0x0008 (0x000A00 - 0x000A08)
class AVaultCamera_Blueprint_C : public AFortCameraBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2568;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xA00, 8, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C.BP_OnActivated
	// void BP_OnActivated(AFortPlayerController* PlayerController);                                                            // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C.BP_OnDeactivated
	// void BP_OnDeactivated(AFortPlayerController* PlayerController);                                                          // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C.ExecuteUbergraph_VaultCamera_Blueprint
	// void ExecuteUbergraph_VaultCamera_Blueprint(int32_t EntryPoint);                                                         // [0x1d9241c] Final|HasDefaults    
};

