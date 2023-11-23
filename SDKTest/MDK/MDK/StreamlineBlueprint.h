
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/StreamlineBlueprint.StreamlineLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UStreamlineLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

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

/// Struct /Script/StreamlineBlueprint.StreamlineVersion
/// Size: 0x000C (0x000000 - 0x00000C)
class FStreamlineVersion : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   Major                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Minor                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Build                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/StreamlineBlueprint.StreamlineFeatureRequirements
/// Size: 0x0034 (0x000000 - 0x000034)
class FStreamlineFeatureRequirements : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 52;

public:
	CMember(UStreamlineFeatureSupport)                 Support                                                     OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(UStreamlineFeatureRequirementsFlags)       Requirements                                                OFFSET(get<T>, {0x1, 1, 0, 0})
	SMember(FStreamlineVersion)                        RequiredOperatingSystemVersion                              OFFSET(getStruct<T>, {0x4, 12, 0, 0})
	SMember(FStreamlineVersion)                        DetectedOperatingSystemVersion                              OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	SMember(FStreamlineVersion)                        RequiredDriverVersion                                       OFFSET(getStruct<T>, {0x1C, 12, 0, 0})
	SMember(FStreamlineVersion)                        DetectedDriverVersion                                       OFFSET(getStruct<T>, {0x28, 12, 0, 0})
};

/// Enum /Script/StreamlineBlueprint.UStreamlineFeature
/// Size: 0x04
enum UStreamlineFeature : uint8_t
{
	UStreamlineFeature__DLSSG0                                                       = 0,
	UStreamlineFeature__Reflex1                                                      = 1,
	UStreamlineFeature__Count2                                                       = 2,
	UStreamlineFeature__UStreamlineFeature_MAX3                                      = 3
};

/// Enum /Script/StreamlineBlueprint.UStreamlineFeatureSupport
/// Size: 0x10
enum UStreamlineFeatureSupport : uint8_t
{
	UStreamlineFeatureSupport__Supported0                                            = 0,
	UStreamlineFeatureSupport__NotSupported1                                         = 1,
	UStreamlineFeatureSupport__NotSupportedIncompatibleHardware2                     = 2,
	UStreamlineFeatureSupport__NotSupportedDriverOutOfDate3                          = 3,
	UStreamlineFeatureSupport__NotSupportedOperatingSystemOutOfDate4                 = 4,
	UStreamlineFeatureSupport__NotSupportedHardewareSchedulingDisabled5              = 5,
	UStreamlineFeatureSupport__NotSupportedByRHI6                                    = 6,
	UStreamlineFeatureSupport__NotSupportedByPlatformAtBuildTime7                    = 7,
	UStreamlineFeatureSupport__NotSupportedIncompatibleAPICaptureToolActive8         = 8,
	UStreamlineFeatureSupport__UStreamlineFeatureSupport_MAX9                        = 9
};

/// Enum /Script/StreamlineBlueprint.UStreamlineFeatureRequirementsFlags
/// Size: 0x07
enum UStreamlineFeatureRequirementsFlags : uint8_t
{
	UStreamlineFeatureRequirementsFlags__None0                                       = 0,
	UStreamlineFeatureRequirementsFlags__D3D11Supported1                             = 1,
	UStreamlineFeatureRequirementsFlags__D3D12Supported2                             = 2,
	UStreamlineFeatureRequirementsFlags__VulkanSupported3                            = 4,
	UStreamlineFeatureRequirementsFlags__VSyncOffRequired4                           = 8,
	UStreamlineFeatureRequirementsFlags__HardwareSchedulingRequired5                 = 16,
	UStreamlineFeatureRequirementsFlags__UStreamlineFeatureRequirementsFlags_MAX6    = 17
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

