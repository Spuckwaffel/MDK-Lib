
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/TypedElementFramework.TypedElementDataStorageCompatibilityInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementDataStorageCompatibilityInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TypedElementFramework.TypedElementDataStorageFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementDataStorageFactory : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TypedElementFramework.TypedElementDataStorageInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementDataStorageInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TypedElementFramework.TypedElementDataStorageUiInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementDataStorageUiInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TypedElementFramework.TypedElementHandleLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementHandleLibrary : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TypedElementFramework.TypedElementListLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementListLibrary : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TypedElementFramework.TypedElementCounterInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementCounterInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TypedElementFramework.TypedElementRegistry
/// Size: 0x0950 (0x000028 - 0x000978)
class UTypedElementRegistry : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2424;

public:
};

/// Class /Script/TypedElementFramework.TestTypedElementInterfaceA
/// Size: 0x0000 (0x000028 - 0x000028)
class UTestTypedElementInterfaceA : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TypedElementFramework.TestTypedElementInterfaceB
/// Size: 0x0000 (0x000028 - 0x000028)
class UTestTypedElementInterfaceB : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TypedElementFramework.TestTypedElementInterfaceC
/// Size: 0x0000 (0x000028 - 0x000028)
class UTestTypedElementInterfaceC : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TypedElementFramework.TestTypedElementInterfaceA_ImplTyped
/// Size: 0x0008 (0x000028 - 0x000030)
class UTestTypedElementInterfaceA_ImplTyped : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/TypedElementFramework.TestTypedElementInterfaceA_ImplUntyped
/// Size: 0x0008 (0x000028 - 0x000030)
class UTestTypedElementInterfaceA_ImplUntyped : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/TypedElementFramework.TestTypedElementInterfaceBAndC_Typed
/// Size: 0x0010 (0x000028 - 0x000038)
class UTestTypedElementInterfaceBAndC_Typed : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/TypedElementFramework.ScriptTypedElementHandle
/// Size: 0x0008 (0x000000 - 0x000008)
class FScriptTypedElementHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementDataStorageColumn
/// Size: 0x0001 (0x000000 - 0x000001)
class FTypedElementDataStorageColumn : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementUObjectColumn
/// Size: 0x0007 (0x000001 - 0x000008)
class FTypedElementUObjectColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementExternalObjectColumn
/// Size: 0x0007 (0x000001 - 0x000008)
class FTypedElementExternalObjectColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementDataStorageTag
/// Size: 0x0001 (0x000000 - 0x000001)
class FTypedElementDataStorageTag : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementWidgetConstructor
/// Size: 0x0010 (0x000000 - 0x000010)
class FTypedElementWidgetConstructor : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementLabelColumn
/// Size: 0x000F (0x000001 - 0x000010)
class FTypedElementLabelColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   Label                                                       ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/TypedElementFramework.TypedElementLabelHashColumn
/// Size: 0x0007 (0x000001 - 0x000008)
class FTypedElementLabelHashColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint64_t)                                  LabelHash                                                   ___ OFFSET(get<uint64_t>, {0x0, 8, 0, 0})
};

/// Struct /Script/TypedElementFramework.ScriptTypedElementListProxy
/// Size: 0x0010 (0x000000 - 0x000010)
class FScriptTypedElementListProxy : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementSyncBackToWorldTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FTypedElementSyncBackToWorldTag : public FTypedElementDataStorageTag
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementSyncFromWorldTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FTypedElementSyncFromWorldTag : public FTypedElementDataStorageTag
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementRowReferenceColumn
/// Size: 0x0007 (0x000001 - 0x000008)
class FTypedElementRowReferenceColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementPackagePathColumn
/// Size: 0x000F (0x000001 - 0x000010)
class FTypedElementPackagePathColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   Path                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/TypedElementFramework.TypedElementPackageLoadedPathColumn
/// Size: 0x0007 (0x000001 - 0x000008)
class FTypedElementPackageLoadedPathColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementSelectionColumn
/// Size: 0x0000 (0x000001 - 0x000001)
class FTypedElementSelectionColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementSlateWidgetReferenceColumn
/// Size: 0x000F (0x000001 - 0x000010)
class FTypedElementSlateWidgetReferenceColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementSlateWidgetReferenceDeletesRowTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FTypedElementSlateWidgetReferenceDeletesRowTag : public FTypedElementDataStorageTag
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementLocalTransformColumn
/// Size: 0x005F (0x000001 - 0x000060)
class FTypedElementLocalTransformColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x0, 96, 0, 0})
};

/// Struct /Script/TypedElementFramework.TypedElementClassTypeInfoColumn
/// Size: 0x0007 (0x000001 - 0x000008)
class FTypedElementClassTypeInfoColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementScriptStructTypeInfoColumn
/// Size: 0x0007 (0x000001 - 0x000008)
class FTypedElementScriptStructTypeInfoColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementU32IntValueCacheColumn
/// Size: 0x0003 (0x000001 - 0x000004)
class FTypedElementU32IntValueCacheColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint32_t)                                  Value                                                       ___ OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/TypedElementFramework.TypedElementI32IntValueCacheColumn
/// Size: 0x0003 (0x000001 - 0x000004)
class FTypedElementI32IntValueCacheColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Value                                                       ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/TypedElementFramework.TypedElementU64IntValueCacheColumn
/// Size: 0x0007 (0x000001 - 0x000008)
class FTypedElementU64IntValueCacheColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint64_t)                                  Value                                                       ___ OFFSET(get<uint64_t>, {0x0, 8, 0, 0})
};

/// Struct /Script/TypedElementFramework.TypedElementI64IntValueCacheColumn
/// Size: 0x0007 (0x000001 - 0x000008)
class FTypedElementI64IntValueCacheColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int64_t)                                   Value                                                       ___ OFFSET(get<int64_t>, {0x0, 8, 0, 0})
};

/// Struct /Script/TypedElementFramework.TypedElementFloatValueCacheColumn
/// Size: 0x0003 (0x000001 - 0x000004)
class FTypedElementFloatValueCacheColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/TypedElementFramework.TypedElementViewportColorColumn
/// Size: 0x0000 (0x000001 - 0x000001)
class FTypedElementViewportColorColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

