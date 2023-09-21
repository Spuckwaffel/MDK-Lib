#include <iostream>
#include <cstdint>
#include <Windows.h>
#include <tlhelp32.h>
#include "MDK/MDKImports.h"

#include "Memory.h"



int main()
{
    Memory::Memory();

    Memory::load("FortniteClient-Win64-Shipping.exe");

    printf("base: 0x%llX\n", Memory::getBaseAddress());

    if (Memory::getStatus() != Memory::loaded)
        DebugBreak();

    while(true)
    {
	    //cheat logic

        //first make a new frame

        MDKHandler::newFrame();

        //get UWorld, obviously we need to read the address in the .data section fist ._.
        UWorld world = MDKHandler::get<UWorld>(Memory::read<DWORD64>(Memory::getBaseAddress() + 0xE762638));

        if (!world)
        {
            puts("world not initialized!");
            DebugBreak();
        }
        //dDO NOT write anything into the function parameters, they are there for other purposes
        //(check write logic if you really wanna know)
        printf("VTable: %p\n", world.vtable());

        //follow the function to see the type the sdk defined
        //the type in these CMember or DMember or SMember
        //ignore these macros, they are there for the MDK
        const auto gameInstancePtr = world.OwningGameInstance<UGameInstance*>();
        printf("gameinstance: %p\n", gameInstancePtr);
        if(gameInstancePtr)
        {
            UGameInstance gameInstance = MDKHandler::get<UGameInstance>(gameInstancePtr);
            TArray<ULocalPlayer*> localPlayer = gameInstance.LocalPlayers<TArray<ULocalPlayer*>>();
            printf("Localplayer count: %d\n", localPlayer.Count);
            printf("Data: %p\n", localPlayer.Data);

            // example of writing
            /*
            auto pool = world.PSCPool<FWorldPSCPool>();
            auto member = pool.WorldParticleSystemPools<int>();
            // you call this function, in the template you define the Class, specify the datatype
            // as param you specify your object where the write should be, the member (dont forget the &)
            // and then the value
            
            MDKHandler::write<FWorldPSCPool, int>(pool, &FWorldPSCPool::WorldParticleSystemPools<int>, 4555);

            //or

            //use writesilent so it will just write in the cache to queue many small writes
            //this is effective when writing an entire vector and not wasting 3 reads
            
            MDKHandler::writeSilent<FWorldPSCPool, int>(pool, &FWorldPSCPool::WorldParticleSystemPools<int>, 4555);
            MDKHandler::writeSilent<FWorldPSCPool, int>(pool, &FWorldPSCPool::WorldParticleSystemPools<int>, 283);
            MDKHandler::writeSilent<FWorldPSCPool, int>(pool, &FWorldPSCPool::WorldParticleSystemPools<int>, 444);

        	// and then write the entire bulk
            MDKHandler::writeBulk(pool);

            //dont do this with too large structs, it could corrupt other possible data in race conditions!
            //and dont do it with classes
            */
        }

        getchar();
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
