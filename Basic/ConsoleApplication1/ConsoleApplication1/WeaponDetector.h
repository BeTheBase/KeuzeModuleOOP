#pragma once
#include "Weapon.h";
#include "AsaultRifle.h";
#include "SubMachineGun.h";

class WeaponDetector
{
	public:
		void detectWeapon(Weapon& w);
		void detectWeapon(AsaultRifle ar);
		void detectWeapon(SubMachineGun sg);
};