#pragma once
#include "Decorator.h"
#include <iostream>

class Orc :	public NPC
{
private:
	std::string thisName;
public:
	Orc(std::string name);
	virtual~Orc();

	void render();
};

