#include "Weapon.h"
#include <iostream>
Weapon::Weapon() {}
Weapon::Weapon(float speed, float size) : speed(speed), size(size) {}

void Weapon::shootGun(float damage)
{
	cout << "FIRE-Weapon" << endl;

}

void Weapon::reloadGun(float cooldown)
{
}
