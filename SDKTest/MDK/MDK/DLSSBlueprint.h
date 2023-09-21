
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/DLSSBlueprint.DLSSLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UDLSSLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Enum /Script/DLSSBlueprint.UDLSSSupport
/// Size: 0x08
enum UDLSSSupport : uint8_t
{
	UDLSSSupport__Supported0                                                         = 0,
	UDLSSSupport__NotSupported1                                                      = 1,
	UDLSSSupport__NotSupportedIncompatibleHardware2                                  = 2,
	UDLSSSupport__NotSupportedDriverOutOfDate3                                       = 3,
	UDLSSSupport__NotSupportedOperatingSystemOutOfDate4                              = 4,
	UDLSSSupport__NotSupportedByPlatformAtBuildTime5                                 = 5,
	UDLSSSupport__NotSupportedIncompatibleAPICaptureToolActive6                      = 6,
	UDLSSSupport__UDLSSSupport_MAX7                                                  = 7
};

/// Enum /Script/DLSSBlueprint.UDLSSMode
/// Size: 0x08
enum UDLSSMode : uint8_t
{
	UDLSSMode__Off0                                                                  = 0,
	UDLSSMode__Auto1                                                                 = 1,
	UDLSSMode__UltraQuality2                                                         = 2,
	UDLSSMode__Quality3                                                              = 3,
	UDLSSMode__Balanced4                                                             = 4,
	UDLSSMode__Performance5                                                          = 5,
	UDLSSMode__UltraPerformance6                                                     = 6,
	UDLSSMode__UDLSSMode_MAX7                                                        = 7
};

