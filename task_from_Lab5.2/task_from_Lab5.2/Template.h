#pragma once

#include <vector>
#include "Weapon.h"

template<class WeaponClass>
class Hand
{
private:
    WeaponClass* left;
    WeaponClass* right;
    WeaponClass* back;

    vector<WeaponClass*> weapons;

public:    
    Hand() : left(nullptr), right(nullptr) {};
    Hand(WeaponClass& weapon) : Hand() {
        this->take(&weapon);
    }

    WeaponClass* drop() {
        if (weapons.size() > 0) {
            WeaponClass* lastweapon = this->weapons[this->weapons.size() - 1];

            if (lastweapon->getKind() == KindOfWeapon::ONEHANDED) {
                if (this->left == lastweapon) {
                    this->left = nullptr;
                }
                else {
                    this->right = nullptr;
                }
            }
            else if (lastweapon->getKind() == KindOfWeapon::TWOHANDED) {
                this->left = nullptr;
                this->right = nullptr;
            }
            else if (lastweapon->getKind() == KindOfWeapon::BOW) {
                this->left = nullptr;
                this->right = nullptr;
                this->back = nullptr;
            }
            else if (lastweapon->getKind() == KindOfWeapon::CROSSBOW) {
                this->left = nullptr;
                this->right = nullptr;
                this->back = nullptr;
            }

            return lastweapon;
        }

        return nullptr;
    };

    void take(WeaponClass* weapon) {
        this->weapons.push_back(weapon);

        if (weapon->getKind() == KindOfWeapon::ONEHANDED) {
            this->left = weapon;
        }
        else if (weapon->getKind() == KindOfWeapon::TWOHANDED) {
            this->left = weapon;
            this->right = weapon;
        }
        else if (weapon->getKind() == KindOfWeapon::BOW) {
            this->left = weapon;
            this->right = weapon;
            this->back = weapon;
        }
        else if (weapon->getKind() == KindOfWeapon::CROSSBOW) {
            this->left = weapon;
            this->right = weapon;
            this->back = weapon;
        }
    }
};