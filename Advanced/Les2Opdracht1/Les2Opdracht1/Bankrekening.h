#pragma once
#include <iostream>
#include "Transactie.h";
#include <vector>

using namespace std;

class Bankrekening
{
private:
	int saldo;
	vector<Transactie> transacties;
public:
	Bankrekening() : saldo(0), transacties(transacties) {}
	Bankrekening(int startAmount) : saldo(startAmount) {}
	~Bankrekening();
	void operator +(int amount);
	void operator -(int amount);
	
	friend ostream &operator << (ostream& output, Bankrekening& r);
	int getSaldo();
	vector<Transactie> getTransacties();
	void showTransacties(vector<Transactie> input);
	virtual void Display();

};

