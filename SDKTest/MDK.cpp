#include <iostream>
#include <chrono>
#include "MDK.h"


MDKBase MDKBase::shadowCopy() const
{
    MDKBase b;
    b.basePointer = basePointer;
    b.baseOffset = baseOffset;
    b.block = block;
    b.lastCacheTS = lastCacheTS;
    b.valid = valid;
    b.onlyTemporary = onlyTemporary; // is ok no worries, we set to realOwner to false so block doesnt get freed
    b.realOwner = false;

    return b;
}

MDKBase::MDKBase()
{

}

MDKBase::~MDKBase()
{
    //objects marked as tamporary aka not cached get deleted
    if (onlyTemporary && realOwner)
    {
        free(block.blockPointer);
    }
}


MDKHandler::MDKHandler()
{
    puts("starting MDKHandler... Thank for choosing us!");
}

void MDKHandler::newFrame()
{
    puts("pushing a new frame...");
    const auto currentTime = std::chrono::high_resolution_clock::now();

    // Convert the time point to nanoseconds since the epoch
    currentFrameTS = std::chrono::duration_cast<std::chrono::nanoseconds>(currentTime.time_since_epoch()).count();

    if (frameSkipCounter == -1)
    {
        frameTSFlushThreshold = currentFrameTS;
    }

    frameSkipCounter++;

    if (frameSkipCounter >= maxFrameSkipsTilFlush)
    {
        for (auto it = MDKCache.begin(); it != MDKCache.end();) {
            if (it->second.lastCacheTS <= frameTSFlushThreshold) {
                free(it->second.block.blockPointer);
                it = MDKCache.erase(it); // Delete the entry if it isnt larger than the threshold
            }
            else {
                ++it; // Move to the next element
            }
        }
        frameTSFlushThreshold = currentFrameTS;
        frameSkipCounter = 0;
    }
}
