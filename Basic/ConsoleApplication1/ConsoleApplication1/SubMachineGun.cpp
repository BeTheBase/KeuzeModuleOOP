#include "SubMachineGun.h"
#include <iostream>;

SubMachineGun::SubMachineGun()
{
}

SubMachineGun::SubMachineGun(float speed, float size) : Weapon(speed, size) {}


void SubMachineGun::shootGun(float damage)
{
	cout << "FIRE-SUBMACHINE" << endl;
}
