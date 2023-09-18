/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package WaveTable.

/// Struct /Script/WaveTable.WaveTableData
/// Size: 0x0020 (0x000000 - 0x000020)
class FWaveTableData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EWaveTableBitDepth)                        BitDepth                                                    ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<char>)                              Data                                                        ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(float)                                     FinalValue                                                  ___ OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/WaveTable.WaveTableBankEntry
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FWaveTableBankEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FWaveTableTransform)                       Transform                                                   ___ OFFSET(get<T>, {0x0, 184, 0, 0})
};

/// Struct /Script/WaveTable.WaveTableTransform
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FWaveTableTransform : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(EWaveTableCurve)                           Curve                                                       ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     Scalar                                                      ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FRichCurve)                                CurveCustom                                                 ___ OFFSET(get<T>, {0x8, 128, 0, 0})
	CMember(UCurveFloat*)                              CurveShared                                                 ___ OFFSET(get<T>, {0x88, 8, 0, 0})
	SMember(FWaveTableData)                            TableData                                                   ___ OFFSET(get<T>, {0x90, 32, 0, 0})
	DMember(float)                                     Duration                                                    ___ OFFSET(get<float>, {0xB0, 4, 0, 0})
};

/// Struct /Script/WaveTable.WaveTableSettings
/// Size: 0x0058 (0x000000 - 0x000058)
class FWaveTableSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FFilePath)                                 FilePath                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   ChannelIndex                                                ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FWaveTableData)                            SourceData                                                  ___ OFFSET(get<T>, {0x18, 32, 0, 0})
	DMember(int32_t)                                   SourceSampleRate                                            ___ OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(float)                                     Phase                                                       ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     Top                                                         ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     Tail                                                        ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     FadeIn                                                      ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     FadeOut                                                     ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(bool)                                      bNormalize                                                  ___ OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(bool)                                      bRemoveOffset                                               ___ OFFSET(get<bool>, {0x51, 1, 0, 0})
};

/// Class /Script/WaveTable.WaveTableBank
/// Size: 0x0038 (0x000028 - 0x000060)
class UWaveTableBank : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(EWaveTableSamplingMode)                    SampleMode                                                  ___ OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(EWaveTableResolution)                      Resolution                                                  ___ OFFSET(get<T>, {0x31, 1, 0, 0})
	DMember(int32_t)                                   SampleRate                                                  ___ OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(bool)                                      bBipolar                                                    ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
	CMember(TArray<FWaveTableBankEntry>)               Entries                                                     ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Enum /Script/WaveTable.EWaveTableBitDepth
/// Size: 0x04
enum EWaveTableBitDepth : uint8_t
{
	EWaveTableBitDepth__PCM0                                                         = 0,
	EWaveTableBitDepth__IEEE_Float1                                                  = 1,
	EWaveTableBitDepth__COUNT2                                                       = 2,
	EWaveTableBitDepth__EWaveTableBitDepth_MAX3                                      = 3
};

/// Enum /Script/WaveTable.EWaveTableResolution
/// Size: 0x14
enum EWaveTableResolution : uint8_t
{
	EWaveTableResolution__None0                                                      = 0,
	EWaveTableResolution__Res1                                                       = 3,
	EWaveTableResolution__Res2                                                       = 4,
	EWaveTableResolution__Res3                                                       = 5,
	EWaveTableResolution__Res4                                                       = 6,
	EWaveTableResolution__Res5                                                       = 7,
	EWaveTableResolution__Res6                                                       = 8,
	EWaveTableResolution__Res7                                                       = 9,
	EWaveTableResolution__Res8                                                       = 10,
	EWaveTableResolution__Res9                                                       = 11,
	EWaveTableResolution__Res10                                                      = 12,
	EWaveTableResolution__Res_Max11                                                  = 12,
	EWaveTableResolution__Maximum12                                                  = 13,
	EWaveTableResolution__EWaveTableResolution_MAX13                                 = 14
};

/// Enum /Script/WaveTable.EWaveTableSamplingMode
/// Size: 0x04
enum EWaveTableSamplingMode : uint8_t
{
	EWaveTableSamplingMode__FixedSampleRate0                                         = 0,
	EWaveTableSamplingMode__FixedResolution1                                         = 1,
	EWaveTableSamplingMode__COUNT2                                                   = 2,
	EWaveTableSamplingMode__EWaveTableSamplingMode_MAX3                              = 3
};

/// Enum /Script/WaveTable.EWaveTableCurve
/// Size: 0x13
enum EWaveTableCurve : uint8_t
{
	EWaveTableCurve__Linear0                                                         = 0,
	EWaveTableCurve__Linear_Inv1                                                     = 1,
	EWaveTableCurve__Exp2                                                            = 2,
	EWaveTableCurve__Exp_Inverse3                                                    = 3,
	EWaveTableCurve__Log4                                                            = 4,
	EWaveTableCurve__Sin5                                                            = 5,
	EWaveTableCurve__Sin_Full6                                                       = 6,
	EWaveTableCurve__SCurve7                                                         = 7,
	EWaveTableCurve__Shared8                                                         = 8,
	EWaveTableCurve__Custom9                                                         = 9,
	EWaveTableCurve__File10                                                          = 10,
	EWaveTableCurve__Count11                                                         = 11,
	EWaveTableCurve__EWaveTableCurve_MAX12                                           = 12
};

