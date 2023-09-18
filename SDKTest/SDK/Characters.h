/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Characters.

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphTemplates/Player_RigidBodyPBA_AnimBP_Template.Player_RigidBodyPBA_AnimBP_Template_C.AnimBlueprintGeneratedConstantData
/// Size: 0x00BF (0x000001 - 0x0000C0)
class FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x28, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_SourcePose_AnimBP.Player_SourcePose_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x013F (0x000001 - 0x000140)
class FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TEnumAsByte<ESequenceEvalReinit>)          __ByteProperty                                              ___ OFFSET(get<T>, {0x50, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x51, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              ___ OFFSET(get<T>, {0x58, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              ___ OFFSET(get<T>, {0x59, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x5C, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            ___ OFFSET(get<T>, {0x60, 24, 0, 0})
	CMember(UBlendProfile*)                            __BlendProfile                                              ___ OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(UCurveFloat*)                              __CurveFloat                                                ___ OFFSET(get<T>, {0x80, 8, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x88, 1, 0, 0})
	CMember(EAlphaBlendOption)                         __EnumProperty                                              ___ OFFSET(get<T>, {0x89, 1, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty                                              ___ OFFSET(get<T>, {0x8A, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0xA0, 128, 0, 0})
	SMember(FAnimSubsystem)                            AnimBlueprintExtension_NodeRelevancy                        ___ OFFSET(get<T>, {0x120, 8, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x128, 24, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_SourcePose_AnimBP.Player_SourcePose_AnimBP_C.AnimBlueprintGeneratedMutableData
/// Size: 0x0070 (0x000001 - 0x000071)
class FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 113;

public:
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x1A, 1, 0, 0})
	CMember(UAnimSequenceBase*)                        __AnimSequenceBase                                          ___ OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(UAnimSequenceBase*)                        __AnimSequenceBase                                          ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UAnimSequenceBase*)                        __AnimSequenceBase                                          ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UAnimSequenceBase*)                        __AnimSequenceBase                                          ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x41, 1, 0, 0})
	CMember(UAnimSequenceBase*)                        __AnimSequenceBase                                          ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x50, 1, 0, 0})
	CMember(UAnimSequenceBase*)                        __AnimSequenceBase                                          ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(UAnimSequenceBase*)                        __AnimSequenceBase                                          ___ OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(UAnimSequenceBase*)                        __AnimSequenceBase                                          ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_PropertiesDebug_AnimBP.Player_PropertiesDebug_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x00C7 (0x000001 - 0x0000C8)
class FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	CMember(TEnumAsByte<ERefPoseType>)                 __ByteProperty                                              ___ OFFSET(get<T>, {0x28, 1, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x30, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0xB0, 24, 0, 0})
};

/// Struct /Game/Characters/Player/Male/Male_Avg_Base/FP_Procedural2.FP_Procedural2_C.AnimBlueprintGeneratedConstantData
/// Size: 0x00BF (0x000001 - 0x0000C0)
class FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x28, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_ZipLine_AnimBP.Player_ZipLine_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x01E7 (0x000001 - 0x0001E8)
class FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x14, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x1C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x20, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x24, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<int32_t>)                           __ArrayProperty                                             ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x60, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x64, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x68, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x6C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x74, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x78, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x7C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x80, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x84, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x88, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xA0, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xA4, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              ___ OFFSET(get<T>, {0xAC, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xB0, 4, 0, 0})
	CMember(UBlendProfile*)                            __BlendProfile                                              ___ OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(UCurveFloat*)                              __CurveFloat                                                ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(EAlphaBlendOption)                         __EnumProperty                                              ___ OFFSET(get<T>, {0xC8, 1, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty                                              ___ OFFSET(get<T>, {0xC9, 1, 0, 0})
	CMember(TArray<int32_t>)                           __ArrayProperty                                             ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xE0, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0xE4, 4, 0, 0})
	SMember(FInputScaleBiasClampConstants)             __StructProperty                                            ___ OFFSET(get<T>, {0xE8, 44, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x114, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x118, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x11C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x128, 1, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              ___ OFFSET(get<T>, {0x129, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              ___ OFFSET(get<T>, {0x12A, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x12C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x130, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x134, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            ___ OFFSET(get<T>, {0x138, 24, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x150, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x1D0, 24, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_ZipLine_AnimBP.Player_ZipLine_AnimBP_C.AnimBlueprintGeneratedMutableData
/// Size: 0x006B (0x000001 - 0x00006C)
class FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 108;

public:
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x19, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x1A, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x31, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x32, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x48, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x60, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x68, 4, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_Sprint_AnimBP.Player_Sprint_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x0157 (0x000001 - 0x000158)
class FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty                                              ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	SMember(FInputScaleBiasClampConstants)             __StructProperty                                            ___ OFFSET(get<T>, {0x30, 44, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              ___ OFFSET(get<T>, {0x60, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              ___ OFFSET(get<T>, {0x61, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x62, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x64, 4, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              ___ OFFSET(get<T>, {0x68, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              ___ OFFSET(get<T>, {0x69, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x6C, 4, 0, 0})
	CMember(UBlendProfile*)                            __BlendProfile                                              ___ OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(UCurveFloat*)                              __CurveFloat                                                ___ OFFSET(get<T>, {0x78, 8, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x80, 1, 0, 0})
	CMember(EAlphaBlendOption)                         __EnumProperty                                              ___ OFFSET(get<T>, {0x81, 1, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty                                              ___ OFFSET(get<T>, {0x82, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x88, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x98, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x9C, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0xC0, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x140, 24, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_Sprint_AnimBP.Player_Sprint_AnimBP_C.AnimBlueprintGeneratedMutableData
/// Size: 0x0028 (0x000001 - 0x000029)
class FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 41;

public:
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0xD, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x15, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_Goop_AnimBP.Player_Goop_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x01B7 (0x000001 - 0x0001B8)
class FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x14, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x1C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x20, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x24, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<int32_t>)                           __ArrayProperty                                             ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x58, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x5C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x60, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x64, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x68, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x6C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x74, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x78, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x7C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x80, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x84, 4, 0, 0})
	SMember(FInputScaleBiasClampConstants)             __StructProperty                                            ___ OFFSET(get<T>, {0x88, 44, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xB4, 4, 0, 0})
	CMember(UBlendProfile*)                            __BlendProfile                                              ___ OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(UCurveFloat*)                              __CurveFloat                                                ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(EAlphaBlendOption)                         __EnumProperty                                              ___ OFFSET(get<T>, {0xC8, 1, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty                                              ___ OFFSET(get<T>, {0xC9, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0xE0, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xE4, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0xE8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xEC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0xF4, 1, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              ___ OFFSET(get<T>, {0xF5, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              ___ OFFSET(get<T>, {0xF6, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xF8, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xFC, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x100, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            ___ OFFSET(get<T>, {0x108, 24, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x120, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x1A0, 24, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_Goop_AnimBP.Player_Goop_AnimBP_C.AnimBlueprintGeneratedMutableData
/// Size: 0x004B (0x000001 - 0x00004C)
class FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 76;

public:
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x19, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x1A, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x31, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x32, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x48, 4, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_InAir_AnimBP.Player_InAir_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x01F7 (0x000001 - 0x0001F8)
class FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x14, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x1C, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<int32_t>)                           __ArrayProperty                                             ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x74, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x78, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x7C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x80, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x84, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x88, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x8C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x90, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x94, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x98, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x9C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xA0, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xA4, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xAC, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0xB0, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xB4, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0xB8, 4, 0, 0})
	SMember(FInputScaleBiasClampConstants)             __StructProperty                                            ___ OFFSET(get<T>, {0xBC, 44, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xE8, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0xEC, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0xF0, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xF8, 4, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              ___ OFFSET(get<T>, {0xFC, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              ___ OFFSET(get<T>, {0xFD, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x100, 4, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty                                              ___ OFFSET(get<T>, {0x104, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(TEnumAsByte<ERefPoseType>)                 __ByteProperty                                              ___ OFFSET(get<T>, {0x118, 1, 0, 0})
	CMember(UBlendProfile*)                            __BlendProfile                                              ___ OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(UCurveFloat*)                              __CurveFloat                                                ___ OFFSET(get<T>, {0x128, 8, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x130, 1, 0, 0})
	CMember(EAlphaBlendOption)                         __EnumProperty                                              ___ OFFSET(get<T>, {0x131, 1, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty                                              ___ OFFSET(get<T>, {0x132, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x138, 16, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            ___ OFFSET(get<T>, {0x148, 24, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x160, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x1E0, 24, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_InAir_AnimBP.Player_InAir_AnimBP_C.AnimBlueprintGeneratedMutableData
/// Size: 0x0081 (0x000001 - 0x000082)
class FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 130;

public:
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x1A, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x1B, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x1C, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x32, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x33, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x44, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x78, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x81, 1, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x02E7 (0x000001 - 0x0002E8)
class FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x14, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x1C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x20, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x24, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x2C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x30, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x34, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x38, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x3C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x40, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x44, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x48, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x50, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x54, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x58, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x5C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x60, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x64, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x68, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x6C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x74, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(TArray<int32_t>)                           __ArrayProperty                                             ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(EAlphaBlendOption)                         __EnumProperty                                              ___ OFFSET(get<T>, {0xC0, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0xE8, 16, 0, 0})
	CMember(TArray<int32_t>)                           __ArrayProperty                                             ___ OFFSET(get<T>, {0xF8, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x108, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x110, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x120, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x128, 16, 0, 0})
	CMember(TArray<int32_t>)                           __ArrayProperty                                             ___ OFFSET(get<T>, {0x138, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x148, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x14C, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x150, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x154, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x158, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x15C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x164, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x168, 16, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x178, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x188, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x18C, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x190, 4, 0, 0})
	CMember(TArray<int32_t>)                           __ArrayProperty                                             ___ OFFSET(get<T>, {0x198, 16, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              ___ OFFSET(get<T>, {0x1A8, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              ___ OFFSET(get<T>, {0x1A9, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x1AC, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x1B0, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x1B4, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x1B8, 4, 0, 0})
	CMember(TEnumAsByte<ERefPoseType>)                 __ByteProperty                                              ___ OFFSET(get<T>, {0x1BC, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x1BD, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1C0, 4, 0, 0})
	SMember(FInputScaleBiasClampConstants)             __StructProperty                                            ___ OFFSET(get<T>, {0x1C4, 44, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1F0, 4, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              ___ OFFSET(get<T>, {0x1F4, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              ___ OFFSET(get<T>, {0x1F5, 1, 0, 0})
	CMember(UBlendProfile*)                            __BlendProfile                                              ___ OFFSET(get<T>, {0x1F8, 8, 0, 0})
	CMember(UCurveFloat*)                              __CurveFloat                                                ___ OFFSET(get<T>, {0x200, 8, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x208, 1, 0, 0})
	CMember(EAlphaBlendOption)                         __EnumProperty                                              ___ OFFSET(get<T>, {0x209, 1, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty                                              ___ OFFSET(get<T>, {0x20A, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x210, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x220, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x224, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x228, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x22C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x230, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x234, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            ___ OFFSET(get<T>, {0x238, 24, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x250, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x2D0, 24, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.AnimBlueprintGeneratedMutableData
/// Size: 0x01A4 (0x000001 - 0x0001A5)
class FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 421;

public:
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x1C, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x1D, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x54, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x64, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x74, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x88, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x94, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0xA4, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0xA5, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0xB4, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0xC4, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0xD4, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xDC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xE0, 4, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0xE4, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xEC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0xF8, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xFC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x104, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x10C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x114, 4, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x118, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x11C, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x120, 16, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x130, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x134, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x138, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x13C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x148, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x14C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x150, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x158, 16, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x168, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x16C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x174, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x17C, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x17D, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x180, 16, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x190, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x194, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x198, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x19C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1A0, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x1A4, 1, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_LowerBodyJog_AnimBP.Player_LowerBodyJog_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x02E7 (0x000001 - 0x0002E8)
class FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x14, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x1C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x20, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x24, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x2C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x30, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x34, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x38, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x3C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x40, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x44, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x48, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x50, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x54, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x58, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x5C, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x90, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x94, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x98, 4, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              ___ OFFSET(get<T>, {0x9C, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xA0, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0xA4, 4, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              ___ OFFSET(get<T>, {0xA8, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xAC, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xB0, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TArray<int32_t>)                           __ArrayProperty                                             ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xD8, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xDC, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0xE0, 4, 0, 0})
	SMember(FInputScaleBiasClampConstants)             __StructProperty                                            ___ OFFSET(get<T>, {0xE4, 44, 0, 0})
	SMember(FInputScaleBiasClampConstants)             __StructProperty                                            ___ OFFSET(get<T>, {0x110, 44, 0, 0})
	SMember(FInputScaleBiasClampConstants)             __StructProperty                                            ___ OFFSET(get<T>, {0x13C, 44, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x168, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x16C, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x170, 4, 0, 0})
	SMember(FInputScaleBiasClampConstants)             __StructProperty                                            ___ OFFSET(get<T>, {0x174, 44, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1A0, 4, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              ___ OFFSET(get<T>, {0x1A4, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              ___ OFFSET(get<T>, {0x1A5, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x1A8, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x1AC, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x1B0, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x1B4, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x1B8, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1BC, 4, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              ___ OFFSET(get<T>, {0x1C0, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              ___ OFFSET(get<T>, {0x1C1, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x1C4, 4, 0, 0})
	CMember(EAlphaBlendOption)                         __EnumProperty                                              ___ OFFSET(get<T>, {0x1C8, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x1D0, 16, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x1E0, 16, 0, 0})
	CMember(TArray<int32_t>)                           __ArrayProperty                                             ___ OFFSET(get<T>, {0x1F0, 16, 0, 0})
	CMember(UBlendProfile*)                            __BlendProfile                                              ___ OFFSET(get<T>, {0x200, 8, 0, 0})
	CMember(UCurveFloat*)                              __CurveFloat                                                ___ OFFSET(get<T>, {0x208, 8, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x210, 1, 0, 0})
	CMember(EAlphaBlendOption)                         __EnumProperty                                              ___ OFFSET(get<T>, {0x211, 1, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty                                              ___ OFFSET(get<T>, {0x212, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x218, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x228, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x22C, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x230, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            ___ OFFSET(get<T>, {0x238, 24, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x250, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x2D0, 24, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_LowerBodyJog_AnimBP.Player_LowerBodyJog_AnimBP_C.AnimBlueprintGeneratedMutableData
/// Size: 0x012E (0x000001 - 0x00012F)
class FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 303;

public:
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x64, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x78, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x90, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x94, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xB0, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0xC8, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xD8, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0xF0, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xFC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x104, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x105, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x10C, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x114, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x118, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x128, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x12C, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x12D, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x12E, 1, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_Land_AnimBP.Player_Land_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x02AF (0x000001 - 0x0002B0)
class FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x14, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x1C, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<int32_t>)                           __ArrayProperty                                             ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<int32_t>)                           __ArrayProperty                                             ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<int32_t>)                           __ArrayProperty                                             ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<int32_t>)                           __ArrayProperty                                             ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<int32_t>)                           __ArrayProperty                                             ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<int32_t>)                           __ArrayProperty                                             ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xC0, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xC4, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xC8, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xCC, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xD0, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xD4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xD8, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xDC, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xE0, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0xE8, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xF8, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xFC, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x100, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x104, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x108, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            ___ OFFSET(get<T>, {0x110, 24, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x128, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x12C, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x130, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x134, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x138, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x13C, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x140, 4, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              ___ OFFSET(get<T>, {0x144, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x145, 1, 0, 0})
	CMember(EAlphaBlendOption)                         __EnumProperty                                              ___ OFFSET(get<T>, {0x146, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x148, 16, 0, 0})
	CMember(TArray<int32_t>)                           __ArrayProperty                                             ___ OFFSET(get<T>, {0x158, 16, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x168, 4, 0, 0})
	SMember(FInputScaleBiasClampConstants)             __StructProperty                                            ___ OFFSET(get<T>, {0x16C, 44, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x198, 4, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              ___ OFFSET(get<T>, {0x19C, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              ___ OFFSET(get<T>, {0x19D, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x1A0, 4, 0, 0})
	CMember(TEnumAsByte<ERefPoseType>)                 __ByteProperty                                              ___ OFFSET(get<T>, {0x1A4, 1, 0, 0})
	CMember(UBlendProfile*)                            __BlendProfile                                              ___ OFFSET(get<T>, {0x1A8, 8, 0, 0})
	CMember(UCurveFloat*)                              __CurveFloat                                                ___ OFFSET(get<T>, {0x1B0, 8, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x1B8, 1, 0, 0})
	CMember(EAlphaBlendOption)                         __EnumProperty                                              ___ OFFSET(get<T>, {0x1B9, 1, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty                                              ___ OFFSET(get<T>, {0x1BA, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x1C0, 16, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            ___ OFFSET(get<T>, {0x1D0, 24, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x1E8, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x1EC, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x1F0, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            ___ OFFSET(get<T>, {0x1F8, 24, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x210, 128, 0, 0})
	SMember(FAnimSubsystem)                            AnimBlueprintExtension_NodeRelevancy                        ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x298, 24, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_Land_AnimBP.Player_Land_AnimBP_C.AnimBlueprintGeneratedMutableData
/// Size: 0x0025 (0x000001 - 0x000026)
class FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 38;

public:
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x4, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x5, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x6, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x7, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x19, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x1A, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x1B, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x1C, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x1D, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x1E, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x1F, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x21, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x22, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x23, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x24, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x25, 1, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_BuildingPose_AnimBP.Player_BuildingPose_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x0157 (0x000001 - 0x000158)
class FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<int32_t>)                           __ArrayProperty                                             ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	SMember(FInputScaleBiasClampConstants)             __StructProperty                                            ___ OFFSET(get<T>, {0x38, 44, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x64, 4, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              ___ OFFSET(get<T>, {0x68, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              ___ OFFSET(get<T>, {0x69, 1, 0, 0})
	CMember(UBlendProfile*)                            __BlendProfile                                              ___ OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(UCurveFloat*)                              __CurveFloat                                                ___ OFFSET(get<T>, {0x78, 8, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x80, 1, 0, 0})
	CMember(EAlphaBlendOption)                         __EnumProperty                                              ___ OFFSET(get<T>, {0x81, 1, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty                                              ___ OFFSET(get<T>, {0x82, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x88, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x98, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x9C, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0xC0, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x140, 24, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_BuildingPose_AnimBP.Player_BuildingPose_AnimBP_C.AnimBlueprintGeneratedMutableData
/// Size: 0x0004 (0x000001 - 0x000005)
class FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 5;

public:
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x2, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x3, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_FreeFlying_AnimBP.Player_FreeFlying_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x014F (0x000001 - 0x000150)
class FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<int32_t>)                           __ArrayProperty                                             ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FInputScaleBiasClampConstants)             __StructProperty                                            ___ OFFSET(get<T>, {0x30, 44, 0, 0})
	CMember(UBlendProfile*)                            __BlendProfile                                              ___ OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(UCurveFloat*)                              __CurveFloat                                                ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x70, 1, 0, 0})
	CMember(EAlphaBlendOption)                         __EnumProperty                                              ___ OFFSET(get<T>, {0x71, 1, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty                                              ___ OFFSET(get<T>, {0x72, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x90, 1, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              ___ OFFSET(get<T>, {0x91, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              ___ OFFSET(get<T>, {0x92, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x94, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x98, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x9C, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            ___ OFFSET(get<T>, {0xA0, 24, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0xB8, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x138, 24, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_FreeFlying_AnimBP.Player_FreeFlying_AnimBP_C.AnimBlueprintGeneratedMutableData
/// Size: 0x0043 (0x000001 - 0x000044)
class FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 68;

public:
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x1, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x24, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x39, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_SkyDiveAndGlide_AnimBP.Player_SkyDiveAndGlide_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x025F (0x000001 - 0x000260)
class FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x30, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x34, 4, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty                                              ___ OFFSET(get<T>, {0x38, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x3C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x40, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x44, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x48, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4C, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<int32_t>)                           __ArrayProperty                                             ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x74, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x78, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x7C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x80, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x84, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(TArray<int32_t>)                           __ArrayProperty                                             ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xAC, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xB0, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xB4, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xB8, 4, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              ___ OFFSET(get<T>, {0xBC, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              ___ OFFSET(get<T>, {0xBD, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xC0, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xC4, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TArray<int32_t>)                           __ArrayProperty                                             ___ OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0xE8, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xF8, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xFC, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x100, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x104, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x108, 4, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              ___ OFFSET(get<T>, {0x10C, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x110, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x114, 4, 0, 0})
	SMember(FInputScaleBiasClampConstants)             __StructProperty                                            ___ OFFSET(get<T>, {0x118, 44, 0, 0})
	CMember(UBlendProfile*)                            __BlendProfile                                              ___ OFFSET(get<T>, {0x148, 8, 0, 0})
	CMember(UCurveFloat*)                              __CurveFloat                                                ___ OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(EAlphaBlendOption)                         __EnumProperty                                              ___ OFFSET(get<T>, {0x158, 1, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty                                              ___ OFFSET(get<T>, {0x159, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(TArray<int32_t>)                           __ArrayProperty                                             ___ OFFSET(get<T>, {0x170, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x180, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x184, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x188, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x18C, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x190, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x194, 1, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              ___ OFFSET(get<T>, {0x195, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              ___ OFFSET(get<T>, {0x196, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x198, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x19C, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x1A0, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x1A4, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x1A8, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x1AC, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            ___ OFFSET(get<T>, {0x1B0, 24, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x1C8, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x248, 24, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_SkyDiveAndGlide_AnimBP.Player_SkyDiveAndGlide_AnimBP_C.AnimBlueprintGeneratedMutableData
/// Size: 0x042B (0x000001 - 0x00042C)
class FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1068;

public:
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x18, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x2C, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x90, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x94, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0xB4, 1, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0xB8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0xD4, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0xD8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xDC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xE0, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xE4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xEC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xFC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x104, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x10C, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x114, 4, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x118, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x128, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x12C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x130, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x134, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x138, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x13C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x148, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x14C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x150, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x154, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x158, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x15C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x160, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x164, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x168, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x16C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x174, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x17C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x180, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x184, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x188, 4, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x18C, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x18D, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x18E, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x190, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x194, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x198, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x19C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1A0, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1A4, 4, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x1A8, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x1A9, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x1AA, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1AC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1B0, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1B4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1B8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1BC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1C0, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1C4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1C8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1CC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1D8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1DC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1E0, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1E4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1E8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1EC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1F0, 4, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x1F4, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x1F5, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x1F6, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1F8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1FC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x200, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x204, 4, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x208, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x209, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x20C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x210, 4, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x214, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x215, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x216, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x218, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x21C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x220, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x224, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x228, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x22C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x230, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x234, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x238, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x23C, 4, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x240, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x241, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x244, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x248, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x24C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x250, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x254, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x258, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x25C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x260, 4, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x264, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x268, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x26C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x270, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x274, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x278, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x27C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x280, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x284, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x288, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x28C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x290, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x294, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x298, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x29C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x2A0, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x2A4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x2A8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x2AC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x2B0, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x2B4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x2B8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x2BC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x2C0, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x2C4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x2C8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x2CC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x2D0, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x2D4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x2D8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x2DC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x2E0, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x2E4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x2E8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x2EC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x2F0, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x2F4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x2F8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x2FC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x300, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x304, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x308, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x30C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x310, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x314, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x318, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x31C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x320, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x324, 4, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x328, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x329, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x32A, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x32B, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x32C, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x32D, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x32E, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x32F, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x330, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x334, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x338, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x33C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x340, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x344, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x348, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x34C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x350, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x354, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x358, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x35C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x360, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x364, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x368, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x36C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x370, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x374, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x378, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x37C, 4, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x380, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x381, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x382, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x384, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x388, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x38C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x390, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x394, 4, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x398, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x399, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x39C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x3A0, 4, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x3A4, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x3A8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x3AC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x3B0, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x3B4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x3B8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x3BC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x3C0, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x3C4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x3C8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x3CC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x3D0, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x3D4, 4, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x3D8, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x3DC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x3E0, 4, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x3E4, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x3E8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x3EC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x3F0, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x3F4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x3F8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x3FC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x400, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x404, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x408, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x40C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x410, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x414, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x418, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x41C, 4, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x420, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x424, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x428, 4, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_TacticalState_AnimBP.Player_TacticalState_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x01D7 (0x000001 - 0x0001D8)
class FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<int32_t>)                           __ArrayProperty                                             ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              ___ OFFSET(get<T>, {0x2C, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              ___ OFFSET(get<T>, {0x38, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x3C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x40, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x44, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x48, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x50, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x54, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x58, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x60, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x64, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x68, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x6C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x74, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x78, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x7C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x80, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x84, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x88, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x8C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x90, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x94, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x98, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x9C, 4, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              ___ OFFSET(get<T>, {0xA0, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xA4, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xB0, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0xB8, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xBC, 4, 0, 0})
	SMember(FInputScaleBiasClampConstants)             __StructProperty                                            ___ OFFSET(get<T>, {0xC0, 44, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xEC, 4, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              ___ OFFSET(get<T>, {0xF0, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              ___ OFFSET(get<T>, {0xF1, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xF4, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xF8, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0xFC, 4, 0, 0})
	CMember(UBlendProfile*)                            __BlendProfile                                              ___ OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(UCurveFloat*)                              __CurveFloat                                                ___ OFFSET(get<T>, {0x108, 8, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x110, 1, 0, 0})
	CMember(EAlphaBlendOption)                         __EnumProperty                                              ___ OFFSET(get<T>, {0x111, 1, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty                                              ___ OFFSET(get<T>, {0x112, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x118, 16, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            ___ OFFSET(get<T>, {0x128, 24, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x140, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x1C0, 24, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_TacticalState_AnimBP.Player_TacticalState_AnimBP_C.AnimBlueprintGeneratedMutableData
/// Size: 0x0021 (0x000001 - 0x000022)
class FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 34;

public:
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x1, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0xD, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0xE, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0xF, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x11, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x12, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x13, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x15, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x16, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x17, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x21, 1, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphTemplates/Player_Locomotion_Prototype_Template.Player_Locomotion_Prototype_Template_C.AnimBlueprintGeneratedConstantData
/// Size: 0x00BF (0x000001 - 0x0000C0)
class FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x28, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_FullBodyAimOffsets_AnimBP.Player_FullBodyAimOffsets_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x0157 (0x000001 - 0x000158)
class FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x14, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x1C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x20, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x24, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x2C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x30, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x34, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x38, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x3C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x40, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x44, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x48, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x50, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x54, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x58, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x5C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x60, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x64, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x68, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x6C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x74, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x78, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x7C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x80, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x84, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x88, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x90, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x94, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x98, 1, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              ___ OFFSET(get<T>, {0x99, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              ___ OFFSET(get<T>, {0x9A, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x9C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xA0, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0xC0, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x140, 24, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_FullBodyAimOffsets_AnimBP.Player_FullBodyAimOffsets_AnimBP_C.AnimBlueprintGeneratedMutableData
/// Size: 0x0013 (0x000001 - 0x000014)
class FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_DBNO_AnimBP.Player_DBNO_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x012F (0x000001 - 0x000130)
class FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	SMember(FInputScaleBiasClampConstants)             __StructProperty                                            ___ OFFSET(get<T>, {0x30, 44, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              ___ OFFSET(get<T>, {0x60, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              ___ OFFSET(get<T>, {0x61, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x64, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x68, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x6C, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x78, 1, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              ___ OFFSET(get<T>, {0x79, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              ___ OFFSET(get<T>, {0x7A, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x7C, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            ___ OFFSET(get<T>, {0x80, 24, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x98, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x118, 24, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_DBNO_AnimBP.Player_DBNO_AnimBP_C.AnimBlueprintGeneratedMutableData
/// Size: 0x0017 (0x000001 - 0x000018)
class FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_DBNOCarried_AnimBP.Player_DBNOCarried_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x01EF (0x000001 - 0x0001F0)
class FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(UAnimSequenceBase*)                        __AnimSequenceBase                                          ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(UAnimSequenceBase*)                        __AnimSequenceBase                                          ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	CMember(UAnimSequenceBase*)                        __AnimSequenceBase                                          ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(UAnimSequenceBase*)                        __AnimSequenceBase                                          ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	CMember(UAnimSequenceBase*)                        __AnimSequenceBase                                          ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(UAnimSequenceBase*)                        __AnimSequenceBase                                          ___ OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(UAnimSequenceBase*)                        __AnimSequenceBase                                          ___ OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(UAnimSequenceBase*)                        __AnimSequenceBase                                          ___ OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              ___ OFFSET(get<T>, {0x98, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              ___ OFFSET(get<T>, {0x99, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x9C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xA0, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xA4, 4, 0, 0})
	SMember(FInputScaleBiasClampConstants)             __StructProperty                                            ___ OFFSET(get<T>, {0xA8, 44, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xD4, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xD8, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xDC, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0xE0, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xE4, 4, 0, 0})
	CMember(TEnumAsByte<ESequenceEvalReinit>)          __ByteProperty                                              ___ OFFSET(get<T>, {0xE8, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0xE9, 1, 0, 0})
	CMember(UAnimSequenceBase*)                        __AnimSequenceBase                                          ___ OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              ___ OFFSET(get<T>, {0xF8, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              ___ OFFSET(get<T>, {0xF9, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xFC, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x100, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x104, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(UBlendProfile*)                            __BlendProfile                                              ___ OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(UCurveFloat*)                              __CurveFloat                                                ___ OFFSET(get<T>, {0x120, 8, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x128, 1, 0, 0})
	CMember(EAlphaBlendOption)                         __EnumProperty                                              ___ OFFSET(get<T>, {0x129, 1, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty                                              ___ OFFSET(get<T>, {0x12A, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x130, 16, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            ___ OFFSET(get<T>, {0x140, 24, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x158, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x1D8, 24, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_DBNOCarried_AnimBP.Player_DBNOCarried_AnimBP_C.AnimBlueprintGeneratedMutableData
/// Size: 0x0049 (0x000001 - 0x00004A)
class FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 74;

public:
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x1C, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x1D, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x24, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x2C, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x34, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x35, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x36, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x3C, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x3D, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x3E, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x49, 1, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x01A7 (0x000001 - 0x0001A8)
class FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x14, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x1C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x20, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x24, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x2C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x30, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x34, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x38, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x3C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x40, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x44, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x48, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x50, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x54, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x58, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x5C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x60, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x64, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x68, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x80, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x84, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x88, 4, 0, 0})
	CMember(EAlphaBlendOption)                         __EnumProperty                                              ___ OFFSET(get<T>, {0x8C, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xA0, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xA4, 4, 0, 0})
	CMember(TArray<int32_t>)                           __ArrayProperty                                             ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(UBlendProfile*)                            __BlendProfile                                              ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(UCurveFloat*)                              __CurveFloat                                                ___ OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(EAlphaBlendOption)                         __EnumProperty                                              ___ OFFSET(get<T>, {0xD8, 1, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty                                              ___ OFFSET(get<T>, {0xD9, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0xF0, 1, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            ___ OFFSET(get<T>, {0xF8, 24, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x110, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x190, 24, 0, 0})
};

/// Struct /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.AnimBlueprintGeneratedMutableData
/// Size: 0x000B (0x000001 - 0x00000C)
class FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x5, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x6, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x7, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x9, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0xA, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0xB, 1, 0, 0})
};

/// Struct /Game/Characters/Player/Male/Male_Avg_Base/Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimBlueprintGeneratedConstantData
/// Size: 0x035F (0x000001 - 0x000360)
class FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x14, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x1C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x20, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x24, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x2C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x30, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x34, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x38, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x3C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x40, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x44, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x48, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x50, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x54, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x58, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x5C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x60, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x64, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x68, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x6C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x74, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x78, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x7C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x80, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x84, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x88, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x8C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x90, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x94, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x98, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x9C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xA0, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xB8, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xBC, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xE0, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xE4, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xE8, 4, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty                                              ___ OFFSET(get<T>, {0xEC, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x100, 4, 0, 0})
	CMember(EAlphaBlendOption)                         __EnumProperty                                              ___ OFFSET(get<T>, {0x104, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(TArray<int32_t>)                           __ArrayProperty                                             ___ OFFSET(get<T>, {0x118, 16, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              ___ OFFSET(get<T>, {0x128, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x12C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x130, 4, 0, 0})
	CMember(TEnumAsByte<ERefPoseType>)                 __ByteProperty                                              ___ OFFSET(get<T>, {0x134, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x138, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x13C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x140, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x144, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x148, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x150, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x164, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x168, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x16C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x170, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x174, 4, 0, 0})
	CMember(TArray<int32_t>)                           __ArrayProperty                                             ___ OFFSET(get<T>, {0x178, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x188, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x18C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x190, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x194, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x198, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x19C, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x1A0, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1A4, 4, 0, 0})
	SMember(FInputScaleBiasClampConstants)             __StructProperty                                            ___ OFFSET(get<T>, {0x1A8, 44, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1D4, 4, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              ___ OFFSET(get<T>, {0x1D8, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              ___ OFFSET(get<T>, {0x1D9, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x1DC, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x1E0, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x1E4, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x1E8, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x1F0, 16, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x200, 16, 0, 0})
	CMember(UBlendProfile*)                            __BlendProfile                                              ___ OFFSET(get<T>, {0x210, 8, 0, 0})
	CMember(UCurveFloat*)                              __CurveFloat                                                ___ OFFSET(get<T>, {0x218, 8, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x220, 1, 0, 0})
	CMember(EAlphaBlendOption)                         __EnumProperty                                              ___ OFFSET(get<T>, {0x221, 1, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty                                              ___ OFFSET(get<T>, {0x222, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x228, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x238, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x23C, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x240, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            ___ OFFSET(get<T>, {0x248, 24, 0, 0})
	SMember(FAnimSubsystem_Tag)                        AnimBlueprintExtension_Tag                                  ___ OFFSET(get<T>, {0x260, 96, 0, 0})
	SMember(FAnimSubsystem)                            AnimBlueprintExtension_SharedLinkedAnimLayers               ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x2C8, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x348, 24, 0, 0})
};

/// Struct /Game/Characters/Player/Male/Male_Avg_Base/Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimBlueprintGeneratedMutableData
/// Size: 0x00BB (0x000001 - 0x0000BC)
class FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 188;

public:
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x1A, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x1B, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x1C, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x1D, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x32, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x33, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x49, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x4A, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x4B, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x4C, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x74, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x81, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x82, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x83, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x84, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x8C, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0xA0, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0xA1, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0xB4, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0xB5, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0xB6, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0xB7, 1, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0xB8, 4, 0, 0})
};

/// Struct /Game/Characters/Player/Male/Male_Avg_Base/LayerAnimBP/SwimmingAnimBP.SwimmingAnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x0267 (0x000001 - 0x000268)
class FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(TArray<int32_t>)                           __ArrayProperty                                             ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x38, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x3C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x40, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x44, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x48, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x60, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x64, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x68, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x6C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x70, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x74, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x78, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x7C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x80, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x84, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x88, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x8C, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<int32_t>)                           __ArrayProperty                                             ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xB0, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xB4, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xB8, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xBC, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xC0, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xC4, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xC8, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xCC, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xD0, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xD4, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0xD8, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xDC, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0xE0, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xE4, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xE8, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0xEC, 4, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty                                              ___ OFFSET(get<T>, {0xF0, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0xF8, 16, 0, 0})
	SMember(FInputScaleBiasClampConstants)             __StructProperty                                            ___ OFFSET(get<T>, {0x108, 44, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x134, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x138, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x13C, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x140, 16, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x150, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x154, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x158, 4, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              ___ OFFSET(get<T>, {0x15C, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x164, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x168, 4, 0, 0})
	CMember(TEnumAsByte<ERefPoseType>)                 __ByteProperty                                              ___ OFFSET(get<T>, {0x16C, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x170, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x174, 4, 0, 0})
	CMember(TEnumAsByte<ESequenceEvalReinit>)          __ByteProperty                                              ___ OFFSET(get<T>, {0x178, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x17C, 4, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              ___ OFFSET(get<T>, {0x180, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              ___ OFFSET(get<T>, {0x181, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x182, 1, 0, 0})
	CMember(UBlendProfile*)                            __BlendProfile                                              ___ OFFSET(get<T>, {0x188, 8, 0, 0})
	CMember(UCurveFloat*)                              __CurveFloat                                                ___ OFFSET(get<T>, {0x190, 8, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x198, 1, 0, 0})
	CMember(EAlphaBlendOption)                         __EnumProperty                                              ___ OFFSET(get<T>, {0x199, 1, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty                                              ___ OFFSET(get<T>, {0x19A, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x1A0, 16, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            ___ OFFSET(get<T>, {0x1B0, 24, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x1C8, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x1CC, 4, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x1D0, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x250, 24, 0, 0})
};

/// Struct /Game/Characters/Player/Male/Male_Avg_Base/LayerAnimBP/SwimmingAnimBP.SwimmingAnimBP_C.AnimBlueprintGeneratedMutableData
/// Size: 0x00A1 (0x000001 - 0x0000A2)
class FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 162;

public:
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x8, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x19, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x1A, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x34, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(char)                                      __ByteProperty                                              ___ OFFSET(get<char>, {0x40, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x69, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x6A, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x6B, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x71, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x7C, 4, 0, 0})
	CMember(UAnimSequenceBase*)                        __AnimSequenceBase                                          ___ OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(UAnimSequenceBase*)                        __AnimSequenceBase                                          ___ OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0xA0, 1, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0xA1, 1, 0, 0})
};

/// Struct /Game/Characters/Survivors/Struct_SurvivorScriptedAbilities.Struct_SurvivorScriptedAbilities
/// Size: 0x0024 (0x000000 - 0x000024)
class FStruct_SurvivorScriptedAbilities : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	DMember(float)                                     SurvivorHelpReminderDuration_14_F54DDCC9447A56E42EEA23B2F26A82BF ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FGameplayTag)                              NPC_Ability_NonAttack_CowerIndefiniteTrue_6_F917B44A44D629C4351341967FEDCE08 ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FGameplayTag)                              NPC_Ability_NonAttack_CowerIndefiniteFalse_7_E6F8C1C646C79DEF76809E829DCA289D ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FGameplayTag)                              NPC_Ability_NonAttack_RescueTrue_9_6F9D8205427713C6B3C45D889DF83BE4 ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	SMember(FGameplayTag)                              NPC_Ability_NonAttack_RescueFalse_11_B549D5AB4CBCBCA2155C3FAA098A58D0 ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	SMember(FGameplayTag)                              NPC_Ability_NonAttack_LockInPlaceTrue_18_1FA6565D4BC9F11CB51AC584EFDE6999 ___ OFFSET(get<T>, {0x14, 4, 0, 0})
	SMember(FGameplayTag)                              NPC_Ability_NonAttack_LockInPlaceFalse_20_B578575C4157F18CAD94EEBB4BA45E71 ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FGameplayTag)                              NPC_Ability_NonAttack_RescueStart_28_F37EAFF4488E12ABFE11299818466044 ___ OFFSET(get<T>, {0x1C, 4, 0, 0})
	SMember(FGameplayTag)                              NPC_Ability_NonAttack_RescueFinish_29_7B19BD2348AA524234D34493C53321F3 ___ OFFSET(get<T>, {0x20, 4, 0, 0})
};

/// Struct /Game/Characters/Player/Male/Male_Avg_Base/LayerAnimBP/SlidingLayerAnimBP.SlidingLayerAnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x0177 (0x000001 - 0x000178)
class FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	CMember(TEnumAsByte<ERefPoseType>)                 __ByteProperty                                              ___ OFFSET(get<T>, {0x14, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x48, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4C, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	CMember(UBlendProfile*)                            __BlendProfile                                              ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(UCurveFloat*)                              __CurveFloat                                                ___ OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(EAlphaBlendOption)                         __EnumProperty                                              ___ OFFSET(get<T>, {0x68, 1, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty                                              ___ OFFSET(get<T>, {0x69, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x80, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x84, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x88, 4, 0, 0})
	SMember(FInputScaleBiasClampConstants)             __StructProperty                                            ___ OFFSET(get<T>, {0x8C, 44, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0xBC, 1, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              ___ OFFSET(get<T>, {0xBD, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              ___ OFFSET(get<T>, {0xBE, 1, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            ___ OFFSET(get<T>, {0xC0, 24, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xD8, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xDC, 4, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0xE0, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x160, 24, 0, 0})
};

/// Struct /Game/Characters/Player/Male/Male_Avg_Base/LayerAnimBP/SlidingLayerAnimBP.SlidingLayerAnimBP_C.AnimBlueprintGeneratedMutableData
/// Size: 0x003C (0x000001 - 0x00003D)
class FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 61;

public:
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x3C, 1, 0, 0})
};

/// Struct /Game/Characters/Player/Female/Medium/Bodies/F_MED_Ramirez_Fallback/Meshes/F_MED_Ramirez_Fallback_Skeleton_AnimBlueprint.F_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C.AnimBlueprintGeneratedConstantData
/// Size: 0x00BF (0x000001 - 0x0000C0)
class FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x28, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
};

/// Class /Game/Characters/Player/Male/Male_Avg_Base/AnimLayerInterface/ItemAnimLayerInterface.ItemAnimLayerInterface_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemAnimLayerInterface_C : public UAnimLayerInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Game/Characters/Enemies/Blueprints/EnemyPawn_Interface.EnemyPawn_Interface_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UEnemyPawn_Interface_C : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Game/Characters/Player/Male/Male_Avg_Base/AnimLayerInterface/MovementModeLayerInterface.MovementModeLayerInterface_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovementModeLayerInterface_C : public UAnimLayerInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Game/Characters/Player/Blueprints/FortPlayerAnimComponentBP.FortPlayerAnimComponentBP_C
/// Size: 0x0000 (0x000D60 - 0x000D60)
class UFortPlayerAnimComponentBP_C : public UFortPlayerAnimationComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3424;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_Default.TeamID_Default_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_Default_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_Orange.TeamID_Orange_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_Orange_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_Lime.TeamID_Lime_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_Lime_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP_03.TeamID_PvP_03_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_03_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP_05.TeamID_PvP_05_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_05_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP_04.TeamID_PvP_04_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_04_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP_07.TeamID_PvP_07_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_07_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP_06.TeamID_PvP_06_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_06_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_10_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_10_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_11_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_11_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_12_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_12_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_14_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_14_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_13_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_13_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_17_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_17_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_18_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_18_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_16_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_16_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_15_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_15_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_19_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_19_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_22_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_22_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_21_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_21_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_20_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_20_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_25_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_25_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_24_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_24_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_23_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_23_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_27_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_27_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_28_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_28_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_26_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_26_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_29_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_29_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_32_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_32_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_30_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_30_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_34_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_34_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_35_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_35_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_33_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_33_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_31_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_31_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_37_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_37_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_36_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_36_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_40_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_40_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_41_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_41_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_39_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_39_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_42_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_42_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_38_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_38_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_45_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_45_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_44_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_44_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_43_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_43_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_48_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_48_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_46_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_46_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_50_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_50_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_47_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_47_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP.TeamID_PvP_49_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_49_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP_09.TeamID_PvP_09_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_09_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP_08.TeamID_PvP_08_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UTeamID_PvP_08_C : public UFortTeamIdentification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphTemplates/Player_RigidBodyPBA_AnimBP_Template.Player_RigidBodyPBA_AnimBP_Template_C
/// Size: 0x00E8 (0x000350 - 0x000438)
class UPlayer_RigidBodyPBA_AnimBP_Template_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x358, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x360, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x368, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x388, 176, 0, 0})
};

/// Class /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_SourcePose_AnimBP.Player_SourcePose_AnimBP_C
/// Size: 0x0550 (0x0015D0 - 0x001B20)
class UPlayer_SourcePose_AnimBP_C : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6944;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x15D0, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     ___ OFFSET(get<T>, {0x15D8, 120, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x1650, 8, 0, 0})
	SMember(FAnimSubsystemInstance_NodeRelevancy)      AnimBlueprintExtension_NodeRelevancy                        ___ OFFSET(get<T>, {0x1658, 168, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x1700, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1708, 32, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1728, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1770, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x17B8, 72, 0, 0})
	SMember(FAnimNode_SequenceEvaluator)               AnimGraphNode_SequenceEvaluator                             ___ OFFSET(get<T>, {0x1800, 64, 0, 0})
	SMember(FAnimNode_SequenceEvaluator)               AnimGraphNode_SequenceEvaluator                             ___ OFFSET(get<T>, {0x1840, 64, 0, 0})
	SMember(FAnimNode_SequenceEvaluator)               AnimGraphNode_SequenceEvaluator                             ___ OFFSET(get<T>, {0x1880, 64, 0, 0})
	SMember(FAnimNode_SequenceEvaluator)               AnimGraphNode_SequenceEvaluator                             ___ OFFSET(get<T>, {0x18C0, 64, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1900, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1948, 72, 0, 0})
	SMember(FAnimNode_SequenceEvaluator)               AnimGraphNode_SequenceEvaluator                             ___ OFFSET(get<T>, {0x1990, 64, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x19D0, 72, 0, 0})
	SMember(FAnimNode_SequenceEvaluator)               AnimGraphNode_SequenceEvaluator                             ___ OFFSET(get<T>, {0x1A18, 64, 0, 0})
	SMember(FAnimNode_SequenceEvaluator)               AnimGraphNode_SequenceEvaluator                             ___ OFFSET(get<T>, {0x1A58, 64, 0, 0})
	SMember(FAnimNode_SequenceEvaluator)               AnimGraphNode_SequenceEvaluator                             ___ OFFSET(get<T>, {0x1A98, 64, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1AD8, 72, 0, 0})
};

/// Class /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_PropertiesDebug_AnimBP.Player_PropertiesDebug_AnimBP_C
/// Size: 0x0048 (0x0004C0 - 0x000508)
class UPlayer_PropertiesDebug_AnimBP_C : public UFortPlayerDebugAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1288;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x4C0, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x4C8, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x4D0, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x4D8, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  ___ OFFSET(get<T>, {0x4F8, 16, 0, 0})
};

/// Class /Game/Characters/Player/Male/Male_Avg_Base/FP_Procedural2.FP_Procedural2_C
/// Size: 0x07C8 (0x0008D0 - 0x001098)
class UFP_Procedural2_C : public UFortFirstPersonProceduralAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4248;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x8D0, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x8D8, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x8E0, 8, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x8E8, 296, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0xA10, 32, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0xA30, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0xB58, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0xC80, 296, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0xDA8, 176, 0, 0})
	SMember(FFortAnimNode_CachePose)                   FortAnimGraphNode_CachePose                                 ___ OFFSET(get<T>, {0xE58, 216, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0xF30, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0xF50, 32, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0xF70, 296, 0, 0})
};

/// Class /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_ZipLine_AnimBP.Player_ZipLine_AnimBP_C
/// Size: 0x1988 (0x0006A0 - 0x002028)
class UPlayer_ZipLine_AnimBP_C : public UFortZiplineAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 8232;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x6A0, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     ___ OFFSET(get<T>, {0x6A8, 112, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x718, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x720, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x728, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x748, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x7F8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x818, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x8C8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x8E8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x998, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x9B8, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x9D8, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x9F8, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0xA18, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0xA38, 32, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0xA58, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0xAA0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0xAE8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0xB30, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0xB78, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0xBC0, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0xC08, 72, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0xC50, 32, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0xC70, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0xCB8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0xD00, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0xD48, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0xD90, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0xDD8, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0xE20, 72, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0xE68, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0xE88, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0xF38, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0xF58, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1008, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1028, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1048, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1068, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1088, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1138, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1158, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1208, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x12B8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x12D8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1388, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x13A8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1458, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1478, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x14A0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x14C8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x14F0, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x1518, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1540, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1588, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x15D0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1618, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x1660, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x16A8, 72, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x16F0, 240, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x17E0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1828, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1870, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x18B8, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x1900, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x1948, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x1968, 40, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x1990, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x1A00, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x1AC8, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1B90, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x1BD8, 32, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x1BF8, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x1CC0, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x1D30, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x1DF8, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x1E18, 200, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x1EE0, 200, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x1FA8, 120, 0, 0})
	DMember(double)                                    PivotAnimBlendTime                                          ___ OFFSET(get<double>, {0x2020, 8, 0, 0})
};

/// Class /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_Sprint_AnimBP.Player_Sprint_AnimBP_C
/// Size: 0x1168 (0x0006D0 - 0x001838)
class UPlayer_Sprint_AnimBP_C : public UFortSprintAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6200;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x6D0, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     ___ OFFSET(get<T>, {0x6D8, 44, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x708, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x710, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x718, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x738, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x760, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x788, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x7B0, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x7D8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x820, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x868, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x8B0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x8D0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x918, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x960, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x9A8, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x9C8, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x9F0, 200, 0, 0})
	SMember(FAnimNode_RotateRootBone)                  AnimGraphNode_RotateRootBone                                ___ OFFSET(get<T>, {0xAB8, 176, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0xB68, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0xBD8, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0xCA0, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0xD68, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0xDB0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0xDF8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0xE40, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0xE88, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0xED0, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0xF18, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0xFE0, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x10A8, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x10F0, 200, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          ___ OFFSET(get<T>, {0x11B8, 72, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x1200, 40, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x1228, 240, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x1318, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x1388, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x13F8, 72, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x1440, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x1468, 40, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          ___ OFFSET(get<T>, {0x1490, 72, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x14D8, 240, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x15C8, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x15E8, 200, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x16B0, 120, 0, 0})
	SMember(FAnimNode_Inertialization)                 AnimGraphNode_Inertialization                               ___ OFFSET(get<T>, {0x1728, 272, 0, 0})
};

/// Class /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_Goop_AnimBP.Player_Goop_AnimBP_C
/// Size: 0x1578 (0x000680 - 0x001BF8)
class UPlayer_Goop_AnimBP_C : public UFortGoopAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7160;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x680, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     ___ OFFSET(get<T>, {0x688, 80, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x6D8, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x6E0, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x6E8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x708, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x7B8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x7D8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x888, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x8A8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x958, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x978, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x998, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x9B8, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x9D8, 32, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x9F8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0xA40, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0xA88, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0xAD0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0xB18, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0xB60, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0xBA8, 72, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0xBF0, 32, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0xC10, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0xC58, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0xCA0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0xCE8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0xD30, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0xD78, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0xDC0, 72, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0xE08, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0xE28, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0xE48, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0xEF8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0xF18, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0xFC8, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0xFE8, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1008, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1028, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1048, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x10F8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1118, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x11C8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1278, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1298, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1348, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1368, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1418, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1438, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1460, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1488, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x14D0, 200, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1598, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x15E0, 112, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x1650, 40, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x1678, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x1740, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x17B0, 32, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x17D0, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x1898, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x1960, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x19D0, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x19F0, 200, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x1AB8, 120, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x1B30, 200, 0, 0})
};

/// Class /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_InAir_AnimBP.Player_InAir_AnimBP_C
/// Size: 0x2CB0 (0x0015D0 - 0x004280)
class UPlayer_InAir_AnimBP_C : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 17024;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x15D0, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     ___ OFFSET(get<T>, {0x15D8, 136, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x1660, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x1668, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1670, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1690, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1740, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1760, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1810, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1830, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x18E0, 32, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1900, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1948, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1990, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x19D8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1A20, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1A68, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1AB0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1AF8, 72, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  ___ OFFSET(get<T>, {0x1B40, 16, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1B50, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1B98, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x1BE0, 72, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1C28, 32, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1C48, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1C90, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1CD8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1D20, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1D68, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1DB0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1DF8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1E40, 72, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  ___ OFFSET(get<T>, {0x1E88, 16, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1E98, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1EE0, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x1F28, 72, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1F70, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1F90, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1FD8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2020, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2068, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x20B0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x20F8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x2140, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2188, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x21D0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2218, 72, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  ___ OFFSET(get<T>, {0x2260, 16, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x2270, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x22B8, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x2300, 72, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2348, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2368, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2388, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x23A8, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x23C8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x23E8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2498, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x24B8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2568, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2588, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x25A8, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x25C8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x25E8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2698, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x26B8, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2768, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2818, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2838, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x28E8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2908, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x29B8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x29D8, 176, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x2A88, 120, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x2B00, 240, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2BF0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2C18, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2C40, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2C68, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2C90, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2CB8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2CE0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2D08, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2D30, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2D58, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2D80, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2DA8, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2DD0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x2E18, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2E38, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x2E80, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2EA0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x2EE8, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x2F08, 200, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x2FD0, 40, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x2FF8, 200, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x30C0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x30E8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3110, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3138, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3160, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3188, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x31B0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x31D8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3200, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3228, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3250, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3278, 40, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  ___ OFFSET(get<T>, {0x32A0, 16, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend                                   ___ OFFSET(get<T>, {0x32B0, 192, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x3370, 200, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x3438, 240, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x3528, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x3570, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  ___ OFFSET(get<T>, {0x3590, 16, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend                                   ___ OFFSET(get<T>, {0x35A0, 192, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x3660, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x3728, 72, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x3770, 240, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x3860, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  ___ OFFSET(get<T>, {0x3880, 16, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend                                   ___ OFFSET(get<T>, {0x3890, 192, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_Layer                                         ___ OFFSET(get<T>, {0x3950, 200, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x3A18, 240, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x3B08, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x3B50, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x3B70, 200, 0, 0})
	SMember(FAnimNode_Inertialization)                 AnimGraphNode_Inertialization                               ___ OFFSET(get<T>, {0x3C38, 272, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x3D48, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x3DB8, 200, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x3E80, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x3EA8, 72, 0, 0})
	SMember(FAnimNode_ModifyCurve)                     AnimGraphNode_ModifyCurve                                   ___ OFFSET(get<T>, {0x3EF0, 288, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x4010, 240, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  ___ OFFSET(get<T>, {0x4100, 16, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x4110, 240, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  ___ OFFSET(get<T>, {0x4200, 16, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x4210, 72, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x4258, 40, 0, 0})
};

/// Class /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C
/// Size: 0x3E10 (0x0015D0 - 0x0053E0)
class UPlayer_LocomotionAdditives_AnimBP_C : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 21472;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x15D0, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     ___ OFFSET(get<T>, {0x15D8, 424, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x1780, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x1788, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1790, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x17B0, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1860, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1880, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1930, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1950, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1A00, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1A20, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1A40, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1A60, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1A80, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1AA0, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1AC0, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1AE0, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1B00, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1BB0, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1BD0, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1C80, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1CA0, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1CC0, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1CE0, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1D00, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1DB0, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1DD0, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1E80, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1F30, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1F50, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2000, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2020, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x20D0, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x20F0, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x21A0, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2250, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2270, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2320, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2340, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x23F0, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2410, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x24C0, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x24E0, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2590, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x25B0, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2660, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2710, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2730, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2758, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2780, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x27A8, 40, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x27D0, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x2840, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x28B0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x28F8, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x2940, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x29B0, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x29D0, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x2A40, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x2A88, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x2AF8, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x2B68, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x2BB0, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x2C20, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x2C68, 112, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x2CD8, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x2D20, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x2D90, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x2E00, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x2E48, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2E68, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x2E90, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x2F58, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x2FC8, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x3038, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x3080, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x30C8, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x3138, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x3180, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x31F0, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x3238, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x32A8, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x32F0, 112, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x3360, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x33A8, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x3418, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x3488, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x34D0, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x34F0, 200, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x35B8, 120, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x3630, 200, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  ___ OFFSET(get<T>, {0x36F8, 16, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x3708, 240, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  ___ OFFSET(get<T>, {0x37F8, 16, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x3808, 240, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  ___ OFFSET(get<T>, {0x38F8, 16, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x3908, 240, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x39F8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3A20, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3A48, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3A70, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3A98, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3AC0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3AE8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3B10, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3B38, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3B60, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3B88, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3BB0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3BD8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3C00, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3C28, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3C50, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3C78, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3CA0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3CC8, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x3CF0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x3D38, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x3D80, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x3DC8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x3E10, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x3E58, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x3EA0, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x3EE8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x3F30, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x3F78, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x3F98, 40, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x3FC0, 72, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x4008, 240, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x40F8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x4140, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x4188, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x41D0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x4218, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x4238, 40, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x4260, 72, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x42A8, 240, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x4398, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x43E0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x4428, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x4470, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x44B8, 32, 0, 0})
	SMember(FAnimNode_ModifyCurve)                     AnimGraphNode_ModifyCurve                                   ___ OFFSET(get<T>, {0x44D8, 288, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x45F8, 40, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x4620, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x4668, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x46B0, 72, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x46F8, 240, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x47E8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x4830, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x4878, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x48C0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x4908, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x4928, 40, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x4950, 72, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend                                   ___ OFFSET(get<T>, {0x4998, 192, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x4A58, 72, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x4AA0, 240, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x4B90, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x4BD8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x4C20, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x4C68, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x4CB0, 32, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend                                   ___ OFFSET(get<T>, {0x4CD0, 192, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x4D90, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x4DD8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x4E20, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x4E40, 200, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend                                   ___ OFFSET(get<T>, {0x4F08, 192, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  ___ OFFSET(get<T>, {0x4FC8, 16, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x4FD8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x5020, 72, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_Layer                                         ___ OFFSET(get<T>, {0x5068, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x5130, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x5150, 40, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x5178, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x5198, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x5260, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x5280, 200, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x5348, 120, 0, 0})
	DMember(bool)                                      IsSnowman                                                   ___ OFFSET(get<bool>, {0x53C0, 1, 0, 0})
	DMember(double)                                    StartAnimBlendTime                                          ___ OFFSET(get<double>, {0x53C8, 8, 0, 0})
	DMember(double)                                    PivotAnimBlendTime                                          ___ OFFSET(get<double>, {0x53D0, 8, 0, 0})
	DMember(double)                                    CrouchPlayRate                                              ___ OFFSET(get<double>, {0x53D8, 8, 0, 0})
};

/// Class /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_LowerBodyJog_AnimBP.Player_LowerBodyJog_AnimBP_C
/// Size: 0x3AB0 (0x000BA0 - 0x004650)
class UPlayer_LowerBodyJog_AnimBP_C : public UFortWalkAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 18000;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xBA0, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     ___ OFFSET(get<T>, {0xBA8, 304, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0xCD8, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0xCE0, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0xCE8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0xD08, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0xDB8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0xDD8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0xE88, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0xEA8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0xF58, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0xF78, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0xF98, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0xFB8, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0xFD8, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0xFF8, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1018, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1038, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1058, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1108, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1128, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x11D8, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x11F8, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1218, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1238, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1258, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1308, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1328, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x13D8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1488, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x14A8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1558, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1578, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1628, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x1648, 112, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x16B8, 32, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x16D8, 72, 0, 0})
	SMember(FAnimNode_RotateRootBone)                  AnimGraphNode_RotateRootBone                                ___ OFFSET(get<T>, {0x1720, 176, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x17D0, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x1840, 112, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x18B0, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x18D0, 112, 0, 0})
	SMember(FAnimNode_RotateRootBone)                  AnimGraphNode_RotateRootBone                                ___ OFFSET(get<T>, {0x1940, 176, 0, 0})
	SMember(FFortAnimNode_SpeedWarping)                FortAnimGraphNode_SpeedWarping                              ___ OFFSET(get<T>, {0x19F0, 512, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0x1BF0, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0x1C10, 32, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1C30, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x1C78, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x1CE8, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1D58, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x1DA0, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1E10, 72, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1E58, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1E78, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1EA0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1EC8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1EF0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1F18, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1F40, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1F68, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1F90, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1FB8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1FE0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2008, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2030, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2058, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2080, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x20A8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x20D0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x20F8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2120, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2148, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2170, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2198, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x21C0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x21E8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2210, 40, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x2238, 72, 0, 0})
	SMember(FAnimNode_RotateRootBone)                  AnimGraphNode_RotateRootBone                                ___ OFFSET(get<T>, {0x2280, 176, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2330, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2378, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x23C0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2408, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x2450, 32, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x2470, 72, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0x24B8, 32, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0x24D8, 32, 0, 0})
	SMember(FFortAnimNode_SpeedWarping)                FortAnimGraphNode_SpeedWarping                              ___ OFFSET(get<T>, {0x24F8, 512, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x26F8, 72, 0, 0})
	SMember(FAnimNode_RotateRootBone)                  AnimGraphNode_RotateRootBone                                ___ OFFSET(get<T>, {0x2740, 176, 0, 0})
	SMember(FAnimNode_RotateRootBone)                  AnimGraphNode_RotateRootBone                                ___ OFFSET(get<T>, {0x27F0, 176, 0, 0})
	SMember(FAnimNode_RotateRootBone)                  AnimGraphNode_RotateRootBone                                ___ OFFSET(get<T>, {0x28A0, 176, 0, 0})
	SMember(FAnimNode_RotateRootBone)                  AnimGraphNode_RotateRootBone                                ___ OFFSET(get<T>, {0x2950, 176, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2A00, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2A48, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2A90, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x2AD8, 32, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x2AF8, 72, 0, 0})
	SMember(FAnimNode_RotateRootBone)                  AnimGraphNode_RotateRootBone                                ___ OFFSET(get<T>, {0x2B40, 176, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2BF0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2C38, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2C80, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2CC8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x2D10, 32, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0x2D30, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0x2D50, 32, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x2D70, 296, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x2E98, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x2EE0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2F28, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2F70, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2FB8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x3000, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x3048, 72, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x3090, 240, 0, 0})
	SMember(FAnimNode_RotateRootBone)                  AnimGraphNode_RotateRootBone                                ___ OFFSET(get<T>, {0x3180, 176, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x3230, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x3278, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x32C0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x3308, 32, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0x3328, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0x3348, 32, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x3368, 296, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0x3490, 32, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0x34B0, 32, 0, 0})
	SMember(FFortAnimNode_SpeedWarping)                FortAnimGraphNode_SpeedWarping                              ___ OFFSET(get<T>, {0x34D0, 512, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x36D0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x3718, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x3760, 72, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend                                   ___ OFFSET(get<T>, {0x37A8, 192, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x3868, 72, 0, 0})
	SMember(FAnimNode_RotateRootBone)                  AnimGraphNode_RotateRootBone                                ___ OFFSET(get<T>, {0x38B0, 176, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x3960, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x3980, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x39A8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x39F0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x3A38, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x3A80, 200, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0x3B48, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0x3B68, 32, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x3B88, 296, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x3CB0, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x3CD0, 40, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0x3CF8, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0x3D18, 32, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x3D38, 296, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x3E60, 32, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x3E80, 200, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x3F48, 200, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x4010, 200, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_Layer                                         ___ OFFSET(get<T>, {0x40D8, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x41A0, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x4210, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x4280, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x42C8, 200, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x4390, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x43D8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x4420, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x4440, 200, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x4508, 120, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x4580, 176, 0, 0})
	DMember(double)                                    JogStartPosition                                            ___ OFFSET(get<double>, {0x4630, 8, 0, 0})
	DMember(double)                                    CrouchPlayRate                                              ___ OFFSET(get<double>, {0x4638, 8, 0, 0})
	DMember(double)                                    PivotAnimBlendTime                                          ___ OFFSET(get<double>, {0x4640, 8, 0, 0})
	DMember(double)                                    StartAnimBlendTime                                          ___ OFFSET(get<double>, {0x4648, 8, 0, 0})
};

/// Class /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_Land_AnimBP.Player_Land_AnimBP_C
/// Size: 0x20E8 (0x0015D0 - 0x0036B8)
class UPlayer_Land_AnimBP_C : public UFortPlayerLandingAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 14008;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x15D0, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     ___ OFFSET(get<T>, {0x15D8, 40, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x1600, 8, 0, 0})
	SMember(FAnimSubsystemInstance_NodeRelevancy)      AnimBlueprintExtension_NodeRelevancy                        ___ OFFSET(get<T>, {0x1608, 168, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x16B0, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x16B8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x16D8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1788, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x17A8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1858, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1878, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1928, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1948, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1968, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1988, 32, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x19A8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x19F0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1A38, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1A80, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1AC8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1B10, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1B58, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1BA0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1BE8, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x1C30, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x1C78, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x1CC0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1D08, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1D50, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1D98, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1DE0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1E28, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x1E70, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1EB8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1F00, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1F48, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1F90, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1FD8, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x2020, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x2068, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x20B0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x20F8, 72, 0, 0})
	SMember(FAnimNode_ModifyCurve)                     AnimGraphNode_ModifyCurve                                   ___ OFFSET(get<T>, {0x2140, 288, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x2260, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x22A8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x22F0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2338, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2380, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x23C8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x2410, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2458, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x24A0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x24E8, 72, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2530, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2550, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2570, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2590, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x25B0, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2660, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2680, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2730, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2750, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x2798, 72, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  ___ OFFSET(get<T>, {0x27E0, 16, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x27F0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2810, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x2858, 72, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  ___ OFFSET(get<T>, {0x28A0, 16, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x28B0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x28D0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x2918, 72, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  ___ OFFSET(get<T>, {0x2960, 16, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2970, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2990, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2A40, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2A60, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2B10, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2BC0, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2BE0, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2C90, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2CB0, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2D60, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2D80, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2DA8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2DD0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2DF8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2E20, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2E48, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2E70, 40, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x2E98, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x2F60, 32, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x2F80, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x3048, 32, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x3068, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x3130, 32, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_Layer                                         ___ OFFSET(get<T>, {0x3150, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x3218, 72, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x3260, 240, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x3350, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x3398, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x33E0, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x3428, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x3470, 72, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend                                   ___ OFFSET(get<T>, {0x34B8, 192, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  ___ OFFSET(get<T>, {0x3578, 16, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x3588, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x35D0, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x35F0, 200, 0, 0})
};

/// Class /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_BuildingPose_AnimBP.Player_BuildingPose_AnimBP_C
/// Size: 0x04E0 (0x000460 - 0x000940)
class UPlayer_BuildingPose_AnimBP_C : public UFortPlayerBuildingAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2368;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x460, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     ___ OFFSET(get<T>, {0x468, 5, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x470, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x478, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x480, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x4A0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x4C8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x4F0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x518, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x540, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x588, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x5D0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x618, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x660, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x6A8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x6F0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x738, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x758, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x7A0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x7E8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x830, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x850, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x878, 200, 0, 0})
};

/// Class /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_FreeFlying_AnimBP.Player_FreeFlying_AnimBP_C
/// Size: 0x0810 (0x0015D0 - 0x001DE0)
class UPlayer_FreeFlying_AnimBP_C : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7648;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x15D0, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     ___ OFFSET(get<T>, {0x15D8, 72, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x1620, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x1628, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1630, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1650, 40, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x1678, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x16C0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1708, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1750, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1798, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x17E0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1828, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x1870, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x18E0, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x19A8, 32, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x19C8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1A10, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1A58, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1AA0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1AE8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1B30, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1B78, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x1BC0, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x1C30, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x1CF8, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x1D18, 200, 0, 0})
};

/// Class /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_SkyDiveAndGlide_AnimBP.Player_SkyDiveAndGlide_AnimBP_C
/// Size: 0x8A12 (0x000850 - 0x009262)
class UPlayer_SkyDiveAndGlide_AnimBP_C : public UFortSkydivingAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 37474;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x850, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     ___ OFFSET(get<T>, {0x858, 1068, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0xC88, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0xC90, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0xC98, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_LocalRefPose                                  ___ OFFSET(get<T>, {0xCB8, 16, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0xCC8, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0xD10, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0xDD8, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0xEA0, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0xF10, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0xF80, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1048, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1090, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x10D8, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x11A0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x11E8, 72, 0, 0})
	SMember(FAnimNode_BlendListByInt)                  AnimGraphNode_BlendListByInt                                ___ OFFSET(get<T>, {0x1230, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x1278, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x1298, 200, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_LocalRefPose                                  ___ OFFSET(get<T>, {0x1360, 16, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x1370, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x13B8, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x1428, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x1498, 200, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x1560, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x15A8, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x1618, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x16E0, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x1750, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x1818, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x1888, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x18F8, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x1968, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x19D8, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x1A48, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x1AB8, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x1B28, 200, 0, 0})
	SMember(FAnimNode_BlendListByInt)                  AnimGraphNode_BlendListByInt                                ___ OFFSET(get<T>, {0x1BF0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x1C38, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x1C58, 200, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x1D20, 120, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x1D98, 120, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1E10, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1E38, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1E60, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1E88, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1EB0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1ED8, 40, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend                                   ___ OFFSET(get<T>, {0x1F00, 192, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x1FC0, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x2030, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x20A0, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x2168, 200, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend                                   ___ OFFSET(get<T>, {0x2230, 192, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x22F0, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x2360, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x23D0, 72, 0, 0})
	SMember(FAnimNode_BlendListByInt)                  AnimGraphNode_BlendListByInt                                ___ OFFSET(get<T>, {0x2418, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x2460, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x24D0, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x2540, 112, 0, 0})
	SMember(FAnimNode_BlendListByInt)                  AnimGraphNode_BlendListByInt                                ___ OFFSET(get<T>, {0x25B0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x25F8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2640, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2688, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x26D0, 32, 0, 0})
	SMember(FAnimNode_BlendListByInt)                  AnimGraphNode_BlendListByInt                                ___ OFFSET(get<T>, {0x26F0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2738, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2780, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x27C8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x2810, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2830, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2858, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2880, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x28A8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x28D0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x28F8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2920, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2948, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2970, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2998, 40, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x29C0, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x2A30, 112, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend                                   ___ OFFSET(get<T>, {0x2AA0, 192, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x2B60, 200, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend                                   ___ OFFSET(get<T>, {0x2C28, 192, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x2CE8, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x2D58, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x2DC8, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x2E90, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x2F00, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x2F20, 112, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x2F90, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x2FD8, 112, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x3048, 72, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend                                   ___ OFFSET(get<T>, {0x3090, 192, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x3150, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x31C0, 112, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend                                   ___ OFFSET(get<T>, {0x3230, 192, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x32F0, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x3360, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x33D0, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x3498, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x3560, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x35D0, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_LocalRefPose                                  ___ OFFSET(get<T>, {0x35F0, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x3600, 32, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x3620, 200, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x36E8, 40, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x3710, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x3780, 32, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x37A0, 200, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x3868, 40, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x3890, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x3900, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x3920, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x39E8, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3A08, 40, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x3A30, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x3AA0, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x3B10, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x3B80, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x3BF0, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x3C60, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x3CD0, 112, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x3D40, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x3D88, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x3DD0, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x3E18, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x3E88, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x3EF8, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x3F68, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x4030, 200, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x40F8, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x4140, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x4188, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x41D0, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x4240, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x4260, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x42D0, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x4340, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x43B0, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x4420, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x4490, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x4500, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x4570, 112, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x45E0, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x4628, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x4670, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x46B8, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x4728, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x47F0, 112, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x4860, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x48A8, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x48F0, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x49B8, 112, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x4A28, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x4A70, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x4A90, 200, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x4B58, 72, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x4BA0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x4BC8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x4BF0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x4C18, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x4C40, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x4C68, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x4C90, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x4CB8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x4CE0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x4D08, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x4D30, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x4D58, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x4D80, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x4DA8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x4DD0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x4DF8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x4E20, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x4E48, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x4E70, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x4E98, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x4EC0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x4EE8, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x4F10, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x4F58, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x4F78, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x4FC0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x4FE0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x5028, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x5048, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x5090, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  ___ OFFSET(get<T>, {0x50B0, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x50C0, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x50E0, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x51A8, 32, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x51C8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x5210, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x5258, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x52A0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x52E8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x5330, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x5378, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x5398, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x5408, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x5478, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x54E8, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x5558, 112, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x55C8, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x5610, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x5658, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x56A0, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  ___ OFFSET(get<T>, {0x56C0, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x56D0, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x56F0, 200, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x57B8, 40, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x57E0, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x58A8, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x5918, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x5938, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x5A00, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x5AC8, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x5B38, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x5C00, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x5C70, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x5CE0, 32, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x5D00, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x5D48, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x5DB8, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x5E28, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x5EF0, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x5FB8, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x6028, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x6098, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x60B8, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x6180, 200, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x6248, 40, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x6270, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x6338, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x63A8, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x6470, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x64E0, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x6550, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x6570, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x65E0, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x66A8, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x6718, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x6738, 200, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x6800, 40, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x6828, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x6898, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x6908, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x6978, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x69E8, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x6A58, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x6AC8, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x6B38, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x6BA8, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x6C18, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x6C88, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x6CF8, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x6D68, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x6DD8, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x6E48, 112, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend                                   ___ OFFSET(get<T>, {0x6EB8, 192, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x6F78, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x6FC0, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x7008, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x7050, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x7098, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x70E0, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x7128, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x71F0, 200, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x72B8, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x7300, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x7348, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x7390, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x7400, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x7420, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x7490, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x7500, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x7570, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x75E0, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x7650, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x76C0, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x7730, 112, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x77A0, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x77E8, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x7830, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x7878, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x78E8, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x79B0, 112, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x7A20, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x7A68, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x7AB0, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x7B78, 112, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x7BE8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x7C30, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x7C50, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x7D18, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x7D38, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x7D60, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x7D88, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x7DB0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x7DD8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x7E00, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x7E28, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x7E50, 40, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_LocalRefPose                                  ___ OFFSET(get<T>, {0x7E78, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x7E88, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x7EA8, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x7F18, 112, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend                                   ___ OFFSET(get<T>, {0x7F88, 192, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x8048, 200, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend                                   ___ OFFSET(get<T>, {0x8110, 192, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x81D0, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x8240, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x82B0, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x8378, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x83E8, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x8408, 112, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x8478, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x84C0, 112, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x8530, 72, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend                                   ___ OFFSET(get<T>, {0x8578, 192, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x8638, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x86A8, 112, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend                                   ___ OFFSET(get<T>, {0x8718, 192, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x87D8, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x8848, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x88B8, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x8980, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x8A48, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x8AB8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x8AD8, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x8B20, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x8B90, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x8C00, 200, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x8CC8, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x8D10, 200, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x8DD8, 40, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x8E00, 32, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x8E20, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x8EE8, 112, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x8F58, 40, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x8F80, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x8FA0, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x9068, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x9088, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x9150, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x9170, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x9198, 200, 0, 0})
	DMember(bool)                                      ParaGlide_TriggerAnim                                       ___ OFFSET(get<bool>, {0x9260, 1, 0, 0})
	DMember(bool)                                      BlockAnimRule                                               ___ OFFSET(get<bool>, {0x9261, 1, 0, 0})
};

/// Class /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_TacticalState_AnimBP.Player_TacticalState_AnimBP_C
/// Size: 0x2970 (0x0015E0 - 0x003F50)
class UPlayer_TacticalState_AnimBP_C : public UFortPlayerTacticalStateAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 16208;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x15E0, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     ___ OFFSET(get<T>, {0x15E8, 36, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x1610, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x1618, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1620, 32, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x1640, 200, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x1708, 72, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  ___ OFFSET(get<T>, {0x1750, 16, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1760, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x17A8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x17F0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1838, 72, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1880, 176, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1930, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1978, 72, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x19C0, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x19E0, 40, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x1A08, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x1AD0, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x1B40, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x1B60, 200, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1C28, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1C50, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1C78, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1CA0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1CC8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1CF0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1D18, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1D40, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1D68, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1D90, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1DB8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x1E00, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1E20, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1E48, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1E70, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1E98, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1EC0, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1EE8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1F30, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1F78, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x1FC0, 32, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1FE0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2028, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2070, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x20B8, 32, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x20D8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2120, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2168, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x21B0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x21D0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x2218, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2260, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x22A8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x22C8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x2310, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2358, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x23A0, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x23C0, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x23E8, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x24B0, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x24D0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x24F8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2520, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2548, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2570, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2598, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x25C0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x25E8, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2610, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2658, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x26A0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x26E8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2708, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x2750, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2798, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x27E0, 32, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x2800, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2848, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2890, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x28D8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x28F8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x2940, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2988, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x29D0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x29F0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x2A38, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2A80, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x2AC8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2AE8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x2B30, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2B78, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x2BC0, 32, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x2BE0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2C28, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2C70, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x2CB8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2CD8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x2D20, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2D68, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x2DB0, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2DD0, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x2DF8, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x2EC0, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2EE0, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2F08, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x2F50, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2F70, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x2FB8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2FD8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x3020, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x3040, 200, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x3108, 120, 0, 0})
	SMember(FAnimNode_RotateRootBone)                  AnimGraphNode_RotateRootBone                                ___ OFFSET(get<T>, {0x3180, 176, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x3230, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x32A0, 200, 0, 0})
	SMember(FAnimNode_DeadBlending)                    AnimGraphNode_DeadBlending                                  ___ OFFSET(get<T>, {0x3370, 1184, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x3810, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3830, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3858, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3880, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x38A8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x38D0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x38F8, 40, 0, 0})
	SMember(FAnimNode_ModifyCurve)                     AnimGraphNode_ModifyCurve                                   ___ OFFSET(get<T>, {0x3920, 288, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x3A40, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x3A88, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3AA8, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x3AD0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x3B18, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x3B38, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x3B80, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x3BA0, 200, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x3C68, 72, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x3CB0, 200, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x3D78, 200, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x3E40, 72, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x3E88, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x3F00, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x3F28, 40, 0, 0})
};

/// Class /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphTemplates/Player_Locomotion_Prototype_Template.Player_Locomotion_Prototype_Template_C
/// Size: 0x00E8 (0x000350 - 0x000438)
class UPlayer_Locomotion_Prototype_Template_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x358, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x360, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x368, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x388, 176, 0, 0})
};

/// Class /Game/Characters/Player/Male/Male_Avg_Base/AnimLayerInterface/VehicleAnimLayerInterface.VehicleAnimLayerInterface_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UVehicleAnimLayerInterface_C : public UAnimLayerInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_FullBodyAimOffsets_AnimBP.Player_FullBodyAimOffsets_AnimBP_C
/// Size: 0x2038 (0x0015D0 - 0x003608)
class UPlayer_FullBodyAimOffsets_AnimBP_C : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 13832;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x15D0, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     ___ OFFSET(get<T>, {0x15D8, 20, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x15F0, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x15F8, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1600, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1620, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x16D0, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x16F0, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x17A0, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x17C0, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1870, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1890, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x18B0, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x18D0, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x18F0, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1910, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1930, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1950, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1970, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1A20, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1A40, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1AF0, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1B10, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1B30, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1B50, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1B70, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1C20, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1C40, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1CF0, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1DA0, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1DC0, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1E70, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1E90, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1F40, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1F60, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2010, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x20C0, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x20E0, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2190, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x21B0, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2260, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2280, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2330, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2350, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2400, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2420, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x24D0, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2580, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x25A0, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2650, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2670, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2720, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x27D0, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x27F0, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x28A0, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2950, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2A00, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2A20, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2AD0, 32, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace                      ___ OFFSET(get<T>, {0x2AF0, 280, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace                      ___ OFFSET(get<T>, {0x2C08, 280, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend                                   ___ OFFSET(get<T>, {0x2D20, 192, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x2DE0, 120, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2E58, 176, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x2F08, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x2F30, 40, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2F58, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x2F78, 40, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x2FA0, 120, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x3018, 200, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x30E0, 200, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x31A8, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x31D0, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x31F8, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x3220, 40, 0, 0})
	SMember(FAnimNode_ResetRoot)                       AnimGraphNode_ResetRoot                                     ___ OFFSET(get<T>, {0x3248, 216, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0x3320, 32, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0x3340, 32, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x3360, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x33D8, 40, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x3400, 120, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x3478, 176, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x3528, 200, 0, 0})
	DMember(double)                                    __CustomProperty_Pitch_61C65E4944F5DB18DC8B6496B9622A88     ___ OFFSET(get<double>, {0x35F0, 8, 0, 0})
	DMember(double)                                    __CustomProperty_Yaw_61C65E4944F5DB18DC8B6496B9622A88       ___ OFFSET(get<double>, {0x35F8, 8, 0, 0})
	DMember(double)                                    __CustomProperty_AimOffsetAlpha_61C65E4944F5DB18DC8B6496B9622A88 ___ OFFSET(get<double>, {0x3600, 8, 0, 0})
};

/// Class /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_DBNO_AnimBP.Player_DBNO_AnimBP_C
/// Size: 0x08C9 (0x000470 - 0x000D39)
class UPlayer_DBNO_AnimBP_C : public UFortDBNOAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3385;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x470, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     ___ OFFSET(get<T>, {0x478, 24, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x490, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x498, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x4A0, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x4C0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x4E8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x510, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x538, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x560, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x588, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x5B0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x5D8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x600, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x628, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x650, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x698, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x6B8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x700, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x720, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x768, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x788, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x7F8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x818, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x860, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x880, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x8A8, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x970, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0xA38, 112, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0xAA8, 296, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0xBD0, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0xBF0, 32, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0xC10, 296, 0, 0})
	DMember(bool)                                      AdjustLargeBody                                             ___ OFFSET(get<bool>, {0xD38, 1, 0, 0})
};

/// Class /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_DBNOCarried_AnimBP.Player_DBNOCarried_AnimBP_C
/// Size: 0x1E58 (0x000550 - 0x0023A8)
class UPlayer_DBNOCarried_AnimBP_C : public UFortPlayerDBNOCarriedAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 9128;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x550, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     ___ OFFSET(get<T>, {0x558, 76, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x5A8, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x5B0, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x5B8, 32, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0x5D8, 32, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x5F8, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x720, 296, 0, 0})
	SMember(FAnimNode_SequenceEvaluator)               AnimGraphNode_SequenceEvaluator                             ___ OFFSET(get<T>, {0x848, 64, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x888, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x8D0, 200, 0, 0})
	SMember(FAnimNode_TwoBoneIK)                       AnimGraphNode_TwoBoneIK                                     ___ OFFSET(get<T>, {0x9A0, 608, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0xC00, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0xC20, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0xC48, 40, 0, 0})
	SMember(FAnimNode_SequenceEvaluator)               AnimGraphNode_SequenceEvaluator                             ___ OFFSET(get<T>, {0xC70, 64, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0xCB0, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0xCD0, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0xD40, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0xE08, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0xED0, 112, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0xF40, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0xF68, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0xF90, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0xFB8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0xFE0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1008, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1030, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1058, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x10A0, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1168, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x11B0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x11D0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1218, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x1260, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x12D0, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1398, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x13E0, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x14A8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x14F0, 32, 0, 0})
	SMember(FAnimNode_SequenceEvaluator)               AnimGraphNode_SequenceEvaluator                             ___ OFFSET(get<T>, {0x1510, 64, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1550, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1598, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x15E0, 72, 0, 0})
	SMember(FAnimNode_SequenceEvaluator)               AnimGraphNode_SequenceEvaluator                             ___ OFFSET(get<T>, {0x1628, 64, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1668, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x16B0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x16F8, 32, 0, 0})
	SMember(FAnimNode_SequenceEvaluator)               AnimGraphNode_SequenceEvaluator                             ___ OFFSET(get<T>, {0x1718, 64, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1758, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x17A0, 72, 0, 0})
	SMember(FAnimNode_SequenceEvaluator)               AnimGraphNode_SequenceEvaluator                             ___ OFFSET(get<T>, {0x17E8, 64, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1828, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1870, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x18B8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1900, 72, 0, 0})
	SMember(FAnimNode_SequenceEvaluator)               AnimGraphNode_SequenceEvaluator                             ___ OFFSET(get<T>, {0x1948, 64, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1988, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x19D0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1A18, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1A60, 72, 0, 0})
	SMember(FAnimNode_SequenceEvaluator)               AnimGraphNode_SequenceEvaluator                             ___ OFFSET(get<T>, {0x1AA8, 64, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1AE8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x1B30, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1B50, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x1B98, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1C60, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x1CA8, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x1CC8, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x1D90, 32, 0, 0})
	SMember(FAnimNode_SequenceEvaluator)               AnimGraphNode_SequenceEvaluator                             ___ OFFSET(get<T>, {0x1DB0, 64, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x1DF0, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x1E10, 200, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0x1ED8, 32, 0, 0})
	SMember(FAnimNode_Trail)                           AnimGraphNode_Trail                                         ___ OFFSET(get<T>, {0x1F00, 672, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          ___ OFFSET(get<T>, {0x21A0, 72, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          ___ OFFSET(get<T>, {0x21E8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x2230, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x2278, 72, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x22C0, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x2338, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x2360, 40, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0x2388, 32, 0, 0})
};

/// Class /Game/Characters/Player/Blueprints/FortPlayerLinkedAnimGraphComponentBP.FortPlayerLinkedAnimGraphComponentBP_C
/// Size: 0x0000 (0x000178 - 0x000178)
class UFortPlayerLinkedAnimGraphComponentBP_C : public UFortLinkedAnimGraphComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
};

/// Class /Game/Characters/Player/Male/Male_Avg_Base/AnimLayerInterface/PlayerAnimOverrideLayerInterface.PlayerAnimOverrideLayerInterface_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UPlayerAnimOverrideLayerInterface_C : public UAnimLayerInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C
/// Size: 0x69EC (0x000DC0 - 0x0077AC)
class UPlayer_ProceduralAdjustments_AnimBP_C : public UFortPlayerProceduralAdjustmentsAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 30636;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xDC0, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     ___ OFFSET(get<T>, {0xDC8, 12, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0xDD8, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0xDE0, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0xDE8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0xE08, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0xEB8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0xED8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0xF88, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0xFA8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1058, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1078, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1128, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1148, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x11F8, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1218, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1238, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1258, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1278, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1298, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x12B8, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x12D8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x12F8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x13A8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x13C8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1478, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1498, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x14B8, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x14D8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x14F8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x15A8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x15C8, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1678, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1728, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1748, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x17F8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1818, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x18C8, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0x18E8, 32, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x1908, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x1A30, 296, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0x1B58, 32, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x1B78, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x1CA0, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x1DC8, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x1EF0, 296, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2018, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x20C8, 32, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x20E8, 296, 0, 0})
	SMember(FFortAnimNode_SlopeWarping)                FortAnimGraphNode_SlopeWarping                              ___ OFFSET(get<T>, {0x2210, 744, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x24F8, 296, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0x2620, 32, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x2640, 72, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0x2688, 32, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0x26A8, 32, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x26C8, 296, 0, 0})
	SMember(FAnimNode_RotateRootBone)                  AnimGraphNode_RotateRootBone                                ___ OFFSET(get<T>, {0x27F0, 176, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x28A0, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x29C8, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x2AF0, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x2C18, 296, 0, 0})
	SMember(FAnimNode_CopyBone)                        AnimGraphNode_CopyBone                                      ___ OFFSET(get<T>, {0x2D40, 232, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2E28, 176, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x2ED8, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x2F50, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x2F78, 40, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0x2FA0, 32, 0, 0})
	SMember(FAnimNode_CopyBone)                        AnimGraphNode_CopyBone                                      ___ OFFSET(get<T>, {0x2FC0, 232, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x30A8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x30C8, 176, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x3178, 296, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x32A0, 72, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0x32E8, 32, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x3308, 72, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x3350, 296, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0x3478, 32, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0x3498, 32, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0x34B8, 32, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x34D8, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x3600, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x3728, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x3850, 296, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x3978, 72, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x39C0, 296, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0x3AE8, 32, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x3B08, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x3C30, 296, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0x3D58, 32, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x3D78, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x3DF0, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x3E18, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x3E40, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x3E68, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x3E90, 72, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x3ED8, 40, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x3F00, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0x3F20, 32, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x3F40, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x4068, 296, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x4190, 176, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0x4240, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x4260, 32, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x4280, 296, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0x43A8, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0x43C8, 32, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x43E8, 296, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0x4510, 32, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0x4530, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x4550, 40, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x4578, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x46A0, 296, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x47C8, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x47F0, 72, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x4838, 176, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x48E8, 120, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x4960, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x4980, 176, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0x4A30, 32, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0x4A50, 32, 0, 0})
	SMember(FAnimNode_CopyBone)                        AnimGraphNode_CopyBone                                      ___ OFFSET(get<T>, {0x4A70, 232, 0, 0})
	SMember(FAnimNode_LegIK)                           AnimGraphNode_LegIK                                         ___ OFFSET(get<T>, {0x4B58, 248, 0, 0})
	SMember(FAnimNode_LegIK)                           AnimGraphNode_LegIK                                         ___ OFFSET(get<T>, {0x4C50, 248, 0, 0})
	SMember(FAnimNode_CopyBone)                        AnimGraphNode_CopyBone                                      ___ OFFSET(get<T>, {0x4D48, 232, 0, 0})
	SMember(FAnimNode_CopyBone)                        AnimGraphNode_CopyBone                                      ___ OFFSET(get<T>, {0x4E30, 232, 0, 0})
	SMember(FAnimNode_CopyBone)                        AnimGraphNode_CopyBone                                      ___ OFFSET(get<T>, {0x4F18, 232, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0x5000, 32, 0, 0})
	SMember(FAnimNode_CopyBone)                        AnimGraphNode_CopyBone                                      ___ OFFSET(get<T>, {0x5020, 232, 0, 0})
	SMember(FAnimNode_CopyBone)                        AnimGraphNode_CopyBone                                      ___ OFFSET(get<T>, {0x5108, 232, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x51F0, 296, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0x5318, 32, 0, 0})
	SMember(FAnimNode_CopyBone)                        AnimGraphNode_CopyBone                                      ___ OFFSET(get<T>, {0x5338, 232, 0, 0})
	SMember(FAnimNode_CopyBone)                        AnimGraphNode_CopyBone                                      ___ OFFSET(get<T>, {0x5420, 232, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x5508, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x5630, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x5758, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x5880, 296, 0, 0})
	SMember(FAnimNode_LegIK)                           AnimGraphNode_LegIK                                         ___ OFFSET(get<T>, {0x59A8, 248, 0, 0})
	SMember(FAnimNode_CopyBone)                        AnimGraphNode_CopyBone                                      ___ OFFSET(get<T>, {0x5AA0, 232, 0, 0})
	SMember(FAnimNode_CopyBone)                        AnimGraphNode_CopyBone                                      ___ OFFSET(get<T>, {0x5B88, 232, 0, 0})
	SMember(FAnimNode_CopyBone)                        AnimGraphNode_CopyBone                                      ___ OFFSET(get<T>, {0x5C70, 232, 0, 0})
	SMember(FAnimNode_CopyBone)                        AnimGraphNode_CopyBone                                      ___ OFFSET(get<T>, {0x5D58, 232, 0, 0})
	SMember(FAnimNode_CopyBone)                        AnimGraphNode_CopyBone                                      ___ OFFSET(get<T>, {0x5E40, 232, 0, 0})
	SMember(FAnimNode_CopyBone)                        AnimGraphNode_CopyBone                                      ___ OFFSET(get<T>, {0x5F28, 232, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x6010, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x6038, 72, 0, 0})
	SMember(FAnimNode_CopyBone)                        AnimGraphNode_CopyBone                                      ___ OFFSET(get<T>, {0x6080, 232, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0x6168, 32, 0, 0})
	SMember(FAnimNode_CopyBone)                        AnimGraphNode_CopyBone                                      ___ OFFSET(get<T>, {0x6188, 232, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x6270, 72, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x62B8, 120, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0x6330, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x6350, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x6378, 40, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0x63A0, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0x63C0, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x63E0, 32, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          ___ OFFSET(get<T>, {0x6400, 72, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x6448, 240, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x6538, 40, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x6560, 120, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x65D8, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x6650, 40, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x6678, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x66C0, 72, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x6708, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x6780, 40, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x67A8, 200, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x6870, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x68E8, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x6910, 40, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x6938, 200, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x6A00, 200, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x6AC8, 296, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x6BF0, 40, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0x6C18, 32, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x6C38, 72, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0x6C80, 32, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x6CA0, 72, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x6CE8, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x6D60, 40, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x6D88, 176, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x6E38, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x6EB0, 40, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x6ED8, 200, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x6FA0, 40, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x6FC8, 200, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x7090, 40, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x70B8, 200, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x7180, 200, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x7248, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x7270, 40, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x7298, 120, 0, 0})
	SMember(FAnimNode_RotateRootBone)                  AnimGraphNode_RotateRootBone                                ___ OFFSET(get<T>, {0x7310, 176, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend                                   ___ OFFSET(get<T>, {0x73C0, 192, 0, 0})
	SMember(FAnimNode_LegIK)                           AnimGraphNode_LegIK                                         ___ OFFSET(get<T>, {0x7480, 248, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x7578, 200, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0x7640, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x7660, 40, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x7688, 200, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0x7750, 32, 0, 0})
	DMember(bool)                                      IsHidingInProp                                              ___ OFFSET(get<bool>, {0x7770, 1, 0, 0})
	SMember(FVector)                                   RightHandOverride                                           ___ OFFSET(get<T>, {0x7778, 24, 0, 0})
	SMember(FVector)                                   LeftHandOverride                                            ___ OFFSET(get<T>, {0x7790, 24, 0, 0})
	SMember(FName)                                     EmoteAnimOffsetCurveName                                    ___ OFFSET(get<T>, {0x77A8, 4, 0, 0})
};

/// Class /Game/Characters/Player/Male/Male_Avg_Base/Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C
/// Size: 0x95F0 (0x001910 - 0x00AF00)
class UFortnite_M_Avg_Player_AnimBlueprint_C : public UFortPlayerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 44800;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x1910, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     ___ OFFSET(get<T>, {0x1918, 192, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Tag                                  ___ OFFSET(get<T>, {0x19D8, 8, 0, 0})
	SMember(FAnimSubsystem_SharedLinkedAnimLayers)     AnimBlueprintExtension_SharedLinkedAnimLayers               ___ OFFSET(get<T>, {0x19E0, 40, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x1A08, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x1A10, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1A18, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1A38, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1AE8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1B98, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1BB8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1C68, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1C88, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1D38, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1D58, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1E08, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1E28, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1ED8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1EF8, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1FA8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2058, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2078, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2128, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2148, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x21F8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2218, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x22C8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x22E8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2398, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x23B8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2468, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2488, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2538, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x25E8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2608, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x26B8, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x26D8, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x26F8, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2718, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2738, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x27E8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2808, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x28B8, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x28D8, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x28F8, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2918, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2938, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2958, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2978, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2998, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x29B8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2A68, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2A88, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2B38, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2B58, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2C08, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2C28, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2CD8, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2D88, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2E38, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2E58, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2F08, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_SubInput                                      ___ OFFSET(get<T>, {0x2F28, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2FD8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x3088, 32, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x30A8, 72, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x30F0, 176, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x31A0, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x3218, 40, 0, 0})
	SMember(FAnimNode_LinkedAnimGraph)                 AnimGraphNode_LinkedAnimGraph                               ___ OFFSET(get<T>, {0x3240, 184, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x32F8, 40, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x3320, 32, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          ___ OFFSET(get<T>, {0x3340, 72, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x3388, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x33B0, 40, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          ___ OFFSET(get<T>, {0x33D8, 72, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3420, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3448, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3470, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3498, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x34C0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x34E8, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x3510, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x3558, 32, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x3578, 200, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_LocalRefPose                                  ___ OFFSET(get<T>, {0x3640, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x3650, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x3670, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x3698, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x36C0, 72, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          ___ OFFSET(get<T>, {0x3708, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x3750, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x3770, 200, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x3838, 120, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x38B0, 120, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x3928, 200, 0, 0})
	SMember(FAnimNode_LinkedAnimGraph)                 AnimGraphNode_LinkedAnimGraph                               ___ OFFSET(get<T>, {0x39F0, 184, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x3AA8, 72, 0, 0})
	SMember(FAnimNode_LinkedAnimGraph)                 AnimGraphNode_LinkedAnimGraph                               ___ OFFSET(get<T>, {0x3AF0, 184, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x3BA8, 200, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x3C70, 72, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x3CB8, 200, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x3D80, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x3DF8, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x3E20, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x3E48, 40, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x3E70, 240, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x3F60, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x3FD8, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x4000, 40, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          ___ OFFSET(get<T>, {0x4028, 72, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x4070, 240, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_Layer                                         ___ OFFSET(get<T>, {0x4160, 200, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x4228, 200, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x42F0, 32, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x4310, 240, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x4400, 200, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x44C8, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x44F0, 72, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x4538, 240, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x4628, 72, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          ___ OFFSET(get<T>, {0x4670, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x46B8, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x4780, 200, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x4848, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x4870, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x48B8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x4900, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x4948, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x4990, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x49D8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x4A20, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x4A68, 72, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x4AB0, 176, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x4B60, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x4BD8, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x4C00, 40, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x4C28, 176, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x4CD8, 120, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x4D50, 32, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          ___ OFFSET(get<T>, {0x4D70, 72, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          ___ OFFSET(get<T>, {0x4DB8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x4E00, 72, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x4E48, 40, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          ___ OFFSET(get<T>, {0x4E70, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x4EB8, 72, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x4F00, 240, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x4FF0, 72, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x5038, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x5060, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x50A8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x50F0, 72, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x5138, 176, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x51E8, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x5260, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x5288, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x52B0, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x52D8, 72, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x5320, 240, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x5410, 120, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          ___ OFFSET(get<T>, {0x5488, 72, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x54D0, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x54F8, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x5520, 72, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x5568, 240, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x5658, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x5678, 176, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x5728, 72, 0, 0})
	SMember(FAnimNode_LinkedAnimGraph)                 AnimGraphNode_LinkedAnimGraph                               ___ OFFSET(get<T>, {0x5770, 184, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x5828, 200, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x58F0, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x5968, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x5990, 40, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x59B8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x59D8, 176, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x5A88, 120, 0, 0})
	SMember(FAnimNode_LinkedAnimGraph)                 AnimGraphNode_LinkedAnimGraph                               ___ OFFSET(get<T>, {0x5B00, 184, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x5BB8, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x5BE0, 72, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x5C28, 40, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x5C50, 240, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x5D40, 32, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x5D60, 240, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  ___ OFFSET(get<T>, {0x5E50, 16, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x5E60, 240, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  ___ OFFSET(get<T>, {0x5F50, 16, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          ___ OFFSET(get<T>, {0x5F60, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x5FA8, 72, 0, 0})
	SMember(FAnimNode_LinkedAnimGraph)                 AnimGraphNode_LinkedAnimGraph                               ___ OFFSET(get<T>, {0x5FF0, 184, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x60A8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x60D0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x60F8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x6120, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x6148, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x6170, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x6198, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x61C0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x61E8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x6210, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x6238, 40, 0, 0})
	SMember(FAnimNode_LinkedAnimGraph)                 AnimGraphNode_LinkedAnimGraph                               ___ OFFSET(get<T>, {0x6260, 184, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x6318, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x6338, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x63A8, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x6418, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x6460, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x64D0, 112, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x6540, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x6588, 112, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x65F8, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x6640, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x6708, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  ___ OFFSET(get<T>, {0x6728, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x6738, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x6758, 200, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x6820, 176, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x68D0, 200, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0x6998, 32, 0, 0})
	SMember(FAnimNode_HandIKRetargeting)               AnimGraphNode_HandIKRetargeting                             ___ OFFSET(get<T>, {0x69B8, 272, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          ___ OFFSET(get<T>, {0x6AC8, 72, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0x6B10, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x6B30, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x6B50, 176, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x6C00, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x6C78, 40, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x6CA0, 120, 0, 0})
	SMember(FAnimNode_LinkedAnimGraph)                 AnimGraphNode_LinkedAnimGraph                               ___ OFFSET(get<T>, {0x6D18, 184, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x6DD0, 40, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_Layer                                         ___ OFFSET(get<T>, {0x6DF8, 200, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x6EC0, 200, 0, 0})
	SMember(FAnimNode_LinkedAnimGraph)                 AnimGraphNode_LinkedAnimGraph                               ___ OFFSET(get<T>, {0x6F88, 184, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x7040, 40, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x7068, 200, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x7130, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x71A8, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x71D0, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x71F8, 40, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          ___ OFFSET(get<T>, {0x7220, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x7268, 72, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x72B0, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x72D8, 40, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x7300, 120, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x7378, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x7398, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x7448, 176, 0, 0})
	SMember(FAnimNode_RotateRootBone)                  AnimGraphNode_RotateRootBone                                ___ OFFSET(get<T>, {0x74F8, 176, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x75A8, 72, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x75F0, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x7668, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x7690, 40, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x76B8, 240, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_LocalRefPose                                  ___ OFFSET(get<T>, {0x77A8, 16, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x77B8, 72, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x7800, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x7820, 176, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          ___ OFFSET(get<T>, {0x78D0, 72, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x7918, 120, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          ___ OFFSET(get<T>, {0x7990, 72, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x79D8, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x7A50, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x7A78, 72, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x7AC0, 40, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          ___ OFFSET(get<T>, {0x7AE8, 72, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x7B30, 40, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          ___ OFFSET(get<T>, {0x7B58, 72, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x7BA0, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x7C18, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x7C40, 72, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x7C88, 200, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x7D50, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x7D78, 40, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x7DA0, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x7E18, 40, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x7E40, 32, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace                      ___ OFFSET(get<T>, {0x7E60, 280, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x7F78, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x7FC0, 72, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace                      ___ OFFSET(get<T>, {0x8008, 280, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace                      ___ OFFSET(get<T>, {0x8120, 280, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x8238, 176, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x82E8, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x8360, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x8388, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x83B0, 40, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x83D8, 32, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x83F8, 120, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x8470, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x8498, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x84C0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x84E8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x8510, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x8538, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x8560, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x8588, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x85B0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x85D8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x8600, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x8628, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x8650, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x8678, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x86A0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x86C8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x86F0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x8718, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x8740, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x8768, 40, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_LocalRefPose                                  ___ OFFSET(get<T>, {0x8790, 16, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x87A0, 72, 0, 0})
	SMember(FAnimNode_LinkedAnimGraph)                 AnimGraphNode_LinkedAnimGraph                               ___ OFFSET(get<T>, {0x87E8, 184, 0, 0})
	SMember(FAnimNode_LinkedAnimGraph)                 AnimGraphNode_LinkedAnimGraph                               ___ OFFSET(get<T>, {0x88A0, 184, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend                                   ___ OFFSET(get<T>, {0x8958, 192, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x8A18, 40, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x8A40, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x8B08, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x8BD0, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x8BF0, 40, 0, 0})
	SMember(FAnimNode_LinkedAnimGraph)                 AnimGraphNode_LinkedAnimGraph                               ___ OFFSET(get<T>, {0x8C18, 184, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x8CD0, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x8CF0, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x8D18, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x8DE0, 32, 0, 0})
	SMember(FAnimNode_LinkedAnimGraph)                 AnimGraphNode_LinkedAnimGraph                               ___ OFFSET(get<T>, {0x8E00, 184, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x8EB8, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x8ED8, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x8F00, 72, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x8F48, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x8F90, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x8FD8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x8FF8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x9040, 32, 0, 0})
	SMember(FAnimNode_LinkedAnimGraph)                 AnimGraphNode_LinkedAnimGraph                               ___ OFFSET(get<T>, {0x9060, 184, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x9118, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x9138, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x9180, 32, 0, 0})
	SMember(FAnimNode_LinkedAnimGraph)                 AnimGraphNode_LinkedAnimGraph                               ___ OFFSET(get<T>, {0x91A0, 184, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x9258, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x9278, 200, 0, 0})
	SMember(FAnimNode_DeadBlending)                    AnimGraphNode_DeadBlending                                  ___ OFFSET(get<T>, {0x9340, 1184, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x97E0, 120, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_Layer                                         ___ OFFSET(get<T>, {0x9858, 200, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x9920, 200, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x99E8, 120, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x9A60, 200, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x9B28, 200, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x9BF0, 40, 0, 0})
	SMember(FAnimNode_LinkedAnimGraph)                 AnimGraphNode_LinkedAnimGraph                               ___ OFFSET(get<T>, {0x9C18, 184, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x9CD0, 72, 0, 0})
	SMember(FFortAnimNode_ScaleCharacterBones)         FortAnimGraphNode_ScaleCharacterBones                       ___ OFFSET(get<T>, {0x9D18, 216, 0, 0})
	SMember(FAnimNode_Inertialization)                 AnimGraphNode_Inertialization                               ___ OFFSET(get<T>, {0x9DF0, 272, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0x9F00, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0x9F20, 32, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0x9F40, 200, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0xA008, 200, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0xA0D0, 72, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0xA118, 120, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0xA190, 200, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0xA258, 200, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0xA320, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0xA348, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0xA370, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0xA398, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0xA3C0, 40, 0, 0})
	SMember(FAnimNode_BlendListByInt)                  AnimGraphNode_BlendListByInt                                ___ OFFSET(get<T>, {0xA3E8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0xA430, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0xA450, 200, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0xA518, 200, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0xA5E0, 200, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0xA6A8, 200, 0, 0})
	SMember(FAnimNode_LinkedAnimGraph)                 AnimGraphNode_LinkedAnimGraph                               ___ OFFSET(get<T>, {0xA770, 184, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0xA828, 200, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               ___ OFFSET(get<T>, {0xA8F0, 200, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0xA9B8, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0xA9E0, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0xAA08, 40, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          ___ OFFSET(get<T>, {0xAA30, 72, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0xAA78, 240, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0xAB68, 120, 0, 0})
	SMember(FFortAnimInput_AdjustedAim)                __CustomProperty_InputParam_68C70D6347F81F8476C87EA798A19370 ___ OFFSET(get<T>, {0xABE0, 604, 0, 0})
	DMember(bool)                                      __CustomProperty_ParaGlide_TriggerAnim_EE06BC0D4AF7A3598BB824A5286F89C8 ___ OFFSET(get<bool>, {0xAE3C, 1, 0, 0})
	SMember(FName)                                     __CustomProperty_EmoteAnimOffsetCurveName_D066576F42932FCE06C5E8B658C15225 ___ OFFSET(get<T>, {0xAE40, 4, 0, 0})
	SMember(FVector)                                   __CustomProperty_LeftHandOverride_D066576F42932FCE06C5E8B658C15225 ___ OFFSET(get<T>, {0xAE48, 24, 0, 0})
	SMember(FVector)                                   __CustomProperty_RightHandOverride_D066576F42932FCE06C5E8B658C15225 ___ OFFSET(get<T>, {0xAE60, 24, 0, 0})
	DMember(bool)                                      __CustomProperty_IsHidingInProp_D066576F42932FCE06C5E8B658C15225 ___ OFFSET(get<bool>, {0xAE78, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  MenuScreenDispatcher                                        ___ OFFSET(get<T>, {0xAE80, 16, 0, 0})
	DMember(double)                                    StartAnimBlendTime                                          ___ OFFSET(get<double>, {0xAE90, 8, 0, 0})
	DMember(double)                                    PivotAnimBlendTime                                          ___ OFFSET(get<double>, {0xAE98, 8, 0, 0})
	DMember(double)                                    CrouchPlayRate                                              ___ OFFSET(get<double>, {0xAEA0, 8, 0, 0})
	DMember(bool)                                      IsSnowman                                                   ___ OFFSET(get<bool>, {0xAEA8, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  Indigo_Boost                                                ___ OFFSET(get<T>, {0xAEB0, 16, 0, 0})
	DMember(bool)                                      ParaGlide_UseAltGliderCam                                   ___ OFFSET(get<bool>, {0xAEC0, 1, 0, 0})
	SMember(FVector)                                   LeftHandOverride                                            ___ OFFSET(get<T>, {0xAEC8, 24, 0, 0})
	SMember(FVector)                                   RightHandOverride                                           ___ OFFSET(get<T>, {0xAEE0, 24, 0, 0})
	DMember(bool)                                      ParaGlide_TriggerAnim                                       ___ OFFSET(get<bool>, {0xAEF8, 1, 0, 0})
	SMember(FName)                                     EmoteAnimOffsetCurveName                                    ___ OFFSET(get<T>, {0xAEFC, 4, 0, 0})
};

/// Class /Game/Characters/Player/Male/Male_Avg_Base/LayerAnimBP/SwimmingAnimBP.SwimmingAnimBP_C
/// Size: 0x4598 (0x0009D0 - 0x004F68)
class USwimmingAnimBP_C : public UFortSwimmingLayerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 20328;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x9D0, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     ___ OFFSET(get<T>, {0x9D8, 168, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0xA80, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0xA88, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0xA90, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0xAB0, 176, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0xB60, 72, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace                      ___ OFFSET(get<T>, {0xBA8, 280, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0xCC0, 72, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0xD08, 176, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0xDB8, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0xE30, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0xE58, 40, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0xE80, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0xEA0, 176, 0, 0})
	SMember(FAnimNode_RotateRootBone)                  AnimGraphNode_RotateRootBone                                ___ OFFSET(get<T>, {0xF50, 176, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace                      ___ OFFSET(get<T>, {0x1000, 280, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace                      ___ OFFSET(get<T>, {0x1118, 280, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1230, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1258, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1280, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x12A8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x12D0, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x12F8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x1340, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1360, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x13A8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x13C8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x1410, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1430, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x1478, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x1498, 200, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x1560, 120, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x15D8, 72, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x1620, 40, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x1648, 240, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x1738, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1760, 72, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend                                   ___ OFFSET(get<T>, {0x17A8, 192, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x1868, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x18E0, 40, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x1908, 72, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x1950, 40, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0x1978, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1A40, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1A88, 72, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x1AD0, 40, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1AF8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1B18, 176, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x1BC8, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x1C40, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1C68, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1C90, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1CB8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1CE0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1D08, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1D30, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1D58, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1D80, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1DA8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1DD0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1DF8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1E20, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1E48, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1E70, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x1E98, 40, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0x1EC0, 32, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x1EE0, 296, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0x2008, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2028, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2050, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2078, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x20A0, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x20C8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x2110, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2158, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x21A0, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x21C0, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x2230, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2250, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x2298, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x22B8, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x2380, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x23A0, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x23C8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x2410, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x2430, 40, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x2458, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x2478, 40, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x24A0, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x24C0, 200, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x2588, 120, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend                                   ___ OFFSET(get<T>, {0x2600, 192, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x26C0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x26E8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2710, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2738, 40, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x2760, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x27D0, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x27F0, 112, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x2860, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x28A8, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x2918, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x2938, 112, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum                               ___ OFFSET(get<T>, {0x29A8, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x29F0, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x2A60, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x2A80, 200, 0, 0})
	SMember(FAnimNode_RotateRootBone)                  AnimGraphNode_RotateRootBone                                ___ OFFSET(get<T>, {0x2B48, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x2BF8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2C18, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x2CC8, 176, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2D78, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2DA0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2DC8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2DF0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2E18, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2E40, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2E68, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2E90, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2EB8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x2EE0, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x2F08, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x2F50, 32, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace                      ___ OFFSET(get<T>, {0x2F70, 280, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0x3088, 32, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x30A8, 296, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0x31D0, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x31F0, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x3260, 32, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace                      ___ OFFSET(get<T>, {0x3280, 280, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0x3398, 32, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x33B8, 296, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0x34E0, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x3500, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x3570, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x3590, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x35D8, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x35F8, 40, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x3620, 296, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0x3748, 32, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0x3768, 32, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x3788, 296, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         ___ OFFSET(get<T>, {0x38B0, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         ___ OFFSET(get<T>, {0x38D0, 32, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    ___ OFFSET(get<T>, {0x38F0, 296, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x3A18, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x3A38, 200, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x3B00, 120, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x3B78, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x3BE8, 72, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend                                   ___ OFFSET(get<T>, {0x3C30, 192, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x3CF0, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x3D10, 176, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3DC0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3DE8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3E10, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3E38, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3E60, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3E88, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3EB0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3ED8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3F00, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x3F28, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x3F50, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x3F98, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x3FB8, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x4028, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x4048, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x4090, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x40B0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x40F8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x4140, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x4188, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x41D0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x4218, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x4260, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x42A8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x42F0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x4338, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x4358, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x43C8, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x43E8, 200, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x44B0, 72, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x44F8, 240, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  ___ OFFSET(get<T>, {0x45E8, 16, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x45F8, 240, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  ___ OFFSET(get<T>, {0x46E8, 16, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x46F8, 240, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  ___ OFFSET(get<T>, {0x47E8, 16, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend                                   ___ OFFSET(get<T>, {0x47F8, 192, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x48B8, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x4900, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x4970, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x49E0, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x4A00, 200, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x4AC8, 240, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  ___ OFFSET(get<T>, {0x4BB8, 16, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x4BC8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x4BE8, 176, 0, 0})
	SMember(FAnimNode_SequenceEvaluator)               AnimGraphNode_SequenceEvaluator                             ___ OFFSET(get<T>, {0x4C98, 64, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend                                   ___ OFFSET(get<T>, {0x4CD8, 192, 0, 0})
	SMember(FAnimNode_SequenceEvaluator)               AnimGraphNode_SequenceEvaluator                             ___ OFFSET(get<T>, {0x4D98, 64, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x4DD8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x4E20, 72, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x4E68, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x4EE0, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x4F08, 40, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x4F30, 32, 0, 0})
	DMember(bool)                                      AllowSprintStop                                             ___ OFFSET(get<bool>, {0x4F50, 1, 0, 0})
	DMember(bool)                                      ChangeMovementToVelocityFromAccel                           ___ OFFSET(get<bool>, {0x4F51, 1, 0, 0})
	DMember(double)                                    LocalAccelYawAngleAtStart                                   ___ OFFSET(get<double>, {0x4F58, 8, 0, 0})
	DMember(double)                                    PivotAngle                                                  ___ OFFSET(get<double>, {0x4F60, 8, 0, 0})
};

/// Class /Game/Characters/Player/Common/PhysicalRimlight/PhysicalRimlight.PhysicalRimlight_C
/// Size: 0x00E0 (0x000290 - 0x000370)
class APhysicalRimlight_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(USpotLightComponent*)                      SpotLight                                                   ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(USpotLightComponent*)                      Right_Side_Rim_Light                                        ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	SMember(FTransform)                                RightSideRim_Transform                                      ___ OFFSET(get<T>, {0x2B0, 96, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         PawnMaterials_ALL                                           ___ OFFSET(get<T>, {0x310, 16, 0, 0})
	DMember(double)                                    Rim_Light_Physical_Intensity                                ___ OFFSET(get<double>, {0x320, 8, 0, 0})
	DMember(double)                                    RimlightDistanceFromCamera                                  ___ OFFSET(get<double>, {0x328, 8, 0, 0})
	DMember(double)                                    RimlightOffsetFromCamera                                    ___ OFFSET(get<double>, {0x330, 8, 0, 0})
	CMember(APlayerPawn_Athena_C*)                     PlayerPawnAthenaRef                                         ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	SMember(FString)                                   l_cvarName                                                  ___ OFFSET(get<T>, {0x340, 16, 0, 0})
	CMember(UMaterialParameterCollection*)             Material_params                                             ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	SMember(FName)                                     Sunlight_Color_Param_name                                   ___ OFFSET(get<T>, {0x358, 4, 0, 0})
	DMember(double)                                    Rimlight_CvarBoost                                          ___ OFFSET(get<double>, {0x360, 8, 0, 0})
	DMember(double)                                    RimlightVerticalOffset                                      ___ OFFSET(get<double>, {0x368, 8, 0, 0})
};

/// Class /Game/Characters/Player/Male/Male_Avg_Base/LayerAnimBP/SlidingLayerAnimBP.SlidingLayerAnimBP_C
/// Size: 0x1648 (0x0004D0 - 0x001B18)
class USlidingLayerAnimBP_C : public UFortSlidingLayerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6936;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x4D0, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     ___ OFFSET(get<T>, {0x4D8, 64, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x518, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x520, 8, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x528, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x5D8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x688, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x6A8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x758, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x778, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x828, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x848, 176, 0, 0})
	SMember(FAnimNode_ApplyMeshSpaceAdditive)          AnimGraphNode_ApplyMeshSpaceAdditive                        ___ OFFSET(get<T>, {0x8F8, 208, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x9C8, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x9E8, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0xA58, 72, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  ___ OFFSET(get<T>, {0xAA0, 16, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0xAB0, 112, 0, 0})
	SMember(FAnimNode_ApplyMeshSpaceAdditive)          AnimGraphNode_ApplyMeshSpaceAdditive                        ___ OFFSET(get<T>, {0xB20, 208, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0xBF0, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0xC10, 176, 0, 0})
	SMember(FAnimNode_RotateRootBone)                  AnimGraphNode_RotateRootBone                                ___ OFFSET(get<T>, {0xCC0, 176, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0xD70, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0xD98, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0xDC0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0xDE8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0xE10, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0xE38, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0xE60, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0xE88, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0xEB0, 72, 0, 0})
	SMember(FAnimNode_ApplyMeshSpaceAdditive)          AnimGraphNode_ApplyMeshSpaceAdditive                        ___ OFFSET(get<T>, {0xEF8, 208, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0xFC8, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x1010, 112, 0, 0})
	SMember(FAnimNode_ApplyMeshSpaceAdditive)          AnimGraphNode_ApplyMeshSpaceAdditive                        ___ OFFSET(get<T>, {0x1080, 208, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x1150, 112, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x11C0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x1208, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x1228, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x1298, 32, 0, 0})
	SMember(FAnimNode_ApplyMeshSpaceAdditive)          AnimGraphNode_ApplyMeshSpaceAdditive                        ___ OFFSET(get<T>, {0x12B8, 208, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1388, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x13D0, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x1440, 32, 0, 0})
	SMember(FAnimNode_ApplyMeshSpaceAdditive)          AnimGraphNode_ApplyMeshSpaceAdditive                        ___ OFFSET(get<T>, {0x1460, 208, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1530, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x1578, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x15E8, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0x1608, 200, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x16D0, 120, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x1748, 72, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x1790, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x17B8, 40, 0, 0})
	SMember(FAnimNode_RotateRootBone)                  AnimGraphNode_RotateRootBone                                ___ OFFSET(get<T>, {0x17E0, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1890, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1940, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x1960, 176, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0x1A10, 72, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1A58, 32, 0, 0})
	DMember(bool)                                      IsKneeSliding                                               ___ OFFSET(get<bool>, {0x1A78, 1, 0, 0})
	DMember(bool)                                      b_KneeSlideNote_bTransition_FullBody_Sprinting              ___ OFFSET(get<bool>, {0x1A79, 1, 0, 0})
	SMember(FRotator)                                  KneeSlideLowerBodyInitialRot                                ___ OFFSET(get<T>, {0x1A80, 24, 0, 0})
	SMember(FRotator)                                  KneeSlideLowerBodyInitialRotSmooth                          ___ OFFSET(get<T>, {0x1A98, 24, 0, 0})
	CMember(AFortPlayerPawn*)                          FortPlayerPawn                                              ___ OFFSET(get<T>, {0x1AB0, 8, 0, 0})
	CMember(UFortPlayerAnimInstance*)                  Fort_Player_Anim_Instance                                   ___ OFFSET(get<T>, {0x1AB8, 8, 0, 0})
	DMember(double)                                    Delta_Time_                                                 ___ OFFSET(get<double>, {0x1AC0, 8, 0, 0})
	DMember(double)                                    KneeSlideLowerBodyYawOffset                                 ___ OFFSET(get<double>, {0x1AC8, 8, 0, 0})
	DMember(double)                                    KneeSlideRootYawOffset                                      ___ OFFSET(get<double>, {0x1AD0, 8, 0, 0})
	DMember(double)                                    VelocityAimYawDelta                                         ___ OFFSET(get<double>, {0x1AD8, 8, 0, 0})
	DMember(double)                                    KneeSlideSlopeAngle                                         ___ OFFSET(get<double>, {0x1AE0, 8, 0, 0})
	DMember(double)                                    KneeSlideSlopeYaw                                           ___ OFFSET(get<double>, {0x1AE8, 8, 0, 0})
	DMember(double)                                    KneeSlideSlopeYawMinusRootRot                               ___ OFFSET(get<double>, {0x1AF0, 8, 0, 0})
	DMember(bool)                                      TransitionToKneeSlide                                       ___ OFFSET(get<bool>, {0x1AF8, 1, 0, 0})
	DMember(double)                                    KneeSlideForwardVectorVelocityDelta                         ___ OFFSET(get<double>, {0x1B00, 8, 0, 0})
	DMember(bool)                                      InitiatedSlideUpHill                                        ___ OFFSET(get<bool>, {0x1B08, 1, 0, 0})
	DMember(bool)                                      BypassEntry                                                 ___ OFFSET(get<bool>, {0x1B09, 1, 0, 0})
	DMember(double)                                    SpineTweakLean                                              ___ OFFSET(get<double>, {0x1B10, 8, 0, 0})
};

/// Class /Game/Characters/Player/Female/Medium/Bodies/F_MED_Ramirez_Fallback/Meshes/F_MED_Ramirez_Fallback_Skeleton_AnimBlueprint.F_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C
/// Size: 0x0188 (0x000700 - 0x000888)
class UF_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C : public UCustomCharacterPartAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2184;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x700, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x708, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x710, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x718, 32, 0, 0})
	SMember(FAnimNode_CopyPoseFromMesh)                AnimGraphNode_CopyPoseFromMesh                              ___ OFFSET(get<T>, {0x738, 336, 0, 0})
};

/// Enum /Game/Characters/Player/Male/Male_Avg_Base/ECardinalDirection.ECardinalDirection
/// Size: 0x05
enum ECardinalDirection : uint8_t
{
	ECardinalDirection__NewEnumerator00                                              = 0,
	ECardinalDirection__NewEnumerator21                                              = 1,
	ECardinalDirection__NewEnumerator12                                              = 2,
	ECardinalDirection__NewEnumerator33                                              = 3,
	ECardinalDirection__ECardinalDirection_MAX4                                      = 4
};

