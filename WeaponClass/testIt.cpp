#include "WeaponClass.h"

int main() 
{
  int abc = 0;
  int* abcPtr = &abc;
  Weapon* Weapon1 = new Weapon("Fat Man", "Nuke", 2.5);

  Weapon1->displayStats();

  Weapon* Weapon2 = new Weapon("Little Boy", "Nuke", 1.0);

  Weapon2->displayStats();

  // Delete the weapons
  //delete Weapon1;
  delete Weapon2;

  return 0;
}