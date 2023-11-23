
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/NNE.NNEModelData
/// Size: 0x0090 (0x000028 - 0x0000B8)
class UNNEModelData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Class /Script/NNE.NNERuntime
/// Size: 0x0000 (0x000028 - 0x000028)
class UNNERuntime : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/NNE.NNERuntimeCPU
/// Size: 0x0000 (0x000028 - 0x000028)
class UNNERuntimeCPU : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/NNE.NNERuntimeGPU
/// Size: 0x0000 (0x000028 - 0x000028)
class UNNERuntimeGPU : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/NNE.NNERuntimeRDG
/// Size: 0x0000 (0x000028 - 0x000028)
class UNNERuntimeRDG : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/NNE.NNEAttributeValue
/// Size: 0x0018 (0x000000 - 0x000018)
class FNNEAttributeValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(ENNEAttributeDataType)                     Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<char>)                              Value                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/NNE.NNEFormatAttributeDesc
/// Size: 0x0028 (0x000000 - 0x000028)
class FNNEFormatAttributeDesc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FNNEAttributeValue)                        Value                                                       OFFSET(getStruct<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/NNE.NNEFormatOperatorDesc
/// Size: 0x0040 (0x000000 - 0x000040)
class FNNEFormatOperatorDesc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   TypeName                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<uint32_t>)                          InTensors                                                   OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<uint32_t>)                          OutTensors                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FNNEFormatAttributeDesc>)           Attributes                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/NNE.NNEFormatTensorDesc
/// Size: 0x0038 (0x000000 - 0x000038)
class FNNEFormatTensorDesc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<int32_t>)                           Shape                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(ENNEFormatTensorType)                      Type                                                        OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(ENNETensorDataType)                        DataType                                                    OFFSET(get<T>, {0x21, 1, 0, 0})
	DMember(uint64_t)                                  DataSize                                                    OFFSET(get<uint64_t>, {0x28, 8, 0, 0})
	DMember(uint64_t)                                  DataOffset                                                  OFFSET(get<uint64_t>, {0x30, 8, 0, 0})
};

/// Struct /Script/NNE.NNERuntimeFormat
/// Size: 0x0038 (0x000000 - 0x000038)
class FNNERuntimeFormat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FNNEFormatTensorDesc>)              Tensors                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FNNEFormatOperatorDesc>)            Operators                                                   OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Enum /Script/NNE.ENNEAttributeDataType
/// Size: 0x08
enum ENNEAttributeDataType : uint8_t
{
	ENNEAttributeDataType__None0                                                     = 0,
	ENNEAttributeDataType__Float1                                                    = 1,
	ENNEAttributeDataType__FloatArray2                                               = 2,
	ENNEAttributeDataType__Int323                                                    = 3,
	ENNEAttributeDataType__Int32Array4                                               = 4,
	ENNEAttributeDataType__String5                                                   = 5,
	ENNEAttributeDataType__StringArray6                                              = 6,
	ENNEAttributeDataType__ENNEAttributeDataType_MAX7                                = 7
};

/// Enum /Script/NNE.ENNEFormatTensorType
/// Size: 0x08
enum ENNEFormatTensorType : uint8_t
{
	ENNEFormatTensorType__None0                                                      = 0,
	ENNEFormatTensorType__Input1                                                     = 1,
	ENNEFormatTensorType__Output2                                                    = 2,
	ENNEFormatTensorType__Intermediate3                                              = 3,
	ENNEFormatTensorType__Initializer4                                               = 4,
	ENNEFormatTensorType__Empty5                                                     = 5,
	ENNEFormatTensorType__NUM6                                                       = 6,
	ENNEFormatTensorType__ENNEFormatTensorType_MAX7                                  = 7
};

/// Enum /Script/NNE.ENNEInferenceFormat
/// Size: 0x05
enum ENNEInferenceFormat : uint8_t
{
	ENNEInferenceFormat__Invalid0                                                    = 0,
	ENNEInferenceFormat__ONNX1                                                       = 1,
	ENNEInferenceFormat__ORT2                                                        = 2,
	ENNEInferenceFormat__NNERT3                                                      = 3,
	ENNEInferenceFormat__ENNEInferenceFormat_MAX4                                    = 4
};

/// Enum /Script/NNE.ENNETensorDataType
/// Size: 0x18
enum ENNETensorDataType : uint8_t
{
	ENNETensorDataType__None0                                                        = 0,
	ENNETensorDataType__Char1                                                        = 1,
	ENNETensorDataType__Boolean2                                                     = 2,
	ENNETensorDataType__Half3                                                        = 3,
	ENNETensorDataType__Float4                                                       = 4,
	ENNETensorDataType__Double5                                                      = 5,
	ENNETensorDataType__Int86                                                        = 6,
	ENNETensorDataType__Int167                                                       = 7,
	ENNETensorDataType__Int328                                                       = 8,
	ENNETensorDataType__Int649                                                       = 9,
	ENNETensorDataType__UInt810                                                      = 10,
	ENNETensorDataType__UInt1611                                                     = 11,
	ENNETensorDataType__UInt3212                                                     = 12,
	ENNETensorDataType__UInt6413                                                     = 13,
	ENNETensorDataType__Complex6414                                                  = 14,
	ENNETensorDataType__Complex12815                                                 = 15,
	ENNETensorDataType__BFloat1616                                                   = 16,
	ENNETensorDataType__ENNETensorDataType_MAX17                                     = 17
};

