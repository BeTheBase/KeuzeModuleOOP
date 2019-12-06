#include "Shaman.h"
#include <iostream>


Shaman::Shaman(NPC* npc) : Decorator(npc)
{
}


Shaman::~Shaman()
{
}

void Shaman::render()
{
	Decorator::render();
	std::cout << "added: shaman" << std::endl;
}
