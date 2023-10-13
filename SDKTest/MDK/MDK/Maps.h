
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Game/Maps/UI/Frontend_BG_Main.Frontend_BG_Main_C
/// Size: 0x0000 (0x000330 - 0x000330)
class AFrontend_BG_Main_C : public AFortLevelScriptActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
};

/// Class /Game/Maps/FrontEnd/Maps/FrontEndStore.FrontEndStore_C
/// Size: 0x0000 (0x000330 - 0x000330)
class AFrontEndStore_C : public AFortLevelScriptActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
};

/// Class /Game/Maps/Frontend.FrontEnd_C
/// Size: 0x0210 (0x000330 - 0x000540)
class AFrontEnd_C : public AFortLevelScriptActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1344;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x330, 8, 0, 0})
	DMember(bool)                                      CameraTargetMovementUnlocked                                OFFSET(get<bool>, {0x338, 1, 0, 0})
	CMember(TArray<EFrontEndCamera>)                   UnlockedCameraTypes                                         OFFSET(get<T>, {0x340, 16, 0, 0})
	DMember(bool)                                      MouseDown                                                   OFFSET(get<bool>, {0x350, 1, 0, 0})
	CMember(TArray<EFortItemType>)                     UnlockedItemTypes                                           OFFSET(get<T>, {0x358, 16, 0, 0})
	DMember(bool)                                      ItemMovementUnlocked                                        OFFSET(get<bool>, {0x368, 1, 0, 0})
	CMember(TArray<EFortItemType>)                     WorldRotationAllowed                                        OFFSET(get<T>, {0x370, 16, 0, 0})
	CMember(EFortItemType)                             CurrentType                                                 OFFSET(get<T>, {0x380, 1, 0, 0})
	CMember(UMeshComponent*)                           PreviewMesh                                                 OFFSET(get<T>, {0x388, 8, 0, 0})
	DMember(float)                                     ThumbstickTolerance                                         OFFSET(get<float>, {0x390, 4, 0, 0})
	SMember(FRotator)                                  SpawnerRotation                                             OFFSET(getStruct<T>, {0x394, 12, 0, 0})
	DMember(bool)                                      bStoredInitialRotation                                      OFFSET(get<bool>, {0x3A0, 1, 0, 0})
	CMember(TMap<int32_t, FVector>)                    CurrentTouches                                              OFFSET(get<T>, {0x3A8, 80, 0, 0})
	CMember(TMap<int32_t, FVector>)                    PreviousTouches                                             OFFSET(get<T>, {0x3F8, 80, 0, 0})
	SMember(FVector)                                   TouchDragDelta                                              OFFSET(getStruct<T>, {0x448, 12, 0, 0})
	DMember(int32_t)                                   TouchPinchDirection                                         OFFSET(get<int32_t>, {0x454, 4, 0, 0})
	DMember(int32_t)                                   CurrentZoomStep                                             OFFSET(get<int32_t>, {0x458, 4, 0, 0})
	DMember(int32_t)                                   MaxZoomSteps                                                OFFSET(get<int32_t>, {0x45C, 4, 0, 0})
	CMember(TMap<EFrontEndCamera, FVector>)            TotalZoomOffsets                                            OFFSET(get<T>, {0x460, 80, 0, 0})
	CMember(EFrontEndCamera)                           CurrentCameraType                                           OFFSET(get<T>, {0x4B0, 1, 0, 0})
	CMember(TArray<EFortItemType>)                     ZoomAllowed                                                 OFFSET(get<T>, {0x4B8, 16, 0, 0})
	SMember(FVector)                                   VaultCameraZoomOffset                                       OFFSET(getStruct<T>, {0x4C8, 12, 0, 0})
	DMember(bool)                                      bUpdateThumbstickRot                                        OFFSET(get<bool>, {0x4D4, 1, 0, 0})
	DMember(float)                                     ThumbstickRotSpeedScalar                                    OFFSET(get<float>, {0x4D8, 4, 0, 0})
	SMember(FRotator)                                  DesiredRot                                                  OFFSET(getStruct<T>, {0x4DC, 12, 0, 0})
	DMember(bool)                                      bAllowDrift                                                 OFFSET(get<bool>, {0x4E8, 1, 0, 0})
	DMember(float)                                     DriftInterpSpeed                                            OFFSET(get<float>, {0x4EC, 4, 0, 0})
	DMember(float)                                     UpdateRotInterpSpeed                                        OFFSET(get<float>, {0x4F0, 4, 0, 0})
	DMember(float)                                     MouseRotSpeedScalar                                         OFFSET(get<float>, {0x4F4, 4, 0, 0})
	DMember(float)                                     TouchRotSpeedScalar                                         OFFSET(get<float>, {0x4F8, 4, 0, 0})
	DMember(bool)                                      IsRandomCustomization                                       OFFSET(get<bool>, {0x4FC, 1, 0, 0})
	CMember(APartyDisplayManagerBP_C*)                 PartyDisplayManagerBP_574_ExecuteUbergraph_Frontend_RefProperty OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(AHBOnboardingFlow_C*)                      HBOnboardingFlow_ExecuteUbergraph_Frontend_RefProperty      OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(AFrontendCamera_Manage_C*)                 FrontendCamera_StoreItemInspect_EdGraph_1_RefProperty       OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(AFrontendCamera_Manage_C*)                 FrontendCamera_Cosmetics_EdGraph_1_RefProperty              OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(AFrontendCamera_Manage_C*)                 FrontendCamera_SmallCosmetics_EdGraph_1_RefProperty         OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(AFrontendCamera_Manage_C*)                 FrontendCamera_StoreItemInspect_EdGraph_2_RefProperty       OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(AFrontendCamera_Manage_C*)                 FrontendCamera_Cosmetics_EdGraph_2_RefProperty              OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(AFrontendCamera_Manage_C*)                 FrontendCamera_SmallCosmetics_EdGraph_2_RefProperty         OFFSET(get<T>, {0x538, 8, 0, 0})


	/// Functions
	// Function /Game/Maps/Frontend.FrontEnd_C.ResetVaultCameraZoom
	// void ResetVaultCameraZoom();                                                                                             // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Frontend.FrontEnd_C.UpdateVaultCameraZoom
	// void UpdateVaultCameraZoom(EFrontEndCamera InCameraType);                                                                // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Frontend.FrontEnd_C.ProcessTouchInput
	// void ProcessTouchInput();                                                                                                // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Frontend.FrontEnd_C.InpTchEvt_Moved
	// void InpTchEvt_Moved(TEnumAsByte<ETouchIndex> FingerIndex, FVector Location);                                            // [0x154a140] BlueprintEvent       
	// Function /Game/Maps/Frontend.FrontEnd_C.InpTchEvt_Released
	// void InpTchEvt_Released(TEnumAsByte<ETouchIndex> FingerIndex, FVector Location);                                         // [0x154a140] BlueprintEvent       
	// Function /Game/Maps/Frontend.FrontEnd_C.InpTchEvt_Pressed
	// void InpTchEvt_Pressed(TEnumAsByte<ETouchIndex> FingerIndex, FVector Location);                                          // [0x154a140] BlueprintEvent       
	// Function /Game/Maps/Frontend.FrontEnd_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent(FKey Key);                                                           // [0x154a140] BlueprintEvent       
	// Function /Game/Maps/Frontend.FrontEnd_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent(FKey Key);                                                           // [0x154a140] BlueprintEvent       
	// Function /Game/Maps/Frontend.FrontEnd_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_RightMouseButton_K2Node_InputKeyEvent(FKey Key);                                                          // [0x154a140] BlueprintEvent       
	// Function /Game/Maps/Frontend.FrontEnd_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_RightMouseButton_K2Node_InputKeyEvent(FKey Key);                                                          // [0x154a140] BlueprintEvent       
	// Function /Game/Maps/Frontend.FrontEnd_C.ResetRotation
	// void ResetRotation();                                                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Frontend.FrontEnd_C.StoreInitialRotation
	// void StoreInitialRotation();                                                                                             // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Frontend.FrontEnd_C.InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent
	// void InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent(float AxisValue);                                             // [0x154a140] BlueprintEvent       
	// Function /Game/Maps/Frontend.FrontEnd_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Maps/Frontend.FrontEnd_C.OnMatchStarted
	// void OnMatchStarted();                                                                                                   // [0x154a140] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/Maps/Frontend.FrontEnd_C.EnableTutorial
	// void EnableTutorial();                                                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Frontend.FrontEnd_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Maps/Frontend.FrontEnd_C.UnlockCameraTargetMovement
	// void UnlockCameraTargetMovement(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Frontend.FrontEnd_C.UnlockItemMovement
	// void UnlockItemMovement(UFortItem* Item);                                                                                // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Frontend.FrontEnd_C.BindFrontendEvents
	// void BindFrontendEvents();                                                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Frontend.FrontEnd_C.ExecuteUbergraph_FrontEnd
	// void ExecuteUbergraph_FrontEnd(int32_t EntryPoint);                                                                      // [0x154a140] HasDefaults          
};

