#include "Weapon.h"

Weapon::Weapon() :Weapon(" ", 0, 0, KindOfWeapon::ONEHANDED) {}

Weapon::Weapon(string name, float damage, float weight, KindOfWeapon weaponkind) : name(name), damage(damage), weight(weight), weaponkind(weaponkind) {}

Weapon::~Weapon() {
	cout << "Destructor called for " << name << endl << endl;
}

string Weapon::getName() { return this->name; }

float Weapon::getDamage() { return this->damage; }

float Weapon::getWeight() { return this->weight; }

KindOfWeapon Weapon::getKind() { return this->weaponkind; }

float Weapon::getfullDamage() { return this->getDamage(); }

void Weapon::setDamage(float damage) { this->damage = damage; }

ostream& operator<<(ostream& output, Weapon& weapon)
{
	output << weapon.getweaponkindName() << " \"" << weapon.name << "\": damage = " << weapon.damage << ", weight = " << weapon.weight;
	return output;
}

bool Weapon::raise(float maxWeight) {
	return maxWeight >= this->weight;
}

float Weapon::sumweight(float loadweight) {
	return this->weight + loadweight;
}

float Weapon::sumweight(Weapon& weapon) {
	return sumweight(weapon.weight);
}

bool Weapon:: operator>(Weapon& weapon)
{
	return this->getfullDamage() > weapon.getfullDamage();
}

bool Weapon:: operator<(Weapon& weapon)
{
	return this->getfullDamage() < weapon.getfullDamage();
}

string Weapon::getweaponkindName()
{
	if (this->weaponkind == KindOfWeapon::ONEHANDED) { return "Одноручное оружие"; }

	if (this->weaponkind == KindOfWeapon::TWOHANDED) { return "Двуручное оружие"; }

	if (this->weaponkind == KindOfWeapon::BOW) { return "Лук"; }

	if (this->weaponkind == KindOfWeapon::CROSSBOW) { return "Арбалет"; }

}
