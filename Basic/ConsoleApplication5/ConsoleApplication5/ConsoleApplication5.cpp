// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Bibliotheek.h"
#include <iostream>
using namespace std;

int main()
{
	std::cout << "--Bieb 1" << std::endl;
	Bibliotheek bieb1 = Bibliotheek();
	bieb1.show();

	bieb1.add("The Last Wish");
	std::cout << "--Bieb 1" << std::endl;
	bieb1.show();

	Bibliotheek bieb2;
	bieb2 = bieb1; 
	std::cout << "--Bieb 2" << std::endl;
	bieb2.show();

	bieb1.add("Lady of the lake");
	std::cout << "--Bieb 1" << std::endl;
	bieb1.show();

	std::cout << "--Bieb 2" << std::endl;
	bieb2.show();

	return(0);
}



