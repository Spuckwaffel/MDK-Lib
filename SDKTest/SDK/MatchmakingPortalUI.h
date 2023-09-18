/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MatchmakingPortalUI.

/// Class /Script/MatchmakingPortalUI.FortMatchmakingPortalCountdown
/// Size: 0x0030 (0x0003E8 - 0x000418)
class UFortMatchmakingPortalCountdown : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1048;

public:
	CMember(UInputComponent*)                          MatchmakingPortalInputComponent                             ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UFortActivityScalingTextBlock*)            Text_IslandName                                             ___ OFFSET(get<T>, {0x3F8, 8, 0, 0})
	DMember(float)                                     CountdownTime                                               ___ OFFSET(get<float>, {0x400, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFinishedCountdown                                         ___ OFFSET(get<T>, {0x408, 16, 0, 0})
};

/// Class /Script/MatchmakingPortalUI.FortMatchmakingPortalModal
/// Size: 0x03E0 (0x000438 - 0x000818)
class UFortMatchmakingPortalModal : public UFortActivityView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2072;

public:
	SMember(FTimerHandle)                              MatchmakingStartTimerHandle                                 ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(TArray<FString>)                           XpTagMnemonicWhitelist                                      ___ OFFSET(get<T>, {0x7A8, 16, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_ActivityOrigin                                         ___ OFFSET(get<T>, {0x7B8, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_LinkCode                                               ___ OFFSET(get<T>, {0x7C0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ActivityName                                           ___ OFFSET(get<T>, {0x7C8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ActivityDescription                                    ___ OFFSET(get<T>, {0x7D0, 8, 0, 0})
	CMember(UScrollBox*)                               ScrollBox_ActivityDescription                               ___ OFFSET(get<T>, {0x7D8, 8, 0, 0})
	CMember(UDynamicEntryBox*)                         EntryBox_ActivityTags                                       ___ OFFSET(get<T>, {0x7E0, 8, 0, 0})
	CMember(UFortSimpleMaterialProgressBar*)           ProgressBar_ContentDownload                                 ___ OFFSET(get<T>, {0x7E8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_AcceptPublic                                         ___ OFFSET(get<T>, {0x7F0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_AcceptPrivate                                        ___ OFFSET(get<T>, {0x7F8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Favorite                                             ___ OFFSET(get<T>, {0x800, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Cancel                                               ___ OFFSET(get<T>, {0x808, 8, 0, 0})
	CMember(UFortModalBackground*)                     ModalBackground                                             ___ OFFSET(get<T>, {0x810, 8, 0, 0})
};

/// Class /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup
/// Size: 0x0128 (0x0003F0 - 0x000518)
class UFortMatchmakingPortalPopup : public UFortPortalHUDDetails
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1304;

public:
	CMember(UFortGameActivity*)                        CachedGameActivity                                          ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UFortMatchmakingPortalModal*)              MatchmakingPortalModalWidget                                ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UClass*)                                   MatchmakingFeedbackClass                                    ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UClass*)                                   MatchmakingCountdownClass                                   ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	SMember(FVector)                                   WorldPointerLocation                                        ___ OFFSET(get<T>, {0x420, 24, 0, 0})
	SMember(FText)                                     CreatorNameTextFormat                                       ___ OFFSET(get<T>, {0x438, 24, 0, 0})
	CMember(TWeakObjectPtr<UHeaderDescriptionHUDComponent*>) CachedHUDComponent                                    ___ OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UClass*)                                   IslandModal                                                 ___ OFFSET(get<T>, {0x458, 8, 0, 0})
	SMember(FMatchmakingPortalPopupData)               CachedIslandData                                            ___ OFFSET(get<T>, {0x460, 96, 0, 0})
	SMember(FText)                                     InvalidLinkCodeWarningText                                  ___ OFFSET(get<T>, {0x4C0, 24, 0, 0})
	DMember(float)                                     MatchmakingFeedbackDelayTime                                ___ OFFSET(get<float>, {0x4D8, 4, 0, 0})
	DMember(bool)                                      bIsWithinPortalRange                                        ___ OFFSET(get<bool>, {0x4DC, 1, 1, 0})
	CMember(UFortMatchmakingPortalCountdown*)          MatchmakingCountdownWidget                                  ___ OFFSET(get<T>, {0x4E0, 8, 0, 0})
	CMember(UCommonActivatableWidget*)                 MatchmakingFeedbackContainerWidget                          ___ OFFSET(get<T>, {0x4E8, 8, 0, 0})
	CMember(UFortAthenaCreativeMatchmakingWidget*)     MatchmakingFeedbackWidget                                   ___ OFFSET(get<T>, {0x4F0, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_CreatorName                                        ___ OFFSET(get<T>, {0x4F8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_IslandName                                             ___ OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(UDynamicEntryBox*)                         EntryBox_ActivityTags                                       ___ OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(UFortKeybindWidget*)                       GlobalActionKeybindWidget                                   ___ OFFSET(get<T>, {0x510, 8, 0, 0})
};

/// Class /Script/MatchmakingPortalUI.FortModalBackground
/// Size: 0x0038 (0x0003E8 - 0x000420)
class UFortModalBackground : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
	CMember(UCommonButtonBase*)                        Button_Back                                                 ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_BackBoard                                            ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_MobileClose                                          ___ OFFSET(get<T>, {0x418, 8, 0, 0})
};

/// Class /Script/MatchmakingPortalUI.FortUIGameFeatureAction_OverridePortalHUDDetails
/// Size: 0x0020 (0x000028 - 0x000048)
class UFortUIGameFeatureAction_OverridePortalHUDDetails : public UFortUIGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UClass*>)                   SoftPortalHUDDetailsClass                                   ___ OFFSET(get<T>, {0x28, 32, 0, 0})
};

