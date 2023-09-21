
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/


/// Struct /Script/LocalizableMessage.LocalizableMessageParameterEntry
/// Size: 0x0020 (0x000000 - 0x000020)
class FLocalizableMessageParameterEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Key                                                         ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FInstancedStruct)                          Value                                                       ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/LocalizableMessage.LocalizableMessage
/// Size: 0x0030 (0x000000 - 0x000030)
class FLocalizableMessage : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Key                                                         ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   DefaultText                                                 ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FLocalizableMessageParameterEntry>) Substitutions                                               ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/LocalizableMessage.LocalizableMessageParameterInt
/// Size: 0x0008 (0x000000 - 0x000008)
class FLocalizableMessageParameterInt : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int64_t)                                   Value                                                       ___ OFFSET(get<int64_t>, {0x0, 8, 0, 0})
};

/// Struct /Script/LocalizableMessage.LocalizableMessageParameterFloat
/// Size: 0x0008 (0x000000 - 0x000008)
class FLocalizableMessageParameterFloat : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(double)                                    Value                                                       ___ OFFSET(get<double>, {0x0, 8, 0, 0})
};

/// Struct /Script/LocalizableMessage.LocalizableMessageParameterString
/// Size: 0x0010 (0x000000 - 0x000010)
class FLocalizableMessageParameterString : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   Value                                                       ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/LocalizableMessage.LocalizableMessageParameterMessage
/// Size: 0x0030 (0x000000 - 0x000030)
class FLocalizableMessageParameterMessage : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FLocalizableMessage)                       Value                                                       ___ OFFSET(get<T>, {0x0, 48, 0, 0})
};

