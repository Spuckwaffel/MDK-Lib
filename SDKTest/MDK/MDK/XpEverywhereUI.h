
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

/// Class /Script/XpEverywhereUI.XpEverywhereAccoladesWidget
/// Size: 0x0078 (0x000328 - 0x0003A0)
class UXpEverywhereAccoladesWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	SMember(FFortPrioritizedWidgetData)                PrioritizationData                                          OFFSET(getStruct<T>, {0x390, 2, 0, 0})


	/// Functions
	// Function /Script/XpEverywhereUI.XpEverywhereAccoladesWidget.OpenWidget
	// void OpenWidget(UFortAccoladeItemDefinition* AccoladeDef, int32_t XpValue, FText& DisplayName, TWeakObjectPtr<UTexture2D*>& AccoladeLargePreviewImageOverride, FText& SimulatedName, FText& SimulatedText, EFortSimulatedXPSize SimulatedXpSize); // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/XpEverywhereUI.XpEverywhereAccoladesWidget.OnStompedByOtherWidget
	// void OnStompedByOtherWidget();                                                                                           // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/XpEverywhereUI.XpEverywhereAccoladesWidget.OnEventAdded
	// void OnEventAdded();                                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/XpEverywhereUI.XpEverywhereAccoladesWidget.HasMoreXPEvents
	// bool HasMoreXPEvents();                                                                                                  // [0xa5a9d30] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XpEverywhereUI.XpEverywhereAccoladesWidget.CloseWidget
	// void CloseWidget();                                                                                                      // [0xa5a9bbc] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/XpEverywhereUI.XpEverywhereBar
/// Size: 0x00D8 (0x000400 - 0x0004D8)
class UXpEverywhereBar : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1240;

public:
	DMember(bool)                                      bXpBarAlwaysActive                                          OFFSET(get<bool>, {0x400, 1, 0, 0})
	CMember(UFortSocialAvatarIcon*)                    SocialAvatarIcon                                            OFFSET(get<T>, {0x408, 8, 0, 0})


	/// Functions
	// Function /Script/XpEverywhereUI.XpEverywhereBar.OnXpBarUpdated
	// void OnXpBarUpdated(int32_t ShownXP, int32_t ShownLevel, int32_t NewDesiredXP, int32_t NewDesiredLevel, int32_t NewRemainingRestXP); // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/XpEverywhereUI.XpEverywhereBar.OnXpBarInitialized
	// void OnXpBarInitialized(int32_t CurrentXP, int32_t CurrentLevel, int32_t CurrentRemainingRestXP);                        // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/XpEverywhereUI.XpEverywhereBar.GetTotalXpRequiredForLevel
	// int32_t GetTotalXpRequiredForLevel(int32_t InLevel);                                                                     // [0xa5a9c7c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XpEverywhereUI.XpEverywhereBar.DoneUpdatingXpBar
	// void DoneUpdatingXpBar();                                                                                                // [0xa5a9c54] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/XpEverywhereUI.XpEverywhereLevelUpWidget
/// Size: 0x0008 (0x000400 - 0x000408)
class UXpEverywhereLevelUpWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1032;

public:
};

/// Class /Script/XpEverywhereUI.XpEverywhereReticleWidget
/// Size: 0x0018 (0x000328 - 0x000340)
class UXpEverywhereReticleWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
};

/// Class /Script/XpEverywhereUI.XpEverywhereRewardWidget
/// Size: 0x0090 (0x000328 - 0x0003B8)
class UXpEverywhereRewardWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 952;

public:
	CMember(UClass*)                                   DefaultEntryClass                                           OFFSET(get<T>, {0x370, 8, 0, 0})
	DMember(bool)                                      bHasPrioritizedWidgetFocus                                  OFFSET(get<bool>, {0x378, 1, 0, 0})
	CMember(UFortNotificationEntry*)                   ActiveWidget                                                OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(TArray<UFortNotificationEntry*>)           WidgetQueue                                                 OFFSET(get<T>, {0x388, 16, 0, 0})
	CMember(UVerticalBox*)                             NotificationUpdatesBox                                      OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(TArray<FXpEverywhereNotificationWidgetClass>) NotificationClassPoolData                                OFFSET(get<T>, {0x3A0, 16, 0, 0})
	SMember(FFortPrioritizedWidgetData)                PrioritizationData                                          OFFSET(getStruct<T>, {0x3B0, 2, 0, 0})


	/// Functions
	// Function /Script/XpEverywhereUI.XpEverywhereRewardWidget.HandleNotificationUpdateFinished
	// void HandleNotificationUpdateFinished();                                                                                 // [0xa5a9d08] Final|Native|Protected 
};

/// Class /Script/XpEverywhereUI.XpEverywhereUIComponent
/// Size: 0x00C0 (0x0000A0 - 0x000160)
class UXpEverywhereUIComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FGameplayTagContainer)                     XpEverywhereHiddenElementTags                               OFFSET(getStruct<T>, {0x130, 32, 0, 0})
};

/// Struct /Script/XpEverywhereUI.XpEverywhereNotificationWidgetClass
/// Size: 0x0020 (0x000000 - 0x000020)
class FXpEverywhereNotificationWidgetClass : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UClass*)                                   NotificationWidgetClass                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   InitialPoolSize                                             OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bCanIncreasePoolSizeAtRunTime                               OFFSET(get<bool>, {0xC, 1, 0, 0})
	CMember(TArray<UFortNotificationEntry*>)           WidgetPool                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
};

