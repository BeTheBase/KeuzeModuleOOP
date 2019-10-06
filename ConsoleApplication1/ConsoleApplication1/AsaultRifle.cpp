#include "AsaultRifle.h";
#include <iostream>

AsaultRifle::AsaultRifle()
{
}

AsaultRifle::AsaultRifle(float speed, float size) : Weapon(speed, size) {}

void AsaultRifle::shootGun(float damage)
{
	cout << "FIRE-AR" << endl;
}
