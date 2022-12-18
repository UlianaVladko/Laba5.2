
#include "Weapon.h"
#include "Magic.h"
#include "User.h"
#include "Disposable.h"
#include "Template.h"
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");      
    
    MagicWeapon Wand("Волшебная палочка", 50000, 2000, 0.3, KindOfWeapon::ONEHANDED);
    cout << Wand << endl;
    Wand.Attack();
    
    //создание экземпляра класса одноразового оружия и вызов метода Attack дважды (№8)
    DisposableWeapon AK("AK-47", 36, 4.79, KindOfWeapon::TWOHANDED);
    cout << AK << endl;

    AK.Attack();
    AK.Attack();
        
    Hand<MagicWeapon> HandedMagicWeapon(Wand);
    Hand<DisposableWeapon> HandedDisposableWeapon(AK);

    cout << endl; 

}

