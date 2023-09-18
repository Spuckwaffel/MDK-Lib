/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package StreamlineRHI.

/// Class /Script/StreamlineRHI.StreamlineOverrideSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UStreamlineOverrideSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EStreamlineSettingOverride)                EnableDLSSFGInPlayInEditorViewportsOverride                 ___ OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(EStreamlineSettingOverride)                LoadDebugOverlayOverride                                    ___ OFFSET(get<T>, {0x29, 1, 0, 0})
};

/// Class /Script/StreamlineRHI.StreamlineSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class UStreamlineSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bEnableStreamlineD3D12                                      ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bEnableStreamlineD3D11                                      ___ OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bEnableDLSSFGInPlayInEditorViewports                        ___ OFFSET(get<bool>, {0x2A, 1, 0, 0})
	DMember(bool)                                      bLoadDebugOverlay                                           ___ OFFSET(get<bool>, {0x2B, 1, 0, 0})
	DMember(bool)                                      bAllowOTAUpdate                                             ___ OFFSET(get<bool>, {0x2C, 1, 0, 0})
	DMember(int32_t)                                   NVIDIANGXApplicationId                                      ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Enum /Script/StreamlineRHI.EStreamlineSettingOverride
/// Size: 0x04
enum EStreamlineSettingOverride : uint8_t
{
	EStreamlineSettingOverride__Enabled0                                             = 0,
	EStreamlineSettingOverride__Disabled1                                            = 1,
	EStreamlineSettingOverride__UseProjectSettings2                                  = 2,
	EStreamlineSettingOverride__EStreamlineSettingOverride_MAX3                      = 3
};

