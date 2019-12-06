#pragma once
#include "Decorator.h"
class Soldier :
	public Decorator
{
public:
	Soldier(NPC* npc);
	virtual ~Soldier();

	void render();
};

