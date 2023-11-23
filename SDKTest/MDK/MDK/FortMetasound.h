
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/FortMetasound.FortMetaSoundInterfaceSubsystem
/// Size: 0x00C0 (0x000030 - 0x0000F0)
class UFortMetaSoundInterfaceSubsystem : public UAudioEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Enum /Script/FortMetasound.EFortMetaSoundAutoInterfaceTypes
/// Size: 0x05
enum EFortMetaSoundAutoInterfaceTypes : uint8_t
{
	EFortMetaSoundAutoInterfaceTypes__None0                                          = 0,
	EFortMetaSoundAutoInterfaceTypes__Movement1                                      = 1,
	EFortMetaSoundAutoInterfaceTypes__Time2                                          = 2,
	EFortMetaSoundAutoInterfaceTypes__ActiveSound3                                   = 4,
	EFortMetaSoundAutoInterfaceTypes__EFortMetaSoundAutoInterfaceTypes_MAX4          = 5
};

/// Enum /Script/FortMetasound.EFortAudioAffiliation
/// Size: 0x05
enum EFortAudioAffiliation : uint8_t
{
	EFortAudioAffiliation__Local0                                                    = 0,
	EFortAudioAffiliation__Friendly1                                                 = 1,
	EFortAudioAffiliation__Enemy2                                                    = 2,
	EFortAudioAffiliation__Neutral3                                                  = 3,
	EFortAudioAffiliation__EFortAudioAffiliation_MAX4                                = 4
};

