#include "Decorator.h"



Decorator::Decorator(NPC* npc)
{
	theNpc = npc;
}

Decorator::~Decorator()
{
	if (theNpc) delete theNpc;
}

void Decorator::render()
{
	if (theNpc) theNpc->render();
}
