
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/FabricMetasoundDataTypes.FabricMetasoundDrumPlayerSampleBankAsset
/// Size: 0x0010 (0x000030 - 0x000040)
class UFabricMetasoundDrumPlayerSampleBankAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FFabricMetasoundDrumPlayerSampleData>) Samples                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/FabricMetasoundDataTypes.FabricMetasoundDrumPlayerDataAsset
/// Size: 0x0010 (0x000030 - 0x000040)
class UFabricMetasoundDrumPlayerDataAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<TWeakObjectPtr>)                    SampleBanks                                                 OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/FabricMetasoundDataTypes.FabricMetasoundInstrumentPlayerDataAsset
/// Size: 0x0008 (0x000030 - 0x000038)
class UFabricMetasoundInstrumentPlayerDataAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UFusionPatch*)                             Patch                                                       OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/FabricMetasoundDataTypes.FabricMetasoundInstrumentPlayerDataAssetList
/// Size: 0x0010 (0x000030 - 0x000040)
class UFabricMetasoundInstrumentPlayerDataAssetList : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<TWeakObjectPtr>)                    InstrumentPlayerData                                        OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/FabricMetasoundDataTypes.FabricMetaSoundUserOption
/// Size: 0x0038 (0x000028 - 0x000060)
class UFabricMetaSoundUserOption : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FFabricUserOption)                         FabricUserOption                                            OFFSET(getStruct<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/FabricMetasoundDataTypes.FabricMetasoundDrumPlayerSampleData
/// Size: 0x0020 (0x000000 - 0x000020)
class FFabricMetasoundDrumPlayerSampleData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FText)                                     SampleLabel                                                 OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	CMember(USoundWave*)                               WaveAsset                                                   OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/FabricMetasoundDataTypes.FabricUserOption
/// Size: 0x0020 (0x000000 - 0x000020)
class FFabricUserOption : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EFabricUserOptionConversionType)           ConversionType                                              OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     min                                                         OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     max                                                         OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(TArray<float>)                             LookupTable                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Enum /Script/FabricMetasoundDataTypes.EFabricUserOptionConversionType
/// Size: 0x04
enum EFabricUserOptionConversionType : uint8_t
{
	EFabricUserOptionConversionType__Linear0                                         = 0,
	EFabricUserOptionConversionType__Exponential1                                    = 1,
	EFabricUserOptionConversionType__Lookup2                                         = 2,
	EFabricUserOptionConversionType__EFabricUserOptionConversionType_MAX3            = 3
};

