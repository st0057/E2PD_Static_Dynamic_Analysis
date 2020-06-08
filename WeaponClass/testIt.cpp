#include "WeaponClass.h"

int main() 
{
  Weapon* Weapon1 = new Weapon("Fat Man", "Nuke", 2.5);

  Weapon1->Stats();

  Weapon* Weapon2 = new Weapon("Little Boy", "Nuke", 1.0);

  Weapon2->Stats();

  // Delete the weapons
  delete Weapon1;
  delete Weapon2;

  return 0;
}