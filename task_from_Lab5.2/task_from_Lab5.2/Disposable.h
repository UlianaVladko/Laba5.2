#pragma once

#include "Weapon.h"

class DisposableWeapon : public Weapon
{	
	bool used;

public:
	DisposableWeapon();
	DisposableWeapon(string, float, float, KindOfWeapon);

	void Attack();
};