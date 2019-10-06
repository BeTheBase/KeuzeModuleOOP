#pragma once
#include <string>
using namespace std;

class Weapon
{
	private:
		float speed;
		float size;

	public:
		Weapon();
		Weapon(float speed, float size);
		virtual void shootGun(float damage);
		virtual void reloadGun(float cooldown);
};
