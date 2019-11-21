#include "Module.h"

Module::Module(std::string name, int ec, vector<Student*> students, Docent* docent) : name(name), ec(ec), students(students), docent(docent) {}

const std::string Module::getName() const
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
