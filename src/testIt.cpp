#include "WeaponClass.h"
#include "WeaponBayClass.h"

int main() 
{

  Weapon* Weapon1 = new Weapon("Fat Man", "Nuke", 2.5);

  Weapon1->displayStats();

  Weapon* Weapon2 = new Weapon("Little Boy", "Nuke", 1.0);

  Weapon2->displayStats();

  WeaponBay* Bay1 = new WeaponBay("Bay 1");

  Bay1->addWeapon(Weapon1);
  Bay1->addWeapon(Weapon2);
  Bay1->removeAllWeapons();

  delete Bay1;

  Weapon* Weapon3 = new Weapon("Stinky", "Missile", 2.5);

  Weapon3->displayStats();

  WeaponBay* Bay2 = new WeaponBay("Bay 2");

  Bay2->addWeapon(Weapon3);
  Bay2->removeWeapon(Weapon3);

  delete Bay2;

  return 0;
}