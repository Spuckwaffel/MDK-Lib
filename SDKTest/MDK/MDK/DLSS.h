
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/DLSS.DLSSOverrideSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UDLSSOverrideSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EDLSSSettingOverride)                      EnableDLSSInEditorViewportsOverride                         ___ OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(EDLSSSettingOverride)                      EnableDLSSInPlayInEditorViewportsOverride                   ___ OFFSET(get<T>, {0x29, 1, 0, 0})
	DMember(bool)                                      bShowDLSSIncompatiblePluginsToolsWarnings                   ___ OFFSET(get<bool>, {0x2A, 1, 0, 0})
	CMember(EDLSSSettingOverride)                      ShowDLSSSDebugOnScreenMessages                              ___ OFFSET(get<T>, {0x2B, 1, 0, 0})
};

/// Class /Script/DLSS.DLSSSettings
/// Size: 0x0038 (0x000028 - 0x000060)
class UDLSSSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bEnableDLSSD3D12                                            ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bEnableDLSSD3D11                                            ___ OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bEnableDLSSVulkan                                           ___ OFFSET(get<bool>, {0x2A, 1, 0, 0})
	DMember(bool)                                      bEnableDLSSInEditorViewports                                ___ OFFSET(get<bool>, {0x2B, 1, 0, 0})
	DMember(bool)                                      bEnableDLSSInPlayInEditorViewports                          ___ OFFSET(get<bool>, {0x2C, 1, 0, 0})
	DMember(bool)                                      bShowDLSSSDebugOnScreenMessages                             ___ OFFSET(get<bool>, {0x2D, 1, 0, 0})
	SMember(FString)                                   GenericDLSSBinaryPath                                       ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(bool)                                      bGenericDLSSBinaryExists                                    ___ OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(uint32_t)                                  NVIDIANGXApplicationId                                      ___ OFFSET(get<uint32_t>, {0x44, 4, 0, 0})
	SMember(FString)                                   CustomDLSSBinaryPath                                        ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(bool)                                      bCustomDLSSBinaryExists                                     ___ OFFSET(get<bool>, {0x58, 1, 0, 0})
};

/// Enum /Script/DLSS.EDLSSSettingOverride
/// Size: 0x04
enum EDLSSSettingOverride : uint8_t
{
	EDLSSSettingOverride__Enabled0                                                   = 0,
	EDLSSSettingOverride__Disabled1                                                  = 1,
	EDLSSSettingOverride__UseProjectSettings2                                        = 2,
	EDLSSSettingOverride__EDLSSSettingOverride_MAX3                                  = 3
};

