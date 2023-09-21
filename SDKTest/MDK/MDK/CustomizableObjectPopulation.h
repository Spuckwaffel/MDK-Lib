
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/CustomizableObjectPopulation.CustomizableObjectPopulation
/// Size: 0x0028 (0x000028 - 0x000050)
class UCustomizableObjectPopulation : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   Name                                                        OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FClassWeightPair>)                  ClassWeights                                                OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(UCustomizableObjectPopulationGenerator*)   Generator                                                   OFFSET(get<T>, {0x48, 8, 0, 0})


	/// Functions
	// Function /Script/CustomizableObjectPopulation.CustomizableObjectPopulation.RegeneratePopulation
	// bool RegeneratePopulation(int32_t Seed, TArray<UCustomizableObjectInstance*>& OutInstances, int32_t NumInstancesToGenerate); // [0x9c0c844] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObjectPopulation.CustomizableObjectPopulation.GeneratePopulation
	// int32_t GeneratePopulation(TArray<UCustomizableObjectInstance*>& OutInstances, int32_t NumInstancesToGenerate);          // [0x9c0c078] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CustomizableObjectPopulation.CustomizableObjectPopulationClass
/// Size: 0x0068 (0x000028 - 0x000090)
class UCustomizableObjectPopulationClass : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FString)                                   Name                                                        OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UCustomizableObject*)                      CustomizableObject                                          OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TArray<FString>)                           AllowList                                                   OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FString>)                           Blocklist                                                   OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FCustomizableObjectPopulationCharacteristic>) Characteristics                                   OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FString>)                           Tags                                                        OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Class /Script/CustomizableObjectPopulation.CustomizableObjectPopulationGenerator
/// Size: 0x0020 (0x000028 - 0x000048)
class UCustomizableObjectPopulationGenerator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<UCustomizableObject*>)              PopulationObjects                                           OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/CustomizableObjectPopulation.ClassWeightPair
/// Size: 0x0010 (0x000000 - 0x000010)
class FClassWeightPair : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UCustomizableObjectPopulationClass*)       Class                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   ClassWeight                                                 OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/CustomizableObjectPopulation.CustomizableObjectPopulationCharacteristic
/// Size: 0x0020 (0x000000 - 0x000020)
class FCustomizableObjectPopulationCharacteristic : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   ParameterName                                               OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FCustomizableObjectPopulationConstraint>) Constraints                                           OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/CustomizableObjectPopulation.CustomizableObjectPopulationConstraint
/// Size: 0x0070 (0x000000 - 0x000070)
class FCustomizableObjectPopulationConstraint : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(EPopulationConstraintType)                 Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   ConstraintWeight                                            OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   TrueWeight                                                  OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   FalseWeight                                                 OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	SMember(FString)                                   DiscreteValue                                               OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FLinearColor)                              DiscreteColor                                               OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FString>)                           AllowList                                                   OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FString>)                           Blocklist                                                   OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FConstraintRanges>)                 Ranges                                                      OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(UCurveBase*)                               Curve                                                       OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(ECurveColor)                               CurveColor                                                  OFFSET(get<T>, {0x68, 1, 0, 0})
};

/// Struct /Script/CustomizableObjectPopulation.ConstraintRanges
/// Size: 0x000C (0x000000 - 0x00000C)
class FConstraintRanges : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     MinimumValue                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaximumValue                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   RangeWeight                                                 OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/CustomizableObjectPopulation.PopulationClassParameterOptions
/// Size: 0x0010 (0x000000 - 0x000010)
class FPopulationClassParameterOptions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FString>)                           Tags                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CustomizableObjectPopulation.PopulationClassParameter
/// Size: 0x0060 (0x000000 - 0x000060)
class FPopulationClassParameter : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FString>)                           Tags                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TMap<FString, FPopulationClassParameterOptions>) ParameterOptions                                      OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Enum /Script/CustomizableObjectPopulation.EPopulationConstraintType
/// Size: 0x10
enum EPopulationConstraintType : uint8_t
{
	EPopulationConstraintType__NONE0                                                 = 0,
	EPopulationConstraintType__BOOL1                                                 = 1,
	EPopulationConstraintType__DISCRETE2                                             = 2,
	EPopulationConstraintType__DISCRETE_FLOAT3                                       = 3,
	EPopulationConstraintType__DISCRETE_COLOR4                                       = 4,
	EPopulationConstraintType__TAG5                                                  = 5,
	EPopulationConstraintType__RANGE6                                                = 6,
	EPopulationConstraintType__CURVE7                                                = 7,
	EPopulationConstraintType__CURVE_COLOR8                                          = 8,
	EPopulationConstraintType__EPopulationConstraintType_MAX9                        = 9
};

/// Enum /Script/CustomizableObjectPopulation.ECurveColor
/// Size: 0x05
enum ECurveColor : uint8_t
{
	ECurveColor__RED0                                                                = 0,
	ECurveColor__GREEN1                                                              = 1,
	ECurveColor__BLUE2                                                               = 2,
	ECurveColor__ALPHA3                                                              = 3,
	ECurveColor__ECurveColor_MAX4                                                    = 4
};

