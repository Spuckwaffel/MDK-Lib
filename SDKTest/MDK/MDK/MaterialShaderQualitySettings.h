
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/MaterialShaderQualitySettings.MaterialShaderQualitySettings
/// Size: 0x0050 (0x000028 - 0x000078)
class UMaterialShaderQualitySettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<FName, UShaderPlatformQualitySettings*>) ForwardSettingMap                                        OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/MaterialShaderQualitySettings.ShaderPlatformQualitySettings
/// Size: 0x0018 (0x000028 - 0x000040)
class UShaderPlatformQualitySettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FMaterialQualityOverrides)                 QualityOverrides                                            OFFSET(getStruct<T>, {0x28, 21, 0, 0})
};

/// Struct /Script/MaterialShaderQualitySettings.MaterialQualityOverrides
/// Size: 0x0007 (0x000000 - 0x000007)
class FMaterialQualityOverrides : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 7;

public:
	DMember(bool)                                      bEnableOverride                                             OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bForceFullyRough                                            OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bForceNonMetal                                              OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bForceDisableLMDirectionality                               OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      bForceLQReflections                                         OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bDisableMaterialNormalCalculation                           OFFSET(get<bool>, {0x5, 1, 0, 0})
	CMember(EMobileCSMQuality)                         MobileCSMQuality                                            OFFSET(get<T>, {0x6, 1, 0, 0})
};

/// Enum /Script/MaterialShaderQualitySettings.EMobileCSMQuality
/// Size: 0x04
enum EMobileCSMQuality : uint8_t
{
	EMobileCSMQuality__NoFiltering0                                                  = 0,
	EMobileCSMQuality__PCF_1x11                                                      = 1,
	EMobileCSMQuality__PCF_2x22                                                      = 2,
	EMobileCSMQuality__EMobileCSMQuality_MAX3                                        = 3
};

