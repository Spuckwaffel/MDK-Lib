
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet
/// Size: 0x0020 (0x000080 - 0x0000A0)
class UOodleNetworkTrainerCommandlet : public UCommandlet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(bool)                                      bCompressionTest                                            ___ OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(bool)                                      bWriteV5Dictionaries                                        ___ OFFSET(get<bool>, {0x81, 1, 0, 0})
	DMember(int32_t)                                   HashTableSize                                               ___ OFFSET(get<int32_t>, {0x84, 4, 0, 0})
	DMember(int32_t)                                   DictionarySize                                              ___ OFFSET(get<int32_t>, {0x88, 4, 0, 0})
	DMember(int32_t)                                   DictionaryTrials                                            ___ OFFSET(get<int32_t>, {0x8C, 4, 0, 0})
	DMember(int32_t)                                   TrialRandomness                                             ___ OFFSET(get<int32_t>, {0x90, 4, 0, 0})
	DMember(int32_t)                                   TrialGenerations                                            ___ OFFSET(get<int32_t>, {0x94, 4, 0, 0})
	DMember(bool)                                      bNoTrials                                                   ___ OFFSET(get<bool>, {0x98, 1, 0, 0})
};

/// Enum /Script/OodleNetworkHandlerComponent.EOodleNetworkEnableMode
/// Size: 0x03
enum EOodleNetworkEnableMode : uint8_t
{
	EOodleNetworkEnableMode__AlwaysEnabled0                                          = 0,
	EOodleNetworkEnableMode__WhenCompressedPacketReceived1                           = 1,
	EOodleNetworkEnableMode__EOodleNetworkEnableMode_MAX2                            = 2
};

/// Enum /Script/OodleNetworkHandlerComponent.EOodleNetResult
/// Size: 0x07
enum EOodleNetResult : uint8_t
{
	EOodleNetResult__Unknown0                                                        = 0,
	EOodleNetResult__Success1                                                        = 1,
	EOodleNetResult__OodleDecodeFailed2                                              = 2,
	EOodleNetResult__OodleSerializePayloadFail3                                      = 3,
	EOodleNetResult__OodleBadDecompressedLength4                                     = 4,
	EOodleNetResult__OodleNoDictionary5                                              = 5,
	EOodleNetResult__EOodleNetResult_MAX6                                            = 6
};

