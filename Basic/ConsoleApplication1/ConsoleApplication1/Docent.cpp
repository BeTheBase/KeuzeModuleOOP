#include "Docent.h"

Docent::Docent() {}

//.Docent::Docent(string name, int age, int workHours) { this->name = name; this->age = age; this->workHours = workHours; }
Docent::Docent(string name, int age, int workHours) : Mens(name, age), workHours(workHours) {}

int Docent::getWorkHours()
{
	return workHours;
}
