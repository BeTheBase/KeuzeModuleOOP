#include "Munt.h"

Munt::Munt() : name(name), value(value) {}

Munt::Munt(string name, int value) : name(name), value(value) {}

string Munt::getName()
{
	return name;
}

int Munt::getValue()
{
	return value;
}
