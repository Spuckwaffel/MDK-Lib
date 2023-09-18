/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package StreamlineBlueprint.

/// Class /Script/StreamlineBlueprint.StreamlineLibraryDLSSG
/// Size: 0x0000 (0x000028 - 0x000028)
class UStreamlineLibraryDLSSG : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/StreamlineBlueprint.StreamlineLibraryReflex
/// Size: 0x0000 (0x000028 - 0x000028)
class UStreamlineLibraryReflex : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Enum /Script/StreamlineBlueprint.UStreamlineDLSSGSupport
/// Size: 0x08
enum UStreamlineDLSSGSupport : uint8_t
{
	UStreamlineDLSSGSupport__Supported0                                              = 0,
	UStreamlineDLSSGSupport__NotSupported1                                           = 1,
	UStreamlineDLSSGSupport__NotSupportedIncompatibleHardware2                       = 2,
	UStreamlineDLSSGSupport__NotSupportedDriverOutOfDate3                            = 3,
	UStreamlineDLSSGSupport__NotSupportedOperatingSystemOutOfDate4                   = 4,
	UStreamlineDLSSGSupport__NotSupportedByPlatformAtBuildTime5                      = 5,
	UStreamlineDLSSGSupport__NotSupportedIncompatibleAPICaptureToolActive6           = 6,
	UStreamlineDLSSGSupport__UStreamlineDLSSGSupport_MAX7                            = 7
};

/// Enum /Script/StreamlineBlueprint.UStreamlineDLSSGMode
/// Size: 0x03
enum UStreamlineDLSSGMode : uint8_t
{
	UStreamlineDLSSGMode__Off0                                                       = 0,
	UStreamlineDLSSGMode__On1                                                        = 1,
	UStreamlineDLSSGMode__UStreamlineDLSSGMode_MAX2                                  = 2
};

/// Enum /Script/StreamlineBlueprint.UStreamlineReflexMode
/// Size: 0x04
enum UStreamlineReflexMode : uint8_t
{
	UStreamlineReflexMode__Disabled0                                                 = 0,
	UStreamlineReflexMode__Enabled1                                                  = 1,
	UStreamlineReflexMode__EnabledPlusBoost2                                         = 3,
	UStreamlineReflexMode__UStreamlineReflexMode_MAX3                                = 4
};

/// Enum /Script/StreamlineBlueprint.UStreamlineReflexSupport
/// Size: 0x03
enum UStreamlineReflexSupport : uint8_t
{
	UStreamlineReflexSupport__Supported0                                             = 0,
	UStreamlineReflexSupport__NotSupported1                                          = 1,
	UStreamlineReflexSupport__UStreamlineReflexSupport_MAX2                          = 2
};

