
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/AudioExtensions.SpatializationPluginSourceSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class USpatializationPluginSourceSettingsBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.SourceDataOverridePluginSourceSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class USourceDataOverridePluginSourceSettingsBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.OcclusionPluginSourceSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UOcclusionPluginSourceSettingsBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.ReverbPluginSourceSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UReverbPluginSourceSettingsBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.AudioParameterControllerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioParameterControllerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.AudioCodecEncoderSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UAudioCodecEncoderSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   Version                                                     OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Class /Script/AudioExtensions.AudioEndpointSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioEndpointSettingsBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.DummyEndpointSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UDummyEndpointSettings : public UAudioEndpointSettingsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.SoundModulatorBase
/// Size: 0x0008 (0x000028 - 0x000030)
class USoundModulatorBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/AudioExtensions.SoundfieldEndpointSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class USoundfieldEndpointSettingsBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.SoundfieldEncodingSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class USoundfieldEncodingSettingsBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.SoundfieldEffectSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class USoundfieldEffectSettingsBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.SoundfieldEffectBase
/// Size: 0x0008 (0x000028 - 0x000030)
class USoundfieldEffectBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(USoundfieldEffectSettingsBase*)            Settings                                                    OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/AudioExtensions.WaveformTransformationBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UWaveformTransformationBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.WaveformTransformationChain
/// Size: 0x0010 (0x000028 - 0x000038)
class UWaveformTransformationChain : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<UWaveformTransformationBase*>)      Transformations                                             OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/AudioExtensions.SoundGeneratorOutput
/// Size: 0x0004 (0x000000 - 0x000004)
class FSoundGeneratorOutput : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/AudioExtensions.AudioParameter
/// Size: 0x0090 (0x000000 - 0x000090)
class FAudioParameter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     ParamName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     FloatParam                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      BoolParam                                                   OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(int32_t)                                   IntParam                                                    OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	CMember(UObject*)                                  ObjectParam                                                 OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FString)                                   StringParam                                                 OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	CMember(TArray<float>)                             ArrayFloatParam                                             OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<bool>)                              ArrayBoolParam                                              OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<int32_t>)                           ArrayIntParam                                               OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<UObject*>)                          ArrayObjectParam                                            OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FString>)                           ArrayStringParam                                            OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(EAudioParameterType)                       ParamType                                                   OFFSET(get<T>, {0x78, 1, 0, 0})
	SMember(FName)                                     TypeName                                                    OFFSET(getStruct<T>, {0x7C, 4, 0, 0})
};

/// Enum /Script/AudioExtensions.EAudioParameterType
/// Size: 0x15
enum EAudioParameterType : uint8_t
{
	EAudioParameterType__None0                                                       = 0,
	EAudioParameterType__Boolean1                                                    = 1,
	EAudioParameterType__Integer2                                                    = 2,
	EAudioParameterType__Float3                                                      = 3,
	EAudioParameterType__String4                                                     = 4,
	EAudioParameterType__Object5                                                     = 5,
	EAudioParameterType__NoneArray6                                                  = 6,
	EAudioParameterType__BooleanArray7                                               = 7,
	EAudioParameterType__IntegerArray8                                               = 8,
	EAudioParameterType__FloatArray9                                                 = 9,
	EAudioParameterType__StringArray10                                               = 10,
	EAudioParameterType__ObjectArray11                                               = 11,
	EAudioParameterType__Trigger12                                                   = 12,
	EAudioParameterType__COUNT13                                                     = 13,
	EAudioParameterType__EAudioParameterType_MAX14                                   = 14
};

