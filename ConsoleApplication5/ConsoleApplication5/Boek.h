#pragma once

#include <iostream>
#include <string>

class Boek
{

private:
	std::string type = "onbekend";
public:
	Boek();
	Boek(std::string type);
	virtual ~Boek();
	std::string getType();
	void setType(std::string type);
};