# MDK-Lib

<img src="https://komarev.com/ghpvc/?username=spuckwaffel-MDK-Lib&label=Project+Views&style=flat-square" alt="Project Views" />

MDK review for the upcoming next generation SDK

I'm releasing a brand-new SDK type, called MDK for Unreal Engine, which I've created, especially targeting external projects. Maybe you're wondering, "why?"

Don't get me wrong, SDKs are awesome. Especially in game hacking, internal or external, it's awesome just reading a class out of memory and directly knowing what is going on. Dumpers exist now very long, and everyone uses SDKs nowadays. The end user of these dumpers mostly just set the offsets (sometimes this isn't even required) and the dumper will generate them their SDK they can include in their project. It's designed to be very easy and reliable.
However, for the creator of the dumpers, it was always a challenge to create an SDK working out of the box. Of course, when you generate the SDK from the games' memory it requires some package reordering etc. so there will be no SDK errors. 
It may sound simple, but the challenge got harder and harder with larger games and hundreds of classes with confusing names, redefinition of classes, redefinition of names and more. 

Nowadays, there exist two dumpers that are publicly known and actively in development for the newest Unreal Engine versions:
Dumper-7 ([URL="https://github.com/Encryqed/Dumper-7"]https://github.com/Encryqed/Dumper-7[/URL]) and UEDumper [URL="https://github.com/Spuckwaffel/UEDumper"]https://github.com/Spuckwaffel/UEDumper[/URL], my personal dumper. Both of the dumpers work under the hood the same, Dumper-7 is internal, my dumper is external. 

I talked a lot with the co-owner of Dumper-7, "Fischsalat", how he fixes the issues with the SDK generation, especially cyclic dependencies, because if you try to use an SDK for the popular game Fortnite, you get thousands of errors. The short answer was, [B]you can't really fix it[/B]. And that's true, multiple classes have cyclic dependencies, and there's no way how to fix them unless you merge the classes together, merge the imports, reorder the structs, etc. etc.
And even if you have done that, there are still many redefinitions of classes, and names which are spread everywhere. 
And even if you fixed that, you still have the issue with padding. If a member is not defined in a class, you have to fill that gap with padding. And sometimes the class even has additional passing, but a class that inherits that class does not have that padding! Confusing, right? Class A says it has the size 0x180, class B which inherits class A, has a member at offset 0x178. How does that make sense? And this is where padding issues arise. Of course, you could add many checks, but at some point it's not worth it anymore, and don't forget all the debugging time when something isn't working. An easy way is just using the offsets directly, aka *(int*)(base + 0xABC) or external with your readmemory function, however this defeats the entire SDK purpose with using the names and get the data directly, and you have to waste a single read just for a few bytes of data if you are externally. 

This is where my idea of a different SDK approach came into my mind. 

What if instead of using members in a class, you just call functions with the name of a member that will do the reading via offset under the hood, but not wasting an entire game memory read and rather read the entire class into a memory buffer and then extract the few bytes out of that memory block?
-> This is exactly what I have done, and with this, the most frustrating part with wrong class padding is out of the way. Now back to the cyclic dependencies. I have exactly done that what I mentioned. I merged the classes, merged the imports and reordered the classes. After hours of debugging, this works now too.
Now, what about the missing definitions of a member type within a class? Pointers are easy, just define the class above, however for structs within a class that aren't a pointer, you would have to declare the entire class before. And this gets really frustrating because this is even more complicated. An easy fix would be to use Templates whenever there's a struct and the user should define it when calling the function manually, it might sound weird at the beginning, but it resolves all the issues and wasting a second writing a template name is better than a broken SDK right? 

With all the issues fixed and with all the explanation done, let's take a look how the MDK works. The MDK itself is capable of memory management, meaning that if you try to get the same memory twice, it will use the same memory buffer. Memory also gets deallocated after n frames of inactivity, so your heap doesn't blow up.


``void MDKHandler::newFrame()``
This function has to be called every new frame or beginning of your read loop, so the cached data gets overwritten with newer data.

```
template< typename T, typename X = MDKBase>
MDKHandler::static T get(DWORD64 gamePointer, bool cache = true)
```
Initializes a new memory block for the given class/struct at the pointer and manages all the memory for you

Example:
```
//get UWorld, obviously we need to read the address in the .data section fist ._.
//the second param in the template is the class + lower we want to disclude
//it will just cache UWorld without UObect and all classes below, meaning that uobject is empty
//also its your job to set a good lowerbound, if you try to read something from uobject, its going to be just 0
//its no problem rereading somewhere in the loop the pointer again with a lower lowerbound, it will read those bytes then
//e.g now you choose uobject as lowerbound but later you need uobject, you reread and specify MDKBase as lowerbound, or leave empty
        UWorld world = MDKHandler::get<UWorld, UObject>(Memory::read<DWORD64>(Memory::getBaseAddress() + 0x4E0EFF0));
```
this would read the uworld class with the UObject class being empty, because we don't need the memory from there and so we dont read too much memory

The uworld class for example looks line this:
```
/// Class /Script/Engine.World
/// Size: 0x08C0 (0x000028 - 0x0008E8)
class UWorld : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2280;

public:
	CMember(ULevel*)                                   PersistentLevel                                             OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UNetDriver*)                               NetDriver                                                   OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(ULineBatchComponent*)                      LineBatcher                                                 OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(ULineBatchComponent*)                      PersistentLineBatcher                                       OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(ULineBatchComponent*)                      ForegroundLineBatcher                                       OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(AGameNetworkManager*)                      NetworkManager                                              OFFSET(get<T>, {0x58, 8, 0, 
...
};
```

Getting a "member" works like this:
```world.vtable()``` if the member has no custom type like a class pointer or struct, e.g a float, bool, etc.
or like this:
```auto gameInstancePtr = world.OwningGameInstance<UGameInstance*>();```
Which is pretty simple.

Now normally you would get the entire class with MDKHandler::get again, however if you only need a single member out of the class, you can use this:

```
const TArray<ULocalPlayer*> tlocalPlayer =
            MDKHandler::readSingle<UGameInstance, TArray<ULocalPlayer*>>(gameInstancePtr, &UGameInstance::LocalPlayers);
```
Which takes the class and target as template input and in the params the pointer to the class and second the member of the class.

very, very simple.


My dumper can generate these powerful MDKs, get it from [https://github.com/Spuckwaffel/UEDumper](https://github.com/Spuckwaffel/UEDumper)


A video showcasing the ease and compiletime: [https://youtu.be/j1RFBDpjW6E](https://youtu.be/j1RFBDpjW6E)

Image showcasing the example working (no valid pawn because it wasnt ingame, also showing that the vtable from uworld is 0 because its in uobject which was excluded):
[https://i.imgur.com/BJnWbAw.png](https://i.imgur.com/BJnWbAw.png)

Have fun!
