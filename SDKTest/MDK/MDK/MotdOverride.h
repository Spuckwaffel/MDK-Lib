
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: UMG

/// Class /Script/MotdOverride.MotdWidgetBase
/// Size: 0x0018 (0x000400 - 0x000418)
class UMotdWidgetBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1048;

public:
};

/// Enum /Script/MotdOverride.EMotdCloseReason
/// Size: 0x08
enum EMotdCloseReason : uint8_t
{
	EMotdCloseReason__Unknown0                                                       = 0,
	EMotdCloseReason__NoMotds1                                                       = 1,
	EMotdCloseReason__NullPrm2                                                       = 2,
	EMotdCloseReason__PrmParsingFailed3                                              = 3,
	EMotdCloseReason__User4                                                          = 4,
	EMotdCloseReason__Action5                                                        = 5,
	EMotdCloseReason__DeepLink6                                                      = 6,
	EMotdCloseReason__EMotdCloseReason_MAX7                                          = 7
};

