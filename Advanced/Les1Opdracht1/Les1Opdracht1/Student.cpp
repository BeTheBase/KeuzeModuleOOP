#include "Student.h"



Student::Student()
{
}


Student::~Student()
{
}

Student::Student(string name, int age, int points) : Mens(name, age), points(points)
{
}

int Student::getPoints()
{
	return points;
}

void Student::setPoints(int amount)
{
	points += amount;
}
