#pragma once
class Weapon
{
	private:float speed;
	private:float size;
	public:Weapon(float s, float sp)
	{
		size = s;
		speed = sp;
	}

	void shootGun(float damage);
	void reloadGun(float cooldown);

};
