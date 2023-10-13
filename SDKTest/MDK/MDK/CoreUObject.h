
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/


/// Class /Script/CoreUObject.Object
/// Size: 0x0028 (0x000000 - 0x000028)
class UObject : public MDKBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(void**)                                    vtable                                                      OFFSET(get<void**>, {0x0, 8, 0, 0})
	CMember(EObjectFlags)                              ObjectFlags                                                 OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(int)                                       InternalIndex                                               OFFSET(get<int>, {0xC, 4, 0, 0})
	CMember(UClass*)                                   ClassPrivate                                                OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FName)                                     NamePrivate                                                 OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	CMember(UObject*)                                  OuterPrivate                                                OFFSET(get<T>, {0x20, 8, 0, 0})


	/// Functions
	// Function /Script/CoreUObject.Object.ExecuteUbergraph
	// void ExecuteUbergraph(int32_t EntryPoint);                                                                               // [0x154a140] Event|Public|BlueprintEvent 
};

/// Class /Script/CoreUObject.Interface
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterface : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CoreUObject.GCObjectReferencer
/// Size: 0x0038 (0x000028 - 0x000060)
class UGCObjectReferencer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/CoreUObject.TextBuffer
/// Size: 0x0028 (0x000028 - 0x000050)
class UTextBuffer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/CoreUObject.Field
/// Size: 0x0008 (0x000028 - 0x000030)
class UField : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UField*)                                   Next                                                        OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/CoreUObject.Struct
/// Size: 0x0058 (0x000030 - 0x000088)
class UStruct : public UField
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(UStruct*)                                  SuperStruct                                                 OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UField*)                                   Children                                                    OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/CoreUObject.ScriptStruct
/// Size: 0x0010 (0x000088 - 0x000098)
class UScriptStruct : public UStruct
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/CoreUObject.Package
/// Size: 0x0068 (0x000028 - 0x000090)
class UPackage : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/CoreUObject.Class
/// Size: 0x0170 (0x000088 - 0x0001F8)
class UClass : public UStruct
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
};

/// Class /Script/CoreUObject.Function
/// Size: 0x0030 (0x000088 - 0x0000B8)
class UFunction : public UStruct
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Class /Script/CoreUObject.DelegateFunction
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UDelegateFunction : public UFunction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Class /Script/CoreUObject.DynamicClass
/// Size: 0x0068 (0x0001F8 - 0x000260)
class UDynamicClass : public UClass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Script/CoreUObject.PackageMap
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UPackageMap : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/CoreUObject.Enum
/// Size: 0x0030 (0x000030 - 0x000060)
class UEnum : public UField
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/CoreUObject.Property
/// Size: 0x0040 (0x000030 - 0x000070)
class UProperty : public UField
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/CoreUObject.EnumProperty
/// Size: 0x0010 (0x000070 - 0x000080)
class UEnumProperty : public UProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/CoreUObject.LinkerPlaceholderClass
/// Size: 0x01A0 (0x0001F8 - 0x000398)
class ULinkerPlaceholderClass : public UClass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
};

/// Class /Script/CoreUObject.LinkerPlaceholderExportObject
/// Size: 0x00B0 (0x000028 - 0x0000D8)
class ULinkerPlaceholderExportObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
};

/// Class /Script/CoreUObject.LinkerPlaceholderFunction
/// Size: 0x01A0 (0x0000B8 - 0x000258)
class ULinkerPlaceholderFunction : public UFunction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 600;

public:
};

