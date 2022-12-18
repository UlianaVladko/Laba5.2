#pragma once

#include "weapon.h"

class MagicWeapon :
	public Weapon {
private:
	float bonusDamage;

public:
	MagicWeapon();
	MagicWeapon(string, float, float, float, KindOfWeapon);

	float getbonusDamage();

	virtual float getfullDamage();

	friend ostream& operator<<(ostream&, MagicWeapon&);

	void Attack();
};