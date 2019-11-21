#include "WeaponDetector.h"

void WeaponDetector::detectWeapon(Weapon& w)
{
	w.shootGun(1);
}

void WeaponDetector::detectWeapon(AsaultRifle ar)
{
	ar.shootGun(1);
}

void WeaponDetector::detectWeapon(SubMachineGun sg)
{
	sg.shootGun(1);
}
