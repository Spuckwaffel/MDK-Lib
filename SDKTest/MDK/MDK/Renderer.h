
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/


/// Struct /Script/Renderer.LightPropagationVolumeSettings
/// Size: 0x0040 (0x000000 - 0x000040)
class FLightPropagationVolumeSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bOverride_LPVIntensity                                      OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bOverride_LPVDirectionalOcclusionIntensity                  OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      bOverride_LPVDirectionalOcclusionRadius                     OFFSET(get<bool>, {0x0, 1, 1, 2})
	DMember(bool)                                      bOverride_LPVDiffuseOcclusionExponent                       OFFSET(get<bool>, {0x0, 1, 1, 3})
	DMember(bool)                                      bOverride_LPVSpecularOcclusionExponent                      OFFSET(get<bool>, {0x0, 1, 1, 4})
	DMember(bool)                                      bOverride_LPVDiffuseOcclusionIntensity                      OFFSET(get<bool>, {0x0, 1, 1, 5})
	DMember(bool)                                      bOverride_LPVSpecularOcclusionIntensity                     OFFSET(get<bool>, {0x0, 1, 1, 6})
	DMember(bool)                                      bOverride_LPVSize                                           OFFSET(get<bool>, {0x0, 1, 1, 7})
	DMember(bool)                                      bOverride_LPVSecondaryOcclusionIntensity                    OFFSET(get<bool>, {0x1, 1, 1, 0})
	DMember(bool)                                      bOverride_LPVSecondaryBounceIntensity                       OFFSET(get<bool>, {0x1, 1, 1, 1})
	DMember(bool)                                      bOverride_LPVGeometryVolumeBias                             OFFSET(get<bool>, {0x1, 1, 1, 2})
	DMember(bool)                                      bOverride_LPVVplInjectionBias                               OFFSET(get<bool>, {0x1, 1, 1, 3})
	DMember(bool)                                      bOverride_LPVEmissiveInjectionIntensity                     OFFSET(get<bool>, {0x1, 1, 1, 4})
	DMember(float)                                     LPVIntensity                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     LPVVplInjectionBias                                         OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     LPVSize                                                     OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     LPVSecondaryOcclusionIntensity                              OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     LPVSecondaryBounceIntensity                                 OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     LPVGeometryVolumeBias                                       OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     LPVEmissiveInjectionIntensity                               OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     LPVDirectionalOcclusionIntensity                            OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     LPVDirectionalOcclusionRadius                               OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     LPVDiffuseOcclusionExponent                                 OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     LPVSpecularOcclusionExponent                                OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     LPVDiffuseOcclusionIntensity                                OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     LPVSpecularOcclusionIntensity                               OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     LPVFadeRange                                                OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     LPVDirectionalOcclusionFadeRange                            OFFSET(get<float>, {0x3C, 4, 0, 0})
};

