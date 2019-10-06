#include "Student.h"

Student::Student() {}


//Student::Student(string name, int age) : name(name), age(age) {} // this is more efficient
//Student::Student(string name, int year, int points) { this->name = name; this->age = age; this->points = points; } // this works the same as above but les efficient

Student::Student(string name, int age, int points) : Mens(name, age), points(points) {}

int Student::getPoints()
{
	return points;
}


