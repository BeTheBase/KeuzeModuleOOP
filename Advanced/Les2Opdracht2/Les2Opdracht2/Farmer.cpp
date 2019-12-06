#include "Farmer.h"
#include <iostream>


Farmer::Farmer(NPC* npc) : Decorator(npc)
{
}


Farmer::~Farmer()
{
}

void Farmer::render()
{
	Decorator::render();
	std::cout << "added: farmer" << std::endl;
}


