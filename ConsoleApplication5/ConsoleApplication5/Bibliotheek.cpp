#include "Bibliotheek.h"
#include <iostream>
//constructor
Bibliotheek::Bibliotheek()
{
	std::cout << "Bibliotheek: ctor" << std::endl;
}
//Destructor
Bibliotheek::~Bibliotheek()
{
	std::cout << "Bibliotheek: dtor " << std::endl;
	delete boek;
}

//Copy-constructor
Bibliotheek::Bibliotheek(const Bibliotheek& bieb)
{
	std::cout << "Bibliotheek: copy-ctor" << std::endl;

	if (this == &bieb) return;
	boek = new Boek(bieb.boek->getType());
}

Bibliotheek& Bibliotheek::operator=(const Bibliotheek& andereBieb)
{
	std::cout << "Bibliotheek: assignment operator" << std::endl;
	if (this == &andereBieb) return *this;
	if (boek) delete boek;
	boek = new Boek(andereBieb.boek->getType());
	return *this;
}

void Bibliotheek::show()
{
	if (boek)
		std::cout << "Bibliotheek bevat " << boek->getType() << std::endl;
	else
		std::cout << "Bibliotheek is leeg" << std::endl;
}

void Bibliotheek::add(std::string type)
{
	if (boek) delete boek;
	boek = new Boek(type);
}
