
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/DatasmithContent.DatasmithAreaLightActor
/// Size: 0x0020 (0x000318 - 0x000338)
class ADatasmithAreaLightActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(EDatasmithAreaLightActorShape)             LightShape                                                  OFFSET(get<T>, {0x318, 1, 0, 0})
	SMember(FVector2D)                                 Dimensions                                                  OFFSET(getStruct<T>, {0x31C, 8, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x324, 16, 0, 0})
	DMember(float)                                     Intensity                                                   OFFSET(get<float>, {0x334, 4, 0, 0})
};

/// Enum /Script/DatasmithContent.EDatasmithAreaLightActorShape
/// Size: 0x05
enum EDatasmithAreaLightActorShape : uint8_t
{
	EDatasmithAreaLightActorShape__Rectangle0                                        = 0,
	EDatasmithAreaLightActorShape__Disc1                                             = 1,
	EDatasmithAreaLightActorShape__Sphere2                                           = 2,
	EDatasmithAreaLightActorShape__Cylinder3                                         = 3,
	EDatasmithAreaLightActorShape__EDatasmithAreaLightActorShape_MAX4                = 4
};