/// Class /Script/CoreUObject.MetaData
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class UMetaData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /Script/CoreUObject.ObjectRedirector
/// Size: 0x0008 (0x000028 - 0x000030)
class UObjectRedirector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/CoreUObject.ArrayProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UArrayProperty : public UProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/CoreUObject.ObjectPropertyBase
/// Size: 0x0008 (0x000070 - 0x000078)
class UObjectPropertyBase : public UProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/CoreUObject.BoolProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UBoolProperty : public UProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/CoreUObject.NumericProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UNumericProperty : public UProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/CoreUObject.ByteProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UByteProperty : public UNumericProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/CoreUObject.ObjectProperty
/// Size: 0x0000 (0x000078 - 0x000078)
class UObjectProperty : public UObjectPropertyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/CoreUObject.ClassProperty
/// Size: 0x0008 (0x000078 - 0x000080)
class UClassProperty : public UObjectProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/CoreUObject.DelegateProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UDelegateProperty : public UProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/CoreUObject.DoubleProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UDoubleProperty : public UNumericProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/CoreUObject.FloatProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UFloatProperty : public UNumericProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/CoreUObject.IntProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UIntProperty : public UNumericProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/CoreUObject.Int16Property
/// Size: 0x0000 (0x000070 - 0x000070)
class UInt16Property : public UNumericProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/CoreUObject.Int64Property
/// Size: 0x0000 (0x000070 - 0x000070)
class UInt64Property : public UNumericProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/CoreUObject.Int8Property
/// Size: 0x0000 (0x000070 - 0x000070)
class UInt8Property : public UNumericProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/CoreUObject.InterfaceProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UInterfaceProperty : public UProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/CoreUObject.LazyObjectProperty
/// Size: 0x0000 (0x000078 - 0x000078)
class ULazyObjectProperty : public UObjectPropertyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/CoreUObject.MapProperty
/// Size: 0x0038 (0x000070 - 0x0000A8)
class UMapProperty : public UProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/CoreUObject.MulticastDelegateProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UMulticastDelegateProperty : public UProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/CoreUObject.NameProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UNameProperty : public UProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/CoreUObject.SetProperty
/// Size: 0x0028 (0x000070 - 0x000098)
class USetProperty : public UProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/CoreUObject.SoftObjectProperty
/// Size: 0x0000 (0x000078 - 0x000078)
class USoftObjectProperty : public UObjectPropertyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/CoreUObject.SoftClassProperty
/// Size: 0x0008 (0x000078 - 0x000080)
class USoftClassProperty : public USoftObjectProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/CoreUObject.StrProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UStrProperty : public UProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/CoreUObject.StructProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UStructProperty : public UProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/CoreUObject.UInt16Property
/// Size: 0x0000 (0x000070 - 0x000070)
class UUInt16Property : public UNumericProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/CoreUObject.UInt32Property
/// Size: 0x0000 (0x000070 - 0x000070)
class UUInt32Property : public UNumericProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/CoreUObject.UInt64Property
/// Size: 0x0000 (0x000070 - 0x000070)
class UUInt64Property : public UNumericProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/CoreUObject.WeakObjectProperty
/// Size: 0x0000 (0x000078 - 0x000078)
class UWeakObjectProperty : public UObjectPropertyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/CoreUObject.TextProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UTextProperty : public UProperty
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/CoreUObject.JoinabilitySettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FJoinabilitySettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     SessionName                                                 OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bPublicSearchable                                           OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bAllowInvites                                               OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      bJoinViaPresence                                            OFFSET(get<bool>, {0xA, 1, 0, 0})
	DMember(bool)                                      bJoinViaPresenceFriendsOnly                                 OFFSET(get<bool>, {0xB, 1, 0, 0})
	DMember(int32_t)                                   MaxPlayers                                                  OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   MaxPartySize                                                OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/CoreUObject.UniqueNetIdWrapper
/// Size: 0x0001 (0x000000 - 0x000001)
class FUniqueNetIdWrapper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/CoreUObject.Guid
/// Size: 0x0010 (0x000000 - 0x000010)
class FGuid : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   A                                                           OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   B                                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   C                                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   D                                                           OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/CoreUObject.Vector
/// Size: 0x000C (0x000000 - 0x00000C)
class FVector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     X                                                           OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Y                                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Z                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/CoreUObject.Vector4
/// Size: 0x0010 (0x000000 - 0x000010)
class FVector4 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     X                                                           OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Y                                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Z                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     W                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/CoreUObject.Vector2D
/// Size: 0x0008 (0x000000 - 0x000008)
class FVector2D : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     X                                                           OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Y                                                           OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/CoreUObject.TwoVectors
/// Size: 0x0018 (0x000000 - 0x000018)
class FTwoVectors : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVector)                                   v1                                                          OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   v2                                                          OFFSET(getStruct<T>, {0xC, 12, 0, 0})
};

