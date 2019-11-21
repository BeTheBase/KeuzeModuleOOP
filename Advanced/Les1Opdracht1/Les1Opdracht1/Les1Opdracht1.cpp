
#include <iostream>
#include "Mens.h";
#include "Docent.h";
#include "Student.h";
#include "Module.h";

int main()
{
	Docent* docent0 = new Docent("Edwin", 37, 10);
	Docent* docent1 = new Docent("Dimme", 23, 15);
	Docent* docent2 = new Docent("Valentijn", 40, 30);

	Student* student0 = new Student("Bas", 20, 0);
	Student* student1 = new Student("Sjors", 23, 0);
	Student* student2 = new Student("Reinier", 21, 0);
	Student* student3 = new Student("Stan", 21, 0);
	Student* student4 = new Student("Hidde", 30, 0);
	Student* student5 = new Student("Mark", 20, 0);
	Student* student6 = new Student("Tim", 19, 0);
	Student* student7 = new Student("Henk", 36, 0);
	Student* student8 = new Student("Pietje", 18, 0);
	Student* student9 = new Student("Walter", 28, 0);

	vector<Student*> students;

	students.push_back(student0);
	students.push_back(student1);
	students.push_back(student2);
	students.push_back(student3);
	students.push_back(student4);
	students.push_back(student5);
	students.push_back(student6);
	students.push_back(student7);
	students.push_back(student8);
	students.push_back(student9);

	Module* module0 = new Module("OOP", 2, students, docent0);
	Module* module1 = new Module("Interface Design", 2, students, docent1);
	Module* module2 = new Module("New Tech", 2, students, docent2);

	vector<Module*> modules;

	modules.push_back(module0);
	modules.push_back(module1);
	modules.push_back(module2);

	auto l = modules.begin();
	while (l != modules.end())
	{
		(*l)->initStudentsWithPoints();
		l++;
	}

	for (int i = 0; i < modules.capacity(); i++)
	{
		cout << "We zijn bezig met de module: " << modules[i]->getName() << endl;
		cout << "We krijgen deze module van: " << modules[i]->getDocent()->getName() << endl;
		cout << "Er zitten: " << modules[i]->getAllStudents().capacity() << " studenten in deze module" << endl;
		cout << "Voor deze module krijg je: " << modules[i]->getEc() << " studiepunten." << endl;
		cout << modules[i]->getDocent()->getName() << " werkt " << modules[i]->getDocent()->getWorkHours() << " uren per week" << endl << endl;
	}
	
	auto it = students.begin();

	while (it != students.end())
	{		
		cout << "Student:" << (*it)->getName() << " heeft :"<< (*it)->getPoints() << "EC" << endl;
		it++;
	}

	module1->setEc(5);
	modules.at(1) = module1;
	modules[1]->initStudentsWithPoints();

	cout << endl;
	cout << "Now we added some points for each module" << endl << endl;
	auto ite = students.begin();

	while (ite != students.end())
	{
		cout << "Student:" << (*ite)->getName() << " heeft :" << (*ite)->getPoints() << "EC" << endl;
		ite++;
	}

	return(0);
}

