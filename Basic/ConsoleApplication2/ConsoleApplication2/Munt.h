#pragma once
#include <iostream>
using namespace std;

class Munt
{
	private:
		string name;
		int value;
	public:
		Munt();
		Munt(string name, int value);
		string getName();
		int getValue();
};