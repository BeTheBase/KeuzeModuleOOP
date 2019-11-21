#pragma once
#include "Weapon.h";

class AsaultRifle : public Weapon
{
	private:

	public:
		AsaultRifle();
		AsaultRifle(float speed, float size);
		void shootGun(float damage) override;
};