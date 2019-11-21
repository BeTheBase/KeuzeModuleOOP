#include "Docent.h"



Docent::Docent()
{
}


Docent::~Docent()
{
}

Docent::Docent(string name, int age, int workHours) : Mens(name, age), workHours(workHours)
{
}

int Docent::getWorkHours()
{
	return workHours;
}
