#include "Mens.h"



Mens::Mens()
{
}

Mens::Mens(const string name, int age) : age(age), name(name)
{
}


Mens::~Mens()
{
}

int Mens::getAge()
{
	return age;
}

string Mens::getName()
{
	return name;
}
