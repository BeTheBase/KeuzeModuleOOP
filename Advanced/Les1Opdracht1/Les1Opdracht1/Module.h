#pragma once
#include <array> 
#include "Docent.h"
#include "Student.h"
#include <vector>

class Module
{
private:
	string name;
	int ec;

	vector<Student*> students;
	Docent* docent;
public:
	Module(string name, int ec, vector<Student*> students, Docent* docent);
	~Module();
	const string getName() const;
	int getEc() const;
	Student* getStudent(int index);
	Docent* getDocent();
	vector<Student*> getAllStudents();
	void setEc(int newEc);
	void initStudentsWithPoints();
};

