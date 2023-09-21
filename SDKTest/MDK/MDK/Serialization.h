
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/


/// Struct /Script/Serialization.StructSerializerNumericTestStruct
/// Size: 0x0030 (0x000000 - 0x000030)
class FStructSerializerNumericTestStruct : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int8_t)                                    Int8                                                        ___ OFFSET(get<int8_t>, {0x0, 1, 0, 0})
	DMember(int16_t)                                   Int16                                                       ___ OFFSET(get<int16_t>, {0x2, 2, 0, 0})
	DMember(int32_t)                                   int32                                                       ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int64_t)                                   Int64                                                       ___ OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(char)                                      uint8                                                       ___ OFFSET(get<char>, {0x10, 1, 0, 0})
	DMember(uint16_t)                                  UInt16                                                      ___ OFFSET(get<uint16_t>, {0x12, 2, 0, 0})
	DMember(uint32_t)                                  uint32                                                      ___ OFFSET(get<uint32_t>, {0x14, 4, 0, 0})
	DMember(uint64_t)                                  UInt64                                                      ___ OFFSET(get<uint64_t>, {0x18, 8, 0, 0})
	DMember(float)                                     float_                                                      ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(double)                                    Double                                                      ___ OFFSET(get<double>, {0x28, 8, 0, 0})
};

/// Struct /Script/Serialization.StructSerializerBooleanTestStruct
/// Size: 0x0003 (0x000000 - 0x000003)
class FStructSerializerBooleanTestStruct : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	DMember(bool)                                      BoolFalse                                                   ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      BoolTrue                                                    ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      Bitfield0                                                   ___ OFFSET(get<bool>, {0x2, 1, 1, 0})
	DMember(bool)                                      Bitfield1                                                   ___ OFFSET(get<bool>, {0x2, 1, 1, 1})
	DMember(bool)                                      Bitfield2Set                                                ___ OFFSET(get<bool>, {0x2, 1, 1, 2})
	DMember(bool)                                      Bitfield3                                                   ___ OFFSET(get<bool>, {0x2, 1, 1, 3})
	DMember(bool)                                      Bitfield4Set                                                ___ OFFSET(get<bool>, {0x2, 1, 1, 4})
	DMember(bool)                                      Bitfield5Set                                                ___ OFFSET(get<bool>, {0x2, 1, 1, 5})
	DMember(bool)                                      Bitfield6                                                   ___ OFFSET(get<bool>, {0x2, 1, 1, 6})
	DMember(bool)                                      Bitfield7Set                                                ___ OFFSET(get<bool>, {0x2, 1, 1, 7})
};

/// Struct /Script/Serialization.StructSerializerObjectTestStruct
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FStructSerializerObjectTestStruct : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(UClass*)                                   RawClass                                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UClass*)                                   WrappedClass                                                ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(UClass*)                                   SubClass                                                    ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   SoftClass                                                   ___ OFFSET(get<T>, {0x18, 32, 0, 0})
	CMember(UObject*)                                  RawObject                                                   ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UObject*)                                  WrappedObject                                               ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(TWeakObjectPtr<UMetaData*>)                WeakObject                                                  ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TWeakObjectPtr<UMetaData*>)                SoftObject                                                  ___ OFFSET(get<T>, {0x50, 32, 0, 0})
	SMember(FSoftClassPath)                            ClassPath                                                   ___ OFFSET(get<T>, {0x70, 24, 0, 0})
	SMember(FSoftObjectPath)                           ObjectPath                                                  ___ OFFSET(get<T>, {0x88, 24, 0, 0})
};

/// Struct /Script/Serialization.StructSerializerBuiltinTestStruct
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FStructSerializerBuiltinTestStruct : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FGuid)                                     Guid                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	SMember(FString)                                   String                                                      ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FText)                                     Text                                                        ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FVector)                                   Vector                                                      ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FVector4)                                  Vector4                                                     ___ OFFSET(get<T>, {0x60, 32, 0, 0})
	SMember(FRotator)                                  Rotator                                                     ___ OFFSET(get<T>, {0x80, 24, 0, 0})
	SMember(FQuat)                                     Quat                                                        ___ OFFSET(get<T>, {0xA0, 32, 0, 0})
	SMember(FColor)                                    Color                                                       ___ OFFSET(get<T>, {0xC0, 4, 0, 0})
};

