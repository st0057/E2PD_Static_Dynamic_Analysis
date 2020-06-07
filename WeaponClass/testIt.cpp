#include "WeaponClass.h"

int main() 
{
  Weapon* Weapon1 = new Weapon("Fat Man", "Nuke", 2.5);

  Weapon1->Stats();

  Weapon* Weapon2 = new Weapon("Little Boy", "Nuke", 1.0);

  Weapon2->Stats();

  delete Weapon1, Weapon2;

  return 0;
}