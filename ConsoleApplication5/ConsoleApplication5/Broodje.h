#pragma once

#include <iostream>
#include <string>

class Broodje
{

private:
	std::string type = "onbekend";
public:
	Broodje();
	Broodje(std::string type);
	~Broodje();
	std::string getType();
	void setType(std::string type);
};