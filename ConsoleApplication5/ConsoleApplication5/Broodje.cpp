#include "Broodje.h"

Broodje::Broodje() { std::cout << "Broodje"; }

Broodje::Broodje(std::string type) : type(type) 
{
	std::cout << "broodje ctor:" << type << std::endl;
}

Broodje::~Broodje()
{
	std::cout << "Broodje dtor:" << type << std::endl;
}



std::string Broodje::getType()
{
	return type;
}

void Broodje::setType(std::string type)
{
	type = type;
}