/// Struct /Script/CoreUObject.Plane
/// Size: 0x0004 (0x00000C - 0x000010)
class FPlane : public FVector
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     W                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/CoreUObject.Rotator
/// Size: 0x000C (0x000000 - 0x00000C)
class FRotator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Pitch                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Yaw                                                         OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Roll                                                        OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/CoreUObject.Quat
/// Size: 0x0010 (0x000000 - 0x000010)
class FQuat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     X                                                           OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Y                                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Z                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     W                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/CoreUObject.PackedNormal
/// Size: 0x0004 (0x000000 - 0x000004)
class FPackedNormal : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(unsigned char)                             X                                                           OFFSET(get<unsigned char>, {0x0, 1, 0, 0})
	DMember(unsigned char)                             Y                                                           OFFSET(get<unsigned char>, {0x1, 1, 0, 0})
	DMember(unsigned char)                             Z                                                           OFFSET(get<unsigned char>, {0x2, 1, 0, 0})
	DMember(unsigned char)                             W                                                           OFFSET(get<unsigned char>, {0x3, 1, 0, 0})
};

/// Struct /Script/CoreUObject.PackedRGB10A2N
/// Size: 0x0004 (0x000000 - 0x000004)
class FPackedRGB10A2N : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Packed                                                      OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/CoreUObject.PackedRGBA16N
/// Size: 0x0008 (0x000000 - 0x000008)
class FPackedRGBA16N : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   XY                                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ZW                                                          OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/CoreUObject.IntPoint
/// Size: 0x0008 (0x000000 - 0x000008)
class FIntPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   X                                                           OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Y                                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/CoreUObject.IntVector
/// Size: 0x000C (0x000000 - 0x00000C)
class FIntVector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   X                                                           OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Y                                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Z                                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/CoreUObject.Color
/// Size: 0x0004 (0x000000 - 0x000004)
class FColor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(unsigned char)                             B                                                           OFFSET(get<unsigned char>, {0x0, 1, 0, 0})
	DMember(unsigned char)                             G                                                           OFFSET(get<unsigned char>, {0x1, 1, 0, 0})
	DMember(unsigned char)                             R                                                           OFFSET(get<unsigned char>, {0x2, 1, 0, 0})
	DMember(unsigned char)                             A                                                           OFFSET(get<unsigned char>, {0x3, 1, 0, 0})
};

/// Struct /Script/CoreUObject.LinearColor
/// Size: 0x0010 (0x000000 - 0x000010)
class FLinearColor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     R                                                           OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     G                                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     B                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     A                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/CoreUObject.Box
/// Size: 0x001C (0x000000 - 0x00001C)
class FBox : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FVector)                                   Min                                                         OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   Max                                                         OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	DMember(unsigned char)                             IsValid                                                     OFFSET(get<unsigned char>, {0x18, 1, 0, 0})
};

/// Struct /Script/CoreUObject.Box2D
/// Size: 0x0014 (0x000000 - 0x000014)
class FBox2D : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FVector2D)                                 Min                                                         OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FVector2D)                                 Max                                                         OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	DMember(unsigned char)                             bIsValid                                                    OFFSET(get<unsigned char>, {0x10, 1, 0, 0})
};

/// Struct /Script/CoreUObject.BoxSphereBounds
/// Size: 0x001C (0x000000 - 0x00001C)
class FBoxSphereBounds : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FVector)                                   Origin                                                      OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   BoxExtent                                                   OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	DMember(float)                                     SphereRadius                                                OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/CoreUObject.OrientedBox
/// Size: 0x003C (0x000000 - 0x00003C)
class FOrientedBox : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 60;

public:
	SMember(FVector)                                   Center                                                      OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   AxisX                                                       OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FVector)                                   AxisY                                                       OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	SMember(FVector)                                   AxisZ                                                       OFFSET(getStruct<T>, {0x24, 12, 0, 0})
	DMember(float)                                     ExtentX                                                     OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     ExtentY                                                     OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     ExtentZ                                                     OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/CoreUObject.Matrix
