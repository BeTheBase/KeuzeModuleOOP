#pragma once
#include "Decorator.h"
class Farmer :
	public Decorator
{
public:
	Farmer(NPC* npc);
	virtual~Farmer();

	void render();
};

