
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/


/// Struct /Script/InterchangeCommonParser.InterchangeCurveKey
/// Size: 0x001C (0x000000 - 0x00001C)
class FInterchangeCurveKey : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	CMember(EInterchangeCurveInterpMode)               InterpMode                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EInterchangeCurveTangentMode)              TangentMode                                                 OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(EInterchangeCurveTangentWeightMode)        TangentWeightMode                                           OFFSET(get<T>, {0x2, 1, 0, 0})
	DMember(float)                                     Time                                                        OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     ArriveTangent                                               OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     ArriveTangentWeight                                         OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     LeaveTangent                                                OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     LeaveTangentWeight                                          OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/InterchangeCommonParser.InterchangeCurve
/// Size: 0x0010 (0x000000 - 0x000010)
class FInterchangeCurve : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FInterchangeCurveKey>)              Keys                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/InterchangeCommonParser.InterchangeStepCurve
/// Size: 0x0070 (0x000000 - 0x000070)
class FInterchangeStepCurve : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<float>)                             KeyTimes                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/InterchangeCommonParser.EInterchangeCurveInterpMode
/// Size: 0x05
enum EInterchangeCurveInterpMode : uint8_t
{
	EInterchangeCurveInterpMode__Linear0                                             = 0,
	EInterchangeCurveInterpMode__Constant1                                           = 1,
	EInterchangeCurveInterpMode__Cubic2                                              = 2,
	EInterchangeCurveInterpMode__None3                                               = 3,
	EInterchangeCurveInterpMode__EInterchangeCurveInterpMode_MAX4                    = 4
};

/// Enum /Script/InterchangeCommonParser.EInterchangeCurveTangentMode
/// Size: 0x05
enum EInterchangeCurveTangentMode : uint8_t
{
	EInterchangeCurveTangentMode__Auto0                                              = 0,
	EInterchangeCurveTangentMode__User1                                              = 1,
	EInterchangeCurveTangentMode__Break2                                             = 2,
	EInterchangeCurveTangentMode__None3                                              = 3,
	EInterchangeCurveTangentMode__EInterchangeCurveTangentMode_MAX4                  = 4
};

/// Enum /Script/InterchangeCommonParser.EInterchangeCurveTangentWeightMode
/// Size: 0x05
enum EInterchangeCurveTangentWeightMode : uint8_t
{
	EInterchangeCurveTangentWeightMode__WeightedNone0                                = 0,
	EInterchangeCurveTangentWeightMode__WeightedArrive1                              = 1,
	EInterchangeCurveTangentWeightMode__WeightedLeave2                               = 2,
	EInterchangeCurveTangentWeightMode__WeightedBoth3                                = 3,
	EInterchangeCurveTangentWeightMode__EInterchangeCurveTangentWeightMode_MAX4      = 4
};

