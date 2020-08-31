#include "WeaponClass.h"
#include "WeaponBayClass.h"

int main() 
{

  Weapon* Weapon1 = new Weapon("Fat Man", "Nuke", 2.5);

  Weapon1->displayStats();

  //Weapon* Weapon2 = new Weapon("Little Boy", "Nuke", 1.0);

  //Weapon2->displayStats();

  WeaponBay* Bay1 = new WeaponBay();

  Bay1->addWeapon(Weapon1);
  std::cout << "Removing..." << std::endl;
  Bay1->removeWeapon(Weapon1);

  delete Bay1;
  // Delete the weapons
  //delete Weapon1;
  //delete Weapon2;

  return 0;
}