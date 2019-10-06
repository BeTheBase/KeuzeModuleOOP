#pragma once
#include "Mens.h"

class Student : public Mens
{
	private:
		int points;
	public:
		Student();
		Student(string name, int age, int points);
		int getPoints();
};