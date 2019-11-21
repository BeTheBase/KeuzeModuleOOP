#include "Module.h"


Module::Module(string name, int ec, vector<Student*> students, Docent* docent) : name(name), ec(ec), students(students), docent(docent)
{

}

Module::~Module()
{
}

const string Module::getName() const
{
	return name;
}

int Module::getEc() const
{
	return ec;
}

Student* Module::getStudent(int index)
{
	return students[index];
}

Docent* Module::getDocent()
{
	return docent;
}

vector<Student*> Module::getAllStudents()
{
	return students;
}

void Module::setEc(int newEc)
{
	ec = newEc;
}

void Module::initStudentsWithPoints()
{	
	auto i = students.begin();
	while (i != students.end())
	{
		(*i)->setPoints(ec);
		i++;
	}
}
