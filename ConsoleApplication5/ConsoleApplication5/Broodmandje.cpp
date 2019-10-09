#include "Broodmandje.h"
#include <iostream>
//constructor
Broodmandje::Broodmandje()
{
}
//Destructor
Broodmandje::~Broodmandje()
{
	std::cout << "Broodmandje: dtor " << std::endl;
	delete broodje;
}
//Copy-constructor
Broodmandje::Broodmandje(const Broodmandje& broodmandje)
{
	std::cout << "Broodmandje: copy-ctor" << std::endl;

	if (broodje) delete broodje;
	broodje = new Broodje();
	broodje->setType(broodmandje.broodje->getType());
}

Broodmandje& Broodmandje::operator=(const Broodmandje& anderMandje)
{
	std::cout << "Broodmandje: assignment operator" << std::endl;
	if (this == &anderMandje) return *this;
	if (broodje) delete broodje;
	broodje = new Broodje();
	broodje->setType(anderMandje.broodje->getType());

	return *this;
}

void Broodmandje::show()
{
	if (broodje)
		std::cout << "broodjemandje bevat " << broodje->getType() << std::endl;
	else
		std::cout << "broodmandje is leeg" << std::endl;
}

void Broodmandje::add(std::string type)
{
	broodje = new Broodje(type);
}
