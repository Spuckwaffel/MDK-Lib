
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: DynamicRollTablesRuntime
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: ModularGameplay

/// Class /Script/PlayerAugmentsCodeRuntime.FortAthenaAIBotEvaluator_Augments
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UFortAthenaAIBotEvaluator_Augments : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FGameplayTag)                              InjectionTag                                                OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	CMember(UBehaviorTree*)                            BehaviorAsset                                               OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FName)                                     AugmentStatusKeyName                                        OFFSET(getStruct<T>, {0xB8, 4, 0, 0})
	SMember(FName)                                     AugmentItemKeyName                                          OFFSET(getStruct<T>, {0xBC, 4, 0, 0})
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortAthenaBTTask_Augments
/// Size: 0x0018 (0x000070 - 0x000088)
class UFortAthenaBTTask_Augments : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	DMember(float)                                     MinSelectionTime                                            OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     MaxSelectionTime                                            OFFSET(get<float>, {0x74, 4, 0, 0})
	SMember(FName)                                     AugmentStatusKeyName                                        OFFSET(getStruct<T>, {0x78, 4, 0, 0})
	SMember(FName)                                     AugmentItemKeyName                                          OFFSET(getStruct<T>, {0x7C, 4, 0, 0})
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility
/// Size: 0x0078 (0x000B28 - 0x000BA0)
class UFortAugmentSelectionToolAbility : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2976;

