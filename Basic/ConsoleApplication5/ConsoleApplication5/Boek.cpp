#include "Boek.h"

Boek::Boek() { std::cout << "Boek: default ctor" << std::endl; }

Boek::Boek(std::string type) : type(type) 
{
	std::cout << "Boek ctor:" << type << std::endl;
}

Boek::~Boek()
{
	std::cout << "Boek dtor:" << type << std::endl;
}

std::string Boek::getType()
{
	return type;
}

void Boek::setType(std::string type)
{
	type = type;
}