/// Struct /Script/Serialization.StructSerializerLWCTypesTest
/// Size: 0x0360 (0x000000 - 0x000360)
class FStructSerializerLWCTypesTest : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	SMember(FVector)                                   Vector                                                      ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVector2D)                                 Vector2D                                                    ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FVector4)                                  Vector4                                                     ___ OFFSET(get<T>, {0x30, 32, 0, 0})
	SMember(FMatrix)                                   Matrix                                                      ___ OFFSET(get<T>, {0x50, 128, 0, 0})
	SMember(FPlane)                                    Plane                                                       ___ OFFSET(get<T>, {0xD0, 32, 0, 0})
	SMember(FQuat)                                     Quat                                                        ___ OFFSET(get<T>, {0xF0, 32, 0, 0})
	SMember(FRotator)                                  Rotator                                                     ___ OFFSET(get<T>, {0x110, 24, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x130, 96, 0, 0})
	SMember(FBox)                                      Box                                                         ___ OFFSET(get<T>, {0x190, 56, 0, 0})
	SMember(FBox2D)                                    Box2D                                                       ___ OFFSET(get<T>, {0x1C8, 40, 0, 0})
	SMember(FBoxSphereBounds)                          BoxSphereBounds                                             ___ OFFSET(get<T>, {0x1F0, 56, 0, 0})
	SMember(FOrientedBox)                              OrientedBox                                                 ___ OFFSET(get<T>, {0x228, 120, 0, 0})
	DMember(float)                                     float_                                                      ___ OFFSET(get<float>, {0x2A0, 4, 0, 0})
	DMember(double)                                    Double                                                      ___ OFFSET(get<double>, {0x2A8, 8, 0, 0})
	CMember(TArray<FVector>)                           VectorArray                                                 ___ OFFSET(get<T>, {0x2B0, 16, 0, 0})
	CMember(TMap<FString, FVector>)                    StrToVec                                                    ___ OFFSET(get<T>, {0x2C0, 80, 0, 0})
	CMember(TSet<FVector>)                             VectorSet                                                   ___ OFFSET(get<T>, {0x310, 80, 0, 0})
};

/// Struct /Script/Serialization.OrientedBoxFloat
/// Size: 0x003C (0x000000 - 0x00003C)
class FOrientedBoxFloat : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 60;

public:
	SMember(FVector3f)                                 Center                                                      ___ OFFSET(get<T>, {0x0, 12, 0, 0})
	SMember(FVector3f)                                 AxisX                                                       ___ OFFSET(get<T>, {0xC, 12, 0, 0})
	SMember(FVector3f)                                 AxisY                                                       ___ OFFSET(get<T>, {0x18, 12, 0, 0})
	SMember(FVector3f)                                 AxisZ                                                       ___ OFFSET(get<T>, {0x24, 12, 0, 0})
	DMember(float)                                     ExtentX                                                     ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     ExtentY                                                     ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     ExtentZ                                                     ___ OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/Serialization.StructSerializerNonLWCTypesTest
/// Size: 0x0220 (0x000000 - 0x000220)
class FStructSerializerNonLWCTypesTest : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FVector3f)                                 Vector                                                      ___ OFFSET(get<T>, {0x0, 12, 0, 0})
	SMember(FVector2f)                                 Vector2D                                                    ___ OFFSET(get<T>, {0xC, 8, 0, 0})
	SMember(FVector4f)                                 Vector4                                                     ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FMatrix44f)                                Matrix                                                      ___ OFFSET(get<T>, {0x30, 64, 0, 0})
	SMember(FPlane4f)                                  Plane                                                       ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FQuat4f)                                   Quat                                                        ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	SMember(FRotator3f)                                Rotator                                                     ___ OFFSET(get<T>, {0x90, 12, 0, 0})
	SMember(FTransform3f)                              Transform                                                   ___ OFFSET(get<T>, {0xA0, 48, 0, 0})
	SMember(FBox3f)                                    Box                                                         ___ OFFSET(get<T>, {0xD0, 28, 0, 0})
	SMember(FBox2f)                                    Box2D                                                       ___ OFFSET(get<T>, {0xEC, 20, 0, 0})
	SMember(FBoxSphereBounds3f)                        BoxSphereBounds                                             ___ OFFSET(get<T>, {0x100, 28, 0, 0})
	SMember(FOrientedBoxFloat)                         OrientedBox                                                 ___ OFFSET(get<T>, {0x11C, 60, 0, 0})
	DMember(float)                                     float_                                                      ___ OFFSET(get<float>, {0x158, 4, 0, 0})
	DMember(double)                                    Double                                                      ___ OFFSET(get<double>, {0x160, 8, 0, 0})
	CMember(TArray<FVector3f>)                         VectorArray                                                 ___ OFFSET(get<T>, {0x168, 16, 0, 0})
	CMember(TMap<FString, FVector3f>)                  StrToVec                                                    ___ OFFSET(get<T>, {0x178, 80, 0, 0})
	CMember(TSet<FVector3f>)                           VectorSet                                                   ___ OFFSET(get<T>, {0x1C8, 80, 0, 0})
};