/// Size: 0x0040 (0x000000 - 0x000040)
class FMatrix : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FPlane)                                    XPlane                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FPlane)                                    YPlane                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FPlane)                                    ZPlane                                                      OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FPlane)                                    WPlane                                                      OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/CoreUObject.InterpCurvePointFloat
/// Size: 0x0014 (0x000000 - 0x000014)
class FInterpCurvePointFloat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     InVal                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     OutVal                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ArriveTangent                                               OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     LeaveTangent                                                OFFSET(get<float>, {0xC, 4, 0, 0})
	CMember(TEnumAsByte<EInterpCurveMode>)             InterpMode                                                  OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/CoreUObject.InterpCurveFloat
/// Size: 0x0018 (0x000000 - 0x000018)
class FInterpCurveFloat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FInterpCurvePointFloat>)            Points                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bIsLooped                                                   OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     LoopKeyOffset                                               OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/CoreUObject.InterpCurvePointVector2D
/// Size: 0x0020 (0x000000 - 0x000020)
class FInterpCurvePointVector2D : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     InVal                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FVector2D)                                 OutVal                                                      OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	SMember(FVector2D)                                 ArriveTangent                                               OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	SMember(FVector2D)                                 LeaveTangent                                                OFFSET(getStruct<T>, {0x14, 8, 0, 0})
	CMember(TEnumAsByte<EInterpCurveMode>)             InterpMode                                                  OFFSET(get<T>, {0x1C, 1, 0, 0})
};

/// Struct /Script/CoreUObject.InterpCurveVector2D
/// Size: 0x0018 (0x000000 - 0x000018)
class FInterpCurveVector2D : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FInterpCurvePointVector2D>)         Points                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bIsLooped                                                   OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     LoopKeyOffset                                               OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/CoreUObject.InterpCurvePointVector
/// Size: 0x002C (0x000000 - 0x00002C)
class FInterpCurvePointVector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 44;

public:
	DMember(float)                                     InVal                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FVector)                                   OutVal                                                      OFFSET(getStruct<T>, {0x4, 12, 0, 0})
	SMember(FVector)                                   ArriveTangent                                               OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	SMember(FVector)                                   LeaveTangent                                                OFFSET(getStruct<T>, {0x1C, 12, 0, 0})
	CMember(TEnumAsByte<EInterpCurveMode>)             InterpMode                                                  OFFSET(get<T>, {0x28, 1, 0, 0})
};

/// Struct /Script/CoreUObject.InterpCurveVector
/// Size: 0x0018 (0x000000 - 0x000018)
class FInterpCurveVector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FInterpCurvePointVector>)           Points                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bIsLooped                                                   OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     LoopKeyOffset                                               OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/CoreUObject.InterpCurvePointQuat
/// Size: 0x0050 (0x000000 - 0x000050)
class FInterpCurvePointQuat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     InVal                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FQuat)                                     OutVal                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FQuat)                                     ArriveTangent                                               OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FQuat)                                     LeaveTangent                                                OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(TEnumAsByte<EInterpCurveMode>)             InterpMode                                                  OFFSET(get<T>, {0x40, 1, 0, 0})
};

/// Struct /Script/CoreUObject.InterpCurveQuat
/// Size: 0x0018 (0x000000 - 0x000018)
class FInterpCurveQuat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FInterpCurvePointQuat>)             Points                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bIsLooped                                                   OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     LoopKeyOffset                                               OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/CoreUObject.InterpCurvePointTwoVectors
/// Size: 0x0050 (0x000000 - 0x000050)
class FInterpCurvePointTwoVectors : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     InVal                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FTwoVectors)                               OutVal                                                      OFFSET(getStruct<T>, {0x4, 24, 0, 0})
	SMember(FTwoVectors)                               ArriveTangent                                               OFFSET(getStruct<T>, {0x1C, 24, 0, 0})
	SMember(FTwoVectors)                               LeaveTangent                                                OFFSET(getStruct<T>, {0x34, 24, 0, 0})
	CMember(TEnumAsByte<EInterpCurveMode>)             InterpMode                                                  OFFSET(get<T>, {0x4C, 1, 0, 0})
};

