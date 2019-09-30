#include "Student.h"

Student::Student() {}


//Student::Student(string name, int age) : name(name), age(age) {} // this is more efficient
Student::Student(std::string name, int year, int points) { this->name = name; this->age = age; this->points = points; } // this works the same as above but les efficient


string Student::getName()
{
	return name;
}

int Student::getAge()
{
	return age;
}

int Student::getPoints()
{
	return points;
}


