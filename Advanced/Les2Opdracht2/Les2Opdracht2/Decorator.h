#pragma once
#include "NPC.h";
class Decorator : public NPC
{
private:
	NPC* theNpc;
public:
	Decorator(NPC* npc);
	virtual~Decorator();
	virtual void render();
};

