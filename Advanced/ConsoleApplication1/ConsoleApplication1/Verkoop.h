#pragma once
#include "BtwBerekening.h";

class Verkoop
{
public:
	Verkoop(int type, float price) : type(type), price(price){}
	virtual~Verkoop();

	void berekenBTW(BtwBerekening* berekening);


private:
	int type;
	float price;
};