public:
	CMember(UInputComponent*)                          SelectionInputComponent                                     OFFSET(get<T>, {0xB28, 8, 0, 0})
	SMember(FScalableFloat)                            InputPriority                                               OFFSET(getStruct<T>, {0xB30, 40, 0, 0})
	DMember(int32_t)                                   NumChoices                                                  OFFSET(get<int32_t>, {0xB58, 4, 0, 0})
	DMember(int32_t)                                   HighlightedChoiceIndex                                      OFFSET(get<int32_t>, {0xB5C, 4, 0, 0})
	SMember(FScalableFloat)                            RerollHoldInputSeconds                                      OFFSET(getStruct<T>, {0xB70, 40, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility.SetHighlightedChoiceIndex
	// void SetHighlightedChoiceIndex(int32_t NewChoiceIndex);                                                                  // [0x9934094] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility.OnSelectedChoiceIndex
	// void OnSelectedChoiceIndex(int32_t ChoiceIndex);                                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility.OnRerollPressedAndCannotAfford
	// void OnRerollPressedAndCannotAfford();                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility.OnHoldRerollInputChanged
	// void OnHoldRerollInputChanged(bool bIsPressed, bool bCompletedHold);                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility.OnHighlightSelectionUpdated
	// void OnHighlightSelectionUpdated(int32_t NewHighlightedChoiceIndex);                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem
/// Size: 0x00A0 (0x0000A8 - 0x000148)
class UFortBattleRoyalePlayerAugmentSystem : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	DMember(float)                                     ServerGrantingStartedTimestamp                              OFFSET(get<float>, {0xA8, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMatchAugmentsResetEvent                                   OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	DMember(bool)                                      bEnableAugmentCollectionUnlocking                           OFFSET(get<bool>, {0xC0, 1, 0, 0})
	SMember(FScalableFloat)                            NumRollsForUnlock                                           OFFSET(getStruct<T>, {0xD0, 40, 0, 0})
	SMember(FScalableFloat)                            EnableUnlocking                                             OFFSET(getStruct<T>, {0xF8, 40, 0, 0})
	SMember(FScalableFloat)                            EnableBRAugmentSystem                                       OFFSET(getStruct<T>, {0x120, 40, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.TryIncrementUnlockRollCount
	// void TryIncrementUnlockRollCount();                                                                                      // [0x9934144] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.TryClaimUnlock
	// FFortAugmentPassiveUnlockResult TryClaimUnlock();                                                                        // [0x9934114] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.ResetMatchAugments
	// void ResetMatchAugments();                                                                                               // [0x9933dd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.OnServerAugmentGrantTimestampReplicated
	// void OnServerAugmentGrantTimestampReplicated(float ServerGrantStartTimestamp);                                           // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.OnRep_ServerGrantingStartedTimestamp
	// void OnRep_ServerGrantingStartedTimestamp();                                                                             // [0x35854f4] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.OnPossedPawnChanged
	// void OnPossedPawnChanged(APawn* OldPawn, APawn* NewPawn);                                                                // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.OnMatchAugmentsReset
	// void OnMatchAugmentsReset();                                                                                             // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.OnBattleRoyaleMatchAugmentResetDelegate__DelegateSignature
	// void OnBattleRoyaleMatchAugmentResetDelegate__DelegateSignature();                                                       // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.HandlePossessedPawnChanged
	// void HandlePossessedPawnChanged(APawn* OldPawn, APawn* NewPawn);                                                         // [0x9933944] Final|Native|Protected 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.GetServerGrantingStartedTimestamp
	// float GetServerGrantingStartedTimestamp();                                                                               // [0x315ad40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.ChooseUnlockFromList
	// FFortAugmentPassiveUnlockResult ChooseUnlockFromList(TArray<FPlayerAugmentLockStatus>& LockedList);                      // [0x9930f4c] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.BP_GetAugmentPlayerPawn
	// void BP_GetAugmentPlayerPawn(EFortBRAugmentSystemCastResult& OutExec, AFortPlayerPawn*& OutFortPlayerPawn);              // [0x9930e34] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.BP_GetAugmentController
	// void BP_GetAugmentController(EFortBRAugmentSystemCastResult& OutExec, AController*& OutController);                      // [0x220748c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.BlueprintAugmentLog
	// void BlueprintAugmentLog(FString Message, EBattleRoyaleBPAugmentLogVerbosity Verbosity, bool bAutonomousProxyOnly);      // [0x2cdc518] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.AuthoritySetServerGrantingStartedTimestamp
	// void AuthoritySetServerGrantingStartedTimestamp(float ServerTimestamp);                                                  // [0x9930d18] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortCollectionDataEntryPlayerAugment
/// Size: 0x0020 (0x000030 - 0x000050)
class UFortCollectionDataEntryPlayerAugment : public UFortCollectionDataEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UFortPlayerAugmentItemDefinition*)         PlayerAugmentItemDefinition                                 OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FText)                                     AdditionalDescription                                       OFFSET(getStruct<T>, {0x38, 24, 0, 0})
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortCollectionDataPlayerAugment
/// Size: 0x0000 (0x000090 - 0x000090)
class UFortCollectionDataPlayerAugment : public UFortCollectionData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortContextualTutorial_MultipleAugmentsQueued
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UFortContextualTutorial_MultipleAugmentsQueued : public UFortContextualTutorial
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem
/// Size: 0x0520 (0x0000A8 - 0x0005C8)
class UFortControllerComponent_AugmentGrantingSystem : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1480;

public:
	SMember(FMulticastInlineDelegate)                  OnCanSelectAugmentChanged                                   OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSelectedAugmentForGrant                                   OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAvailableAugmentsForGrantingUpdated                       OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAuthorityRequestAugmentChoices                            OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLocalReroll                                               OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnReplicateNumPendingAugmentsToGrant                        OFFSET(getStruct<T>, {0x118, 16, 0, 0})
	CMember(UFortWeaponItemDefinition*)                AugmentSelectionModeItem                                    OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortItemDefinition*>)      CachedResourceCurrencyOverride                              OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(UFortWorldItem*)                           SelectionModeWorldItem                                      OFFSET(get<T>, {0x138, 8, 0, 0})
	SMember(FScalableFloat)                            Enabled                                                     OFFSET(getStruct<T>, {0x140, 40, 0, 0})
	DMember(int8_t)                                    ReplicatedNumPendingAugmentsToGrant                         OFFSET(get<int8_t>, {0x168, 1, 0, 0})
	CMember(TArray<FPlayerAugmentChoiceDatum>)         ReplicatedAugmentChoices                                    OFFSET(get<T>, {0x170, 16, 0, 0})
	DMember(int8_t)                                    NumFreeRerolls                                              OFFSET(get<int8_t>, {0x180, 1, 0, 0})
	DMember(int8_t)                                    NumLockedSelectionChoices                                   OFFSET(get<int8_t>, {0x181, 1, 0, 0})
	CMember(UInputComponent*)                          PrimaryInputComponentWeaponMode                             OFFSET(get<T>, {0x188, 8, 0, 0})
	CMember(UInputComponent*)                          PrimaryInputComponentBuildMode                              OFFSET(get<T>, {0x190, 8, 0, 0})
	CMember(UInputComponent*)                          TemporaryInputComponent                                     OFFSET(get<T>, {0x198, 8, 0, 0})
	SMember(FScalableFloat)                            AugmentSelectInputPriority                                  OFFSET(getStruct<T>, {0x1A0, 40, 0, 0})
	SMember(FGameplayTagContainer)                     SelectionBlockedPlayerTags                                  OFFSET(getStruct<T>, {0x1C8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     AugmentSelectInputDisablePlayerTags                         OFFSET(getStruct<T>, {0x1E8, 32, 0, 0})
	CMember(TArray<FFortAugmentRerollCost>)            RerollCosts                                                 OFFSET(get<T>, {0x230, 16, 0, 0})
	SMember(FFortItemEntry)                            SelectorItemEntry                                           OFFSET(getStruct<T>, {0x240, 408, 0, 0})
	SMember(FFortItemEntry)                            LocalCachedPreviousWeapon                                   OFFSET(getStruct<T>, {0x3D8, 408, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.ServerRequestReroll
	// void ServerRequestReroll();                                                                                              // [0x77d3b90] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.ServerGrantAugment
	// void ServerGrantAugment(UFortPlayerAugmentItemDefinition* ChosenAugmentDef);                                             // [0x7d7d850] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnSelectedAugmentForGrantDelegate__DelegateSignature
	// void OnSelectedAugmentForGrantDelegate__DelegateSignature(UFortPlayerAugmentItemDefinition* SelectedAugment);            // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnReplicateNumPendingAugmentsToGrantDelegate__DelegateSignature
	// void OnReplicateNumPendingAugmentsToGrantDelegate__DelegateSignature(int8_t NumPendingAugmentsToGrant);                  // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnRep_SelectorItemEntry
	// void OnRep_SelectorItemEntry();                                                                                          // [0x9933dc0] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnRep_ReplicatedNumPendingAugmentsToGrant
	// void OnRep_ReplicatedNumPendingAugmentsToGrant();                                                                        // [0x2e8546c] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnRep_ReplicatedAugmentChoices
	// void OnRep_ReplicatedAugmentChoices();                                                                                   // [0x9933dac] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnRep_NumLockedSelectionChoices
	// void OnRep_NumLockedSelectionChoices();                                                                                  // [0x9933d98] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnRep_NumFreeRerolls
	// void OnRep_NumFreeRerolls();                                                                                             // [0x3464954] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnNumLockedSelectionChoicesUpdatedDelegate__DelegateSignature
	// void OnNumLockedSelectionChoicesUpdatedDelegate__DelegateSignature(int32_t NewNumFreeRerolls);                           // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnMinigameStarted
	// void OnMinigameStarted();                                                                                                // [0x9933d70] Final|Native|Protected 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnLocalUnequipAugmentSelectionPressed
	// void OnLocalUnequipAugmentSelectionPressed();                                                                            // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnLocalRerollDelegate__DelegateSignature
	// void OnLocalRerollDelegate__DelegateSignature();                                                                         // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnLocalEquipAugmentSelectionPressed
	// void OnLocalEquipAugmentSelectionPressed();                                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnFreeRerollsUpdatedDelegate__DelegateSignature
	// void OnFreeRerollsUpdatedDelegate__DelegateSignature(int32_t NewNumFreeRerolls);                                         // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnAvailableAugmentsForGrantingUpdatedDelegate__DelegateSignature
	// void OnAvailableAugmentsForGrantingUpdatedDelegate__DelegateSignature(UFortControllerComponent_AugmentGrantingSystem* GrantingComponent); // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnAuthorityRequestAugmentChoicesDelegate__DelegateSignature
	// void OnAuthorityRequestAugmentChoicesDelegate__DelegateSignature(TArray<UFortPlayerAugmentItemDefinition*>& IgnoreInRoll); // [0x1ebf994] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.IsSelectionItemEquipped
	// bool IsSelectionItemEquipped();                                                                                          // [0x9933b7c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.IsSelectionChoicesLocked
	// bool IsSelectionChoicesLocked();                                                                                         // [0x9933b60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.HandleUnHolsteredEvent
	// void HandleUnHolsteredEvent();                                                                                           // [0x9933b4c] Final|Native|Protected 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.HandleToggleFullscreenMap
	// void HandleToggleFullscreenMap(bool bVisible);                                                                           // [0x9933acc] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.HandlePossessedPawnChanged
	// void HandlePossessedPawnChanged(APawn* OldPawn, APawn* NewPawn);                                                         // [0x9933a08] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.HandleHolsteredEvent
	// void HandleHolsteredEvent();                                                                                             // [0x9933908] Final|Native|Protected 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.HandleChangedBuildMode
	// void HandleChangedBuildMode(bool bEnteredBuildMode);                                                                     // [0x99336a0] Final|Native|Protected 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.GetPendingAugmentsToGrant
	// int32_t GetPendingAugmentsToGrant();                                                                                     // [0x9933288] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.GetNumFreeRerolls
	// int32_t GetNumFreeRerolls();                                                                                             // [0x9933270] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.GetAvailableAugmentsToGrant
	// TArray<FPlayerAugmentChoiceDatum> GetAvailableAugmentsToGrant();                                                         // [0x9931bd4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.GetAugmentGrantingComponentFromController
	// UFortControllerComponent_AugmentGrantingSystem* GetAugmentGrantingComponentFromController(AController* Controller);      // [0x2c35900] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.ClientSelectAvailableAugmentToGrant
	// void ClientSelectAvailableAugmentToGrant(UFortPlayerAugmentItemDefinition* ChosenAugmentDef);                            // [0x99315fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.CanSelectAugmentChangedDelegate__DelegateSignature
	// void CanSelectAugmentChangedDelegate__DelegateSignature(bool bCanSelectAugment);                                         // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.CanReroll
	// bool CanReroll();                                                                                                        // [0x9930f28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthoritySetAvailableAugmentChoices
	// void AuthoritySetAvailableAugmentChoices(TArray<FPlayerAugmentChoiceDatum>& AvailableAugmentsToGrant);                   // [0x9930540] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthorityResetAugmentData
	// void AuthorityResetAugmentData();                                                                                        // [0x993052c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthorityRequestSelectionToolItemGrant
	// void AuthorityRequestSelectionToolItemGrant(UObject* Instigator);                                                        // [0x99304bc] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthorityIncrementLockedSelectionChoices
	// void AuthorityIncrementLockedSelectionChoices(int32_t NumLocksToAdd);                                                    // [0x993042c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthorityGrantNewAugment
	// void AuthorityGrantNewAugment();                                                                                         // [0x9930418] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthorityGrantFreeReroll
	// void AuthorityGrantFreeReroll();                                                                                         // [0x99303e4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/PlayerAugmentsCodeRuntime.AugmentFuctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAugmentFuctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents
/// Size: 0x00A8 (0x0000A8 - 0x000150)
class UFortControllerComponent_AugmentUIEvents : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FMulticastInlineDelegate)                  OnAugmentSelectorHighlightedChoice                          OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAugmentStartedSelectionOfChoice                           OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAugmentGrantingTimersFinishedForMatch                     OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAugmentGrantingTimersResetForMatch                        OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  AugmentHoldInputRerollChanged                               OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAugmentToolViewSwap                                       OFFSET(getStruct<T>, {0x118, 16, 0, 0})
	DMember(int32_t)                                   NumAugmentGrantRoundsForPlaylist                            OFFSET(get<int32_t>, {0x140, 4, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.UpdatedTimerProgress
	// void UpdatedTimerProgress(float TimeRemaining, float TimePercentage);                                                    // [0x9934158] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.SetNumGrantableAugmentsForPlaylist
	// void SetNumGrantableAugmentsForPlaylist(int32_t NewNumRounds);                                                           // [0x5cc6328] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnGrantTimerProgressUpdatedDelegate__DelegateSignature
	// void OnGrantTimerProgressUpdatedDelegate__DelegateSignature(float TimeRemaining, float TimePercentage);                  // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentToolViewSwapDelegate__DelegateSignature
	// void OnAugmentToolViewSwapDelegate__DelegateSignature(bool ViewingInventoryAugments);                                    // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentStartedSelectionOfChoiceDelegate__DelegateSignature
	// void OnAugmentStartedSelectionOfChoiceDelegate__DelegateSignature(int32_t ChoiceIndex);                                  // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentSelectorOpenedStatusChangedDelegate__DelegateSignature
	// void OnAugmentSelectorOpenedStatusChangedDelegate__DelegateSignature(bool bIsOpened, bool bViewingInventory);            // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentSelectorHighlightedChoiceDelegate__DelegateSignature
	// void OnAugmentSelectorHighlightedChoiceDelegate__DelegateSignature(int32_t ChoiceIndex);                                 // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentGrantingTimersResetForMatchDelegate__DelegateSignature
	// void OnAugmentGrantingTimersResetForMatchDelegate__DelegateSignature();                                                  // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentGrantingTimersFinishedForMatchDelegate__DelegateSignature
	// void OnAugmentGrantingTimersFinishedForMatchDelegate__DelegateSignature();                                               // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.NotifyGrantingTimersReset
	// void NotifyGrantingTimersReset();                                                                                        // [0x9933d5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.NotifyGrantingTimersFinished
	// void NotifyGrantingTimersFinished();                                                                                     // [0x9933d38] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.HandleAugmentSelectorOpenedStatusChanged
	// void HandleAugmentSelectorOpenedStatusChanged(bool bIsOpened, bool bViewingInventory);                                   // [0x9933418] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.AugmentHoldInputRerollChangedDelegate__DelegateSignature
	// void AugmentHoldInputRerollChangedDelegate__DelegateSignature(EAugmentHoldInputRerollState HoldState, float HoldDurationSeconds); // [0x1ebf994] MulticastDelegate|Public|Delegate 
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence
/// Size: 0x0118 (0x0000A8 - 0x0001C0)
class UFortControllerComponent_PlayerAugmentPersistence : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FScalableFloat)                            Enabled                                                     OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	SMember(FScalableFloat)                            LockMissingCollectionAugmentsEnabled                        OFFSET(getStruct<T>, {0xD0, 40, 0, 0})
	CMember(AFortPlayerControllerAthena*)              PlayerController                                            OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(UFortCollectionDataPlayerAugment*)         CollectionData                                              OFFSET(get<T>, {0x100, 8, 0, 0})
	SMember(FPlayerAugmentsPersistenceData)            LivePlayerAugmentsPersistenceData                           OFFSET(getStruct<T>, {0x108, 24, 0, 0})
	CMember(TSet<UFortPlayerAugmentItemDefinition*>)   AugmentsCollectedThisMatch                                  OFFSET(get<T>, {0x120, 80, 0, 0})
	CMember(TArray<FReplicatedSharedPlayerAugment>)    ReplicatedSharedPlayerAugments                              OFFSET(get<T>, {0x170, 16, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.HandleMcpProfilesInitialized
	// void HandleMcpProfilesInitialized();                                                                                     // [0x993391c] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.HandleCollectionDataTableLoaded
	// void HandleCollectionDataTableLoaded(TWeakObjectPtr<UFortCollectionsDataTable*> CollectionsDataTableSoftPtr);            // [0x9933814] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.HandleCollectionDataLoaded
	// void HandleCollectionDataLoaded(TWeakObjectPtr<UFortCollectionData*> BaseCollectionDataSoftPtr);                         // [0x9933720] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetRollCountSinceLastRandomUnlock
	// int32_t GetRollCountSinceLastRandomUnlock();                                                                             // [0x6645eac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetLockStatusForAll
	// void GetLockStatusForAll(TArray<FPlayerAugmentLockStatus>& OutLockStatusArray);                                          // [0x99323d4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetLockStatus
	// FPlayerAugmentLockStatus GetLockStatus(UFortPlayerAugmentItemDefinition* PlayerAugmentItemDefinition);                   // [0x9932334] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetLockedList
	// void GetLockedList(TArray<FPlayerAugmentLockStatus>& OutLockedList, bool bIncludeSharedAugments);                        // [0x9932a94] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetCarryOverPlayerAugments
	// void GetCarryOverPlayerAugments(TArray<FCarryOverPlayerAugment>& OutCarryOverPlayerAugments);                            // [0x9931c74] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.AuthorityUnlockPlayerAugment
	// void AuthorityUnlockPlayerAugment(UFortPlayerAugmentItemDefinition* PlayerAugmentToUnlock);                              // [0x9930db4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.AuthoritySetRollCountSinceLastRandomUnlock
	// void AuthoritySetRollCountSinceLastRandomUnlock(int32_t NewRollCount);                                                   // [0x9930c98] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.AuthoritySetCarryOverPlayerAugments
	// void AuthoritySetCarryOverPlayerAugments(TArray<FCarryOverPlayerAugment>& NewCarryOverPlayerAugments);                   // [0x99305d8] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortGamestateComponent_AugmentTableManager
/// Size: 0x0050 (0x0002D8 - 0x000328)
class UFortGamestateComponent_AugmentTableManager : public UFortGamestateComponent_DynamicRollTableManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentDynamicRollPlayerComponent
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UFortControllerComponent_AugmentDynamicRollPlayerComponent : public UFortControllerComponent_DynamicRollPlayerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortMcpCollectionPlayerAugment
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UFortMcpCollectionPlayerAugment : public UFortMcpCollectionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortPlayerAugmentCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem
/// Size: 0x0108 (0x0000A0 - 0x0001A8)
class UFortPlayerStateComponent_PlayerAugmentSystem : public UFortPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	SMember(FMulticastInlineDelegate)                  OnAugmentListUpdated                                        OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FScalableFloat)                            EnableAugmentsFeature                                       OFFSET(getStruct<T>, {0xC8, 40, 0, 0})
	CMember(UClass*)                                   DynamicTagGEClass                                           OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(TMap<FPrimaryAssetId, FPlayerAugmentTrackedData>) AugmentToRuntimeDataMap                              OFFSET(get<T>, {0xF8, 80, 0, 0})
	CMember(TArray<UFortPlayerAugmentItemDefinition*>) ActiveAugments                                              OFFSET(get<T>, {0x148, 16, 0, 0})
	CMember(TMap<FGameplayTag, double>)                RuntimeAugmentMatchDataCacheFloat                           OFFSET(get<T>, {0x158, 80, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.SetAugmentMatchDataCacheFloat
	// void SetAugmentMatchDataCacheFloat(FGameplayTag TargetAugmentCacheTag, double InData);                                   // [0x9933de8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.OnRep_ActiveAugments
	// void OnRep_ActiveAugments();                                                                                             // [0x9933d84] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.OnAugmentListUpdatedEventDispatcher__DelegateSignature
	// void OnAugmentListUpdatedEventDispatcher__DelegateSignature(UFortPlayerStateComponent_PlayerAugmentSystem* AugmentComponent); // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.HandlePlayerPawnSpawned
	// void HandlePlayerPawnSpawned();                                                                                          // [0x9933930] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.HandleBotPlayerPawnSpawned
	// void HandleBotPlayerPawnSpawned(AFortAthenaAIBotController* BotController, AFortPlayerPawnAthena* BotPawn);              // [0x99335dc] Final|Native|Private 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.GetAugmentMatchDataCacheFloat
	// double GetAugmentMatchDataCacheFloat(EAugmentExecResult& OutExec, FGameplayTag TargetAugmentCacheTag);                   // [0x9931a28] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.GetAugmentComponentValidated
	// UFortPlayerStateComponent_PlayerAugmentSystem* GetAugmentComponentValidated(EAugmentExecResult& OutExec, AActor* PlayerContextActor); // [0x9931878] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.GetAugmentComponent
	// UFortPlayerStateComponent_PlayerAugmentSystem* GetAugmentComponent(AActor* PlayerContextActor);                          // [0x99317f8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.GetActiveAugments
	// TArray<UFortPlayerAugmentItemDefinition*> GetActiveAugments(AActor* Actor);                                              // [0x9931740] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.ClientClearMatchAugmentDataCache
	// void ClientClearMatchAugmentDataCache();                                                                                 // [0x2326950] Net|NetReliableNative|Event|Public|NetClient 
};

/// Struct /Script/PlayerAugmentsCodeRuntime.FortAugmentPassiveUnlockResult
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortAugmentPassiveUnlockResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UFortPlayerAugmentItemDefinition*)         UnlockedAugment                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bAlreadyInInventory                                         OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/PlayerAugmentsCodeRuntime.PlayerAugmentLockStatus
/// Size: 0x0018 (0x000000 - 0x000018)
class FPlayerAugmentLockStatus : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UFortPlayerAugmentItemDefinition*)         PlayerAugmentItemDefinition                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bIsLocked                                                   OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bWasCollectedInThisMatch                                    OFFSET(get<bool>, {0x9, 1, 0, 0})
	CMember(AFortPlayerStateAthena*)                   SharedFromPlayer                                            OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/PlayerAugmentsCodeRuntime.PlayerAugmentChoiceDatum
/// Size: 0x0028 (0x000000 - 0x000028)
class FPlayerAugmentChoiceDatum : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UFortPlayerAugmentItemDefinition*)         ItemDef                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     ChoiceMetaTags                                              OFFSET(getStruct<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/PlayerAugmentsCodeRuntime.FortAugmentRerollCost
/// Size: 0x0030 (0x000000 - 0x000030)
class FFortAugmentRerollCost : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UFortItemDefinition*)                      ResourceCurrency                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FScalableFloat)                            Amount                                                      OFFSET(getStruct<T>, {0x8, 40, 0, 0})
};

/// Struct /Script/PlayerAugmentsCodeRuntime.PlayerAugmentTrackedData
/// Size: 0x0028 (0x000000 - 0x000028)
class FPlayerAugmentTrackedData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FFortAbilitySetHandle>)             AbilitySetHandles                                           OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FPlayerAugmentGameplayEffectHandlesStackEntry>) GEHandlesStack                                  OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/PlayerAugmentsCodeRuntime.PlayerAugmentGameplayEffectHandlesStackEntry
/// Size: 0x0010 (0x000000 - 0x000010)
class FPlayerAugmentGameplayEffectHandlesStackEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FActiveGameplayEffectHandle>)       GEHandles                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/PlayerAugmentsCodeRuntime.CarryOverPlayerAugment
/// Size: 0x000C (0x000000 - 0x00000C)
class FCarryOverPlayerAugment : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FPrimaryAssetId)                           AugmentAssetId                                              OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     SourcePlaylistName                                          OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/PlayerAugmentsCodeRuntime.ReplicatedSharedPlayerAugment
/// Size: 0x000C (0x000000 - 0x00000C)
class FReplicatedSharedPlayerAugment : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   PlayerAugmentIndex                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerStateAthena*>)   SharedFromPlayer                                            OFFSET(get<T>, {0x4, 8, 0, 0})
};

