#include "KoffieApparaat.h"

KoffieApparaat::KoffieApparaat() : koffies(koffies) { }

void KoffieApparaat::acceptKey(HalveEuro& halveEuro)
{
	getKoffie(halveEuro.getValue());
}

void KoffieApparaat::acceptKey(Euro& euro)
{
	getKoffie(euro.getValue());
}

void KoffieApparaat::acceptKey(KoffieMunt& koffieMunt)
{
	getKoffie(koffieMunt.getValue());
}

void KoffieApparaat::getKoffie(int costs)
{
	switch (costs)
	{
		case 1: 
			cout << "Je kunt nu kiezen uit:" << endl;
			for (int i = 0; i < costs; i++)
			{
				cout << koffies[i].getName() << endl;
			}
			break;
		case 2:
			cout << "Je kunt nu kiezen uit:" << endl;
			for (int i = 0; i < costs; i++)
			{
				cout << koffies[i].getName() << endl;
			}
			break;
		case 3:
			cout << "Je kunt nu kiezen uit:" << endl;
			for (int i = 0; i < costs; i++)
			{
				cout << koffies[i].getName() << endl;
			}
			break;
	}
}

void KoffieApparaat::addKoffie(Koffie koffie)
{
	koffies.push_back(koffie);
}
