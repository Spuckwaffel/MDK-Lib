
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: UMG

/// Class /Game/FrontEnd/ScriptedActions/CheckRateExperienceAction.CheckRateExperienceAction_C
/// Size: 0x0010 (0x000378 - 0x000388)
class ACheckRateExperienceAction_C : public AFortScriptedAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x378, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x380, 8, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/ScriptedActions/CheckRateExperienceAction.CheckRateExperienceAction_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckRateExperienceAction.CheckRateExperienceAction_C.HandleClientEvent_FinishedModalQueue
	// void HandleClientEvent_FinishedModalQueue(UObject* EventSource, UObject* EventFocus, FFortClientEvent& ClientEvent);     // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckRateExperienceAction.CheckRateExperienceAction_C.Execute
	// void Execute(FFortScriptedActionParams& Params);                                                                         // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckRateExperienceAction.CheckRateExperienceAction_C.ExecuteUbergraph_CheckRateExperienceAction
	// void ExecuteUbergraph_CheckRateExperienceAction(int32_t EntryPoint);                                                     // [0x154a140] HasDefaults          
};

/// Class /Game/FrontEnd/ScriptedActions/CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C
/// Size: 0x0071 (0x000378 - 0x0003E9)
class ACheckFrontEndRewardsAction_C : public AFortScriptedAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1001;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x378, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x380, 8, 0, 0})
	SMember(FFrontEndRewards_Definition)               RewardsDefinition                                           OFFSET(getStruct<T>, {0x388, 96, 0, 0})
	DMember(bool)                                      ShowRewardsWidget                                           OFFSET(get<bool>, {0x3E8, 1, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/ScriptedActions/CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateItemCacheRewards
	// void PopulateItemCacheRewards();                                                                                         // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateNewGiftBoxes
	// void PopulateNewGiftBoxes();                                                                                             // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateDifficultyIncreaseRewards
	// void PopulateDifficultyIncreaseRewards();                                                                                // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.HandleRewardsIgnored
	// void HandleRewardsIgnored(UFrontEndRewards_Widget_C* RewardsWidget);                                                     // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.CanShowFrontendRewards
	// bool CanShowFrontendRewards();                                                                                           // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/FrontEnd/ScriptedActions/CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.Is FrontEndRewards Running
	// void Is FrontEndRewards Running(bool& bRunning);                                                                         // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateMissionAlertRewards
	// void PopulateMissionAlertRewards();                                                                                      // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.HandleRewardsClaimError
	// void HandleRewardsClaimError(UFrontEndRewards_Widget_C* RewardsWidget);                                                  // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.Clear
	// void Clear();                                                                                                            // [0x154a140] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.HandleRewardsClaimed
	// void HandleRewardsClaimed(UFrontEndRewards_Widget_C* RewardsWidget);                                                     // [0x154a140] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateCollectionBookRewards
	// void PopulateCollectionBookRewards();                                                                                    // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateRewards
	// void PopulateRewards();                                                                                                  // [0x154a140] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.OpenFrontEndRewards
	// void OpenFrontEndRewards();                                                                                              // [0x154a140] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateUnseenQuests
	// void PopulateUnseenQuests(EFortQuestType QuestType);                                                                     // [0x154a140] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.GetCompletedQuests
	// void GetCompletedQuests(TArray<UFortQuestItem*>& Completed Quests);                                                      // [0x154a140] Private|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateNewQuests
	// void PopulateNewQuests();                                                                                                // [0x154a140] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateQuestRewards
	// void PopulateQuestRewards();                                                                                             // [0x154a140] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateMissionRewards
	// void PopulateMissionRewards();                                                                                           // [0x154a140] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.CompleteRewardsAction
	// void CompleteRewardsAction();                                                                                            // [0x154a140] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.Execute
	// void Execute(FFortScriptedActionParams& Params);                                                                         // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.ExecuteUbergraph_CheckFrontEndRewardsAction
	// void ExecuteUbergraph_CheckFrontEndRewardsAction(int32_t EntryPoint);                                                    // [0x154a140] HasDefaults          
};

/// Class /Game/FrontEnd/ScriptedActions/CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C
/// Size: 0x0012 (0x000378 - 0x00038A)
class ACheckFrontEndDailyRewardsAction_C : public AFortScriptedAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 906;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x378, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x380, 8, 0, 0})
	DMember(bool)                                      bLastStateWasLoginScreen                                    OFFSET(get<bool>, {0x388, 1, 0, 0})
	CMember(ESubGame)                                  NewVar                                                      OFFSET(get<T>, {0x389, 1, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/ScriptedActions/CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.IsFrontEndRewards Running
	// void IsFrontEndRewards Running(bool& IsRunning);                                                                         // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.Daily Rewards Open
	// void Daily Rewards Open(bool& bRunning);                                                                                 // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.CompleteDailyRewardAction
	// void CompleteDailyRewardAction();                                                                                        // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.ShowDailyRewards
	// void ShowDailyRewards();                                                                                                 // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.Execute
	// void Execute(FFortScriptedActionParams& Params);                                                                         // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.HandleClientEvent_FinishedModalQueue
	// void HandleClientEvent_FinishedModalQueue(UObject* EventSource, UObject* EventFocus, FFortClientEvent& ClientEvent);     // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.ExecuteUbergraph_CheckFrontEndDailyRewardsAction
	// void ExecuteUbergraph_CheckFrontEndDailyRewardsAction(int32_t EntryPoint);                                               // [0x154a140] HasDefaults          
};

/// Class /Game/FrontEnd/ScriptedActions/CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C
/// Size: 0x0080 (0x000378 - 0x0003F8)
class ACheckExpeditionRewardsAction_C : public AFortScriptedAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1016;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x378, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x380, 8, 0, 0})
	SMember(FFrontEndRewards_Definition)               RewardsDefinition                                           OFFSET(getStruct<T>, {0x388, 96, 0, 0})
	DMember(bool)                                      ShowRewardsWidget                                           OFFSET(get<bool>, {0x3E8, 1, 0, 0})
	CMember(UFrontEndRewards_Widget_C*)                Claimed_Reward_Widget                                       OFFSET(get<T>, {0x3F0, 8, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/ScriptedActions/CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.Find First Valid Player Controller
	// void Find First Valid Player Controller(AFortPlayerController*& FoundPC1);                                               // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/FrontEnd/ScriptedActions/CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.Is FrontEndRewards Running
	// void Is FrontEndRewards Running(bool& bRunning);                                                                         // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.HandleRewardsClaimError
	// void HandleRewardsClaimError(UFrontEndRewards_Widget_C* RewardsWidget);                                                  // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.Clear
	// void Clear();                                                                                                            // [0x154a140] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.HandleRewardsClaimed
	// void HandleRewardsClaimed(UFrontEndRewards_Widget_C* RewardsWidget);                                                     // [0x154a140] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.PopulateExpeditionRewards
	// void PopulateExpeditionRewards();                                                                                        // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.PopulateRewards
	// void PopulateRewards();                                                                                                  // [0x154a140] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.OpenFrontEndRewards
	// void OpenFrontEndRewards();                                                                                              // [0x154a140] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.PopulateCompletedQuests
	// void PopulateCompletedQuests();                                                                                          // [0x154a140] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.GetCompletedQuests
	// void GetCompletedQuests(TArray<UFortQuestItem*>& Completed Quests);                                                      // [0x154a140] Private|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.CompleteRewardsAction
	// void CompleteRewardsAction();                                                                                            // [0x154a140] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.Execute
	// void Execute(FFortScriptedActionParams& Params);                                                                         // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.Handle Rewards Running
	// void Handle Rewards Running();                                                                                           // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/ScriptedActions/CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.ExecuteUbergraph_CheckExpeditionRewardsAction
	// void ExecuteUbergraph_CheckExpeditionRewardsAction(int32_t EntryPoint);                                                  // [0x154a140] HasDefaults          
};

/// Class /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C
/// Size: 0x020C (0x0008B0 - 0x000ABC)
class ATheaterCamera_Blueprint_C : public AFortTheaterCamera
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2748;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x8B0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     MeshScreenPlane                                             OFFSET(get<T>, {0x8B8, 8, 0, 0})
	CMember(USceneComponent*)                          SceneInitializeFX                                           OFFSET(get<T>, {0x8C0, 8, 0, 0})
	DMember(float)                                     FocusTimeline_Float_Curve_ADC98EA5D14E24EC78DD4F80C5102578  OFFSET(get<float>, {0x8C8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           FocusTimeline__Direction_ADC98EA5D14E24EC78DD4F80C5102578   OFFSET(get<T>, {0x8CC, 1, 0, 0})
	CMember(UTimelineComponent*)                       FocusTimeline                                               OFFSET(get<T>, {0x8D0, 8, 0, 0})
	DMember(float)                                     DEBUGFOVA_ggt443_69C3A05E440A88A12DB0BAA6A9375778           OFFSET(get<float>, {0x8D8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           DEBUGFOVA__Direction_69C3A05E440A88A12DB0BAA6A9375778       OFFSET(get<T>, {0x8DC, 1, 0, 0})
	CMember(UTimelineComponent*)                       DEBUGFOVA                                                   OFFSET(get<T>, {0x8E0, 8, 0, 0})
	DMember(float)                                     InitializeFX_TL_FadeInitFX_21BA8C434B0965A323799DA5570E46CF OFFSET(get<float>, {0x8E8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           InitializeFX_TL__Direction_21BA8C434B0965A323799DA5570E46CF OFFSET(get<T>, {0x8EC, 1, 0, 0})
	CMember(UTimelineComponent*)                       InitializeFX_TL                                             OFFSET(get<T>, {0x8F0, 8, 0, 0})
	DMember(float)                                     DebugZoomTL_CameraRotLevelMax_41B63CEF445574B1F9D6F489004E4238 OFFSET(get<float>, {0x8F8, 4, 0, 0})
	DMember(float)                                     DebugZoomTL_CameraRotLevelZero_41B63CEF445574B1F9D6F489004E4238 OFFSET(get<float>, {0x8FC, 4, 0, 0})
	DMember(float)                                     DebugZoomTL_CameraOffsetX___LevelMax_41B63CEF445574B1F9D6F489004E4238 OFFSET(get<float>, {0x900, 4, 0, 0})
	DMember(float)                                     DebugZoomTL_CameraOffsetX___LevelZero_41B63CEF445574B1F9D6F489004E4238 OFFSET(get<float>, {0x904, 4, 0, 0})
	DMember(float)                                     DebugZoomTL_TotalNumberOfZoomLevels_41B63CEF445574B1F9D6F489004E4238 OFFSET(get<float>, {0x908, 4, 0, 0})
	DMember(float)                                     DebugZoomTL_CameraHeight_LevelMax_41B63CEF445574B1F9D6F489004E4238 OFFSET(get<float>, {0x90C, 4, 0, 0})
	DMember(float)                                     DebugZoomTL_CameraHeight_LevelZero_41B63CEF445574B1F9D6F489004E4238 OFFSET(get<float>, {0x910, 4, 0, 0})
	DMember(float)                                     DebugZoomTL_FOV_In_41B63CEF445574B1F9D6F489004E4238         OFFSET(get<float>, {0x914, 4, 0, 0})
	DMember(float)                                     DebugZoomTL_FOV_Out_41B63CEF445574B1F9D6F489004E4238        OFFSET(get<float>, {0x918, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           DebugZoomTL__Direction_41B63CEF445574B1F9D6F489004E4238     OFFSET(get<T>, {0x91C, 1, 0, 0})
	CMember(UTimelineComponent*)                       DebugZoomTL                                                 OFFSET(get<T>, {0x920, 8, 0, 0})
	DMember(float)                                     WorldLocSnapSize                                            OFFSET(get<float>, {0x928, 4, 0, 0})
	DMember(float)                                     CameraZHeightLevelZero                                      OFFSET(get<float>, {0x92C, 4, 0, 0})
	DMember(float)                                     CameraXOffsetLevelZero                                      OFFSET(get<float>, {0x930, 4, 0, 0})
	CMember(AFortTheaterMapTile*)                      TargetTile                                                  OFFSET(get<T>, {0x938, 8, 0, 0})
	DMember(float)                                     CurrentZoomPercentage                                       OFFSET(get<float>, {0x940, 4, 0, 0})
	DMember(float)                                     NumberOfZoomLevels                                          OFFSET(get<float>, {0x944, 4, 0, 0})
	DMember(float)                                     ZoomDistanceUnitZ                                           OFFSET(get<float>, {0x948, 4, 0, 0})
	DMember(float)                                     CurrentZoomLevel                                            OFFSET(get<float>, {0x94C, 4, 0, 0})
	SMember(FVector)                                   FocusedTileLocWithOffset                                    OFFSET(getStruct<T>, {0x950, 12, 0, 0})
	DMember(bool)                                      MouseDown                                                   OFFSET(get<bool>, {0x95C, 1, 0, 0})
	DMember(float)                                     CurrentOffsetAmountX                                        OFFSET(get<float>, {0x960, 4, 0, 0})
	DMember(float)                                     CameraXOffsetLevelMax                                       OFFSET(get<float>, {0x964, 4, 0, 0})
	DMember(int32_t)                                   InitialZoomLevels                                           OFFSET(get<int32_t>, {0x968, 4, 0, 0})
	SMember(FVector)                                   ForwardVector                                               OFFSET(getStruct<T>, {0x96C, 12, 0, 0})
	DMember(float)                                     CameraYRotationLevelZero                                    OFFSET(get<float>, {0x978, 4, 0, 0})
	SMember(FVector)                                   TargetTileLoc                                               OFFSET(getStruct<T>, {0x97C, 12, 0, 0})
	DMember(float)                                     OldOffsetAmountX                                            OFFSET(get<float>, {0x988, 4, 0, 0})
	DMember(float)                                     CurrentFOV                                                  OFFSET(get<float>, {0x98C, 4, 0, 0})
	DMember(float)                                     FOVLevelZero                                                OFFSET(get<float>, {0x990, 4, 0, 0})
	DMember(float)                                     FOVLevelMax                                                 OFFSET(get<float>, {0x994, 4, 0, 0})
	DMember(float)                                     CameraZHeightLevelMax                                       OFFSET(get<float>, {0x998, 4, 0, 0})
	DMember(float)                                     ZoomDistanceUnitX                                           OFFSET(get<float>, {0x99C, 4, 0, 0})
	DMember(bool)                                      DebugCameraZoom                                             OFFSET(get<bool>, {0x9A0, 1, 0, 0})
	DMember(float)                                     CameraYRotationLevelMax                                     OFFSET(get<float>, {0x9A4, 4, 0, 0})
	DMember(bool)                                      DebugCameraVariables                                        OFFSET(get<bool>, {0x9A8, 1, 0, 0})
	DMember(bool)                                      SnapCameraToFocusedTile                                     OFFSET(get<bool>, {0x9A9, 1, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MIDMeshScreenPlane                                          OFFSET(get<T>, {0x9B0, 8, 0, 0})
	CMember(TArray<FVector2D>)                         CloudMaskLocations                                          OFFSET(get<T>, {0x9B8, 16, 0, 0})
	DMember(float)                                     CloudMaskScale                                              OFFSET(get<float>, {0x9C8, 4, 0, 0})
	DMember(bool)                                      ReadyForPings                                               OFFSET(get<bool>, {0x9CC, 1, 0, 0})
	CMember(ATVPostProcessBP_C*)                       TVPostProcess                                               OFFSET(get<T>, {0x9D0, 8, 0, 0})
	CMember(TArray<ABP_Hex_PARENT_C*>)                 AllHexesArray                                               OFFSET(get<T>, {0x9D8, 16, 0, 0})
	CMember(TArray<unsigned char>)                     HexesPinged                                                 OFFSET(get<T>, {0x9E8, 16, 0, 0})
	DMember(bool)                                      AllHexesHavePingedOnce                                      OFFSET(get<bool>, {0x9F8, 1, 0, 0})
	DMember(bool)                                      WaitForForceFocus                                           OFFSET(get<bool>, {0x9F9, 1, 0, 0})
	DMember(bool)                                      AQuestIsPinned                                              OFFSET(get<bool>, {0x9FA, 1, 0, 0})
	CMember(TArray<bool>)                              PinnedQuestsArray                                           OFFSET(get<T>, {0xA00, 16, 0, 0})
	DMember(bool)                                      WaitForPinned                                               OFFSET(get<bool>, {0xA10, 1, 0, 0})
	SMember(FVector)                                   HexWorldLocFromBP_Hex_PARENT                                OFFSET(getStruct<T>, {0xA14, 12, 0, 0})
	DMember(float)                                     MaxCameraDistance                                           OFFSET(get<float>, {0xA20, 4, 0, 0})
	SMember(FVector)                                   CenterOfCameraBounds                                        OFFSET(getStruct<T>, {0xA24, 12, 0, 0})
	DMember(float)                                     HighestX_Value                                              OFFSET(get<float>, {0xA30, 4, 0, 0})
	DMember(float)                                     HighestY_Value                                              OFFSET(get<float>, {0xA34, 4, 0, 0})
	DMember(float)                                     TotalWidthOfHexPlane                                        OFFSET(get<float>, {0xA38, 4, 0, 0})
	DMember(float)                                     HexPlaneBufferSize                                          OFFSET(get<float>, {0xA3C, 4, 0, 0})
	SMember(FVector)                                   CenterLocOfAllHexes                                         OFFSET(getStruct<T>, {0xA40, 12, 0, 0})
	SMember(FVector)                                   AllHexesBoxExtent                                           OFFSET(getStruct<T>, {0xA4C, 12, 0, 0})
	CMember(TArray<FVector2D>)                         RoadMaskLocations                                           OFFSET(get<T>, {0xA58, 16, 0, 0})
	DMember(bool)                                      LightsBPSet                                                 OFFSET(get<bool>, {0xA68, 1, 0, 0})
	CMember(AHexmapLevelSettings_Temperate01_C*)       LightsBP                                                    OFFSET(get<T>, {0xA70, 8, 0, 0})
	DMember(float)                                     HexPlaneLayersBufferSize                                    OFFSET(get<float>, {0xA78, 4, 0, 0})
	DMember(float)                                     TotalWidthOfHexPlaneLayer                                   OFFSET(get<float>, {0xA7C, 4, 0, 0})
	CMember(TArray<FVector2D>)                         TileType0_Locs                                              OFFSET(get<T>, {0xA80, 16, 0, 0})
	CMember(TArray<FVector2D>)                         TileType1_Locs                                              OFFSET(get<T>, {0xA90, 16, 0, 0})
	CMember(TArray<FVector2D>)                         TileType2_Locs                                              OFFSET(get<T>, {0xAA0, 16, 0, 0})
	DMember(float)                                     TileTypeMaskScale                                           OFFSET(get<float>, {0xAB0, 4, 0, 0})
	DMember(bool)                                      bSuspendInput                                               OFFSET(get<bool>, {0xAB4, 1, 0, 0})
	DMember(float)                                     LastZoomButtonHeldTime                                      OFFSET(get<float>, {0xAB8, 4, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ZoomCameraWithHeldGamepadInput
	// void ZoomCameraWithHeldGamepadInput();                                                                                   // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.SetSuspendInput
	// void SetSuspendInput(bool SuspendInput);                                                                                 // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.IsInputSuspended
	// bool IsInputSuspended();                                                                                                 // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.NewFunction
	// FVector2D NewFunction(AActor* self2);                                                                                    // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.PanCamera
	// void PanCamera(float DeltaX, float DeltaY);                                                                              // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.HandleTheaterSelected
	// void HandleTheaterSelected(FString TheaterId);                                                                           // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ZoomCameraStep
	// void ZoomCameraStep(bool Forward);                                                                                       // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.FocusTimeline__FinishedFunc
	// void FocusTimeline__FinishedFunc();                                                                                      // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.FocusTimeline__UpdateFunc
	// void FocusTimeline__UpdateFunc();                                                                                        // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.DebugZoomTL__FinishedFunc
	// void DebugZoomTL__FinishedFunc();                                                                                        // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.DebugZoomTL__UpdateFunc
	// void DebugZoomTL__UpdateFunc();                                                                                          // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InitializeFX-TL__FinishedFunc
	// void InitializeFX-TL__FinishedFunc();                                                                                    // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InitializeFX-TL__UpdateFunc
	// void InitializeFX-TL__UpdateFunc();                                                                                      // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.DEBUGFOVA__FinishedFunc
	// void DEBUGFOVA__FinishedFunc();                                                                                          // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.DEBUGFOVA__UpdateFunc
	// void DEBUGFOVA__UpdateFunc();                                                                                            // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent
	// void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent(FKey Key);                                                             // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent
	// void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent(FKey Key);                                                           // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.OnActivated
	// void OnActivated();                                                                                                      // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.OnDeactivated
	// void OnDeactivated();                                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.SetTileFocus
	// void SetTileFocus(AFortTheaterMapTile* TargetTile);                                                                      // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.OnDragBegin
	// void OnDragBegin();                                                                                                      // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.OnDragEnd
	// void OnDragEnd();                                                                                                        // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.StopFocusTimeline
	// void StopFocusTimeline();                                                                                                // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ForceTileFocus
	// void ForceTileFocus(FVector HexWorldLoc);                                                                                // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.PingFromHex
	// void PingFromHex();                                                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.RefreshCloudMask
	// void RefreshCloudMask();                                                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.MaskFinished
	// void MaskFinished();                                                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.PinnedPing
	// void PinnedPing();                                                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ExecuteUbergraph_TheaterCamera_Blueprint
	// void ExecuteUbergraph_TheaterCamera_Blueprint(int32_t EntryPoint);                                                       // [0x154a140] HasDefaults          
};

/// Class /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_Parent.StorePinataMaster_Parent_C
/// Size: 0x0010 (0x000318 - 0x000328)
class AStorePinataMaster_Parent_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x318, 8, 0, 0})
	CMember(USceneComponent*)                          PinataSceneRoot                                             OFFSET(get<T>, {0x320, 8, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_Parent.StorePinataMaster_Parent_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_Parent.StorePinataMaster_Parent_C.InitiatePinata
	// void InitiatePinata();                                                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_Parent.StorePinataMaster_Parent_C.CameraResetComplete
	// void CameraResetComplete();                                                                                              // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_Parent.StorePinataMaster_Parent_C.CameraTransitionComplete
	// void CameraTransitionComplete();                                                                                         // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_Parent.StorePinataMaster_Parent_C.ExecuteUbergraph_StorePinataMaster_Parent
	// void ExecuteUbergraph_StorePinataMaster_Parent(int32_t EntryPoint);                                                      // [0x154a140] None                 
};

/// Class /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_Parent.StoreCardReveal_Parent_C
/// Size: 0x0010 (0x000318 - 0x000328)
class AStoreCardReveal_Parent_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x318, 8, 0, 0})
	CMember(USceneComponent*)                          PinataSceneRoot                                             OFFSET(get<T>, {0x320, 8, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_Parent.StoreCardReveal_Parent_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_Parent.StoreCardReveal_Parent_C.InitiatePinata
	// void InitiatePinata();                                                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_Parent.StoreCardReveal_Parent_C.ExecuteUbergraph_StoreCardReveal_Parent
	// void ExecuteUbergraph_StoreCardReveal_Parent(int32_t EntryPoint);                                                        // [0x154a140] None                 
};

/// Class /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_TutorialConversation.Announce_TutorialConversation_C
/// Size: 0x0018 (0x000538 - 0x000550)
class AAnnounce_TutorialConversation_C : public AFortClientAnnouncement_TutorialConversation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1360;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x538, 8, 0, 0})
	CMember(TArray<FTutorialHighlightData>)            SentencedIndexedTutorialData                                OFFSET(get<T>, {0x540, 16, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_TutorialConversation.Announce_TutorialConversation_C.HandleSentenceStop_UI
	// void HandleSentenceStop_UI(int32_t SentenceIdx);                                                                         // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_TutorialConversation.Announce_TutorialConversation_C.HandleSentenceStart_UI
	// void HandleSentenceStart_UI(int32_t SentenceIdx);                                                                        // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_TutorialConversation.Announce_TutorialConversation_C.InitAnnouncement
	// void InitAnnouncement();                                                                                                 // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_TutorialConversation.Announce_TutorialConversation_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_TutorialConversation.Announce_TutorialConversation_C.OnClientAnnouncementStart
	// void OnClientAnnouncementStart();                                                                                        // [0x154a140] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_TutorialConversation.Announce_TutorialConversation_C.OnSentenceStarted
	// void OnSentenceStarted(FFortConversationSentence& Sentence, int32_t SentenceIndex);                                      // [0x154a140] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_TutorialConversation.Announce_TutorialConversation_C.OnConversationFinished
	// void OnConversationFinished(FFortConversationSentence FinishingSentence, int32_t FinishingSentenceSentenceIndex);        // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_TutorialConversation.Announce_TutorialConversation_C.OnSentenceFinished
	// void OnSentenceFinished(FFortConversationSentence& Sentence, int32_t SentenceIndex);                                     // [0x154a140] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_TutorialConversation.Announce_TutorialConversation_C.OnClientAnnouncementStop
	// void OnClientAnnouncementStop();                                                                                         // [0x154a140] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_TutorialConversation.Announce_TutorialConversation_C.ExecuteUbergraph_Announce_TutorialConversation
	// void ExecuteUbergraph_Announce_TutorialConversation(int32_t EntryPoint);                                                 // [0x154a140] HasDefaults          
};

/// Class /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C
/// Size: 0x0028 (0x000388 - 0x0003B0)
class AAnnounce_EventCine_C : public AFortClientAnnouncement_Cinematic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x388, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UMediaSource*)                             EventMediaSource                                            OFFSET(get<T>, {0x398, 8, 0, 0})
	DMember(bool)                                      AllowSkipping                                               OFFSET(get<bool>, {0x3A0, 1, 0, 0})
	CMember(EFortUIState)                              StartingState                                               OFFSET(get<T>, {0x3A1, 1, 0, 0})
	CMember(UFortMediaSubtitlesPlayer*)                EventSubtitlesPlayer                                        OFFSET(get<T>, {0x3A8, 8, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C.OnStateEntered_2FC6E2894145586A1A4AF69426273130
	// void OnStateEntered_2FC6E2894145586A1A4AF69426273130();                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C.OnStateEntered_132DA3B4468BA1009280CFB4D4C2D0AC
	// void OnStateEntered_132DA3B4468BA1009280CFB4D4C2D0AC();                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C.OnClientAnnouncementStart
	// void OnClientAnnouncementStart();                                                                                        // [0x154a140] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C.OnClientAnnouncementStop
	// void OnClientAnnouncementStop();                                                                                         // [0x154a140] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C.OnPlayerSkippedCutscene
	// void OnPlayerSkippedCutscene();                                                                                          // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C.HandleClientEvent_CinematicFinishedPlaying
	// void HandleClientEvent_CinematicFinishedPlaying(UObject* EventSource, UObject* EventFocus, FFortClientEvent& ClientEvent); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C.HandleAllowSkip
	// void HandleAllowSkip();                                                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C.ExecuteUbergraph_Announce_EventCine
	// void ExecuteUbergraph_Announce_EventCine(int32_t EntryPoint);                                                            // [0x154a140] HasDefaults          
};

/// Class /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_Storm2018Cine.Announce_Storm2018Cine_C
/// Size: 0x0000 (0x0003B0 - 0x0003B0)
class AAnnounce_Storm2018Cine_C : public AAnnounce_EventCine_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
};

/// Class /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C
/// Size: 0x0028 (0x000388 - 0x0003B0)
class AAnnounce_OnboardingSatelliteCine_C : public AFortClientAnnouncement_Cinematic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x388, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UMediaSource*)                             SatelliteMediaSource                                        OFFSET(get<T>, {0x398, 8, 0, 0})
	DMember(bool)                                      AllowSkipping                                               OFFSET(get<bool>, {0x3A0, 1, 0, 0})
	CMember(EFortUIState)                              StartingState                                               OFFSET(get<T>, {0x3A1, 1, 0, 0})
	CMember(UFortMediaSubtitlesPlayer*)                SatelliteSubtitlesPlayer                                    OFFSET(get<T>, {0x3A8, 8, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.OnStateEntered_9B2A7CB14D8998F7D97BBB902DE431B7
	// void OnStateEntered_9B2A7CB14D8998F7D97BBB902DE431B7();                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.OnStateEntered_9AA291E3426E3967D1365A9851D878CE
	// void OnStateEntered_9AA291E3426E3967D1365A9851D878CE();                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.OnClientAnnouncementStart
	// void OnClientAnnouncementStart();                                                                                        // [0x154a140] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.OnClientAnnouncementStop
	// void OnClientAnnouncementStop();                                                                                         // [0x154a140] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.OnPlayerSkippedCutscene
	// void OnPlayerSkippedCutscene();                                                                                          // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.HandleClientEvent_CinematicFinishedPlaying
	// void HandleClientEvent_CinematicFinishedPlaying(UObject* EventSource, UObject* EventFocus, FFortClientEvent& ClientEvent); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.HandleAllowSkip
	// void HandleAllowSkip();                                                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.ExecuteUbergraph_Announce_OnboardingSatelliteCine
	// void ExecuteUbergraph_Announce_OnboardingSatelliteCine(int32_t EntryPoint);                                              // [0x154a140] HasDefaults          
};

/// Class /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_NameHomeBase.Announce_NameHomeBase_C
/// Size: 0x0008 (0x000550 - 0x000558)
class AAnnounce_NameHomeBase_C : public AAnnounce_TutorialConversation_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1368;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x550, 8, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_NameHomeBase.Announce_NameHomeBase_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_NameHomeBase.Announce_NameHomeBase_C.InitAnnouncement
	// void InitAnnouncement();                                                                                                 // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_NameHomeBase.Announce_NameHomeBase_C.HandleSentenceStart_UI
	// void HandleSentenceStart_UI(int32_t SentenceIdx);                                                                        // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_NameHomeBase.Announce_NameHomeBase_C.HandleSentenceStop_UI
	// void HandleSentenceStop_UI(int32_t SentenceIdx);                                                                         // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_NameHomeBase.Announce_NameHomeBase_C.ExecuteUbergraph_Announce_NameHomeBase
	// void ExecuteUbergraph_Announce_NameHomeBase(int32_t EntryPoint);                                                         // [0x154a140] None                 
};

/// Class /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C
/// Size: 0x00A0 (0x000318 - 0x0003B8)
class AHBOnboardingFlow_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 952;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x318, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UFortQuestItemDefinition*)                 OnboardingQuest                                             OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UFortQuestItemDefinition*)                 PlayPeriodicEventMovieQuest                                 OFFSET(get<T>, {0x330, 8, 0, 0})
	DMember(bool)                                      bPlayedPeriodicEventMovie                                   OFFSET(get<bool>, {0x338, 1, 0, 0})
	DMember(bool)                                      bHasRecheckedNeedToPlayPeriodicEventMovie                   OFFSET(get<bool>, {0x339, 1, 0, 0})
	SMember(FDataTableRowHandle)                       CompleteZoneObjective                                       OFFSET(getStruct<T>, {0x340, 16, 0, 0})
	SMember(FDataTableRowHandle)                       NameHomebaseObjective                                       OFFSET(getStruct<T>, {0x350, 16, 0, 0})
	SMember(FMargin)                                   NotificationPadding                                         OFFSET(getStruct<T>, {0x360, 16, 0, 0})
	SMember(FDataTableRowHandle)                       PlaySatelliteCineObjective                                  OFFSET(getStruct<T>, {0x370, 16, 0, 0})
	CMember(UFortAccountItemDefinition*)               ShowNewsToken                                               OFFSET(get<T>, {0x380, 8, 0, 0})
	DMember(int32_t)                                   ClientQuestLoginRetryCount                                  OFFSET(get<int32_t>, {0x388, 4, 0, 0})
	DMember(int32_t)                                   ClientQuestLoginNumRetries                                  OFFSET(get<int32_t>, {0x38C, 4, 0, 0})
	SMember(FDataTableRowHandle)                       PlayPeriodicEventCineObjective                              OFFSET(getStruct<T>, {0x390, 16, 0, 0})
	SMember(FDataTableRowHandle)                       StormShieldDefenseObjective                                 OFFSET(getStruct<T>, {0x3A0, 16, 0, 0})
	CMember(UClass*)                                   PeriodicEventMovieAnnouncementClass                         OFFSET(get<T>, {0x3B0, 8, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.HasCompletedOnboardingObjective
	// bool HasCompletedOnboardingObjective();                                                                                  // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.GetCampaignQuestManager
	// void GetCampaignQuestManager(UFortQuestManager*& QuestManager);                                                          // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.GetOnboardingQuestItem
	// void GetOnboardingQuestItem(UFortQuestItem*& Result);                                                                    // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.CanAccessManagementFeatures
	// void CanAccessManagementFeatures(bool& Can Manage);                                                                      // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.RecheckNeedToPlayEventMovie
	// void RecheckNeedToPlayEventMovie(bool& WaitingToCheckAgain);                                                             // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.NeedsToPlayEventMovie
	// bool NeedsToPlayEventMovie();                                                                                            // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.Handle Client Quest Login Failed
	// void Handle Client Quest Login Failed();                                                                                 // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.ShowBannerSelect
	// void ShowBannerSelect();                                                                                                 // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.HandleMcpFailure
	// void HandleMcpFailure();                                                                                                 // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnCanceled_C2C889344301B8DBF8F046A2A175D133
	// void OnCanceled_C2C889344301B8DBF8F046A2A175D133();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnAllClientsReady_C2C889344301B8DBF8F046A2A175D133
	// void OnAllClientsReady_C2C889344301B8DBF8F046A2A175D133();                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnCanceled_856A325D44ECC73B857CE5B301E90D33
	// void OnCanceled_856A325D44ECC73B857CE5B301E90D33();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33
	// void OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33();                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_0A5ABC9C483947108FD9FB9980E7C62F
	// void OnFailure_0A5ABC9C483947108FD9FB9980E7C62F();                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnIgnored_0A5ABC9C483947108FD9FB9980E7C62F
	// void OnIgnored_0A5ABC9C483947108FD9FB9980E7C62F();                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_0A5ABC9C483947108FD9FB9980E7C62F
	// void OnSuccess_0A5ABC9C483947108FD9FB9980E7C62F();                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_F17CF9054AFDDDAF314AC4911BC9818F
	// void OnFailure_F17CF9054AFDDDAF314AC4911BC9818F();                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnIgnored_F17CF9054AFDDDAF314AC4911BC9818F
	// void OnIgnored_F17CF9054AFDDDAF314AC4911BC9818F();                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_F17CF9054AFDDDAF314AC4911BC9818F
	// void OnSuccess_F17CF9054AFDDDAF314AC4911BC9818F();                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_CC1C02F844ADF1F9F5546C8115CF00F0
	// void OnStateEntered_CC1C02F844ADF1F9F5546C8115CF00F0();                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnCanceled_856A325D44ECC73B857CE5B35313D7CD
	// void OnCanceled_856A325D44ECC73B857CE5B35313D7CD();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnAllClientsReady_856A325D44ECC73B857CE5B35313D7CD
	// void OnAllClientsReady_856A325D44ECC73B857CE5B35313D7CD();                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_6973C4804831A19E4BDA22AFFEE0F251
	// void OnStateEntered_6973C4804831A19E4BDA22AFFEE0F251();                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_FEE56B7E40F9EBA0E7D44DBF3391C2D6
	// void OnStateEntered_FEE56B7E40F9EBA0E7D44DBF3391C2D6();                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_74930F274B5470B17CF720953FE7E260
	// void OnFailure_74930F274B5470B17CF720953FE7E260();                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_74930F274B5470B17CF720953FE7E260
	// void OnSuccess_74930F274B5470B17CF720953FE7E260();                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_D3C1532F46B8ACB52198EBB597FE9EF0
	// void OnStateEntered_D3C1532F46B8ACB52198EBB597FE9EF0();                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_7FBC276641DD576B7417ED97A4734318
	// void OnStateEntered_7FBC276641DD576B7417ED97A4734318();                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_B1212BA945BD8297BCCDC69BA3015CC2
	// void OnStateEntered_B1212BA945BD8297BCCDC69BA3015CC2();                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.DialogResult_1D81E4B94CE33A3425130BABD5A7283B
	// void DialogResult_1D81E4B94CE33A3425130BABD5A7283B(EFortDialogResult Result, FName ResultName);                          // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_7E48C3B34B1AC823ECCC5BB9D4D63515
	// void OnStateEntered_7E48C3B34B1AC823ECCC5BB9D4D63515();                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_50CD26324B96B121A5B49DA66113AE5D
	// void OnFailure_50CD26324B96B121A5B49DA66113AE5D();                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnIgnored_50CD26324B96B121A5B49DA66113AE5D
	// void OnIgnored_50CD26324B96B121A5B49DA66113AE5D();                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_50CD26324B96B121A5B49DA66113AE5D
	// void OnSuccess_50CD26324B96B121A5B49DA66113AE5D();                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_BB8A89D3479CA430A9243EB07FF8B51D
	// void OnStateEntered_BB8A89D3479CA430A9243EB07FF8B51D();                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_C786FAEA4B655E5031CC7A8B4C8B9DB5
	// void OnFailure_C786FAEA4B655E5031CC7A8B4C8B9DB5();                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_C786FAEA4B655E5031CC7A8B4C8B9DB5
	// void OnSuccess_C786FAEA4B655E5031CC7A8B4C8B9DB5();                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.StartPlaySatelliteCine
	// void StartPlaySatelliteCine();                                                                                           // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.StartNameHomebase
	// void StartNameHomebase();                                                                                                // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_HomebasePersonalized
	// void HandleClientEvent_HomebasePersonalized(UObject* EventSource, UObject* EventFocus, FFortClientEvent& ClientEvent);   // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.StartOnboardingZone
	// void StartOnboardingZone();                                                                                              // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.StartFlow
	// void StartFlow();                                                                                                        // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.HandleCheckOnboardingZoneComplete
	// void HandleCheckOnboardingZoneComplete();                                                                                // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.HandleSwitchToHomeBase
	// void HandleSwitchToHomeBase();                                                                                           // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.HandlePlaySatelliteCine
	// void HandlePlaySatelliteCine();                                                                                          // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.HandleNameHomebase
	// void HandleNameHomebase();                                                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.Handle Client Quest Login Failed Retry
	// void Handle Client Quest Login Failed Retry();                                                                           // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.Handle Client Quest Login Retries Exhausted
	// void Handle Client Quest Login Retries Exhausted();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_SubGameSelected
	// void HandleClientEvent_SubGameSelected(UObject* EventSource, UObject* EventFocus, FFortClientEvent& ClientEvent);        // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_OnRejoinGameAbandoned
	// void HandleClientEvent_OnRejoinGameAbandoned(UObject* EventSource, UObject* EventFocus, FFortClientEvent& ClientEvent);  // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.HandleCompanionAppOnboardingAbort
	// void HandleCompanionAppOnboardingAbort();                                                                                // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.HandleNoEntitlement
	// void HandleNoEntitlement();                                                                                              // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.HandleForcedLogout
	// void HandleForcedLogout(FText Reason Title, FText Reason);                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.HandlePlayEventCine
	// void HandlePlayEventCine();                                                                                              // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.HandleMobileManagementRestricted
	// void HandleMobileManagementRestricted();                                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_PlayEventMovie
	// void HandleClientEvent_PlayEventMovie(UObject* EventSource, UObject* EventFocus, FFortClientEvent& ClientEvent);         // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_SubGameSelection
	// void HandleClientEvent_SubGameSelection(UObject* EventSource, UObject* EventFocus, FFortClientEvent& ClientEvent);       // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_RejoinAvailable
	// void HandleClientEvent_RejoinAvailable(UObject* EventSource, UObject* EventFocus, FFortClientEvent& ClientEvent);        // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.HandleSubGameSelection
	// void HandleSubGameSelection();                                                                                           // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.ReenterFlow
	// void ReenterFlow();                                                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.ExecuteUbergraph_HBOnboardingFlow
	// void ExecuteUbergraph_HBOnboardingFlow(int32_t EntryPoint);                                                              // [0x154a140] HasDefaults          
};

/// Class /Game/FrontEnd/FrontEndSettingsBP.FrontEndSettingsBP_C
/// Size: 0x0008 (0x000328 - 0x000330)
class AFrontEndSettingsBP_C : public AFrontEndSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x328, 8, 0, 0})
};

/// Class /Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C
/// Size: 0x0020 (0x0008B0 - 0x0008D0)
class AVaultCamera_Blueprint_C : public AFortCameraBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2256;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x8B0, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          CachedPawn                                                  OFFSET(get<T>, {0x8B8, 8, 0, 0})
	DMember(bool)                                      MouseDown                                                   OFFSET(get<bool>, {0x8C0, 1, 0, 0})
	CMember(AVaultCamera_Blueprint_C*)                 VaultActor                                                  OFFSET(get<T>, {0x8C8, 8, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C.OnDeactivated
	// void OnDeactivated();                                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C.OnActivated
	// void OnActivated();                                                                                                      // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C.ExecuteUbergraph_VaultCamera_Blueprint
	// void ExecuteUbergraph_VaultCamera_Blueprint(int32_t EntryPoint);                                                         // [0x154a140] None                 
};

/// Class /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C
/// Size: 0x0080 (0x0008B0 - 0x000930)
class AStoreCamera_Blueprint_C : public AFortCameraBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2352;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x8B0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Mesh_DarkenBG                                               OFFSET(get<T>, {0x8B8, 8, 0, 0})
	CMember(UCameraComponent*)                         CameraPlaceholderGround                                     OFFSET(get<T>, {0x8C0, 8, 0, 0})
	DMember(float)                                     ChoicePack_NewTrack_0_ACA3841D4D5084BE3482FA8EBB7CE9C0      OFFSET(get<float>, {0x8C8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           ChoicePack__Direction_ACA3841D4D5084BE3482FA8EBB7CE9C0      OFFSET(get<T>, {0x8CC, 1, 0, 0})
	CMember(UTimelineComponent*)                       ChoicePack                                                  OFFSET(get<T>, {0x8D0, 8, 0, 0})
	DMember(float)                                     Timeline_0_NewTrack_0_6555812E4B246E6144D3C99FC49F7FE9      OFFSET(get<float>, {0x8D8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Timeline_0__Direction_6555812E4B246E6144D3C99FC49F7FE9      OFFSET(get<T>, {0x8DC, 1, 0, 0})
	CMember(UTimelineComponent*)                       Timeline                                                    OFFSET(get<T>, {0x8E0, 8, 0, 0})
	SMember(FVector)                                   CameraGroundLoc                                             OFFSET(getStruct<T>, {0x8E8, 12, 0, 0})
	SMember(FRotator)                                  CameraGroundRot                                             OFFSET(getStruct<T>, {0x8F4, 12, 0, 0})
	SMember(FVector)                                   CameraOriginalLoc                                           OFFSET(getStruct<T>, {0x900, 12, 0, 0})
	SMember(FRotator)                                  CameraOriginalRot                                           OFFSET(getStruct<T>, {0x90C, 12, 0, 0})
	DMember(bool)                                      CameraInStartPos                                            OFFSET(get<bool>, {0x918, 1, 0, 0})
	DMember(bool)                                      MouseDown                                                   OFFSET(get<bool>, {0x919, 1, 0, 0})
	CMember(AStorePinataMaster_Parent_C*)              PinataInLevel                                               OFFSET(get<T>, {0x920, 8, 0, 0})
	CMember(AStoreCardReveal_Parent_C*)                CardRevealInLevel                                           OFFSET(get<T>, {0x928, 8, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.Timeline_0__FinishedFunc
	// void Timeline_0__FinishedFunc();                                                                                         // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.Timeline_0__UpdateFunc
	// void Timeline_0__UpdateFunc();                                                                                           // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePack__FinishedFunc
	// void ChoicePack__FinishedFunc();                                                                                         // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePack__UpdateFunc
	// void ChoicePack__UpdateFunc();                                                                                           // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.OnActivated
	// void OnActivated();                                                                                                      // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.OnDeactivated
	// void OnDeactivated();                                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.OpeningCameraTransition
	// void OpeningCameraTransition();                                                                                          // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.ResetCamera
	// void ResetCamera();                                                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.DarkenBGVisibility
	// void DarkenBGVisibility(bool Enable);                                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePackFOV-Out
	// void ChoicePackFOV-Out();                                                                                                // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePackFOV-In
	// void ChoicePackFOV-In();                                                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.ExecuteUbergraph_StoreCamera_Blueprint
	// void ExecuteUbergraph_StoreCamera_Blueprint(int32_t EntryPoint);                                                         // [0x154a140] HasDefaults          
};

/// Class /Game/FrontEnd/Cameras/SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C
/// Size: 0x0008 (0x0008B0 - 0x0008B8)
class ASpecialEventsCamera_Blueprint_C : public AFortCameraBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2232;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x8B0, 8, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/Cameras/SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C.OnActivated
	// void OnActivated();                                                                                                      // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C.OnDeactivated
	// void OnDeactivated();                                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C.ExecuteUbergraph_SpecialEventsCamera_Blueprint
	// void ExecuteUbergraph_SpecialEventsCamera_Blueprint(int32_t EntryPoint);                                                 // [0x154a140] None                 
};

/// Class /Game/FrontEnd/Cameras/LoginCamera_Blueprint.LoginCamera_Blueprint_C
/// Size: 0x0018 (0x0008B0 - 0x0008C8)
class ALoginCamera_Blueprint_C : public AFortCameraBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2248;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x8B0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     StaticMesh                                                  OFFSET(get<T>, {0x8B8, 8, 0, 0})
	CMember(UCameraComponent*)                         LoginCamera                                                 OFFSET(get<T>, {0x8C0, 8, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/Cameras/LoginCamera_Blueprint.LoginCamera_Blueprint_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/LoginCamera_Blueprint.LoginCamera_Blueprint_C.OnActivated
	// void OnActivated();                                                                                                      // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/LoginCamera_Blueprint.LoginCamera_Blueprint_C.ExecuteUbergraph_LoginCamera_Blueprint
	// void ExecuteUbergraph_LoginCamera_Blueprint(int32_t EntryPoint);                                                         // [0x154a140] None                 
};

/// Class /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C
/// Size: 0x0018 (0x0008B0 - 0x0008C8)
class AHeroesCamera_Blueprint_C : public AFortCameraBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2248;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x8B0, 8, 0, 0})
	DMember(bool)                                      MouseDown                                                   OFFSET(get<bool>, {0x8B8, 1, 0, 0})
	CMember(AFortPlayerPawn*)                          Cached_Pawn                                                 OFFSET(get<T>, {0x8C0, 8, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.HandleMousePress
	// void HandleMousePress();                                                                                                 // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.HandleMouseRelease
	// void HandleMouseRelease();                                                                                               // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent(FKey Key);                                                           // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent(FKey Key);                                                           // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_RightMouseButton_K2Node_InputKeyEvent(FKey Key);                                                          // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_RightMouseButton_K2Node_InputKeyEvent(FKey Key);                                                          // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.OnDeactivated
	// void OnDeactivated();                                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.OnActivated
	// void OnActivated();                                                                                                      // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.ExecuteUbergraph_HeroesCamera_Blueprint
	// void ExecuteUbergraph_HeroesCamera_Blueprint(int32_t EntryPoint);                                                        // [0x154a140] HasDefaults          
};

/// Class /Game/FrontEnd/WM_PinManager.WM_PinManager_C
/// Size: 0x0010 (0x000338 - 0x000348)
class AWM_PinManager_C : public AWorldMapPinManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x338, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x340, 8, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/WM_PinManager.WM_PinManager_C.CreateWorldMapPin
	// AWorldMapPin* CreateWorldMapPin(FString TheaterId);                                                                      // [0x154a140] Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/WM_PinManager.WM_PinManager_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/WM_PinManager.WM_PinManager_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/FrontEnd/WM_PinManager.WM_PinManager_C.ExecuteUbergraph_WM_PinManager
	// void ExecuteUbergraph_WM_PinManager(int32_t EntryPoint);                                                                 // [0x154a140] None                 
};

/// Class /Game/FrontEnd/Store/Cards/Blueprints/ChoiceCardName.ChoiceCardName_C
/// Size: 0x0030 (0x000210 - 0x000240)
class UChoiceCardName_C : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	CMember(UCommonBorder*)                            RarityBG                                                    OFFSET(get<T>, {0x210, 8, 0, 0})
	CMember(UCommonBorder*)                            RarityBorder                                                OFFSET(get<T>, {0x218, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextName                                                    OFFSET(get<T>, {0x220, 8, 0, 0})
	SMember(FText)                                     DisplayText                                                 OFFSET(getStruct<T>, {0x228, 24, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/Store/Cards/Blueprints/ChoiceCardName.ChoiceCardName_C.UpdateText
	// void UpdateText(FText DisplayText, EFortRarity Rarity);                                                                  // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/FrontEnd/Store/Cards/Blueprints/ChoiceCardCount.ChoiceCardCount_C
/// Size: 0x0020 (0x000210 - 0x000230)
class UChoiceCardCount_C : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	CMember(UCommonTextBlock*)                         TextHave                                                    OFFSET(get<T>, {0x210, 8, 0, 0})
	SMember(FText)                                     DisplayText                                                 OFFSET(getStruct<T>, {0x218, 24, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/Store/Cards/Blueprints/ChoiceCardCount.ChoiceCardCount_C.UpdateText
	// void UpdateText(int32_t InventoryCount);                                                                                 // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/FrontEnd/Store/Weapons/Blueprints/Master/StoreWeaponMaster_BP.StoreWeaponMaster_BP_C
/// Size: 0x00D8 (0x000318 - 0x0003F0)
class AStoreWeaponMaster_BP_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x318, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     WeaponHiddenLocation                                        OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   SKMeleeWeapon                                               OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     MeleeWeaponDefaultPosition                                  OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     WeaponRoot                                                  OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(USceneComponent*)                          PinataSceneRoot                                             OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(USoundBase*)                               SoundWeaponReady                                            OFFSET(get<T>, {0x348, 40, 0, 0})
	CMember(USoundBase*)                               SoundWeaponSwing                                            OFFSET(get<T>, {0x370, 40, 0, 0})
	CMember(USoundBase*)                               SoundWeaponImpact                                           OFFSET(get<T>, {0x398, 40, 0, 0})
	CMember(USkeletalMeshComponent*)                   WeaponObject                                                OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(USkeletalMesh*)                            WeaponAssetID                                               OFFSET(get<T>, {0x3C8, 40, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/Store/Weapons/Blueprints/Master/StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Weapons/Blueprints/Master/StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.OnLoaded_F90E39F1410BE83EB4E318A6426EF786
	// void OnLoaded_F90E39F1410BE83EB4E318A6426EF786(UObject* Loaded);                                                         // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Weapons/Blueprints/Master/StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Weapons/Blueprints/Master/StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Weapons/Blueprints/Master/StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.ExecuteUbergraph_StoreWeaponMaster_BP
	// void ExecuteUbergraph_StoreWeaponMaster_BP(int32_t EntryPoint);                                                          // [0x154a140] None                 
};

/// Class /Game/FrontEnd/Store/Weapons/Blueprints/Master/Children/UseableWeaponsObject.UseableWeaponsObject_C
/// Size: 0x0018 (0x000028 - 0x000040)
class UUseableWeaponsObject_C : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	CMember(TArray<UClass*>)                           UseableWeaponsArray                                         OFFSET(get<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/Store/Weapons/Blueprints/Master/Children/UseableWeaponsObject.UseableWeaponsObject_C.ExecuteUbergraph_UseableWeaponsObject
	// void ExecuteUbergraph_UseableWeaponsObject(int32_t EntryPoint);                                                          // [0x154a140] None                 
};

/// Class /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C
/// Size: 0x07B8 (0x000328 - 0x000AE0)
class AStorePinataMaster_BP_C : public AStorePinataMaster_Parent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2784;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x328, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLightStoreLOW                                            OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(USceneComponent*)                          LightsRoot                                                  OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     MeshScreenshotBG                                            OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(USceneComponent*)                          FXRoot                                                      OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UAudioComponent*)                          Llama_Voice                                                 OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UArrowComponent*)                          CardRoot                                                    OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(USceneComponent*)                          GroundRoot                                                  OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     WeaponRoot                                                  OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     MeleeWeaponMobileVersion                                    OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow3                                                      OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(UDirectionalLightComponent*)               MobileDirectionalLight                                      OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(USceneComponent*)                          MobileLightsParent                                          OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     MeshScreenshotRopeEraser                                    OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     PhysicsBroomCube                                            OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(UDirectionalLightComponent*)               DirectionalLight_LightShafts                                OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 PSC_PinataFallingDebris                                     OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 PSC_PinataExplode                                           OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 PSC_PinataHit                                               OFFSET(get<T>, {0x3B8, 8, 0, 0})
	CMember(USpotLightComponent*)                      SpotLightRim02_A                                            OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(USpotLightComponent*)                      SpotLightRim01_A                                            OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow2                                                      OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow1                                                      OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(UDirectionalLightComponent*)               DirectionalLight_A                                          OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow                                                       OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(USpotLightComponent*)                      SpotLightRim_B                                              OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UDirectionalLightComponent*)               DirectionalLight_B                                          OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(USpotLightComponent*)                      SpotLightMain_B                                             OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLightStore                                               OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     MeleeWeaponDummyAttackFinish                                OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_VindertechCard01                                          OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_CandyCorn02                                               OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_CandyCorn01                                               OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_Candy_Mint13                                              OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_Candy_Mint12                                              OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_Candy_Mint11                                              OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_Candy_Mint10                                              OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_Candy_Jellybean08                                         OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_Candy_Mint09                                              OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_Candy_Jellybean07                                         OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_Candy_Jellybean06                                         OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_Candy_Mint08                                              OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_Candy_Jellybean05                                         OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_Candy_Jellybean04                                         OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_Candy_Mint07                                              OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_Candy_Jellybean01                                         OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_Candy_Mint05                                              OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_Candy_Mint06                                              OFFSET(get<T>, {0x4A0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_Candy_Jellybean03                                         OFFSET(get<T>, {0x4A8, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_Candy_Jellybean02                                         OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_Candy_Mint03                                              OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_Candy_Mint01                                              OFFSET(get<T>, {0x4C0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_Candy_Mint04                                              OFFSET(get<T>, {0x4C8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 P_Broomdust_01                                              OFFSET(get<T>, {0x4D0, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   SK_PushBroom                                                OFFSET(get<T>, {0x4D8, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     MeleeWeaponDummyCharge                                      OFFSET(get<T>, {0x4E0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     MeleeWeaponDummyHidden                                      OFFSET(get<T>, {0x4E8, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     MeleeWeaponDummy                                            OFFSET(get<T>, {0x4F0, 8, 0, 0})
	DMember(float)                                     TL_PhaseBFade_MainGround_7BEC5298479CA735A53B1CB25EC926EF   OFFSET(get<float>, {0x4F8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_PhaseBFade__Direction_7BEC5298479CA735A53B1CB25EC926EF   OFFSET(get<T>, {0x4FC, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_PhaseBFade                                               OFFSET(get<T>, {0x500, 8, 0, 0})
	DMember(float)                                     TL_Upgrade3_UpgradeWipe_B21C849A48AE2BB921CD949CA9B9A20F    OFFSET(get<float>, {0x508, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_Upgrade3__Direction_B21C849A48AE2BB921CD949CA9B9A20F     OFFSET(get<T>, {0x50C, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_Upgrade3                                                 OFFSET(get<T>, {0x510, 8, 0, 0})
	DMember(float)                                     TL_DropEyeAnim_Blink_4A309648421EBB6E126EF69E3A1C19D6       OFFSET(get<float>, {0x518, 4, 0, 0})
	DMember(float)                                     TL_DropEyeAnim_LocLerp_4A309648421EBB6E126EF69E3A1C19D6     OFFSET(get<float>, {0x51C, 4, 0, 0})
	DMember(float)                                     TL_DropEyeAnim_SizeLerp_4A309648421EBB6E126EF69E3A1C19D6    OFFSET(get<float>, {0x520, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_DropEyeAnim__Direction_4A309648421EBB6E126EF69E3A1C19D6  OFFSET(get<T>, {0x524, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_DropEyeAnim                                              OFFSET(get<T>, {0x528, 8, 0, 0})
	DMember(float)                                     TL_PupilContracts_ContractLerpLoc_FE4A75A84413E69729FBCD9FE414408A OFFSET(get<float>, {0x530, 4, 0, 0})
	DMember(float)                                     TL_PupilContracts_ContractLerpA_FE4A75A84413E69729FBCD9FE414408A OFFSET(get<float>, {0x534, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_PupilContracts__Direction_FE4A75A84413E69729FBCD9FE414408A OFFSET(get<T>, {0x538, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_PupilContracts                                           OFFSET(get<T>, {0x540, 8, 0, 0})
	DMember(float)                                     TL_SuspiciousEyes_SuspiciousEyeLoc_D8D2FF1F436C6B879D28EFAA86F1BBC2 OFFSET(get<float>, {0x548, 4, 0, 0})
	DMember(float)                                     TL_SuspiciousEyes_SuspiciousEyelids_D8D2FF1F436C6B879D28EFAA86F1BBC2 OFFSET(get<float>, {0x54C, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_SuspiciousEyes__Direction_D8D2FF1F436C6B879D28EFAA86F1BBC2 OFFSET(get<T>, {0x550, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_SuspiciousEyes                                           OFFSET(get<T>, {0x558, 8, 0, 0})
	DMember(float)                                     TL_WeaponCharge_AttackPlayRate_8CB70918473F7BE5EF5A2F827BB25ABF OFFSET(get<float>, {0x560, 4, 0, 0})
	DMember(float)                                     TL_WeaponCharge_TimeHeld_8CB70918473F7BE5EF5A2F827BB25ABF   OFFSET(get<float>, {0x564, 4, 0, 0})
	DMember(float)                                     TL_WeaponCharge_WeaponChargeRotateLerp_8CB70918473F7BE5EF5A2F827BB25ABF OFFSET(get<float>, {0x568, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_WeaponCharge__Direction_8CB70918473F7BE5EF5A2F827BB25ABF OFFSET(get<T>, {0x56C, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_WeaponCharge                                             OFFSET(get<T>, {0x570, 8, 0, 0})
	DMember(float)                                     TL_PushbroomAnim_ParticleScaleOut_5F6C90144EDBBEAF398302AB845E844F OFFSET(get<float>, {0x578, 4, 0, 0})
	DMember(float)                                     TL_PushbroomAnim_BroomLocX_5F6C90144EDBBEAF398302AB845E844F OFFSET(get<float>, {0x57C, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_PushbroomAnim__Direction_5F6C90144EDBBEAF398302AB845E844F OFFSET(get<T>, {0x580, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_PushbroomAnim                                            OFFSET(get<T>, {0x588, 8, 0, 0})
	DMember(float)                                     TL_ChangeLighting_Ground_A488F4E44EB8E7A0F9886E8F7CA1BDC4   OFFSET(get<float>, {0x590, 4, 0, 0})
	DMember(float)                                     TL_ChangeLighting_Main_A488F4E44EB8E7A0F9886E8F7CA1BDC4     OFFSET(get<float>, {0x594, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_ChangeLighting__Direction_A488F4E44EB8E7A0F9886E8F7CA1BDC4 OFFSET(get<T>, {0x598, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_ChangeLighting                                           OFFSET(get<T>, {0x5A0, 8, 0, 0})
	DMember(float)                                     TL_CardCough_NewTrack_0_DAEEB3A641472A9A78E0BB93BA6CE0E0    OFFSET(get<float>, {0x5A8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_CardCough__Direction_DAEEB3A641472A9A78E0BB93BA6CE0E0    OFFSET(get<T>, {0x5AC, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_CardCough                                                OFFSET(get<T>, {0x5B0, 8, 0, 0})
	DMember(float)                                     TL_EyesFollowMouseAgain_NewTrack_3_1BE27C46490CB7E2A3B07CA8042DE768 OFFSET(get<float>, {0x5B8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_EyesFollowMouseAgain__Direction_1BE27C46490CB7E2A3B07CA8042DE768 OFFSET(get<T>, {0x5BC, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_EyesFollowMouseAgain                                     OFFSET(get<T>, {0x5C0, 8, 0, 0})
	DMember(float)                                     TL_Upgrade2_UpgradeWipe_3313188D45B89EDEAD5CC8BD30ABBAC3    OFFSET(get<float>, {0x5C8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_Upgrade2__Direction_3313188D45B89EDEAD5CC8BD30ABBAC3     OFFSET(get<T>, {0x5CC, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_Upgrade2                                                 OFFSET(get<T>, {0x5D0, 8, 0, 0})
	DMember(float)                                     TL_UndarkenBG_NewTrack_0_C60EED984B4A5117E9941E920611D748   OFFSET(get<float>, {0x5D8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_UndarkenBG__Direction_C60EED984B4A5117E9941E920611D748   OFFSET(get<T>, {0x5DC, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_UndarkenBG                                               OFFSET(get<T>, {0x5E0, 8, 0, 0})
	DMember(float)                                     TL_RegularEyes_DizzyEyes_2259ACD0444C6333BC4BD3BF1C9EE1E5   OFFSET(get<float>, {0x5E8, 4, 0, 0})
	DMember(float)                                     TL_RegularEyes_NewTrack_3_2259ACD0444C6333BC4BD3BF1C9EE1E5  OFFSET(get<float>, {0x5EC, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_RegularEyes__Direction_2259ACD0444C6333BC4BD3BF1C9EE1E5  OFFSET(get<T>, {0x5F0, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_RegularEyes                                              OFFSET(get<T>, {0x5F8, 8, 0, 0})
	DMember(float)                                     TL_DarkenBG_NewTrack_0_C89B3A6D43D94BAC2627F18DC7E2A1D1     OFFSET(get<float>, {0x600, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_DarkenBG__Direction_C89B3A6D43D94BAC2627F18DC7E2A1D1     OFFSET(get<T>, {0x604, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_DarkenBG                                                 OFFSET(get<T>, {0x608, 8, 0, 0})
	DMember(float)                                     TL_Upgrade1_UpgradeWipe_DE6D0868440970D949F11B98CC0FC434    OFFSET(get<float>, {0x610, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_Upgrade1__Direction_DE6D0868440970D949F11B98CC0FC434     OFFSET(get<T>, {0x614, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_Upgrade1                                                 OFFSET(get<T>, {0x618, 8, 0, 0})
	DMember(float)                                     TL_Attack_WeaponRotateAttack_9355DE8041B051639599A9A8EA98EA0D OFFSET(get<float>, {0x620, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_Attack__Direction_9355DE8041B051639599A9A8EA98EA0D       OFFSET(get<T>, {0x624, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_Attack                                                   OFFSET(get<T>, {0x628, 8, 0, 0})
	DMember(float)                                     TL_EquipWeapon_NewTrack_2_443114684EA745E35026E98F24AA5387  OFFSET(get<float>, {0x630, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_EquipWeapon__Direction_443114684EA745E35026E98F24AA5387  OFFSET(get<T>, {0x634, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_EquipWeapon                                              OFFSET(get<T>, {0x638, 8, 0, 0})
	CMember(TArray<USoundBase*>)                       SoundWeaponGreetArray                                       OFFSET(get<T>, {0x640, 16, 0, 0})
	DMember(float)                                     Current_Delta                                               OFFSET(get<float>, {0x650, 4, 0, 0})
	SMember(FVector)                                   WorldLocationForMaterial                                    OFFSET(getStruct<T>, {0x654, 12, 0, 0})
	DMember(bool)                                      PackIsUpgrade1                                              OFFSET(get<bool>, {0x660, 1, 0, 0})
	DMember(bool)                                      PackIsUpgrade2                                              OFFSET(get<bool>, {0x661, 1, 0, 0})
	DMember(bool)                                      PackIsUpgrade0                                              OFFSET(get<bool>, {0x662, 1, 0, 0})
	DMember(bool)                                      HasAttacked1X                                               OFFSET(get<bool>, {0x663, 1, 0, 0})
	DMember(bool)                                      HasAttacked2X                                               OFFSET(get<bool>, {0x664, 1, 0, 0})
	DMember(bool)                                      HasAttacked3X                                               OFFSET(get<bool>, {0x665, 1, 0, 0})
	DMember(bool)                                      AbleToAttack                                                OFFSET(get<bool>, {0x666, 1, 0, 0})
	DMember(bool)                                      CanFastForward                                              OFFSET(get<bool>, {0x667, 1, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_PPT_Icon                                                OFFSET(get<T>, {0x668, 8, 0, 0})
	DMember(bool)                                      DebugUpgradeLevels                                          OFFSET(get<bool>, {0x670, 1, 0, 0})
	DMember(bool)                                      DebugLevel0_                                                OFFSET(get<bool>, {0x671, 1, 0, 0})
	DMember(bool)                                      DebugLevel1_                                                OFFSET(get<bool>, {0x672, 1, 0, 0})
	DMember(bool)                                      DebugLevel2_                                                OFFSET(get<bool>, {0x673, 1, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_PPT_Base                                                OFFSET(get<T>, {0x678, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_PPT_Tassles                                             OFFSET(get<T>, {0x680, 8, 0, 0})
	CMember(UTexture*)                                 CardPackIconTexture                                         OFFSET(get<T>, {0x688, 8, 0, 0})
	SMember(FLinearColor)                              CardPackIconColor                                           OFFSET(getStruct<T>, {0x690, 16, 0, 0})
	CMember(UParticleSystem*)                          FallingDebris_Lvl_0                                         OFFSET(get<T>, {0x6A0, 8, 0, 0})
	CMember(UParticleSystem*)                          FallingDebris_Lvl_1                                         OFFSET(get<T>, {0x6A8, 8, 0, 0})
	CMember(UParticleSystem*)                          Falling_Debris_Lvl_2                                        OFFSET(get<T>, {0x6B0, 8, 0, 0})
	CMember(UParticleSystem*)                          Explode_Lvl_0                                               OFFSET(get<T>, {0x6B8, 8, 0, 0})
	CMember(UParticleSystem*)                          Explode_Lvl_1                                               OFFSET(get<T>, {0x6C0, 8, 0, 0})
	CMember(UParticleSystem*)                          Explode_Lvl_2                                               OFFSET(get<T>, {0x6C8, 8, 0, 0})
	CMember(UParticleSystem*)                          Llama_Hit_Lvl_0                                             OFFSET(get<T>, {0x6D0, 8, 0, 0})
	CMember(UParticleSystem*)                          Llama_Hit_Lvl_1                                             OFFSET(get<T>, {0x6D8, 8, 0, 0})
	SMember(FLinearColor)                              Lvl1_Lightray_Color                                         OFFSET(getStruct<T>, {0x6E0, 16, 0, 0})
	SMember(FLinearColor)                              Lvl2_Lightray_Color                                         OFFSET(getStruct<T>, {0x6F0, 16, 0, 0})
	CMember(UMaterialInstance*)                        Material_PPT_Confetti                                       OFFSET(get<T>, {0x700, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_PinataEyeLeft                                           OFFSET(get<T>, {0x708, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_PinataEyeRight                                          OFFSET(get<T>, {0x710, 8, 0, 0})
	DMember(int32_t)                                   ChosenWeaponNumber                                          OFFSET(get<int32_t>, {0x718, 4, 0, 0})
	CMember(USoundBase*)                               Sound_Llama_Appear                                          OFFSET(get<T>, {0x720, 8, 0, 0})
	CMember(USoundBase*)                               Sound_CurrentWeaponReady                                    OFFSET(get<T>, {0x728, 8, 0, 0})
	CMember(USoundBase*)                               Sound_CurrentWeaponSwing                                    OFFSET(get<T>, {0x730, 8, 0, 0})
	CMember(USoundBase*)                               Sound_CurrentWeaponImpact                                   OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(USoundBase*)                               Sound_ChargeAttackLoop                                      OFFSET(get<T>, {0x740, 8, 0, 0})
	CMember(USoundBase*)                               Sound_Upgrade_Silver                                        OFFSET(get<T>, {0x748, 8, 0, 0})
	CMember(USoundBase*)                               Sound_Upgrade_Gold                                          OFFSET(get<T>, {0x750, 8, 0, 0})
	CMember(USoundBase*)                               Sound_Open_Normal                                           OFFSET(get<T>, {0x758, 8, 0, 0})
	CMember(USoundBase*)                               Sound_Open_Silver                                           OFFSET(get<T>, {0x760, 8, 0, 0})
	CMember(USoundBase*)                               Sound_Open_Gold                                             OFFSET(get<T>, {0x768, 8, 0, 0})
	CMember(USoundBase*)                               Dialog_Llama_Greet_Current                                  OFFSET(get<T>, {0x770, 8, 0, 0})
	CMember(USoundBase*)                               Dialog_Llama_OpenNormal_Current                             OFFSET(get<T>, {0x778, 8, 0, 0})
	CMember(USoundBase*)                               Dialog_Llama_UpgradeSilver_Current                          OFFSET(get<T>, {0x780, 8, 0, 0})
	CMember(USoundBase*)                               Dialog_Llama_UpgradeGold_Current                            OFFSET(get<T>, {0x788, 8, 0, 0})
	CMember(USoundBase*)                               Dialog_Llama_OpenSilver_Current                             OFFSET(get<T>, {0x790, 8, 0, 0})
	CMember(USoundBase*)                               Dialog_Llama_OpenGold_Current                               OFFSET(get<T>, {0x798, 8, 0, 0})
	CMember(USoundBase*)                               Sound_SweepUp                                               OFFSET(get<T>, {0x7A0, 8, 0, 0})
	DMember(float)                                     VO_Upgrade_Delay                                            OFFSET(get<float>, {0x7A8, 4, 0, 0})
	CMember(AFort_Entry_Music_Controller_BP_C*)        Fort_Entry_Music_Controller                                 OFFSET(get<T>, {0x7B0, 8, 0, 0})
	CMember(USoundBase*)                               Dialog_Llama_PreHit_Current                                 OFFSET(get<T>, {0x7B8, 8, 0, 0})
	CMember(USoundBase*)                               Sound_Music_Drop                                            OFFSET(get<T>, {0x7C0, 8, 0, 0})
	CMember(USoundBase*)                               Sound_Music_Open                                            OFFSET(get<T>, {0x7C8, 8, 0, 0})
	DMember(float)                                     TimeHeldDown                                                OFFSET(get<float>, {0x7D0, 4, 0, 0})
	CMember(USkeletalMeshComponent*)                   WeaponObject                                                OFFSET(get<T>, {0x7D8, 8, 0, 0})
	CMember(TArray<FVector>)                           WeaponListOffsetLoc                                         OFFSET(get<T>, {0x7E0, 16, 0, 0})
	CMember(AStoreWeaponMaster_BP_C*)                  SpawnedWeaponBlueprint                                      OFFSET(get<T>, {0x7F0, 8, 0, 0})
	CMember(AStoreCamera_Blueprint_C*)                 StoreCameraInLevel                                          OFFSET(get<T>, {0x7F8, 8, 0, 0})
	DMember(bool)                                      AttackLeftMousePressed                                      OFFSET(get<bool>, {0x800, 1, 0, 0})
	CMember(AStoreCardReveal_BP_C*)                    StoreCardRevealInLevel                                      OFFSET(get<T>, {0x808, 8, 0, 0})
	DMember(int32_t)                                   AmountOfWeapons                                             OFFSET(get<int32_t>, {0x810, 4, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_PPT_Foil                                                OFFSET(get<T>, {0x818, 8, 0, 0})
	DMember(bool)                                      DebugPinataScreenshot                                       OFFSET(get<bool>, {0x820, 1, 0, 0})
	DMember(float)                                     DirLightA_BaseSetting                                       OFFSET(get<float>, {0x824, 4, 0, 0})
	DMember(float)                                     RimLight01_A_BaseSetting                                    OFFSET(get<float>, {0x828, 4, 0, 0})
	DMember(float)                                     SpotLightMain_B_BaseSetting                                 OFFSET(get<float>, {0x82C, 4, 0, 0})
	DMember(float)                                     RimLight_B_BaseSetting                                      OFFSET(get<float>, {0x830, 4, 0, 0})
	DMember(float)                                     DirLight_B_BaseSetting                                      OFFSET(get<float>, {0x834, 4, 0, 0})
	DMember(bool)                                      DebugUseSpecificWeapon                                      OFFSET(get<bool>, {0x838, 1, 0, 0})
	CMember(UFortPackPersonality*)                     CurrentPackPersonality                                      OFFSET(get<T>, {0x840, 8, 0, 0})
	CMember(USoundBase*)                               Sound_PinataSmashed                                         OFFSET(get<T>, {0x848, 8, 0, 0})
	CMember(USoundBase*)                               Sound_PinataBonked                                          OFFSET(get<T>, {0x850, 8, 0, 0})
	DMember(bool)                                      LetTickUpdate                                               OFFSET(get<bool>, {0x858, 1, 0, 0})
	SMember(FTransform)                                MeleeWeaponPreAttackTrans                                   OFFSET(getStruct<T>, {0x860, 48, 0, 0})
	DMember(float)                                     AttackPlayRate                                              OFFSET(get<float>, {0x890, 4, 0, 0})
	SMember(FTransform)                                MeleeWeaponHiddenTrans                                      OFFSET(getStruct<T>, {0x8A0, 48, 0, 0})
	SMember(FTransform)                                MeleeWeaponAttackFinishTrans                                OFFSET(getStruct<T>, {0x8D0, 48, 0, 0})
	SMember(FTransform)                                MeleeWeaponChargeTrans                                      OFFSET(getStruct<T>, {0x900, 48, 0, 0})
	SMember(FTransform)                                MeleeWeaponPreChargeTrans                                   OFFSET(getStruct<T>, {0x930, 48, 0, 0})
	SMember(FTransform)                                MeleeWeaponEquipDefaultTrans                                OFFSET(getStruct<T>, {0x960, 48, 0, 0})
	SMember(FTransform)                                MeleeWeaponEquipAdjustedTrans                               OFFSET(getStruct<T>, {0x990, 48, 0, 0})
	CMember(USkeletalMeshComponent*)                   PinataSKMeshComponent                                       OFFSET(get<T>, {0x9C0, 8, 0, 0})
	CMember(UAnimSequence*)                            AnimDrop                                                    OFFSET(get<T>, {0x9C8, 8, 0, 0})
	CMember(UAnimSequence*)                            AnimHit                                                     OFFSET(get<T>, {0x9D0, 8, 0, 0})
	CMember(UAnimSequence*)                            AnimHitUpgradeA                                             OFFSET(get<T>, {0x9D8, 8, 0, 0})
	CMember(UAnimSequence*)                            AnimHitUpgradeB                                             OFFSET(get<T>, {0x9E0, 8, 0, 0})
	CMember(UAnimSequence*)                            AnimDestroy                                                 OFFSET(get<T>, {0x9E8, 8, 0, 0})
	CMember(UAnimSequence*)                            AnimDestroyUpgradeA                                         OFFSET(get<T>, {0x9F0, 8, 0, 0})
	CMember(UAnimSequence*)                            AnimDestroyUpgradeB                                         OFFSET(get<T>, {0x9F8, 8, 0, 0})
	SMember(FName)                                     RightEyeBoneName                                            OFFSET(getStruct<T>, {0xA00, 8, 0, 0})
	SMember(FName)                                     LeftEyeBoneName                                             OFFSET(getStruct<T>, {0xA08, 8, 0, 0})
	SMember(FName)                                     BodyRootBoneName                                            OFFSET(getStruct<T>, {0xA10, 8, 0, 0})
	DMember(bool)                                      DebugCardRevealInLevel                                      OFFSET(get<bool>, {0xA18, 1, 0, 0})
	DMember(float)                                     RimLight02_A_BaseSetting                                    OFFSET(get<float>, {0xA1C, 4, 0, 0})
	DMember(bool)                                      LetTickUpdateEyes                                           OFFSET(get<bool>, {0xA20, 1, 0, 0})
	DMember(bool)                                      FirstCard                                                   OFFSET(get<bool>, {0xA21, 1, 0, 0})
	DMember(bool)                                      DebugLevel3_                                                OFFSET(get<bool>, {0xA22, 1, 0, 0})
	DMember(bool)                                      PackIsUpgrade3                                              OFFSET(get<bool>, {0xA23, 1, 0, 0})
	DMember(bool)                                      HasAttacked4X                                               OFFSET(get<bool>, {0xA24, 1, 0, 0})
	CMember(UAnimSequence*)                            AnimHitUpgradeC                                             OFFSET(get<T>, {0xA28, 8, 0, 0})
	CMember(UAnimSequence*)                            AnimDestroyUpgradeC                                         OFFSET(get<T>, {0xA30, 8, 0, 0})
	SMember(FLinearColor)                              Lvl3_Lightray_Color                                         OFFSET(getStruct<T>, {0xA38, 16, 0, 0})
	CMember(UParticleSystem*)                          Explode_Lvl_3                                               OFFSET(get<T>, {0xA48, 8, 0, 0})
	CMember(UParticleSystem*)                          Falling_Debris_Lvl_3                                        OFFSET(get<T>, {0xA50, 8, 0, 0})
	CMember(UParticleSystem*)                          Llama_Hit_Lvl_2                                             OFFSET(get<T>, {0xA58, 8, 0, 0})
	CMember(TArray<UStaticMeshComponent*>)             CandyPhysicsComponentsArray                                 OFFSET(get<T>, {0xA60, 16, 0, 0})
	DMember(int32_t)                                   TotalCandySpawned                                           OFFSET(get<int32_t>, {0xA70, 4, 0, 0})
	DMember(int32_t)                                   TotalCandyAllowable                                         OFFSET(get<int32_t>, {0xA74, 4, 0, 0})
	DMember(bool)                                      StopCandySpawn                                              OFFSET(get<bool>, {0xA78, 1, 0, 0})
	DMember(int32_t)                                   CandySpawnedTillSlowDown                                    OFFSET(get<int32_t>, {0xA7C, 4, 0, 0})
	DMember(bool)                                      SlowCandySpawn                                              OFFSET(get<bool>, {0xA80, 1, 0, 0})
	DMember(bool)                                      ShowOpenAllPacks                                            OFFSET(get<bool>, {0xA81, 1, 0, 0})
	DMember(bool)                                      OpenAllPacks                                                OFFSET(get<bool>, {0xA82, 1, 0, 0})
	DMember(bool)                                      OpenAllPacksFirstCycle                                      OFFSET(get<bool>, {0xA83, 1, 0, 0})
	DMember(bool)                                      IsES2Limited                                                OFFSET(get<bool>, {0xA84, 1, 0, 0})
	DMember(bool)                                      DebugPinataMobile                                           OFFSET(get<bool>, {0xA85, 1, 0, 0})
	DMember(bool)                                      DebugWeapons                                                OFFSET(get<bool>, {0xA86, 1, 0, 0})
	CMember(UClass*)                                   LoadedWeaponClass                                           OFFSET(get<T>, {0xA88, 8, 0, 0})
	CMember(UMaterialInterface*)                       RegularMaterial_Confetti                                    OFFSET(get<T>, {0xA90, 8, 0, 0})
	DMember(bool)                                      UseSpecificWeapon                                           OFFSET(get<bool>, {0xA98, 1, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_LlamaLeather                                            OFFSET(get<T>, {0xAA0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     SpecialProp1                                                OFFSET(get<T>, {0xAA8, 8, 0, 0})
	DMember(int32_t)                                   RandomWeaponClass                                           OFFSET(get<int32_t>, {0xAB0, 4, 0, 0})
	DMember(int32_t)                                   PreviousRandomWeaponClass                                   OFFSET(get<int32_t>, {0xAB4, 4, 0, 0})
	CMember(TArray<FVector>)                           WeaponListOffsetLoc_Backup                                  OFFSET(get<T>, {0xAB8, 16, 0, 0})
	DMember(bool)                                      DebugLightingPC                                             OFFSET(get<bool>, {0xAC8, 1, 0, 0})
	DMember(bool)                                      DebugLightingLOW                                            OFFSET(get<bool>, {0xAC9, 1, 0, 0})
	CMember(ABoxReflectionCapture*)                    ReflectionCaptureActor                                      OFFSET(get<T>, {0xAD0, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_LlamaRope                                               OFFSET(get<T>, {0xAD8, 8, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.SwitchLightingLOW
	// void SwitchLightingLOW(bool Visibility);                                                                                 // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.SwitchLightingPC
	// void SwitchLightingPC(bool Visibility);                                                                                  // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.ChooseRandomWeapon
	// void ChooseRandomWeapon();                                                                                               // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.PackPersonalitySounds
	// void PackPersonalitySounds();                                                                                            // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.DefinePinataAssets
	// void DefinePinataAssets();                                                                                               // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL-DarkenBG__FinishedFunc
	// void TL-DarkenBG__FinishedFunc();                                                                                        // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL-DarkenBG__UpdateFunc
	// void TL-DarkenBG__UpdateFunc();                                                                                          // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL-UndarkenBG__FinishedFunc
	// void TL-UndarkenBG__FinishedFunc();                                                                                      // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL-UndarkenBG__UpdateFunc
	// void TL-UndarkenBG__UpdateFunc();                                                                                        // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL-WeaponCharge__FinishedFunc
	// void TL-WeaponCharge__FinishedFunc();                                                                                    // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL-WeaponCharge__UpdateFunc
	// void TL-WeaponCharge__UpdateFunc();                                                                                      // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL-RegularEyes__FinishedFunc
	// void TL-RegularEyes__FinishedFunc();                                                                                     // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL-RegularEyes__UpdateFunc
	// void TL-RegularEyes__UpdateFunc();                                                                                       // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL-EyesFollowMouseAgain__FinishedFunc
	// void TL-EyesFollowMouseAgain__FinishedFunc();                                                                            // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL-EyesFollowMouseAgain__UpdateFunc
	// void TL-EyesFollowMouseAgain__UpdateFunc();                                                                              // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL-ChangeLighting__FinishedFunc
	// void TL-ChangeLighting__FinishedFunc();                                                                                  // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL-ChangeLighting__UpdateFunc
	// void TL-ChangeLighting__UpdateFunc();                                                                                    // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL_CardCough__FinishedFunc
	// void TL_CardCough__FinishedFunc();                                                                                       // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL_CardCough__UpdateFunc
	// void TL_CardCough__UpdateFunc();                                                                                         // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade2__FinishedFunc
	// void TL-Upgrade2__FinishedFunc();                                                                                        // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade2__UpdateFunc
	// void TL-Upgrade2__UpdateFunc();                                                                                          // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade2__TasslesDropOff2__EventFunc
	// void TL-Upgrade2__TasslesDropOff2__EventFunc();                                                                          // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL_PhaseBFade__FinishedFunc
	// void TL_PhaseBFade__FinishedFunc();                                                                                      // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL_PhaseBFade__UpdateFunc
	// void TL_PhaseBFade__UpdateFunc();                                                                                        // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade1__FinishedFunc
	// void TL-Upgrade1__FinishedFunc();                                                                                        // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade1__UpdateFunc
	// void TL-Upgrade1__UpdateFunc();                                                                                          // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade1__TasslesDropOffEvent__EventFunc
	// void TL-Upgrade1__TasslesDropOffEvent__EventFunc();                                                                      // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL_PushbroomAnim__FinishedFunc
	// void TL_PushbroomAnim__FinishedFunc();                                                                                   // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL_PushbroomAnim__UpdateFunc
	// void TL_PushbroomAnim__UpdateFunc();                                                                                     // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL_PushbroomAnim__Trigger Particles__EventFunc
	// void TL_PushbroomAnim__Trigger Particles__EventFunc();                                                                   // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Attack__FinishedFunc
	// void TL-Attack__FinishedFunc();                                                                                          // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Attack__UpdateFunc
	// void TL-Attack__UpdateFunc();                                                                                            // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Attack__EventTrackHit__EventFunc
	// void TL-Attack__EventTrackHit__EventFunc();                                                                              // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL-SuspiciousEyes__FinishedFunc
	// void TL-SuspiciousEyes__FinishedFunc();                                                                                  // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL-SuspiciousEyes__UpdateFunc
	// void TL-SuspiciousEyes__UpdateFunc();                                                                                    // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL-PupilContracts__FinishedFunc
	// void TL-PupilContracts__FinishedFunc();                                                                                  // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL-PupilContracts__UpdateFunc
	// void TL-PupilContracts__UpdateFunc();                                                                                    // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL-EquipWeapon__FinishedFunc
	// void TL-EquipWeapon__FinishedFunc();                                                                                     // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL-EquipWeapon__UpdateFunc
	// void TL-EquipWeapon__UpdateFunc();                                                                                       // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL-DropEyeAnim__FinishedFunc
	// void TL-DropEyeAnim__FinishedFunc();                                                                                     // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL-DropEyeAnim__UpdateFunc
	// void TL-DropEyeAnim__UpdateFunc();                                                                                       // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade3__FinishedFunc
	// void TL-Upgrade3__FinishedFunc();                                                                                        // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade3__UpdateFunc
	// void TL-Upgrade3__UpdateFunc();                                                                                          // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade3__TasslesDropOff2__EventFunc
	// void TL-Upgrade3__TasslesDropOff2__EventFunc();                                                                          // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent(FKey Key);                                                           // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent(FKey Key);                                                           // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent
	// void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent(FKey Key);                                                      // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent
	// void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent(FKey Key);                                                      // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.InpTchEvt_Released
	// void InpTchEvt_Released(TEnumAsByte<ETouchIndex> FingerIndex, FVector Location);                                         // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.InpTchEvt_Pressed
	// void InpTchEvt_Pressed(TEnumAsByte<ETouchIndex> FingerIndex, FVector Location);                                          // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.OnLoaded_34AE763040BC26E1AD2CE4842CE48F91
	// void OnLoaded_34AE763040BC26E1AD2CE4842CE48F91(UClass* Loaded);                                                          // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.CardPackStoreStart
	// void CardPackStoreStart();                                                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.ReadyToAttack
	// void ReadyToAttack();                                                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.OpenPinata
	// void OpenPinata();                                                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.PackDestroyStart
	// void PackDestroyStart();                                                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.CardEnterStart
	// void CardEnterStart();                                                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.StartPackOpen
	// void StartPackOpen();                                                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.OnStoreStateChanged
	// void OnStoreStateChanged(EFortStoreState NewStoreState);                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.ExitCardPackStore
	// void ExitCardPackStore();                                                                                                // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.Stop-DropEyeAnim
	// void Stop-DropEyeAnim();                                                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.Stop-SwingingEyeAnim
	// void Stop-SwingingEyeAnim();                                                                                             // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.SpawnCandy
	// void SpawnCandy();                                                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.InitiatePinata
	// void InitiatePinata();                                                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.CameraResetComplete
	// void CameraResetComplete();                                                                                              // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.CameraTransitionComplete
	// void CameraTransitionComplete();                                                                                         // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_BP.StorePinataMaster_BP_C.ExecuteUbergraph_StorePinataMaster_BP
	// void ExecuteUbergraph_StorePinataMaster_BP(int32_t EntryPoint);                                                          // [0x154a140] HasDefaults          
};

/// Class /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C
/// Size: 0x06AE (0x000328 - 0x0009D6)
class AStoreCardReveal_BP_C : public AStoreCardReveal_Parent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2518;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x328, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CC_DummyLocInstalled_Bounce                                 OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CardDummyLocShowFlipped_CCBounce                            OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CC_DummyPre_Install                                         OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CardDummyLocShowFlipped                                     OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UPostProcessComponent*)                    PostProcessCardRevealB                                      OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UPostProcessComponent*)                    PostProcessCardRevealA                                      OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UAudioComponent*)                          ChoiceCardDestroy_Cue                                       OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_CC_QuestionMark                                           OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CC_QuestionMarkDummyLarge                                   OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CCA_DummyLocDeath                                           OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CCB_DummyLocDeath                                           OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_ChoiceCardB                                               OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_ChoiceCardA                                               OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CC_CardDummyLocShow                                         OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CCB_DummyLocShowRot                                         OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CCA_DummyLocShowRot                                         OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CCA_DummyLocShow                                            OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CCB_DummyLocShow                                            OFFSET(get<T>, {0x3B8, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CC_DummyLocInstalled                                        OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CCA_DummyLocHide                                            OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(USpotLightComponent*)                      ChoiceCardSpotLight                                         OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(UArrowComponent*)                          CardRootORIGLOC                                             OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(UPostProcessComponent*)                    ChoiceCardPostProcess                                       OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(UAudioComponent*)                          FastForward_AudioComponent                                  OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CardDummyLocExit                                            OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CardDummyLocHide                                            OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CardDummyLocShow                                            OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UArrowComponent*)                          CardRoot                                                    OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(USceneComponent*)                          GroundRoot                                                  OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UWidgetComponent*)                         CCB_Count                                                   OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UWidgetComponent*)                         CCA_Count                                                   OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UWidgetComponent*)                         CCB_Name                                                    OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UWidgetComponent*)                         CCA_Name                                                    OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 P_FireAshes_B                                               OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 P_FireAshes_A                                               OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CC_QuestionMarkDummySmall                                   OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_DataCardStatic                                            OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_CC_QuestionMarkInside                                     OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_VindertechCardGlowBasic                                   OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_ChoiceCard_B_BGFX                                         OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_ChoiceCard_A_BGFX                                         OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_SceneDarken                                               OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(UWidgetComponent*)                         CardFrontWidget                                             OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_VindertechCardGlow                                        OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 P_CardReveal_Rays_01                                        OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_VindertechCard_Rays_01                                    OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_VindertechCard01                                          OFFSET(get<T>, {0x4A0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_GroundPlaceholder                                         OFFSET(get<T>, {0x4A8, 8, 0, 0})
	DMember(float)                                     TL_CC_DataDiskBurns_EmissiveFade01_C4F384FF467C667ECC255EB28CDEAD75 OFFSET(get<float>, {0x4B0, 4, 0, 0})
	DMember(float)                                     TL_CC_DataDiskBurns_RarityAndScreenFade_C4F384FF467C667ECC255EB28CDEAD75 OFFSET(get<float>, {0x4B4, 4, 0, 0})
	DMember(float)                                     TL_CC_DataDiskBurns_DataDisk_DeathDirectOpacity_C4F384FF467C667ECC255EB28CDEAD75 OFFSET(get<float>, {0x4B8, 4, 0, 0})
	DMember(float)                                     TL_CC_DataDiskBurns_DataDisk_DeathMaster_C4F384FF467C667ECC255EB28CDEAD75 OFFSET(get<float>, {0x4BC, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_CC_DataDiskBurns__Direction_C4F384FF467C667ECC255EB28CDEAD75 OFFSET(get<T>, {0x4C0, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_CC_DataDiskBurns                                         OFFSET(get<T>, {0x4C8, 8, 0, 0})
	DMember(float)                                     TL_CC_QuestionMarkAnim_FadeOtherEmissive_56814F494B67D1AD46CB869B2A81B132 OFFSET(get<float>, {0x4D0, 4, 0, 0})
	DMember(float)                                     TL_CC_QuestionMarkAnim_FadeScreenEmissiveMaster_56814F494B67D1AD46CB869B2A81B132 OFFSET(get<float>, {0x4D4, 4, 0, 0})
	DMember(float)                                     TL_CC_QuestionMarkAnim_FlashFadeUpgradeColors_56814F494B67D1AD46CB869B2A81B132 OFFSET(get<float>, {0x4D8, 4, 0, 0})
	DMember(float)                                     TL_CC_QuestionMarkAnim_SubtleyMoveOutMainCard_56814F494B67D1AD46CB869B2A81B132 OFFSET(get<float>, {0x4DC, 4, 0, 0})
	DMember(float)                                     TL_CC_QuestionMarkAnim_FadeInSceneDarkenMaterial_56814F494B67D1AD46CB869B2A81B132 OFFSET(get<float>, {0x4E0, 4, 0, 0})
	DMember(float)                                     TL_CC_QuestionMarkAnim_Q_Opacity_Fade_56814F494B67D1AD46CB869B2A81B132 OFFSET(get<float>, {0x4E4, 4, 0, 0})
	DMember(float)                                     TL_CC_QuestionMarkAnim_FadeQInSlowly_56814F494B67D1AD46CB869B2A81B132 OFFSET(get<float>, {0x4E8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_CC_QuestionMarkAnim__Direction_56814F494B67D1AD46CB869B2A81B132 OFFSET(get<T>, {0x4EC, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_CC_QuestionMarkAnim                                      OFFSET(get<T>, {0x4F0, 8, 0, 0})
	DMember(float)                                     TL_SelectedChoiceCardAnims_FadeInRegularEmissive_9A213FD2494AEED292654EA4FDDB8006 OFFSET(get<float>, {0x4F8, 4, 0, 0})
	DMember(float)                                     TL_SelectedChoiceCardAnims_FadeInIconScreen_9A213FD2494AEED292654EA4FDDB8006 OFFSET(get<float>, {0x4FC, 4, 0, 0})
	DMember(float)                                     TL_SelectedChoiceCardAnims_InstallCCBounceMain_9A213FD2494AEED292654EA4FDDB8006 OFFSET(get<float>, {0x500, 4, 0, 0})
	DMember(float)                                     TL_SelectedChoiceCardAnims_Install2CC_LerpLoc_9A213FD2494AEED292654EA4FDDB8006 OFFSET(get<float>, {0x504, 4, 0, 0})
	DMember(float)                                     TL_SelectedChoiceCardAnims_InstallCCLerpRot_9A213FD2494AEED292654EA4FDDB8006 OFFSET(get<float>, {0x508, 4, 0, 0})
	DMember(float)                                     TL_SelectedChoiceCardAnims_CCDeath_FadeOutSound_9A213FD2494AEED292654EA4FDDB8006 OFFSET(get<float>, {0x50C, 4, 0, 0})
	DMember(float)                                     TL_SelectedChoiceCardAnims_CCDeathMaterial_DeathDirectOpacity_9A213FD2494AEED292654EA4FDDB8006 OFFSET(get<float>, {0x510, 4, 0, 0})
	DMember(float)                                     TL_SelectedChoiceCardAnims_FadeSceneDarkenBackOut_9A213FD2494AEED292654EA4FDDB8006 OFFSET(get<float>, {0x514, 4, 0, 0})
	DMember(float)                                     TL_SelectedChoiceCardAnims_FadeSpotlight_9A213FD2494AEED292654EA4FDDB8006 OFFSET(get<float>, {0x518, 4, 0, 0})
	DMember(float)                                     TL_SelectedChoiceCardAnims_MoveParentCardBackToNormalPos_9A213FD2494AEED292654EA4FDDB8006 OFFSET(get<float>, {0x51C, 4, 0, 0})
	DMember(float)                                     TL_SelectedChoiceCardAnims_InstallCCLerpLoc_9A213FD2494AEED292654EA4FDDB8006 OFFSET(get<float>, {0x520, 4, 0, 0})
	DMember(float)                                     TL_SelectedChoiceCardAnims_CCDeath_Loc_9A213FD2494AEED292654EA4FDDB8006 OFFSET(get<float>, {0x524, 4, 0, 0})
	DMember(float)                                     TL_SelectedChoiceCardAnims_CCDeathMaterial_DeathMaster_9A213FD2494AEED292654EA4FDDB8006 OFFSET(get<float>, {0x528, 4, 0, 0})
	DMember(float)                                     TL_SelectedChoiceCardAnims_FadeQ_9A213FD2494AEED292654EA4FDDB8006 OFFSET(get<float>, {0x52C, 4, 0, 0})
	DMember(float)                                     TL_SelectedChoiceCardAnims_FadeFlare_9A213FD2494AEED292654EA4FDDB8006 OFFSET(get<float>, {0x530, 4, 0, 0})
	DMember(float)                                     TL_SelectedChoiceCardAnims_FlourishFlare_9A213FD2494AEED292654EA4FDDB8006 OFFSET(get<float>, {0x534, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_SelectedChoiceCardAnims__Direction_9A213FD2494AEED292654EA4FDDB8006 OFFSET(get<T>, {0x538, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_SelectedChoiceCardAnims                                  OFFSET(get<T>, {0x540, 8, 0, 0})
	DMember(float)                                     TL_CCB_Reveal_RevealRotation_E1D990B64CDA6EF98CA6C6B5EC7169B0 OFFSET(get<float>, {0x548, 4, 0, 0})
	DMember(float)                                     TL_CCB_Reveal_AddLocation_E1D990B64CDA6EF98CA6C6B5EC7169B0  OFFSET(get<float>, {0x54C, 4, 0, 0})
	DMember(float)                                     TL_CCB_Reveal_Rotation_E1D990B64CDA6EF98CA6C6B5EC7169B0     OFFSET(get<float>, {0x550, 4, 0, 0})
	DMember(float)                                     TL_CCB_Reveal_LerpWorldLoc_E1D990B64CDA6EF98CA6C6B5EC7169B0 OFFSET(get<float>, {0x554, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_CCB_Reveal__Direction_E1D990B64CDA6EF98CA6C6B5EC7169B0   OFFSET(get<T>, {0x558, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_CCB_Reveal                                               OFFSET(get<T>, {0x560, 8, 0, 0})
	DMember(float)                                     TL_CCA_Reveal_DelayAmount_60E254DA405DE2144D4B80B13BE5E72D  OFFSET(get<float>, {0x568, 4, 0, 0})
	DMember(float)                                     TL_CCA_Reveal_RevealRotation_60E254DA405DE2144D4B80B13BE5E72D OFFSET(get<float>, {0x56C, 4, 0, 0})
	DMember(float)                                     TL_CCA_Reveal_AddLocation_60E254DA405DE2144D4B80B13BE5E72D  OFFSET(get<float>, {0x570, 4, 0, 0})
	DMember(float)                                     TL_CCA_Reveal_Rotation_60E254DA405DE2144D4B80B13BE5E72D     OFFSET(get<float>, {0x574, 4, 0, 0})
	DMember(float)                                     TL_CCA_Reveal_LerpWorldLoc_60E254DA405DE2144D4B80B13BE5E72D OFFSET(get<float>, {0x578, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_CCA_Reveal__Direction_60E254DA405DE2144D4B80B13BE5E72D   OFFSET(get<T>, {0x57C, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_CCA_Reveal                                               OFFSET(get<T>, {0x580, 8, 0, 0})
	DMember(float)                                     TL_Reveal_CC_Choices_FadeInChoiceCardPost_76B596B14DFB3698760215B8A10E5A7F OFFSET(get<float>, {0x588, 4, 0, 0})
	DMember(float)                                     TL_Reveal_CC_Choices_CCSpotFadeIn_76B596B14DFB3698760215B8A10E5A7F OFFSET(get<float>, {0x58C, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_Reveal_CC_Choices__Direction_76B596B14DFB3698760215B8A10E5A7F OFFSET(get<T>, {0x590, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_Reveal_CC_Choices                                        OFFSET(get<T>, {0x598, 8, 0, 0})
	DMember(float)                                     TL_CardMoveToScreen_PPBlend01_3798F2BC49D3B3B20C2AAC9734564E4B OFFSET(get<float>, {0x5A0, 4, 0, 0})
	DMember(float)                                     TL_CardMoveToScreen_Rotation_3798F2BC49D3B3B20C2AAC9734564E4B OFFSET(get<float>, {0x5A4, 4, 0, 0})
	DMember(float)                                     TL_CardMoveToScreen_LerpWorldLoc_3798F2BC49D3B3B20C2AAC9734564E4B OFFSET(get<float>, {0x5A8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_CardMoveToScreen__Direction_3798F2BC49D3B3B20C2AAC9734564E4B OFFSET(get<T>, {0x5AC, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_CardMoveToScreen                                         OFFSET(get<T>, {0x5B0, 8, 0, 0})
	DMember(float)                                     TL_CardUpgradeFast_PushGlow_949EB8324B003C2943D50781B70022F4 OFFSET(get<float>, {0x5B8, 4, 0, 0})
	DMember(float)                                     TL_CardUpgradeFast_RaysFader_949EB8324B003C2943D50781B70022F4 OFFSET(get<float>, {0x5BC, 4, 0, 0})
	DMember(float)                                     TL_CardUpgradeFast_CardUpgradeLerpAmtA_949EB8324B003C2943D50781B70022F4 OFFSET(get<float>, {0x5C0, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_CardUpgradeFast__Direction_949EB8324B003C2943D50781B70022F4 OFFSET(get<T>, {0x5C4, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_CardUpgradeFast                                          OFFSET(get<T>, {0x5C8, 8, 0, 0})
	DMember(float)                                     TL_ClearPostProcessDOFSettings_NewTrack_0_E9654CE64B23411962976AA13C3F7D8B OFFSET(get<float>, {0x5D0, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_ClearPostProcessDOFSettings__Direction_E9654CE64B23411962976AA13C3F7D8B OFFSET(get<T>, {0x5D4, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_ClearPostProcessDOFSettings                              OFFSET(get<T>, {0x5D8, 8, 0, 0})
	DMember(float)                                     TL_CCB_AmbientAnim_Noise3_E46E9F8349C15D0AD549D7BDBA85CD06  OFFSET(get<float>, {0x5E0, 4, 0, 0})
	DMember(float)                                     TL_CCB_AmbientAnim_Noise2_E46E9F8349C15D0AD549D7BDBA85CD06  OFFSET(get<float>, {0x5E4, 4, 0, 0})
	DMember(float)                                     TL_CCB_AmbientAnim_Noise1_E46E9F8349C15D0AD549D7BDBA85CD06  OFFSET(get<float>, {0x5E8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_CCB_AmbientAnim__Direction_E46E9F8349C15D0AD549D7BDBA85CD06 OFFSET(get<T>, {0x5EC, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_CCB_AmbientAnim                                          OFFSET(get<T>, {0x5F0, 8, 0, 0})
	DMember(float)                                     TL_CCA_AmbientAnim_Noise3_D0F0F85F4E679E6EFE20D8B0C33E4C8F  OFFSET(get<float>, {0x5F8, 4, 0, 0})
	DMember(float)                                     TL_CCA_AmbientAnim_Noise2_D0F0F85F4E679E6EFE20D8B0C33E4C8F  OFFSET(get<float>, {0x5FC, 4, 0, 0})
	DMember(float)                                     TL_CCA_AmbientAnim_Noise1_D0F0F85F4E679E6EFE20D8B0C33E4C8F  OFFSET(get<float>, {0x600, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_CCA_AmbientAnim__Direction_D0F0F85F4E679E6EFE20D8B0C33E4C8F OFFSET(get<T>, {0x604, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_CCA_AmbientAnim                                          OFFSET(get<T>, {0x608, 8, 0, 0})
	DMember(float)                                     TL_CC_FlareFX_NewTrack_2_FB393D144ADF530367DF8CA361F07C5B   OFFSET(get<float>, {0x610, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_CC_FlareFX__Direction_FB393D144ADF530367DF8CA361F07C5B   OFFSET(get<T>, {0x614, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_CC_FlareFX                                               OFFSET(get<T>, {0x618, 8, 0, 0})
	DMember(float)                                     TL_MouseoverCC_B_End_CCBMOEFres_37ACF54F4F98A4D3BC4A9693803AC75D OFFSET(get<float>, {0x620, 4, 0, 0})
	DMember(float)                                     TL_MouseoverCC_B_End_NewTrack_0_37ACF54F4F98A4D3BC4A9693803AC75D OFFSET(get<float>, {0x624, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_MouseoverCC_B_End__Direction_37ACF54F4F98A4D3BC4A9693803AC75D OFFSET(get<T>, {0x628, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_MouseoverCC_B_End                                        OFFSET(get<T>, {0x630, 8, 0, 0})
	DMember(float)                                     TL_MouseoverCC_A_End_CCaMOEFres_DBB7CB8C4047097B3D9B15ACE43DDA8D OFFSET(get<float>, {0x638, 4, 0, 0})
	DMember(float)                                     TL_MouseoverCC_A_End_NewTrack_0_DBB7CB8C4047097B3D9B15ACE43DDA8D OFFSET(get<float>, {0x63C, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_MouseoverCC_A_End__Direction_DBB7CB8C4047097B3D9B15ACE43DDA8D OFFSET(get<T>, {0x640, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_MouseoverCC_A_End                                        OFFSET(get<T>, {0x648, 8, 0, 0})
	DMember(float)                                     TL_MouseoverCC_B_CCBMOFres_679F468743296034690174823B6DA69D OFFSET(get<float>, {0x650, 4, 0, 0})
	DMember(float)                                     TL_MouseoverCC_B_NewTrack_0_679F468743296034690174823B6DA69D OFFSET(get<float>, {0x654, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_MouseoverCC_B__Direction_679F468743296034690174823B6DA69D OFFSET(get<T>, {0x658, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_MouseoverCC_B                                            OFFSET(get<T>, {0x660, 8, 0, 0})
	DMember(float)                                     TL_MouseoverCC_A_CCAMOFres_4E2719034FA877BA8DD27E8A8E9441E2 OFFSET(get<float>, {0x668, 4, 0, 0})
	DMember(float)                                     TL_MouseoverCC_A_CCAMOScale_4E2719034FA877BA8DD27E8A8E9441E2 OFFSET(get<float>, {0x66C, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_MouseoverCC_A__Direction_4E2719034FA877BA8DD27E8A8E9441E2 OFFSET(get<T>, {0x670, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_MouseoverCC_A                                            OFFSET(get<T>, {0x678, 8, 0, 0})
	DMember(float)                                     TL_CardFlipToFront_NewTrack_6_8902A76E45F02B2EAFFF568387C58F2F OFFSET(get<float>, {0x680, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_CardFlipToFront__Direction_8902A76E45F02B2EAFFF568387C58F2F OFFSET(get<T>, {0x684, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_CardFlipToFront                                          OFFSET(get<T>, {0x688, 8, 0, 0})
	DMember(float)                                     TL_CardExit_PPtoBGChange_5B7343EC450EC02002347D8C37622915   OFFSET(get<float>, {0x690, 4, 0, 0})
	DMember(float)                                     TL_CardExit_BlendToExitLoc_5B7343EC450EC02002347D8C37622915 OFFSET(get<float>, {0x694, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_CardExit__Direction_5B7343EC450EC02002347D8C37622915     OFFSET(get<T>, {0x698, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_CardExit                                                 OFFSET(get<T>, {0x6A0, 8, 0, 0})
	SMember(FVector)                                   LiveCardLocBeforeExit                                       OFFSET(getStruct<T>, {0x6A8, 12, 0, 0})
	SMember(FRotator)                                  LiveCardRotBeforeExit                                       OFFSET(getStruct<T>, {0x6B4, 12, 0, 0})
	DMember(bool)                                      UserFF_Pressed                                              OFFSET(get<bool>, {0x6C0, 1, 0, 0})
	CMember(EFortRarity)                               CurrentRarity                                               OFFSET(get<T>, {0x6C1, 1, 0, 0})
	CMember(EFortRarity)                               TargetRarity                                                OFFSET(get<T>, {0x6C2, 1, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_CardRarity                                              OFFSET(get<T>, {0x6C8, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_CardFoil                                                OFFSET(get<T>, {0x6D0, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 CardRaysMID                                                 OFFSET(get<T>, {0x6D8, 8, 0, 0})
	SMember(FLinearColor)                              Card_Rays_Color                                             OFFSET(getStruct<T>, {0x6E0, 16, 0, 0})
	CMember(USoundBase*)                               Sound_CardFlip                                              OFFSET(get<T>, {0x6F0, 8, 0, 0})
	CMember(USoundBase*)                               Dialog_Llama_Greet_Current                                  OFFSET(get<T>, {0x6F8, 8, 0, 0})
	CMember(USoundBase*)                               Dialog_Llama_OpenNormal_Current                             OFFSET(get<T>, {0x700, 8, 0, 0})
	CMember(USoundBase*)                               Dialog_Llama_UpgradeSilver_Current                          OFFSET(get<T>, {0x708, 8, 0, 0})
	CMember(USoundBase*)                               Dialog_Llama_UpgradeGold_Current                            OFFSET(get<T>, {0x710, 8, 0, 0})
	CMember(USoundBase*)                               Dialog_Llama_OpenSilver_Current                             OFFSET(get<T>, {0x718, 8, 0, 0})
	CMember(USoundBase*)                               Dialog_Llama_OpenGold_Current                               OFFSET(get<T>, {0x720, 8, 0, 0})
	CMember(USoundBase*)                               Dialog_Llama_Hover_Current                                  OFFSET(get<T>, {0x728, 8, 0, 0})
	CMember(USoundBase*)                               Dialog_Llama_Tickle_Current                                 OFFSET(get<T>, {0x730, 8, 0, 0})
	CMember(TArray<USoundBase*>)                       Dialog_Llama_Depressed_Greet_Array                          OFFSET(get<T>, {0x738, 16, 0, 0})
	CMember(USoundBase*)                               Sound_CardFlyAtPlayer                                       OFFSET(get<T>, {0x748, 8, 0, 0})
	CMember(USoundBase*)                               Sound_CardPutAway                                           OFFSET(get<T>, {0x750, 8, 0, 0})
	CMember(USoundBase*)                               Sound_Store_Card_Summary                                    OFFSET(get<T>, {0x758, 8, 0, 0})
	CMember(USoundBase*)                               Sound_Store_CardUpgrade_Blue                                OFFSET(get<T>, {0x760, 8, 0, 0})
	CMember(USoundBase*)                               Sound_Store_CardUpgrade_Green                               OFFSET(get<T>, {0x768, 8, 0, 0})
	CMember(USoundBase*)                               Sound_Store_CardUpgrade_Purple                              OFFSET(get<T>, {0x770, 8, 0, 0})
	CMember(USoundBase*)                               Sound_Store_CardUpgrade_Gold                                OFFSET(get<T>, {0x778, 8, 0, 0})
	CMember(USoundBase*)                               Sound_Store_CardUpgrade_Platinum                            OFFSET(get<T>, {0x780, 8, 0, 0})
	CMember(TArray<USoundBase*>)                       Dialog_Llama_Mob_Greet_Array                                OFFSET(get<T>, {0x788, 16, 0, 0})
	CMember(TArray<USoundBase*>)                       Dialog_Llama_Greet_Array_Current                            OFFSET(get<T>, {0x798, 16, 0, 0})
	CMember(USoundBase*)                               Dialog_Llama_PreHit_Current                                 OFFSET(get<T>, {0x7A8, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_CardGlow                                                OFFSET(get<T>, {0x7B0, 8, 0, 0})
	SMember(FCard)                                     CardData                                                    OFFSET(getStruct<T>, {0x7B8, 24, 0, 0})
	DMember(bool)                                      SpecialCardPause                                            OFFSET(get<bool>, {0x7D0, 1, 0, 0})
	CMember(ATVPostProcessBP_C*)                       TVPPEffect                                                  OFFSET(get<T>, {0x7D8, 8, 0, 0})
	DMember(bool)                                      FastForwardIsON                                             OFFSET(get<bool>, {0x7E0, 1, 0, 0})
	DMember(bool)                                      EnableUserToFF                                              OFFSET(get<bool>, {0x7E1, 1, 0, 0})
	DMember(bool)                                      IsChoicePack_                                               OFFSET(get<bool>, {0x7E2, 1, 0, 0})
	CMember(TArray<UFortAccountItemDefinition*>)       ChoiceCardsArray                                            OFFSET(get<T>, {0x7E8, 16, 0, 0})
	CMember(UFortAccountItemDefinition*)               ChoiceCard_0                                                OFFSET(get<T>, {0x7F8, 8, 0, 0})
	CMember(UFortAccountItemDefinition*)               ChoiceCard_1                                                OFFSET(get<T>, {0x800, 8, 0, 0})
	DMember(bool)                                      DebugChoicePacks                                            OFFSET(get<bool>, {0x808, 1, 0, 0})
	DMember(int32_t)                                   DebugRarityInt                                              OFFSET(get<int32_t>, {0x80C, 4, 0, 0})
	DMember(bool)                                      DEBUGConsecutiveUpgrade                                     OFFSET(get<bool>, {0x810, 1, 0, 0})
	DMember(bool)                                      RevealChoicePack                                            OFFSET(get<bool>, {0x811, 1, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_ChoiceASticker                                          OFFSET(get<T>, {0x818, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_ChoiceBSticker                                          OFFSET(get<T>, {0x820, 8, 0, 0})
	CMember(AStoreCamera_Blueprint_C*)                 StoreCamera                                                 OFFSET(get<T>, {0x828, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_SceneDarken                                             OFFSET(get<T>, {0x830, 8, 0, 0})
	SMember(FTransform)                                ChoiceCardATransform                                        OFFSET(getStruct<T>, {0x840, 48, 0, 0})
	SMember(FTransform)                                ChoiceCardBTransform                                        OFFSET(getStruct<T>, {0x870, 48, 0, 0})
	DMember(bool)                                      CC_A_Selected                                               OFFSET(get<bool>, {0x8A0, 1, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 ChoiceB_BGFX_MID                                            OFFSET(get<T>, {0x8A8, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 ChoiceA_BGFX_MID                                            OFFSET(get<T>, {0x8B0, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_CardIconScreen                                          OFFSET(get<T>, {0x8B8, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_QuestionMark                                            OFFSET(get<T>, {0x8C0, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_CardGlowBasic                                           OFFSET(get<T>, {0x8C8, 8, 0, 0})
	DMember(bool)                                      CC_ReadyForSelection                                        OFFSET(get<bool>, {0x8D0, 1, 0, 0})
	CMember(USoundBase*)                               Sound_HoverSelect                                           OFFSET(get<T>, {0x8D8, 8, 0, 0})
	CMember(USoundBase*)                               Sound_HoverDeselect                                         OFFSET(get<T>, {0x8E0, 8, 0, 0})
	CMember(USoundBase*)                               NewUpgradeSound                                             OFFSET(get<T>, {0x8E8, 8, 0, 0})
	CMember(USoundBase*)                               Sound_MouseClick                                            OFFSET(get<T>, {0x8F0, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_QuestionMarkInside                                      OFFSET(get<T>, {0x8F8, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_ChoiceA                                                 OFFSET(get<T>, {0x900, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_ChoiceB                                                 OFFSET(get<T>, {0x908, 8, 0, 0})
	DMember(bool)                                      DEBUGComponentVisibility                                    OFFSET(get<bool>, {0x910, 1, 0, 0})
	SMember(FTransform)                                SelectedCCTransform                                         OFFSET(getStruct<T>, {0x920, 48, 0, 0})
	DMember(bool)                                      PreHover_CC_A                                               OFFSET(get<bool>, {0x950, 1, 0, 0})
	DMember(bool)                                      PreHover_CC_B                                               OFFSET(get<bool>, {0x951, 1, 0, 0})
	SMember(FTransform)                                Un_SelectedCCTransform                                      OFFSET(getStruct<T>, {0x960, 48, 0, 0})
	CMember(USoundBase*)                               Sound_ChoiceCardDestroy                                     OFFSET(get<T>, {0x990, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_DataCardFrontSticker                                    OFFSET(get<T>, {0x998, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_DataCard                                                OFFSET(get<T>, {0x9A0, 8, 0, 0})
	CMember(USoundBase*)                               Sound_ChoiceCardInsert                                      OFFSET(get<T>, {0x9A8, 8, 0, 0})
	DMember(bool)                                      DebugCardRevealInLevel                                      OFFSET(get<bool>, {0x9B0, 1, 0, 0})
	CMember(UClass*)                                   CardFrontWidgetClass                                        OFFSET(get<T>, {0x9B8, 8, 0, 0})
	DMember(bool)                                      OpenAllPacks                                                OFFSET(get<bool>, {0x9C0, 1, 0, 0})
	DMember(bool)                                      SlomoPinata                                                 OFFSET(get<bool>, {0x9C1, 1, 0, 0})
	DMember(bool)                                      RightMousePressed                                           OFFSET(get<bool>, {0x9C2, 1, 0, 0})
	DMember(bool)                                      RightMouseReleased                                          OFFSET(get<bool>, {0x9C3, 1, 0, 0})
	DMember(bool)                                      SkipUpgradeAnim                                             OFFSET(get<bool>, {0x9C4, 1, 0, 0})
	DMember(bool)                                      CardWillUpgrade                                             OFFSET(get<bool>, {0x9C5, 1, 0, 0})
	DMember(bool)                                      DelayFirstCard                                              OFFSET(get<bool>, {0x9C6, 1, 0, 0})
	DMember(int32_t)                                   ChoiceIndex                                                 OFFSET(get<int32_t>, {0x9C8, 4, 0, 0})
	DMember(bool)                                      AnotherChoiceAvailable                                      OFFSET(get<bool>, {0x9CC, 1, 0, 0})
	DMember(bool)                                      ChoiceCardHasBeenSelected                                   OFFSET(get<bool>, {0x9CD, 1, 0, 0})
	DMember(bool)                                      IsUsingGamepad                                              OFFSET(get<bool>, {0x9CE, 1, 0, 0})
	DMember(bool)                                      Gamepad_On_A                                                OFFSET(get<bool>, {0x9CF, 1, 0, 0})
	DMember(bool)                                      Gamepad_On_B                                                OFFSET(get<bool>, {0x9D0, 1, 0, 0})
	DMember(bool)                                      A_Hovered                                                   OFFSET(get<bool>, {0x9D1, 1, 0, 0})
	DMember(bool)                                      B_Hovered                                                   OFFSET(get<bool>, {0x9D2, 1, 0, 0})
	DMember(bool)                                      CC_B_Selected                                               OFFSET(get<bool>, {0x9D3, 1, 0, 0})
	DMember(bool)                                      IsES2Limited                                                OFFSET(get<bool>, {0x9D4, 1, 0, 0})
	DMember(bool)                                      SetCCRarityColorBool                                        OFFSET(get<bool>, {0x9D5, 1, 0, 0})


	/// Functions
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.RarityEnumToText
	// void RarityEnumToText(EFortRarity InRarity, FText& OutRarity);                                                           // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.IsDefender
	// void IsDefender(UFortAccountItemDefinition* Object, bool& IsDefender, FText& Result);                                    // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.SetText_CCB
	// void SetText_CCB(bool Hide);                                                                                             // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.SetText_CCA
	// void SetText_CCA(bool Hide);                                                                                             // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardExit__FinishedFunc
	// void TL-CardExit__FinishedFunc();                                                                                        // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardExit__UpdateFunc
	// void TL-CardExit__UpdateFunc();                                                                                          // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardExit__Proceed__EventFunc
	// void TL-CardExit__Proceed__EventFunc();                                                                                  // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardFlipToFront__FinishedFunc
	// void TL-CardFlipToFront__FinishedFunc();                                                                                 // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardFlipToFront__UpdateFunc
	// void TL-CardFlipToFront__UpdateFunc();                                                                                   // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardUpgradeFast__FinishedFunc
	// void TL-CardUpgradeFast__FinishedFunc();                                                                                 // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardUpgradeFast__UpdateFunc
	// void TL-CardUpgradeFast__UpdateFunc();                                                                                   // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-Reveal-CC-Choices__FinishedFunc
	// void TL-Reveal-CC-Choices__FinishedFunc();                                                                               // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-Reveal-CC-Choices__UpdateFunc
	// void TL-Reveal-CC-Choices__UpdateFunc();                                                                                 // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-ClearPostProcessDOFSettings__FinishedFunc
	// void TL-ClearPostProcessDOFSettings__FinishedFunc();                                                                     // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-ClearPostProcessDOFSettings__UpdateFunc
	// void TL-ClearPostProcessDOFSettings__UpdateFunc();                                                                       // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-FlareFX__FinishedFunc
	// void TL-CC-FlareFX__FinishedFunc();                                                                                      // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-FlareFX__UpdateFunc
	// void TL-CC-FlareFX__UpdateFunc();                                                                                        // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__FinishedFunc
	// void TL-SelectedChoiceCardAnims__FinishedFunc();                                                                         // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__UpdateFunc
	// void TL-SelectedChoiceCardAnims__UpdateFunc();                                                                           // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__SpeedTimeBackUp__EventFunc
	// void TL-SelectedChoiceCardAnims__SpeedTimeBackUp__EventFunc();                                                           // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__CameraFOV__EventFunc
	// void TL-SelectedChoiceCardAnims__CameraFOV__EventFunc();                                                                 // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__CC-Phase2-Hide__EventFunc
	// void TL-SelectedChoiceCardAnims__CC-Phase2-Hide__EventFunc();                                                            // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__CC-Phase2__EventFunc
	// void TL-SelectedChoiceCardAnims__CC-Phase2__EventFunc();                                                                 // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A__FinishedFunc
	// void TL-MouseoverCC-A__FinishedFunc();                                                                                   // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A__UpdateFunc
	// void TL-MouseoverCC-A__UpdateFunc();                                                                                     // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A-End__FinishedFunc
	// void TL-MouseoverCC-A-End__FinishedFunc();                                                                               // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A-End__UpdateFunc
	// void TL-MouseoverCC-A-End__UpdateFunc();                                                                                 // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B__FinishedFunc
	// void TL-MouseoverCC-B__FinishedFunc();                                                                                   // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B__UpdateFunc
	// void TL-MouseoverCC-B__UpdateFunc();                                                                                     // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B-End__FinishedFunc
	// void TL-MouseoverCC-B-End__FinishedFunc();                                                                               // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B-End__UpdateFunc
	// void TL-MouseoverCC-B-End__UpdateFunc();                                                                                 // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-Reveal__FinishedFunc
	// void TL-CCA-Reveal__FinishedFunc();                                                                                      // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-Reveal__UpdateFunc
	// void TL-CCA-Reveal__UpdateFunc();                                                                                        // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-Reveal__FinishedFunc
	// void TL-CCB-Reveal__FinishedFunc();                                                                                      // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-Reveal__UpdateFunc
	// void TL-CCB-Reveal__UpdateFunc();                                                                                        // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-QuestionMarkAnim__FinishedFunc
	// void TL-CC-QuestionMarkAnim__FinishedFunc();                                                                             // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-QuestionMarkAnim__UpdateFunc
	// void TL-CC-QuestionMarkAnim__UpdateFunc();                                                                               // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-AmbientAnim__FinishedFunc
	// void TL-CCA-AmbientAnim__FinishedFunc();                                                                                 // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-AmbientAnim__UpdateFunc
	// void TL-CCA-AmbientAnim__UpdateFunc();                                                                                   // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-AmbientAnim__FinishedFunc
	// void TL-CCB-AmbientAnim__FinishedFunc();                                                                                 // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-AmbientAnim__UpdateFunc
	// void TL-CCB-AmbientAnim__UpdateFunc();                                                                                   // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-DataDiskBurns__FinishedFunc
	// void TL-CC-DataDiskBurns__FinishedFunc();                                                                                // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-DataDiskBurns__UpdateFunc
	// void TL-CC-DataDiskBurns__UpdateFunc();                                                                                  // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-DataDiskBurns__ChangeTexture__EventFunc
	// void TL-CC-DataDiskBurns__ChangeTexture__EventFunc();                                                                    // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardMoveToScreen__FinishedFunc
	// void TL-CardMoveToScreen__FinishedFunc();                                                                                // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardMoveToScreen__UpdateFunc
	// void TL-CardMoveToScreen__UpdateFunc();                                                                                  // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_90006C1C471D136EF3B142B7181AC990
	// void OnLoaded_90006C1C471D136EF3B142B7181AC990(UObject* Loaded);                                                         // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent(FKey Key);                                                           // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent(FKey Key);                                                           // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_EFC62B084995CBCCD64787B5C4EF30E6
	// void OnLoaded_EFC62B084995CBCCD64787B5C4EF30E6(UObject* Loaded);                                                         // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_EFC62B084995CBCCD64787B51198EA0F
	// void OnLoaded_EFC62B084995CBCCD64787B51198EA0F(UObject* Loaded);                                                         // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_90006C1C471D136EF3B142B7CD6D1379
	// void OnLoaded_90006C1C471D136EF3B142B7CD6D1379(UObject* Loaded);                                                         // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent
	// void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent(FKey Key);                                                      // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.InpTchEvt_Released
	// void InpTchEvt_Released(TEnumAsByte<ETouchIndex> FingerIndex, FVector Location);                                         // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.InpTchEvt_Pressed
	// void InpTchEvt_Pressed(TEnumAsByte<ETouchIndex> FingerIndex, FVector Location);                                          // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent(FKey Key);                                                           // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.OnStoreStateChanged
	// void OnStoreStateChanged(EFortStoreState NewStoreState);                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.StartPackOpen
	// void StartPackOpen();                                                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.CardEnterStart
	// void CardEnterStart();                                                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.PackDestroyStart
	// void PackDestroyStart();                                                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.CardFlipStart
	// void CardFlipStart();                                                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.CardExitStart
	// void CardExitStart();                                                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TurnOffFastForward
	// void TurnOffFastForward();                                                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.CardBackRevealStart
	// void CardBackRevealStart();                                                                                              // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.CardFrontRevealStart
	// void CardFrontRevealStart();                                                                                             // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.TurnOnFastForward
	// void TurnOnFastForward();                                                                                                // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.EnableMouseInputOnActor
	// void EnableMouseInputOnActor();                                                                                          // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.CardPackStoreStart
	// void CardPackStoreStart();                                                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.SpecialCardPauseAbort
	// void SpecialCardPauseAbort();                                                                                            // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.PresentChoiceStart
	// void PresentChoiceStart();                                                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.ChoiceMadeStart
	// void ChoiceMadeStart();                                                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature
	// void BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(UPrimitiveComponent* TouchedComponent, FKey ButtonPressed); // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature
	// void BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature(UPrimitiveComponent* TouchedComponent, FKey ButtonPressed); // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.SkipBackRevealForChoicePack
	// void SkipBackRevealForChoicePack();                                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.ContinueFinalChoiceCardProcess
	// void ContinueFinalChoiceCardProcess();                                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.ConstructCardFront
	// void ConstructCardFront();                                                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.StopCCA-AmbientAnim
	// void StopCCA-AmbientAnim();                                                                                              // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.GetReadyToShowCards
	// void GetReadyToShowCards();                                                                                              // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.Stop-CC-HoverAnims
	// void Stop-CC-HoverAnims();                                                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.OnBeginCursorOver_ChoiceCardA
	// void OnBeginCursorOver_ChoiceCardA(UPrimitiveComponent* TouchedComponent);                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.OnEndCursorOver_ChoiceCardA
	// void OnEndCursorOver_ChoiceCardA(UPrimitiveComponent* TouchedComponent);                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.HoverStart-CC-A
	// void HoverStart-CC-A();                                                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.HoverEnd-CC-A
	// void HoverEnd-CC-A();                                                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.OnBeginCursorOver_ChoiceCardB
	// void OnBeginCursorOver_ChoiceCardB(UPrimitiveComponent* TouchedComponent);                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.OnEndCursorOver_ChoiceCardB
	// void OnEndCursorOver_ChoiceCardB(UPrimitiveComponent* TouchedComponent);                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.HoverStart-CC-B
	// void HoverStart-CC-B();                                                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.HoverEnd-CC-B
	// void HoverEnd-CC-B();                                                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.CheckHoverStatus
	// void CheckHoverStatus();                                                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.RestartCCA-AmbientAnim
	// void RestartCCA-AmbientAnim();                                                                                           // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.StopCCB-AmbientAnim
	// void StopCCB-AmbientAnim();                                                                                              // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.RestartCCB-AmbientAnim
	// void RestartCCB-AmbientAnim();                                                                                           // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.EnableOpenAllPacks
	// void EnableOpenAllPacks();                                                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.CardInPlace
	// void CardInPlace();                                                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.CompareRarity
	// void CompareRarity();                                                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.PlayUpgradeAnim
	// void PlayUpgradeAnim();                                                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.ReadyForCardToCome
	// void ReadyForCardToCome();                                                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.InpAxisEvt_MoveRight_Gamepad_K2Node_InputAxisEvent
	// void InpAxisEvt_MoveRight_Gamepad_K2Node_InputAxisEvent(float AxisValue);                                                // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.Handle Input Mode Changed
	// void Handle Input Mode Changed(bool bUsingGamepad);                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.ExitPackStore
	// void ExitPackStore();                                                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S-ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature
	// void BndEvt__S-ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature(TEnumAsByte<ETouchIndex> FingerIndex, UPrimitiveComponent* TouchedComponent); // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S-ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature
	// void BndEvt__S-ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature(TEnumAsByte<ETouchIndex> FingerIndex, UPrimitiveComponent* TouchedComponent); // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.ResetGamepadInput
	// void ResetGamepadInput();                                                                                                // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.OpenGamepadGate
	// void OpenGamepadGate();                                                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.CloseGamepadGate
	// void CloseGamepadGate();                                                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.EndQuestionMarkAnim
	// void EndQuestionMarkAnim();                                                                                              // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.SetCCRarityColor
	// void SetCCRarityColor();                                                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.CCRarityColorReady
	// void CCRarityColorReady();                                                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent
	// void InpAxisEvt_MoveRight_K2Node_InputAxisEvent(float AxisValue);                                                        // [0x154a140] BlueprintEvent       
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.InitiatePinata
	// void InitiatePinata();                                                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_BP.StoreCardReveal_BP_C.ExecuteUbergraph_StoreCardReveal_BP
	// void ExecuteUbergraph_StoreCardReveal_BP(int32_t EntryPoint);                                                            // [0x154a140] HasDefaults          
};

/// Struct /Game/FrontEnd/HomebaseOnboarding/Announcements/TutorialHighlightData.TutorialHighlightData
/// Size: 0x0010 (0x000000 - 0x000010)
class FTutorialHighlightData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     WidgetName_12_30ABB1A646D8ED824206A998D77E2265              OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bShowHighlight_14_0B07A3D24E1D6E27B678D78A737A8B5A          OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(float)                                     HighLightDelay_9_2AECA98A4FDAC2A16624EFAC3E01C581           OFFSET(get<float>, {0xC, 4, 0, 0})
};

