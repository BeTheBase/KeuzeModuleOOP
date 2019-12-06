#pragma once
#include "NPC.h"
#include <iostream>

class Elf : public NPC
{
private:
	std::string thisName;
public:
	Elf(std::string name);
	virtual~Elf();

	void render();
};

