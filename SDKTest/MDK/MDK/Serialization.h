
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/


/// Struct /Script/Serialization.StructSerializerTestStruct
/// Size: 0x01D8 (0x000000 - 0x0001D8)
class FStructSerializerTestStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	SMember(FStructSerializerNumericTestStruct)        Numerics                                                    OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	SMember(FStructSerializerBooleanTestStruct)        Booleans                                                    OFFSET(getStruct<T>, {0x30, 8, 0, 0})
	SMember(FStructSerializerObjectTestStruct)         Objects                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FStructSerializerBuiltinTestStruct)        Builtins                                                    OFFSET(getStruct<T>, {0x48, 96, 0, 0})
	SMember(FStructSerializerArrayTestStruct)          Arrays                                                      OFFSET(getStruct<T>, {0xA8, 64, 0, 0})
	SMember(FStructSerializerMapTestStruct)            Maps                                                        OFFSET(getStruct<T>, {0xE8, 240, 0, 0})
};

/// Struct /Script/Serialization.StructSerializerMapTestStruct
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FStructSerializerMapTestStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TMap<int32_t, FString>)                    IntToStr                                                    OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TMap<FString, FString>)                    StrToStr                                                    OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(TMap<FString, FVector>)                    StrToVec                                                    OFFSET(get<T>, {0xA0, 80, 0, 0})
};

/// Struct /Script/Serialization.StructSerializerArrayTestStruct
/// Size: 0x0040 (0x000000 - 0x000040)
class FStructSerializerArrayTestStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<int32_t>)                           Int32Array                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   StaticSingleElement                                         OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   StaticInt32Array                                            OFFSET(get<int32_t>, {0x14, 12, 0, 0})
	DMember(float)                                     StaticFloatArray                                            OFFSET(get<float>, {0x20, 12, 0, 0})
	CMember(TArray<FVector>)                           VectorArray                                                 OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/Serialization.StructSerializerBuiltinTestStruct
/// Size: 0x0060 (0x000000 - 0x000060)
class FStructSerializerBuiltinTestStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FString)                                   String                                                      OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FRotator)                                  Rotator                                                     OFFSET(getStruct<T>, {0x28, 12, 0, 0})
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FVector)                                   Vector                                                      OFFSET(getStruct<T>, {0x50, 12, 0, 0})
};

/// Struct /Script/Serialization.StructSerializerObjectTestStruct
/// Size: 0x0010 (0x000000 - 0x000010)
class FStructSerializerObjectTestStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UClass*)                                   Class                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UObject*)                                  ObjectPtr                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Serialization.StructSerializerBooleanTestStruct
/// Size: 0x0008 (0x000000 - 0x000008)
class FStructSerializerBooleanTestStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      BoolFalse                                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      BoolTrue                                                    OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(uint32_t)                                  Bitfield                                                    OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/Serialization.StructSerializerNumericTestStruct
/// Size: 0x0030 (0x000000 - 0x000030)
class FStructSerializerNumericTestStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int8_t)                                    Int8                                                        OFFSET(get<int8_t>, {0x0, 1, 0, 0})
	DMember(int16_t)                                   Int16                                                       OFFSET(get<int16_t>, {0x2, 2, 0, 0})
	DMember(int32_t)                                   Int32                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int64_t)                                   Int64                                                       OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(unsigned char)                             UInt8                                                       OFFSET(get<unsigned char>, {0x10, 1, 0, 0})
	DMember(uint16_t)                                  UInt16                                                      OFFSET(get<uint16_t>, {0x12, 2, 0, 0})
	DMember(uint32_t)                                  UInt32                                                      OFFSET(get<uint32_t>, {0x14, 4, 0, 0})
	DMember(uint64_t)                                  UInt64                                                      OFFSET(get<uint64_t>, {0x18, 8, 0, 0})
	DMember(float)                                     Float                                                       OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(double)                                    Double                                                      OFFSET(get<double>, {0x28, 8, 0, 0})
};

