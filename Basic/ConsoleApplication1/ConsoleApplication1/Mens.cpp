#include "Mens.h"

Mens::Mens() {}

Mens::Mens(string name, int age) : name(name), age(age) {}

string Mens::getName()
{
	return name;
}

int Mens::getAge()
{
	return age;
}
