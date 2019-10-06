// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include "KoffieApparaat.h";
#include "Euro.h";
#include "HalveEuro.h";
#include "KoffieMunt.h";

int main()
{
	KoffieApparaat myKoffieApparaat;

	Euro eurotje = Euro("Euro", 2);
	HalveEuro halveEuro = HalveEuro("HalveEuro", 1);
	KoffieMunt koffieMunt = KoffieMunt("KoffieMunt", 3);
	Koffie koffie0 = Koffie("zwarteKoffie", 1);
	Koffie koffie1 = Koffie("espresso", 2);
	Koffie koffie2 = Koffie("Cappuchino", 3);
	myKoffieApparaat.addKoffie(koffie0);
	myKoffieApparaat.addKoffie(koffie1);
	myKoffieApparaat.addKoffie(koffie2);


	cout << "We gooien er een halve euro in:" << endl;
	myKoffieApparaat.acceptKey(halveEuro);
	cout << endl;
	cout << "We gooien er een eurotje in:" << endl;
	myKoffieApparaat.acceptKey(eurotje);
	cout << endl;
	cout << "We gooien er een speciaal koffiemuntje in:" << endl;
	myKoffieApparaat.acceptKey(koffieMunt);
}


