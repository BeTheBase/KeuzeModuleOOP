#pragma once
#include <iostream>
using namespace std;

class Koffie
{
private:
	string name;
	int cost;
public:
	Koffie();
	Koffie(string name, int cost);
	string getName();
	int getCost();
};