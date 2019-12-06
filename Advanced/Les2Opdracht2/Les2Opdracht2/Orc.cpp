#include "Orc.h"



Orc::Orc(std::string name)
{
	thisName = name;
}


Orc::~Orc()
{
}

void Orc::render()
{
	std::cout << "My name is: " << thisName << " I am an Orc"<< std::endl;
}
