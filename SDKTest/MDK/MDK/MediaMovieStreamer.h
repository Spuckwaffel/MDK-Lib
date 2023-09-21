
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/MediaMovieStreamer.MediaMovieAssets
/// Size: 0x0028 (0x000028 - 0x000050)
class UMediaMovieAssets : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UMediaPlayer*)                             MediaPlayer                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UMediaSoundComponent*)                     MediaSoundComponent                                         OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UMediaSource*)                             MediaSource                                                 OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UMediaTexture*)                            MediaTexture                                                OFFSET(get<T>, {0x40, 8, 0, 0})
};



	/// Functions
	// Function /Script/MediaMovieStreamer.MediaMovieAssets.OnMediaEnd
	// void OnMediaEnd();                                                                                                       // [0x713d7c0] Final|Native|Private 
