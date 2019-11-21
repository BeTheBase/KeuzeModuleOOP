#pragma once
#include <string>
using namespace std;

class Mens
{
	private:
		int age;
		string name;
	public:
		Mens();
		Mens(const string name, int age);
		virtual int getAge();
		virtual string getName();
};