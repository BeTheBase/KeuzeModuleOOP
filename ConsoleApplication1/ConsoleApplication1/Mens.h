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
		virtual int getAge();
		virtual string getName();
};