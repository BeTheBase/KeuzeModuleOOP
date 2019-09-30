#pragma once
#include "Mens.h"

class Student : public Mens
{
	private:
		string name;
		int age;
		int points;
	public:
		Student();
		Student(string name, int age, int points);
		string getName();
		int getAge();
		int getPoints();
};