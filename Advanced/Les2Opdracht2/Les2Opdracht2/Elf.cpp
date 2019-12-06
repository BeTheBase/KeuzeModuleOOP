#include "Elf.h"



Elf::Elf(std::string name)
{
	thisName = name;
}


Elf::~Elf()
{
}

void Elf::render()
{
	std::cout << "My name is: " << thisName << " I am an Elf"<< std::endl;
}

