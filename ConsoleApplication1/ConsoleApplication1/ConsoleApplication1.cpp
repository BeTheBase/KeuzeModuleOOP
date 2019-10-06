// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Weapon.h"
#include "Docent.h"
#include "Student.h"
#include "Module.h"
#include "WeaponDetector.h";
using namespace std;

int main()
{
	Docent* docent0 = new Docent("Edwin", 37, 10);
	Docent* docent1 = new Docent("Dimme", 23, 15);
	Docent* docent2 = new Docent("Valentijn", 40, 30);

	Student* student0 = new Student("Bas", 20, 60);
	Student* student1 = new Student("Sjors", 23, 60);
	Student* student2 = new Student("Reinier", 21, 58);
	Student* student3 = new Student("Stan", 21, 48);
	Student* student4 = new Student("Hidde", 30, 99);
	Student* student5 = new Student("Mark", 20, 60);
	Student* student6 = new Student("Tim", 19, 120);
	Student* student7 = new Student("Henk", 36, 40);
	Student* student8 = new Student("Pietje", 18, 35);
	Student* student9 = new Student("Walter", 28, 20);

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

	for (int i = 0; i < modules.capacity(); i++)
	{
		cout << "We zijn bezig met de module: " << modules[i]->getName() << endl;
		cout << "We krijgen deze module van: " << modules[i]->getDocent()->getName() << endl;
		cout << "Er zitten: " << modules[i]->getAllStudents().capacity() << " studenten in deze module" << endl;
		cout << "Voor deze module krijg je: " << modules[i]->getEc() << " studiepunten." << endl;
		cout << modules[i]->getDocent()->getName() << " werkt " << modules[i]->getDocent()->getWorkHours() << " uren per week" << endl << endl;
	}

	WeaponDetector detector;
	SubMachineGun subGun;
	AsaultRifle aR;
	Weapon w;
	detector.detectWeapon(subGun);
	detector.detectWeapon(aR);
	detector.detectWeapon(w);

	for (int i = 0; i < 5; i++)
	{
		for (int k = 0; k < 5; k++)
		{
			cout << ".";
		}
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