/// Struct /Script/CoreUObject.InterpCurveTwoVectors
/// Size: 0x0018 (0x000000 - 0x000018)
class FInterpCurveTwoVectors : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FInterpCurvePointTwoVectors>)       Points                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bIsLooped                                                   OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     LoopKeyOffset                                               OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/CoreUObject.InterpCurvePointLinearColor
/// Size: 0x0038 (0x000000 - 0x000038)
class FInterpCurvePointLinearColor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     InVal                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FLinearColor)                              OutVal                                                      OFFSET(getStruct<T>, {0x4, 16, 0, 0})
	SMember(FLinearColor)                              ArriveTangent                                               OFFSET(getStruct<T>, {0x14, 16, 0, 0})
	SMember(FLinearColor)                              LeaveTangent                                                OFFSET(getStruct<T>, {0x24, 16, 0, 0})
	CMember(TEnumAsByte<EInterpCurveMode>)             InterpMode                                                  OFFSET(get<T>, {0x34, 1, 0, 0})
};

/// Struct /Script/CoreUObject.InterpCurveLinearColor
/// Size: 0x0018 (0x000000 - 0x000018)
class FInterpCurveLinearColor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FInterpCurvePointLinearColor>)      Points                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bIsLooped                                                   OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     LoopKeyOffset                                               OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/CoreUObject.Transform
/// Size: 0x0030 (0x000000 - 0x000030)
class FTransform : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVector)                                   Translation                                                 OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	SMember(FVector)                                   Scale3D                                                     OFFSET(getStruct<T>, {0x20, 12, 0, 0})
};

/// Struct /Script/CoreUObject.RandomStream
/// Size: 0x0008 (0x000000 - 0x000008)
class FRandomStream : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   InitialSeed                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Seed                                                        OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/CoreUObject.DateTime
/// Size: 0x0008 (0x000000 - 0x000008)
class FDateTime : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/CoreUObject.Timespan
/// Size: 0x0008 (0x000000 - 0x000008)
class FTimespan : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/CoreUObject.SoftObjectPath
/// Size: 0x0018 (0x000000 - 0x000018)
class FSoftObjectPath : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     AssetPathName                                               OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FString)                                   SubPathString                                               OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/CoreUObject.SoftClassPath
/// Size: 0x0000 (0x000018 - 0x000018)
class FSoftClassPath : public FSoftObjectPath
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/CoreUObject.PrimaryAssetType
/// Size: 0x0008 (0x000000 - 0x000008)
class FPrimaryAssetType : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/CoreUObject.PrimaryAssetId
/// Size: 0x0010 (0x000000 - 0x000010)
class FPrimaryAssetId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FPrimaryAssetType)                         PrimaryAssetType                                            OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     PrimaryAssetName                                            OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/CoreUObject.FallbackStruct
/// Size: 0x0001 (0x000000 - 0x000001)
class FFallbackStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/CoreUObject.FloatRangeBound
/// Size: 0x0008 (0x000000 - 0x000008)
class FFloatRangeBound : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(TEnumAsByte<ERangeBoundTypes>)             Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/CoreUObject.FloatRange
/// Size: 0x0010 (0x000000 - 0x000010)
class FFloatRange : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FFloatRangeBound)                          LowerBound                                                  OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FFloatRangeBound)                          UpperBound                                                  OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/CoreUObject.Int32RangeBound
/// Size: 0x0008 (0x000000 - 0x000008)
class FInt32RangeBound : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(TEnumAsByte<ERangeBoundTypes>)             Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/CoreUObject.Int32Range
/// Size: 0x0010 (0x000000 - 0x000010)
class FInt32Range : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FInt32RangeBound)                          LowerBound                                                  OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FInt32RangeBound)                          UpperBound                                                  OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/CoreUObject.FloatInterval
/// Size: 0x0008 (0x000000 - 0x000008)
class FFloatInterval : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Min                                                         OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Max                                                         OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/CoreUObject.Int32Interval
/// Size: 0x0008 (0x000000 - 0x000008)
class FInt32Interval : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   Min                                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Max                                                         OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/CoreUObject.PolyglotTextData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FPolyglotTextData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(ELocalizedTextSourceCategory)              Category                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FString)                                   NativeCulture                                               OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Namespace                                                   OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   Key                                                         OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   NativeString                                                OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TMap<FString, FString>)                    LocalizedStrings                                            OFFSET(get<T>, {0x48, 80, 0, 0})
	SMember(FText)                                     CachedText                                                  OFFSET(getStruct<T>, {0x98, 24, 0, 0})
};

