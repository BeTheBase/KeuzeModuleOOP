#include "Docent.h"

Docent::Docent() {}

Docent::Docent(string name, int age, int workHours) { this->name = name; this->age = age; this->workHours = workHours; }

string Docent::getName()
{
	return name;
}

int Docent::getAge()
{
	return age;
}

int Docent::getWorkHours()
{
	return workHours;
}
