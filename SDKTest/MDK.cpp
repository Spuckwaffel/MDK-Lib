#include <iostream>
#include <chrono>
#include "MDK.h"


MDKBase::MDKBase()
{

}

MDKHandler::MDKHandler()
{
    printf("starting MDKHandler... Thank for choosing us!");
}

void MDKHandler::newFrame()
{
	const auto currentTime = std::chrono::high_resolution_clock::now();

    // Convert the time point to nanoseconds since the epoch
    currentFrameTS = std::chrono::duration_cast<std::chrono::nanoseconds>(currentTime.time_since_epoch()).count();
}
