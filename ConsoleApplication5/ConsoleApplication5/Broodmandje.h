#pragma once

#include <string>
#include "Broodje.h"
class Broodmandje
{
private:
	Broodje* broodje;
public:
	Broodmandje();
	~Broodmandje();
	Broodmandje(const Broodmandje* broodmandje);
	Broodmandje& operator=(const Broodmandje& anderMandje);
	void show();
	void add(std::string type);
};