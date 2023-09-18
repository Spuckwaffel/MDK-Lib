#include <iostream>
#include <chrono>
#include "MDK.h"

void MDKBase::updateTS()
{
    const auto currentTime = std::chrono::high_resolution_clock::now();

    // Convert the time point to nanoseconds since the epoch
    lastCacheTS = std::chrono::duration_cast<std::chrono::nanoseconds>(currentTime.time_since_epoch()).count();
    puts("updated block time, either resize or new frame");
}

MDKBase::MDKBase()
{

}

void MDKHandler::newFrame()
{
	const auto currentTime = std::chrono::high_resolution_clock::now();

    // Convert the time point to nanoseconds since the epoch
    currentFrameTS = std::chrono::duration_cast<std::chrono::nanoseconds>(currentTime.time_since_epoch()).count();
}
