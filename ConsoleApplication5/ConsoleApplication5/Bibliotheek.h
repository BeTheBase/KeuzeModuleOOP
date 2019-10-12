#pragma once

#include <string>
#include "Boek.h"
class Bibliotheek
{
private:
	Boek* boek;
public:
	Bibliotheek();
	~Bibliotheek();
	Bibliotheek(const Bibliotheek& broodmandje);
	Bibliotheek& operator=(const Bibliotheek& anderMandje);
	void show();
	void add(std::string type);
};