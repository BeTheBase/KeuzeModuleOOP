// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Broodmandje.h"
#include <iostream>
using namespace std;

void geefMandjeDoor(Broodmandje* mandje)
{
	cout << "Mandje gekregen" << endl;
	mandje->show();

	mandje->add("Keizerbroodje");
	mandje->show();
}

int main()
{
	cout << "Mandje 1" << std::endl;
	Broodmandje* mandje = new Broodmandje();
	mandje->show();
	mandje->add("Chrosant");
	mandje->show();

	cout << "Mandje 2" << endl;
	Broodmandje mandje2;
	mandje2 = mandje;
	mandje2.show();
	mandje->add("CocoBroodje");
	mandje2.show();
	delete mandje;
	return(0);
}



