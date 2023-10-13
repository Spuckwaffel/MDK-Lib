
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ACLPlugin.AnimationCompressionLibraryDatabase
/// Size: 0x0140 (0x000028 - 0x000168)
class UAnimationCompressionLibraryDatabase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	CMember(TArray<char>)                              CookedCompressedBytes                                       OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<uint64_t>)                          CookedAnimSequenceMappings                                  OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(uint32_t)                                  MaxStreamRequestSizeKB                                      OFFSET(get<uint32_t>, {0x160, 4, 0, 0})


	/// Functions
	// Function /Script/ACLPlugin.AnimationCompressionLibraryDatabase.SetVisualFidelity
	// void SetVisualFidelity(UObject* WorldContextObject, FLatentActionInfo LatentInfo, UAnimationCompressionLibraryDatabase* DatabaseAsset, ACLVisualFidelityChangeResult& Result, ACLVisualFidelity VisualFidelity); // [0xa4d3670] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ACLPlugin.AnimationCompressionLibraryDatabase.GetVisualFidelity
	// ACLVisualFidelity GetVisualFidelity(UAnimationCompressionLibraryDatabase* DatabaseAsset);                                // [0xa4d35f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/ACLPlugin.AnimBoneCompressionCodec_ACLBase
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimBoneCompressionCodec_ACLBase : public UAnimBoneCompressionCodec
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/ACLPlugin.AnimBoneCompressionCodec_ACL
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimBoneCompressionCodec_ACL : public UAnimBoneCompressionCodec_ACLBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/ACLPlugin.AnimBoneCompressionCodec_ACLCustom
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimBoneCompressionCodec_ACLCustom : public UAnimBoneCompressionCodec_ACLBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/ACLPlugin.AnimBoneCompressionCodec_ACLDatabase
/// Size: 0x0008 (0x000038 - 0x000040)
class UAnimBoneCompressionCodec_ACLDatabase : public UAnimBoneCompressionCodec_ACLBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UAnimationCompressionLibraryDatabase*)     DatabaseAsset                                               OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/ACLPlugin.AnimBoneCompressionCodec_ACLSafe
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimBoneCompressionCodec_ACLSafe : public UAnimBoneCompressionCodec_ACLBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/ACLPlugin.AnimCurveCompressionCodec_ACL
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimCurveCompressionCodec_ACL : public UAnimCurveCompressionCodec
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Enum /Script/ACLPlugin.ACLRotationFormat
/// Size: 0x04
enum ACLRotationFormat : uint8_t
{
	ACLRF_Quat0                                                                      = 0,
	ACLRF_QuatDropW1                                                                 = 1,
	ACLRF_QuatDropW_Variable2                                                        = 2,
	ACLRF_MAX3                                                                       = 3
};

/// Enum /Script/ACLPlugin.ACLVectorFormat
/// Size: 0x03
enum ACLVectorFormat : uint8_t
{
	ACLVF_Vector30                                                                   = 0,
	ACLVF_Vector3_Variable1                                                          = 1,
	ACLVF_Vector3_MAX2                                                               = 2
};

/// Enum /Script/ACLPlugin.ACLCompressionLevel
/// Size: 0x06
enum ACLCompressionLevel : uint8_t
{
	ACLCL_Lowest0                                                                    = 0,
	ACLCL_Low1                                                                       = 1,
	ACLCL_Medium2                                                                    = 2,
	ACLCL_High3                                                                      = 3,
	ACLCL_Highest4                                                                   = 4,
	ACLCL_MAX5                                                                       = 5
};

/// Enum /Script/ACLPlugin.ACLVisualFidelity
/// Size: 0x04
enum ACLVisualFidelity : uint8_t
{
	ACLVisualFidelity__Highest0                                                      = 0,
	ACLVisualFidelity__Medium1                                                       = 1,
	ACLVisualFidelity__Lowest2                                                       = 2,
	ACLVisualFidelity__ACLVisualFidelity_MAX3                                        = 3
};

/// Enum /Script/ACLPlugin.ACLVisualFidelityChangeResult
/// Size: 0x04
enum ACLVisualFidelityChangeResult : uint8_t
{
	ACLVisualFidelityChangeResult__Dispatched0                                       = 0,
	ACLVisualFidelityChangeResult__Completed1                                        = 1,
	ACLVisualFidelityChangeResult__Failed2                                           = 2,
	ACLVisualFidelityChangeResult__ACLVisualFidelityChangeResult_MAX3                = 3
};

