
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ImageWriteQueue.ImageWriteBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UImageWriteBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/ImageWriteQueue.ImageWriteOptions
/// Size: 0x0060 (0x000000 - 0x000060)
class FImageWriteOptions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(EDesiredImageFormat)                       Format                                                      ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FDelegateProperty)                         OnComplete                                                  ___ OFFSET(get<T>, {0x4, 12, 0, 0})
	DMember(int32_t)                                   CompressionQuality                                          ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(bool)                                      bOverwriteFile                                              ___ OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      bAsync                                                      ___ OFFSET(get<bool>, {0x15, 1, 0, 0})
};

/// Enum /Script/ImageWriteQueue.EDesiredImageFormat
/// Size: 0x05
enum EDesiredImageFormat : uint8_t
{
	EDesiredImageFormat__PNG0                                                        = 0,
	EDesiredImageFormat__JPG1                                                        = 1,
	EDesiredImageFormat__BMP2                                                        = 2,
	EDesiredImageFormat__EXR3                                                        = 3,
	EDesiredImageFormat__EDesiredImageFormat_MAX4                                    = 4
};

