
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/PropertyPath.PropertyPathTestObject
/// Size: 0x0128 (0x000028 - 0x000150)
class UPropertyPathTestObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	DMember(bool)                                      bool_                                                       OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(TEnumAsByte<EPropertyPathTestEnum>)        EnumOne                                                     OFFSET(get<T>, {0x29, 1, 0, 0})
	CMember(TEnumAsByte<EPropertyPathTestEnum>)        EnumTwo                                                     OFFSET(get<T>, {0x2A, 1, 0, 0})
	CMember(TEnumAsByte<EPropertyPathTestEnum>)        EnumThree                                                   OFFSET(get<T>, {0x2B, 1, 0, 0})
	CMember(TEnumAsByte<EPropertyPathTestEnum>)        EnumFour                                                    OFFSET(get<T>, {0x2C, 1, 0, 0})
	DMember(int32_t)                                   Integer                                                     OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	SMember(FString)                                   String                                                      OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(float)                                     float_                                                      OFFSET(get<float>, {0x48, 4, 0, 0})
	SMember(FPropertyPathTestStruct)                   Struct                                                      OFFSET(getStruct<T>, {0x50, 80, 0, 0})
	SMember(FPropertyPathTestStruct)                   StructRef                                                   OFFSET(getStruct<T>, {0xA0, 80, 0, 0})
	SMember(FPropertyPathTestStruct)                   StructConstRef                                              OFFSET(getStruct<T>, {0xF0, 80, 0, 0})
	CMember(UPropertyPathTestObject*)                  InnerObject                                                 OFFSET(get<T>, {0x140, 8, 0, 0})


	/// Functions
	// Function /Script/PropertyPath.PropertyPathTestObject.SetStructRef
	// void SetStructRef(FPropertyPathTestStruct InStruct);                                                                     // [0x4f48ce0] Final|Native|Public  
	// Function /Script/PropertyPath.PropertyPathTestObject.SetStructConstRef
	// void SetStructConstRef(FPropertyPathTestStruct InStruct);                                                                // [0x4f48b7c] Final|Native|Public  
	// Function /Script/PropertyPath.PropertyPathTestObject.SetStruct
	// void SetStruct(FPropertyPathTestStruct InStruct);                                                                        // [0x4f48a18] Final|Native|Public  
	// Function /Script/PropertyPath.PropertyPathTestObject.SetFloat
	// void SetFloat(float InFloat);                                                                                            // [0x4f48994] Final|Native|Public  
	// Function /Script/PropertyPath.PropertyPathTestObject.GetStructRef
	// FPropertyPathTestStruct GetStructRef();                                                                                  // [0x4f48970] Final|Native|Public|Const 
	// Function /Script/PropertyPath.PropertyPathTestObject.GetStructConstRef
	// FPropertyPathTestStruct GetStructConstRef();                                                                             // [0x4f4894c] Final|Native|Public|Const 
	// Function /Script/PropertyPath.PropertyPathTestObject.GetStruct
	// FPropertyPathTestStruct GetStruct();                                                                                     // [0x4f48910] Final|Native|Public|Const 
	// Function /Script/PropertyPath.PropertyPathTestObject.GetFloat
	// float GetFloat();                                                                                                        // [0x4f488f4] Final|Native|Public|Const 
};

/// Struct /Script/PropertyPath.PropertyPathSegment
/// Size: 0x0018 (0x000000 - 0x000018)
class FPropertyPathSegment : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ArrayIndex                                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(UStruct*)                                  Struct                                                      OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/PropertyPath.CachedPropertyPath
/// Size: 0x0038 (0x000000 - 0x000038)
class FCachedPropertyPath : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FPropertyPathSegment>)              Segments                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(UFunction*)                                CachedFunction                                              OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/PropertyPath.PropertyPathTestInnerStruct
/// Size: 0x0020 (0x000000 - 0x000020)
class FPropertyPathTestInnerStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     float_                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(bool)                                      bool_                                                       OFFSET(get<bool>, {0x4, 1, 0, 0})
	CMember(TEnumAsByte<EPropertyPathTestEnum>)        EnumOne                                                     OFFSET(get<T>, {0x5, 1, 0, 0})
	CMember(TEnumAsByte<EPropertyPathTestEnum>)        EnumTwo                                                     OFFSET(get<T>, {0x6, 1, 0, 0})
	CMember(TEnumAsByte<EPropertyPathTestEnum>)        EnumThree                                                   OFFSET(get<T>, {0x7, 1, 0, 0})
	CMember(TEnumAsByte<EPropertyPathTestEnum>)        EnumFour                                                    OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(int32_t)                                   Integer                                                     OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	SMember(FString)                                   String                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/PropertyPath.PropertyPathTestStruct
/// Size: 0x0050 (0x000000 - 0x000050)
class FPropertyPathTestStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(bool)                                      bool_                                                       OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   Integer                                                     OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(TEnumAsByte<EPropertyPathTestEnum>)        EnumOne                                                     OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(TEnumAsByte<EPropertyPathTestEnum>)        EnumTwo                                                     OFFSET(get<T>, {0x9, 1, 0, 0})
	CMember(TEnumAsByte<EPropertyPathTestEnum>)        EnumThree                                                   OFFSET(get<T>, {0xA, 1, 0, 0})
	CMember(TEnumAsByte<EPropertyPathTestEnum>)        EnumFour                                                    OFFSET(get<T>, {0xB, 1, 0, 0})
	SMember(FString)                                   String                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(float)                                     float_                                                      OFFSET(get<float>, {0x20, 4, 0, 0})
	SMember(FPropertyPathTestInnerStruct)              InnerStruct                                                 OFFSET(getStruct<T>, {0x28, 32, 0, 0})
	CMember(UPropertyPathTestObject*)                  InnerObject                                                 OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Struct /Script/PropertyPath.PropertyPathTestBed
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FPropertyPathTestBed : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(UPropertyPathTestObject*)                  Object                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UPropertyPathTestObject*)                  ModifiedObject                                              OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FPropertyPathTestStruct)                   ModifiedStruct                                              OFFSET(getStruct<T>, {0x10, 80, 0, 0})
	SMember(FPropertyPathTestStruct)                   DefaultStruct                                               OFFSET(getStruct<T>, {0x60, 80, 0, 0})
};

/// Enum /Script/PropertyPath.EPropertyPathTestEnum
/// Size: 0x05
enum EPropertyPathTestEnum : uint8_t
{
	One0                                                                             = 0,
	Two1                                                                             = 1,
	Three2                                                                           = 2,
	Four3                                                                            = 3,
	EPropertyPathTestEnum_MAX4                                                       = 4
};

