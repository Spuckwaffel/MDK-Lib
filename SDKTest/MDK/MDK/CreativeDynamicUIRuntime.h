
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/


/// Struct /Script/CreativeDynamicUIRuntime.CreativeDynamicUIAlignmentConstraint
/// Size: 0x0018 (0x000000 - 0x000018)
class FCreativeDynamicUIAlignmentConstraint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(ECreativeDynamicUIAlignment)               Alignment                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(ECreativeDynamicUIAnchor)                  Anchor                                                      OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(ECreativeDynamicUIAspectRatioType)         AspectRatio                                                 OFFSET(get<T>, {0x2, 1, 0, 0})
	SMember(FVector2D)                                 Offset                                                      OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/CreativeDynamicUIRuntime.CreativeDynamicUIFixedSizeModifier
/// Size: 0x000C (0x000000 - 0x00000C)
class FCreativeDynamicUIFixedSizeModifier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FVector2f)                                 Size                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bUseRenderTransform                                         OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/CreativeDynamicUIRuntime.CreativeDynamicUIScaleSizeModifier
/// Size: 0x000C (0x000000 - 0x00000C)
class FCreativeDynamicUIScaleSizeModifier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FVector2f)                                 Scale                                                       OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bUseRenderTransform                                         OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Enum /Script/CreativeDynamicUIRuntime.ECreativeDynamicUIAnchor
/// Size: 0x10
enum ECreativeDynamicUIAnchor : uint8_t
{
	ECreativeDynamicUIAnchor__TopLeft0                                               = 0,
	ECreativeDynamicUIAnchor__TopCenter1                                             = 1,
	ECreativeDynamicUIAnchor__TopRight2                                              = 2,
	ECreativeDynamicUIAnchor__CenterLeft3                                            = 3,
	ECreativeDynamicUIAnchor__CenterCenter4                                          = 4,
	ECreativeDynamicUIAnchor__CenterRight5                                           = 5,
	ECreativeDynamicUIAnchor__BottomLeft6                                            = 6,
	ECreativeDynamicUIAnchor__BottomCenter7                                          = 7,
	ECreativeDynamicUIAnchor__BottomRight8                                           = 8,
	ECreativeDynamicUIAnchor__ECreativeDynamicUIAnchor_MAX9                          = 9
};

/// Enum /Script/CreativeDynamicUIRuntime.ECreativeDynamicUIAlignment
/// Size: 0x17
enum ECreativeDynamicUIAlignment : uint8_t
{
	ECreativeDynamicUIAlignment__TopLeft0                                            = 0,
	ECreativeDynamicUIAlignment__TopCenter1                                          = 1,
	ECreativeDynamicUIAlignment__TopRight2                                           = 2,
	ECreativeDynamicUIAlignment__MiddleLeft3                                         = 3,
	ECreativeDynamicUIAlignment__Centered4                                           = 4,
	ECreativeDynamicUIAlignment__MiddleRight5                                        = 5,
	ECreativeDynamicUIAlignment__BottomLeft6                                         = 6,
	ECreativeDynamicUIAlignment__BottomCenter7                                       = 7,
	ECreativeDynamicUIAlignment__BottomRight8                                        = 8,
	ECreativeDynamicUIAlignment__CenteredFull9                                       = 9,
	ECreativeDynamicUIAlignment__LeftTall10                                          = 10,
	ECreativeDynamicUIAlignment__CenteredTall11                                      = 11,
	ECreativeDynamicUIAlignment__RightTall12                                         = 12,
	ECreativeDynamicUIAlignment__TopWide13                                           = 13,
	ECreativeDynamicUIAlignment__CenteredWide14                                      = 14,
	ECreativeDynamicUIAlignment__BottomWide15                                        = 15,
	ECreativeDynamicUIAlignment__ECreativeDynamicUIAlignment_MAX16                   = 16
};

/// Enum /Script/CreativeDynamicUIRuntime.ECreativeDynamicUIAspectRatioType
/// Size: 0x08
enum ECreativeDynamicUIAspectRatioType : uint8_t
{
	ECreativeDynamicUIAspectRatioType__None0                                         = 0,
	ECreativeDynamicUIAspectRatioType__AspectRatio_11                                = 1,
	ECreativeDynamicUIAspectRatioType__AspectRatio_42                                = 2,
	ECreativeDynamicUIAspectRatioType__AspectRatio_53                                = 3,
	ECreativeDynamicUIAspectRatioType__AspectRatio_164                               = 4,
	ECreativeDynamicUIAspectRatioType__AspectRatio_165                               = 5,
	ECreativeDynamicUIAspectRatioType__AspectRatio_216                               = 6,
	ECreativeDynamicUIAspectRatioType__ECreativeDynamicUIAspectRatioType_MAX7        = 7
};

/// Enum /Script/CreativeDynamicUIRuntime.ECreativeDynamicUILayoutConstraintType
/// Size: 0x03
enum ECreativeDynamicUILayoutConstraintType : uint8_t
{
	ECreativeDynamicUILayoutConstraintType__None0                                    = 0,
	ECreativeDynamicUILayoutConstraintType__Alignment1                               = 1,
	ECreativeDynamicUILayoutConstraintType__ECreativeDynamicUILayoutConstraintType_MAX2 = 2
};

/// Enum /Script/CreativeDynamicUIRuntime.ECreativeDynamicUISizeModifierType
/// Size: 0x04
enum ECreativeDynamicUISizeModifierType : uint8_t
{
	ECreativeDynamicUISizeModifierType__None0                                        = 0,
	ECreativeDynamicUISizeModifierType__Fixed1                                       = 1,
	ECreativeDynamicUISizeModifierType__Scale2                                       = 2,
	ECreativeDynamicUISizeModifierType__ECreativeDynamicUISizeModifierType_MAX3      = 3
};

