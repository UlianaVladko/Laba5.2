#pragma once

#include <iostream>
#include <string>
using namespace std;

enum class KindOfWeapon : int
{
	ONEHANDED,
	TWOHANDED,
	BOW,
	CROSSBOW
};

class Weapon
{
private:
	string name;
	float damage;
	float weight;

	KindOfWeapon weaponkind;

public:
	Weapon();

	Weapon(string, float, float, KindOfWeapon);

	~Weapon();

	KindOfWeapon getKind();

	string getName();
	float getWeight();
	float getDamage();

	virtual float getfullDamage();

	void setDamage(float);

	friend ostream& operator<<(ostream&, Weapon&);

	bool operator>(Weapon&);
	bool operator<(Weapon&);

	bool raise(float);
	float sumweight(float);
	float sumweight(Weapon&);
	string getweaponkindName();

	virtual void Attack() = 0;
};