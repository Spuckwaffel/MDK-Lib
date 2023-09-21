
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/MaterialShaderQualitySettings.ShaderPlatformQualitySettings
/// Size: 0x0030 (0x000028 - 0x000058)
class UShaderPlatformQualitySettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FMaterialQualityOverrides)                 QualityOverrides                                            ___ OFFSET(get<T>, {0x28, 32, 0, 0})
};

/// Class /Script/MaterialShaderQualitySettings.MaterialShaderQualitySettings
/// Size: 0x0050 (0x000028 - 0x000078)
class UMaterialShaderQualitySettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<FName, UShaderPlatformQualitySettings*>) ForwardSettingMap                                        ___ OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Struct /Script/MaterialShaderQualitySettings.MaterialQualityOverrides
/// Size: 0x0008 (0x000000 - 0x000008)
class FMaterialQualityOverrides : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bDiscardQualityDuringCook                                   ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bEnableOverride                                             ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bForceFullyRough                                            ___ OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bForceNonMetal                                              ___ OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      bForceDisableLMDirectionality                               ___ OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bForceDisablePreintegratedGF                                ___ OFFSET(get<bool>, {0x5, 1, 0, 0})
	DMember(bool)                                      bDisableMaterialNormalCalculation                           ___ OFFSET(get<bool>, {0x6, 1, 0, 0})
	CMember(EMobileShadowQuality)                      MobileShadowQuality                                         ___ OFFSET(get<T>, {0x7, 1, 0, 0})
};

/// Enum /Script/MaterialShaderQualitySettings.EMobileShadowQuality
/// Size: 0x05
enum EMobileShadowQuality : uint8_t
{
	EMobileShadowQuality__NoFiltering0                                               = 0,
	EMobileShadowQuality__PCF_1x11                                                   = 1,
	EMobileShadowQuality__PCF_3x32                                                   = 2,
	EMobileShadowQuality__PCF_5x53                                                   = 3,
	EMobileShadowQuality__EMobileShadowQuality_MAX4                                  = 4
};

