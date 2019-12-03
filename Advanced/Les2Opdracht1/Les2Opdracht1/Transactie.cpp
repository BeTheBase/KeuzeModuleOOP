#include "Transactie.h"
#include <string>
#include <sstream>


Transactie::Transactie(int currentSaldo) : moneyAmount(currentSaldo)
{
	time(&rawTime);
	tme = gmtime(&rawTime);
}

Transactie::~Transactie()
{
}

void Transactie::operator+(int amount)
{
	afbijSchriftString = "Bijschrift";
	moneyAmount = amount;
}

void Transactie::operator-(int amount)
{
	afbijSchriftString = "Afschrift";
	moneyAmount = amount;
}

int Transactie::getAmount() 
{
	return moneyAmount;
}

int Transactie::setAmount(int amount)
{
	moneyAmount = amount;
	return moneyAmount;
}

string Transactie::getTime() 
{
	char buffer[80];

	time(&rawTime);
	tme = gmtime(&rawTime);

	strftime(buffer, sizeof(buffer), "%d-%m-%Y %H:%M:%S", tme);
	std::string str(buffer);
	return str;
}

void Transactie::draw()
{
	cout << " Transactie op datum:" << getTime() << " heeft: " << moneyAmount << " af/bij geschreven" << endl;
}

string Transactie::getSchriftString()
{
	return afbijSchriftString;
}

ostream& operator<<(ostream& output,  Transactie& r)
{
	output << " Transactie op datum:" << r.getTime() << " heeft: " << r.getAmount() << " euro " << r.getSchriftString();
	return output;
}
