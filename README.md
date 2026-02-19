# FGCT4016 Task 2 'Gameplay Hooks'

## 1. Introduction

The task outlined was to create an Unreal Engine 5 project using C++ that has an AActor that has logic for at least three lifecycle functions, and for the actor to be spawned in runtime rather than it being placed in the editor. The approach used was to reuse the previous task to speed up development time as already the previous task used one of the life cycle functions, and then to add additional logic to each of the lifecycle functions. Then, create a new class that spawns an actor with no rotation at the center point of the axis, which can then be selected in the editor to be the desired actor to spawn. This is important to learn as not only can this logic be used to spawn enemies, projectiles or equipable items, it is also useful as its directly making widgets pop-up in the editor for designers to use.

## 2. Implementation

The project began with creating a new class; `SpawnActor`, to be placed in the world to be a 'spawner' of some sort.

Then, code was added to `SpawnActor.cpp` and `SpawnActor.h` to create the logic necessary. Using the `GetWorld()` function, it checks if there is a valid TestActor class set in the editor and if the world itself is valid with `isValid()`. It then spawns the actor at `(0x,0y,0z)` with no rotation or transform by calling `SpawnActor` on the world to create an instance of `TestActor`. In `SpawnActor.h`, it makes `TestActor` in the code variable by allowing subclasses of `TestActor` to be used, rather than the class in specific.

![Alt text](./gitimages/h.png "spawnactor.h")

[ Figure 1. SpawnActor.h  .]

![Alt text](./gitimages/cpp.png "spawnactor.cpp")

[ Figure 2. SpawnActor.cpp  .]

![Alt text](./gitimages/spawn.png "spawnactor.cpp")

[ Figure 3. SpawnActor in the editor.]

`TestActor` was then modified from the previous task to output text by using the following functions: `OnConstruction()`,`BeginPlay()`, and `Tick()`

![Alt text](./gitimages/Ah.png "TestActor.h")

[ Figure 4. TestActor.h  .]

![Alt text](./gitimages/Acpp.png "TestActor.cpp")

[ Figure 5. TestActor.cpp  .]

## 3. Outcome

The outcome of the task was a system where you have a 'spawner' class that ca be placed into the world, and then spawn an instance of TestActor, or a subclass of it. This can allow for TestActor to be transformed into various types of different actors. Perhaps an enemy and its variants, or  multiple types of collectable items. And once the actor is spawned, it has code that executes on multiple different stages of its lifecycle. The text can be changed to be behavior if this were an actual game rather than c++ tasks. 

### 3.1 Video Demonstration

https://www.youtube.com/watch?v=gpZRsOnCEwk

## 4. Bibliography

## 5. AI Use Declaration

The Epic Developer Assistant for Unreal Engine was used to figure out how to spawn the actor. The functions necessary were known but it took a long time to figure out how to put it together, so the use of the AI assistant sped up the process.