/// Struct /Script/CoreUObject.AutomationEvent
/// Size: 0x0048 (0x000000 - 0x000048)
class FAutomationEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(EAutomationEventType)                      Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FString)                                   MESSAGE                                                     OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Context                                                     OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   Filename                                                    OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	DMember(int32_t)                                   LineNumber                                                  OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	SMember(FDateTime)                                 Timestamp                                                   OFFSET(getStruct<T>, {0x40, 8, 0, 0})
};

/// Enum /Script/CoreUObject.EInterpCurveMode
/// Size: 0x07
enum EInterpCurveMode : uint8_t
{
	CIM_Linear0                                                                      = 0,
	CIM_CurveAuto1                                                                   = 1,
	CIM_Constant2                                                                    = 2,
	CIM_CurveUser3                                                                   = 3,
	CIM_CurveBreak4                                                                  = 4,
	CIM_CurveAutoClamped5                                                            = 5,
	CIM_MAX6                                                                         = 6
};

/// Enum /Script/CoreUObject.ERangeBoundTypes
/// Size: 0x04
enum ERangeBoundTypes : uint8_t
{
	ERangeBoundTypes__Exclusive0                                                     = 0,
	ERangeBoundTypes__Inclusive1                                                     = 1,
	ERangeBoundTypes__Open2                                                          = 2,
	ERangeBoundTypes__ERangeBoundTypes_MAX3                                          = 3
};

/// Enum /Script/CoreUObject.ELocalizedTextSourceCategory
/// Size: 0x04
enum ELocalizedTextSourceCategory : uint8_t
{
	ELocalizedTextSourceCategory__Game0                                              = 0,
	ELocalizedTextSourceCategory__Engine1                                            = 1,
	ELocalizedTextSourceCategory__Editor2                                            = 2,
	ELocalizedTextSourceCategory__ELocalizedTextSourceCategory_MAX3                  = 3
};

/// Enum /Script/CoreUObject.EAutomationEventType
/// Size: 0x04
enum EAutomationEventType : uint8_t
{
	EAutomationEventType__Info0                                                      = 0,
	EAutomationEventType__Warning1                                                   = 1,
	EAutomationEventType__Error2                                                     = 2,
	EAutomationEventType__EAutomationEventType_MAX3                                  = 3
};

/// Enum /Script/CoreUObject.EMouseCursor
/// Size: 0x15
enum EMouseCursor : uint8_t
{
	EMouseCursor__None0                                                              = 0,
	EMouseCursor__Default1                                                           = 1,
	EMouseCursor__TextEditBeam2                                                      = 2,
	EMouseCursor__ResizeLeftRight3                                                   = 3,
	EMouseCursor__ResizeUpDown4                                                      = 4,
	EMouseCursor__ResizeSouthEast5                                                   = 5,
	EMouseCursor__ResizeSouthWest6                                                   = 6,
	EMouseCursor__CardinalCross7                                                     = 7,
	EMouseCursor__Crosshairs8                                                        = 8,
	EMouseCursor__Hand9                                                              = 9,
	EMouseCursor__GrabHand10                                                         = 10,
	EMouseCursor__GrabHandClosed11                                                   = 11,
	EMouseCursor__SlashedCircle12                                                    = 12,
	EMouseCursor__EyeDropper13                                                       = 13,
	EMouseCursor__EMouseCursor_MAX14                                                 = 14
};

