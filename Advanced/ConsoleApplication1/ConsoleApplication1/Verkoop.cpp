#include "Verkoop.h"
#include "IOstream";

Verkoop::~Verkoop()
{
}

void Verkoop::berekenBTW(BtwBerekening* berekening)
{
	float btw = berekening->geefBTW(type, price);

	float totaalbedrag = price + btw;

	std::cout << "Totaalbedrag :" << totaalbedrag << std::endl;
}
