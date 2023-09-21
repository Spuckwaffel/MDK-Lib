
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
/// Size: 0x0070 (0x000310 - 0x000380)
class UXpEverywhereAccoladesWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FFortPrioritizedWidgetData)                PrioritizationData                                          ___ OFFSET(get<T>, {0x370, 2, 0, 0})
};

/// Class /Script/XpEverywhereUI.XpEverywhereBar
/// Size: 0x00D8 (0x0003E8 - 0x0004C0)
class UXpEverywhereBar : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1216;

public:
	DMember(bool)                                      bXpBarAlwaysActive                                          ___ OFFSET(get<bool>, {0x3E8, 1, 0, 0})
	CMember(UFortSocialAvatarIcon*)                    SocialAvatarIcon                                            ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
};

/// Class /Script/XpEverywhereUI.XpEverywhereLevelUpWidget
/// Size: 0x0008 (0x0003E8 - 0x0003F0)
class UXpEverywhereLevelUpWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
};

/// Class /Script/XpEverywhereUI.XpEverywhereReticleWidget
/// Size: 0x0018 (0x000310 - 0x000328)
class UXpEverywhereReticleWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
};

/// Class /Script/XpEverywhereUI.XpEverywhereRewardWidget
/// Size: 0x0090 (0x000310 - 0x0003A0)
class UXpEverywhereRewardWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	CMember(UClass*)                                   DefaultEntryClass                                           ___ OFFSET(get<T>, {0x358, 8, 0, 0})
	DMember(bool)                                      bHasPrioritizedWidgetFocus                                  ___ OFFSET(get<bool>, {0x360, 1, 0, 0})
	CMember(UFortNotificationEntry*)                   ActiveWidget                                                ___ OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(TArray<UFortNotificationEntry*>)           WidgetQueue                                                 ___ OFFSET(get<T>, {0x370, 16, 0, 0})
	CMember(UVerticalBox*)                             NotificationUpdatesBox                                      ___ OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(TArray<FXpEverywhereNotificationWidgetClass>) NotificationClassPoolData                                ___ OFFSET(get<T>, {0x388, 16, 0, 0})
	SMember(FFortPrioritizedWidgetData)                PrioritizationData                                          ___ OFFSET(get<T>, {0x398, 2, 0, 0})
};

/// Class /Script/XpEverywhereUI.XpEverywhereUIComponent
/// Size: 0x00C0 (0x0000A0 - 0x000160)
class UXpEverywhereUIComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FGameplayTagContainer)                     XpEverywhereHiddenElementTags                               ___ OFFSET(get<T>, {0x130, 32, 0, 0})
};

/// Struct /Script/XpEverywhereUI.XpEverywhereNotificationWidgetClass
/// Size: 0x0020 (0x000000 - 0x000020)
class FXpEverywhereNotificationWidgetClass : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UClass*)                                   NotificationWidgetClass                                     ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   InitialPoolSize                                             ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bCanIncreasePoolSizeAtRunTime                               ___ OFFSET(get<bool>, {0xC, 1, 0, 0})
	CMember(TArray<UFortNotificationEntry*>)           WidgetPool                                                  ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

