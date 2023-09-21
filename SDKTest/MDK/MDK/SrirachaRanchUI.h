
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio
/// Size: 0x0010 (0x000120 - 0x000130)
class UFortMobileActionButtonBehavior_ToggleRadio : public UFortMobileActionButtonBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(UPaperSprite*)                             ToggleRadioOffSprite                                        ___ OFFSET(get<T>, {0x120, 8, 0, 0})
};

/// Class /Script/SrirachaRanchUI.RadioPlayerWidgetBase
/// Size: 0x0050 (0x000310 - 0x000360)
class URadioPlayerWidgetBase : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	SMember(FFortPrioritizedWidgetData)                PriorityData                                                ___ OFFSET(get<T>, {0x350, 2, 0, 0})
	CMember(UStreamingRadioPlayerComponent*)           LastValidComp                                               ___ OFFSET(get<T>, {0x358, 8, 0, 0})
};