/// Enum /Script/CoreUObject.ELifetimeCondition
/// Size: 0x15
enum ELifetimeCondition : uint8_t
{
	COND_None0                                                                       = 0,
	COND_InitialOnly1                                                                = 1,
	COND_OwnerOnly2                                                                  = 2,
	COND_SkipOwner3                                                                  = 3,
	COND_SimulatedOnly4                                                              = 4,
	COND_AutonomousOnly5                                                             = 5,
	COND_SimulatedOrPhysics6                                                         = 6,
	COND_InitialOrOwner7                                                             = 7,
	COND_Custom8                                                                     = 8,
	COND_ReplayOrOwner9                                                              = 9,
	COND_ReplayOnly10                                                                = 10,
	COND_SimulatedOnlyNoReplay11                                                     = 11,
	COND_SimulatedOrPhysicsNoReplay12                                                = 12,
	COND_SkipReplay13                                                                = 13,
	COND_Max14                                                                       = 14
};

/// Enum /Script/CoreUObject.EUnit
/// Size: 0x51
enum EUnit : uint8_t
{
	EUnit__Micrometers0                                                              = 0,
	EUnit__Millimeters1                                                              = 1,
	EUnit__Centimeters2                                                              = 2,
	EUnit__Meters3                                                                   = 3,
	EUnit__Kilometers4                                                               = 4,
	EUnit__Inches5                                                                   = 5,
	EUnit__Feet6                                                                     = 6,
	EUnit__Yards7                                                                    = 7,
	EUnit__Miles8                                                                    = 8,
	EUnit__Lightyears9                                                               = 9,
	EUnit__Degrees10                                                                 = 10,
	EUnit__Radians11                                                                 = 11,
	EUnit__MetersPerSecond12                                                         = 12,
	EUnit__KilometersPerHour13                                                       = 13,
	EUnit__MilesPerHour14                                                            = 14,
	EUnit__Celsius15                                                                 = 15,
	EUnit__Farenheit16                                                               = 16,
	EUnit__Kelvin17                                                                  = 17,
	EUnit__Micrograms18                                                              = 18,
	EUnit__Milligrams19                                                              = 19,
	EUnit__Grams20                                                                   = 20,
	EUnit__Kilograms21                                                               = 21,
	EUnit__MetricTons22                                                              = 22,
	EUnit__Ounces23                                                                  = 23,
	EUnit__Pounds24                                                                  = 24,
	EUnit__Stones25                                                                  = 25,
	EUnit__Newtons26                                                                 = 26,
	EUnit__PoundsForce27                                                             = 27,
	EUnit__KilogramsForce28                                                          = 28,
	EUnit__Hertz29                                                                   = 29,
	EUnit__Kilohertz30                                                               = 30,
	EUnit__Megahertz31                                                               = 31,
	EUnit__Gigahertz32                                                               = 32,
	EUnit__RevolutionsPerMinute33                                                    = 33,
	EUnit__Bytes34                                                                   = 34,
	EUnit__Kilobytes35                                                               = 35,
	EUnit__Megabytes36                                                               = 36,
	EUnit__Gigabytes37                                                               = 37,
	EUnit__Terabytes38                                                               = 38,
	EUnit__Lumens39                                                                  = 39,
	EUnit__Milliseconds40                                                            = 40,
	EUnit__Seconds41                                                                 = 41,
	EUnit__Minutes42                                                                 = 42,
	EUnit__Hours43                                                                   = 43,
	EUnit__Days44                                                                    = 44,
	EUnit__Months45                                                                  = 45,
	EUnit__Years46                                                                   = 46,
	EUnit__Multiplier47                                                              = 49,
	EUnit__Percentage48                                                              = 48,
	EUnit__Unspecified49                                                             = 50,
	EUnit__EUnit_MAX50                                                               = 51
};