/// Class /Game/Maps/FrontEnd/FortniteWorldMap.FortniteWorldMap_C
/// Size: 0x0000 (0x000330 - 0x000330)
class AFortniteWorldMap_C : public AFortLevelScriptActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
};

/// Class /Game/Maps/FortniteTownmap.FortniteTownmap_C
/// Size: 0x0000 (0x000330 - 0x000330)
class AFortniteTownmap_C : public AFortLevelScriptActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
};

/// Class /Game/Maps/UI/Frontend_SkillTree.Frontend_SkillTree_C
/// Size: 0x0000 (0x000330 - 0x000330)
class AFrontend_SkillTree_C : public AFortLevelScriptActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
};

/// Class /Game/Maps/UI/Frontend_Lobby.Frontend_Lobby_C
/// Size: 0x0018 (0x000330 - 0x000348)
class AFrontend_Lobby_C : public AFortLevelScriptActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x330, 8, 0, 0})
	SMember(FName)                                     CurrentBackgroundLevelName                                  OFFSET(getStruct<T>, {0x338, 8, 0, 0})
	SMember(FName)                                     NewBackgroundLevelName                                      OFFSET(getStruct<T>, {0x340, 8, 0, 0})


	/// Functions
	// Function /Game/Maps/UI/Frontend_Lobby.Frontend_Lobby_C.OnBackgroundChanged
	// void OnBackgroundChanged();                                                                                              // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/UI/Frontend_Lobby.Frontend_Lobby_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Maps/UI/Frontend_Lobby.Frontend_Lobby_C.ExecuteUbergraph_Frontend_Lobby
	// void ExecuteUbergraph_Frontend_Lobby(int32_t EntryPoint);                                                                // [0x154a140] None                 
};

/// Class /Game/Maps/WorldLightingMenu.WorldLightingMenu_C
/// Size: 0x0008 (0x000330 - 0x000338)
class AWorldLightingMenu_C : public AFortLevelScriptActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x330, 8, 0, 0})
};

