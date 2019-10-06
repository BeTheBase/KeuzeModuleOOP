#pragma once
#include "Mens.h"

class Docent : public Mens
{
	private:
		int workHours;
	public:
		Docent();
		Docent(string name, int age, int workHours);
		int getWorkHours();
};