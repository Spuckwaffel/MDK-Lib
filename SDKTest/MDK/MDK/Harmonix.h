
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Class /Script/Harmonix.HarmonixBlueprintUtil
/// Size: 0x0000 (0x000028 - 0x000028)
class UHarmonixBlueprintUtil : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Harmonix.HarmonixDeveloperSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UHarmonixDeveloperSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Harmonix.HarmonixPluginSettings
/// Size: 0x0000 (0x000030 - 0x000030)
class UHarmonixPluginSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Enum /Script/Harmonix.ECalibratedMusicTimebase
/// Size: 0x04
enum ECalibratedMusicTimebase : uint8_t
{
	ECalibratedMusicTimebase__AudioRenderTime0                                       = 0,
	ECalibratedMusicTimebase__ExperiencedTime1                                       = 1,
	ECalibratedMusicTimebase__VideoRenderTime2                                       = 2,
	ECalibratedMusicTimebase__ECalibratedMusicTimebase_MAX3                          = 3
};

