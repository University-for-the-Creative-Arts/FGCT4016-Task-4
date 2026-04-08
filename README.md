# FGCT4016 Task 5 'World Interaction and Components'

## 1. Introduction

The task outlined was to create an Unreal Engine 5 project using C++ that has an interaction system that is modular, extensible and uses a line trace or an overlap as the trigger. The project must have a clear separation between interactable, and interactor, and should use an interface. The importance of using an interface and thus making the system modular allows for quick reuse of the trigger to be applied to separate classes. This can be used for item pick ups, health packs, enemy interaction with environments, players interacting with world elements.

## 2. Implementation

First, an interact interface was made. These scripts do not actually have any code in them, but simply act as a hub for key variables and functions such as `canInteract`, `interactor` and `interact`

![Alt text](./gitimages/ih.png "InteractionInterface.h")

[ Figure 1. InteractionInterface.h  .]

![Alt text](./gitimages/icpp.png "InteractionInterface.cpp")

[ Figure 2. InteractionInterface.cpp  .]


Then, the logic for the interactable actor and the interactor actor were made. What is relevant to the interaction system is the `sphereCollision` lines and `OnOverlapBegin` function. How `OnOverlapBegin` begin works is by checking for an actor that collides with it, and if said actor can be interacted with, it executes the code from the interface in that actor.


![Alt text](./gitimages/Ah.png "TestActor.h")

[ Figure 3. TestActor.h  .]

![Alt text](./gitimages/Acpp.png "TestActor.cpp")

[ Figure 4. TestActor.cpp  .]

The interactable actor then has a print string that executes when the interact interface is called

![Alt text](./gitimages/h.png "InteractableActor.h")

[ Figure 5. InteractableActor.h  .]

![Alt text](./gitimages/cpp.png "InteractableActor.cpp")

[ Figure 6. InteractableActor.cpp  .]

Then to show it work when they collide, the C++ classes were turned into blueprints, placed in the map, and the interactable actor was given projectile movement to make it move into the hitbox in real time

![Alt text](./gitimages/component.png "projectile component")

[ Figure 7. Projectile Movement on the blueprint class of InteractableActor.]




## 3. Outcome

The outcome of the task is an actor that has the ability to trigger code once it overlaps with the hitbox of another actor, using an interface to do so. It does so by having an actor with an overlap function that checks for incoming actors that collide with the actor's hitbox, and then said incoming actors, if they have the interact function, it executes a print string. This system can be expanded to allow for the player itself to interact with things, or the actors can be given logic to act as entities such as enemies.

### 3.1 Video Demonstration

https://youtu.be/w8JP7-9zfVY

## 4. AI Use Declaration

The Epic Developer Assistant for Unreal Engine was used to figure out how to spawn the actor. The functions necessary were known but it took a long time to figure out how to put it together, so the use of the AI assistant sped up the process.