#include "Bankrekening.h"




Bankrekening::~Bankrekening()
{
}

void Bankrekening::operator+(int amount)
{
	Transactie transactie = Transactie(saldo);
	transactie+amount;
	saldo = saldo + amount;
	transacties.push_back(transactie);
}

void Bankrekening::operator-(int amount)
{
	Transactie transactie = Transactie(saldo);
	transactie - amount;
	saldo = saldo - amount;
	transacties.push_back(transactie);
}

int Bankrekening::getSaldo() 
{
	return saldo;
}

vector<Transactie> Bankrekening::getTransacties()
{
	return transacties;
}

void Bankrekening::showTransacties(vector<Transactie> input)
{
	for (Transactie transactie : input)
	{
		cout << transactie << endl;
	}
}

void Bankrekening::Display()
{
	cout << "Saldo = " << saldo << endl;
}

ostream& operator<<(ostream& output, Bankrekening& r)
{
	output << "Saldo: " << r.getSaldo() << " Transactie-log: ";  r.showTransacties(r.getTransacties());
	return output;
}


