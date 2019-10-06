#pragma once
#include <iostream>
#include "HalveEuro.h";
#include "Euro.h";
#include "KoffieMunt.h";
#include "Koffie.h";
#include <vector>

class KoffieApparaat
{
private:
	vector<Koffie> koffies;
public:
	KoffieApparaat();
	void acceptKey(HalveEuro& halveEuro);
	void acceptKey(Euro& euro);
	void acceptKey(KoffieMunt& koffieMunt);
	void getKoffie(int costs);
	void addKoffie(Koffie koffie);
};