/// Enum /Script/CoreUObject.EPixelFormat
/// Size: 0x65
enum EPixelFormat : uint8_t
{
	PF_Unknown0                                                                      = 0,
	PF_A32B32G32R32F1                                                                = 1,
	PF_B8G8R8A82                                                                     = 2,
	PF_G83                                                                           = 3,
	PF_G164                                                                          = 4,
	PF_DXT15                                                                         = 5,
	PF_DXT36                                                                         = 6,
	PF_DXT57                                                                         = 7,
	PF_UYVY8                                                                         = 8,
	PF_FloatRGB9                                                                     = 9,
	PF_FloatRGBA10                                                                   = 10,
	PF_DepthStencil11                                                                = 11,
	PF_ShadowDepth12                                                                 = 12,
	PF_R32_FLOAT13                                                                   = 13,
	PF_G16R1614                                                                      = 14,
	PF_G16R16F15                                                                     = 15,
	PF_G16R16F_FILTER16                                                              = 16,
	PF_G32R32F17                                                                     = 17,
	PF_A2B10G10R1018                                                                 = 18,
	PF_A16B16G16R1619                                                                = 19,
	PF_D2420                                                                         = 20,
	PF_R16F21                                                                        = 21,
	PF_R16F_FILTER22                                                                 = 22,
	PF_BC523                                                                         = 23,
	PF_V8U824                                                                        = 24,
	PF_A125                                                                          = 25,
	PF_FloatR11G11B1026                                                              = 26,
	PF_A827                                                                          = 27,
	PF_R32_UINT28                                                                    = 28,
	PF_R32_SINT29                                                                    = 29,
	PF_PVRTC230                                                                      = 30,
	PF_PVRTC431                                                                      = 31,
	PF_R16_UINT32                                                                    = 32,
	PF_R16_SINT33                                                                    = 33,
	PF_R16G16B16A16_UINT34                                                           = 34,
	PF_R16G16B16A16_SINT35                                                           = 35,
	PF_R5G6B5_UNORM36                                                                = 36,
	PF_R8G8B8A837                                                                    = 37,
	PF_A8R8G8B838                                                                    = 38,
	PF_BC439                                                                         = 39,
	PF_R8G840                                                                        = 40,
	PF_ATC_RGB41                                                                     = 41,
	PF_ATC_RGBA_E42                                                                  = 42,
	PF_ATC_RGBA_I43                                                                  = 43,
	PF_X24_G844                                                                      = 44,
	PF_ETC145                                                                        = 45,
	PF_ETC2_RGB46                                                                    = 46,
	PF_ETC2_RGBA47                                                                   = 47,
	PF_R32G32B32A32_UINT48                                                           = 48,
	PF_R16G16_UINT49                                                                 = 49,
	PF_ASTC_4x450                                                                    = 50,
	PF_ASTC_6x651                                                                    = 51,
	PF_ASTC_8x852                                                                    = 52,
	PF_ASTC_10x1053                                                                  = 53,
	PF_ASTC_12x1254                                                                  = 54,
	PF_BC6H55                                                                        = 55,
	PF_BC756                                                                         = 56,
	PF_R8_UINT57                                                                     = 57,
	PF_L858                                                                          = 58,
	PF_XGXR859                                                                       = 59,
	PF_R8G8B8A8_UINT60                                                               = 60,
	PF_R8G8B8A8_SNORM61                                                              = 61,
	PF_R16G16B16A16_UNORM62                                                          = 62,
	PF_R16G16B16A16_SNORM63                                                          = 63,
	PF_MAX64                                                                         = 64
};

/// Enum /Script/CoreUObject.EAxis
/// Size: 0x05
enum EAxis : uint8_t
{
	EAxis__None0                                                                     = 0,
	EAxis__X1                                                                        = 1,
	EAxis__Y2                                                                        = 2,
	EAxis__Z3                                                                        = 3,
	EAxis__EAxis_MAX4                                                                = 4
};

/// Enum /Script/CoreUObject.ELogTimes
/// Size: 0x05
enum ELogTimes : uint8_t
{
	ELogTimes__None0                                                                 = 0,
	ELogTimes__UTC1                                                                  = 1,
	ELogTimes__SinceGStartTime2                                                      = 2,
	ELogTimes__Local3                                                                = 3,
	ELogTimes__ELogTimes_MAX4                                                        = 4
};

/// Enum /Script/CoreUObject.ESearchDir
/// Size: 0x03
enum ESearchDir : uint8_t
{
	ESearchDir__FromStart0                                                           = 0,
	ESearchDir__FromEnd1                                                             = 1,
	ESearchDir__ESearchDir_MAX2                                                      = 2
};

/// Enum /Script/CoreUObject.ESearchCase
/// Size: 0x03
enum ESearchCase : uint8_t
{
	ESearchCase__CaseSensitive0                                                      = 0,
	ESearchCase__IgnoreCase1                                                         = 1,
	ESearchCase__ESearchCase_MAX2                                                    = 2
};

