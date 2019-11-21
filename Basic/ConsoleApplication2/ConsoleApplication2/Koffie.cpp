#include "Koffie.h"

Koffie::Koffie(string name, int cost) : name(name), cost(cost) {}

string Koffie::getName()
{
	return name;
}

int Koffie::getCost()
{
	return cost;
}
