#pragma once
#include <ctime>
#include <iostream>
using namespace std;
class Transactie
{
private:
	int moneyAmount;
	time_t rawTime;
	struct tm* tme;
	std::string afbijSchriftString;
public:
	Transactie(int currentSaldo);
	~Transactie();
	//Bijschrijven
	void operator +(int amount);
	//Afschrijven
	void operator -(int amount);

	friend ostream& operator << (ostream& output, Transactie& r);

	int getAmount();
	int setAmount(int amount);
	string getTime();
	void draw();
	string getSchriftString();

};

