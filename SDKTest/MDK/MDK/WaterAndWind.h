
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Game/WaterAndWind/AnimNotifies/AnimNotify_PlayPlayerLandsWindEffect.AnimNotify_PlayPlayerLandsWindEffect_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimNotify_PlayPlayerLandsWindEffect_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Game/WaterAndWind/AnimNotifies/AnimNotify_PlayPlayerLandsWindEffect.AnimNotify_PlayPlayerLandsWindEffect_C.Received_Notify
	// bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);                                    // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Struct /Game/WaterAndWind/Blueprint/ArrayOfWaterMeshWaterBlueprintPairs.ArrayOfWaterMeshWaterBlueprintPairs
/// Size: 0x0010 (0x000000 - 0x000010)
class FArrayOfWaterMeshWaterBlueprintPairs : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FWaterMeshAssetsToReplace>)         ArrayOfPairedMeshesandBlueprints_3_66DC153A4804C5BFDF6D5187A0EEF992 OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Enum /Game/WaterAndWind/Blueprint/PlayerWindParticleEmitters.PlayerWindParticleEmitters
/// Size: 0x05
enum PlayerWindParticleEmitters : uint8_t
{
	PlayerWindParticleEmitters__NewEnumerator00                                      = 0,
	PlayerWindParticleEmitters__NewEnumerator11                                      = 1,
	PlayerWindParticleEmitters__NewEnumerator32                                      = 2,
	PlayerWindParticleEmitters__NewEnumerator23                                      = 3,
	PlayerWindParticleEmitters__PlayerWindParticleEmitters_MAX4                      = 4
};

