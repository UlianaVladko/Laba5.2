#include "Disposable.h"

DisposableWeapon::DisposableWeapon() : Weapon(), used(false) {}

DisposableWeapon::DisposableWeapon(string name, float damage, float weight, KindOfWeapon weaponkind) : Weapon(name, damage, weight, weaponkind), used(false) {}

void DisposableWeapon::Attack()
{
	if (this->used)
	{
		cout << "Оружие уже было использовано" << endl;
	}

	else
	{
		this->used = true;
		cout << "Атакуем одноразовым оружием" << endl;
	}
}