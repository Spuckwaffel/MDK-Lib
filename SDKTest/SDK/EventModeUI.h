/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package EventModeUI.

/// Class /Script/EventModeUI.FocusButton
/// Size: 0x0010 (0x000418 - 0x000428)
class UFocusButton : public UBacchusActionButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1064;

public:
	CMember(UPaperSprite*)                             StartFocusingSprite                                         ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UPaperSprite*)                             StopFocusingSprite                                          ___ OFFSET(get<T>, {0x420, 8, 0, 0})
};

/// Class /Script/EventModeUI.FortEventModeEmotesWidget
/// Size: 0x0098 (0x000310 - 0x0003A8)
class UFortEventModeEmotesWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 936;

public:
	CMember(TWeakObjectPtr<UFortMontageItemDefinitionBase*>) Emote1                                                ___ OFFSET(get<T>, {0x310, 32, 0, 0})
	CMember(TWeakObjectPtr<UFortMontageItemDefinitionBase*>) Emote2                                                ___ OFFSET(get<T>, {0x330, 32, 0, 0})
	CMember(TWeakObjectPtr<UFortMontageItemDefinitionBase*>) Emote3                                                ___ OFFSET(get<T>, {0x350, 32, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    RandomEmotes                                                ___ OFFSET(get<T>, {0x370, 16, 0, 0})
	CMember(URichTextBlock*)                           Text_Emote1                                                 ___ OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(URichTextBlock*)                           Text_Emote2                                                 ___ OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(URichTextBlock*)                           Text_Emote3                                                 ___ OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(URichTextBlock*)                           Text_EmoteRandom                                            ___ OFFSET(get<T>, {0x3A0, 8, 0, 0})
};

/// Class /Script/EventModeUI.FortMobileActionButtonBehavior_Focus
/// Size: 0x0008 (0x000120 - 0x000128)
class UFortMobileActionButtonBehavior_Focus : public UFortMobileActionButtonBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(UPaperSprite*)                             StopFocusingSprite                                          ___ OFFSET(get<T>, {0x120, 8, 0, 0})
};

