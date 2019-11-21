#pragma once
#include "Weapon.h";

class SubMachineGun : public Weapon
{
	private:

	public:
		SubMachineGun();
		SubMachineGun(float speed, float size);
		void shootGun(float damage) override;
};