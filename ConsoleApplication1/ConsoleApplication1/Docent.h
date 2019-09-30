#pragma once
#include "Mens.h"

class Docent : public Mens
{
	private:
		string name;
		int age;
		int workHours;
	public:
		Docent();
		Docent(string name, int age, int workHours);
		string getName();
		int getAge();
		int getWorkHours();
};