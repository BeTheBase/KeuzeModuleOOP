#include "Soldier.h"
#include <iostream>


Soldier::Soldier(NPC* npc) : Decorator(npc)
{
}


Soldier::~Soldier()
{
}

void Soldier::render()
{
	Decorator::render();
	std::cout << "added: soldier" << std::endl;

}