/// Struct /Script/PlayerAugmentsCodeRuntime.FortAugmentBaseWeightTableRow
/// Size: 0x0000 (0x000038 - 0x000038)
class FFortAugmentBaseWeightTableRow : public FFortDynamicRollBaseWeightTableRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/PlayerAugmentsCodeRuntime.FortAugmentWeightModificationDataRow
/// Size: 0x0000 (0x000018 - 0x000018)
class FFortAugmentWeightModificationDataRow : public FFortDynamicRollWeightModifierTableRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PlayerAugmentsCodeRuntime.FortMcpCollectedPlayerAugmentProperties
/// Size: 0x0001 (0x000000 - 0x000001)
class FFortMcpCollectedPlayerAugmentProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Enum /Script/PlayerAugmentsCodeRuntime.EBattleRoyaleBPAugmentLogVerbosity
/// Size: 0x03
enum EBattleRoyaleBPAugmentLogVerbosity : uint8_t
{
	EBattleRoyaleBPAugmentLogVerbosity__Log0                                         = 0,
	EBattleRoyaleBPAugmentLogVerbosity__Verbose1                                     = 1,
	EBattleRoyaleBPAugmentLogVerbosity__EBattleRoyaleBPAugmentLogVerbosity_MAX2      = 2
};

/// Enum /Script/PlayerAugmentsCodeRuntime.EFortBRAugmentSystemCastResult
/// Size: 0x03
enum EFortBRAugmentSystemCastResult : uint8_t
{
	EFortBRAugmentSystemCastResult__Valid0                                           = 0,
	EFortBRAugmentSystemCastResult__Invalid1                                         = 1,
	EFortBRAugmentSystemCastResult__EFortBRAugmentSystemCastResult_MAX2              = 2
};

/// Enum /Script/PlayerAugmentsCodeRuntime.EAugmentHoldInputRerollState
/// Size: 0x03
enum EAugmentHoldInputRerollState : uint8_t
{
	EAugmentHoldInputRerollState__Pressed0                                           = 0,
	EAugmentHoldInputRerollState__Released1                                          = 1,
	EAugmentHoldInputRerollState__EAugmentHoldInputRerollState_MAX2                  = 2
};

/// Enum /Script/PlayerAugmentsCodeRuntime.EAugmentExecResult
/// Size: 0x03
enum EAugmentExecResult : uint8_t
{
	EAugmentExecResult__Success0                                                     = 0,
	EAugmentExecResult__Failure1                                                     = 1,
	EAugmentExecResult__EAugmentExecResult_MAX2                                      = 2
};