/// Struct /Script/Serialization.StructSerializerByteArray
/// Size: 0x0038 (0x000000 - 0x000038)
class FStructSerializerByteArray : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   Dummy1                                                      ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<char>)                              ByteArray                                                   ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   Dummy2                                                      ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	CMember(TArray<int8_t>)                            Int8Array                                                   ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(int32_t)                                   Dummy3                                                      ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Struct /Script/Serialization.StructSerializerArrayTestStruct
/// Size: 0x0060 (0x000000 - 0x000060)
class FStructSerializerArrayTestStruct : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<int32_t>)                           Int32Array                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<char>)                              ByteArray                                                   ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   StaticSingleElement                                         ___ OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   StaticInt32Array                                            ___ OFFSET(get<int32_t>, {0x24, 12, 0, 0})
	DMember(float)                                     StaticFloatArray                                            ___ OFFSET(get<float>, {0x30, 12, 0, 0})
	CMember(TArray<FVector>)                           VectorArray                                                 ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FStructSerializerBuiltinTestStruct>) StructArray                                                ___ OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/Serialization.StructSerializerMapTestStruct
/// Size: 0x0140 (0x000000 - 0x000140)
class FStructSerializerMapTestStruct : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(TMap<int32_t, FString>)                    IntToStr                                                    ___ OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TMap<FString, FString>)                    StrToStr                                                    ___ OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(TMap<FString, FVector>)                    StrToVec                                                    ___ OFFSET(get<T>, {0xA0, 80, 0, 0})
	CMember(TMap<FString, FStructSerializerBuiltinTestStruct>) StrToStruct                                         ___ OFFSET(get<T>, {0xF0, 80, 0, 0})
};

/// Struct /Script/Serialization.StructSerializerSetTestStruct
/// Size: 0x0140 (0x000000 - 0x000140)
class FStructSerializerSetTestStruct : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(TSet<FString>)                             StrSet                                                      ___ OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TSet<int32_t>)                             IntSet                                                      ___ OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(TSet<FName>)                               NameSet                                                     ___ OFFSET(get<T>, {0xA0, 80, 0, 0})
	CMember(TSet<FStructSerializerBuiltinTestStruct>)  StructSet                                                   ___ OFFSET(get<T>, {0xF0, 80, 0, 0})
};

/// Struct /Script/Serialization.StructSerializerTestStruct
/// Size: 0x07F0 (0x000000 - 0x0007F0)
class FStructSerializerTestStruct : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2032;

public:
	SMember(FStructSerializerNumericTestStruct)        Numerics                                                    ___ OFFSET(get<T>, {0x0, 48, 0, 0})
	SMember(FStructSerializerBooleanTestStruct)        Booleans                                                    ___ OFFSET(get<T>, {0x30, 3, 0, 0})
	SMember(FStructSerializerObjectTestStruct)         Objects                                                     ___ OFFSET(get<T>, {0x38, 160, 0, 0})
	SMember(FStructSerializerBuiltinTestStruct)        Builtins                                                    ___ OFFSET(get<T>, {0xE0, 208, 0, 0})
	SMember(FStructSerializerArrayTestStruct)          Arrays                                                      ___ OFFSET(get<T>, {0x1B0, 96, 0, 0})
	SMember(FStructSerializerMapTestStruct)            Maps                                                        ___ OFFSET(get<T>, {0x210, 320, 0, 0})
	SMember(FStructSerializerSetTestStruct)            Sets                                                        ___ OFFSET(get<T>, {0x350, 320, 0, 0})
	SMember(FStructSerializerLWCTypesTest)             LWCTypes                                                    ___ OFFSET(get<T>, {0x490, 864, 0, 0})
};

