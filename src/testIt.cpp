#include "WeaponClass.h"
#include "WeaponBayClass.h"

int main() 
{
  // Dynamically allocate a weapon
  Weapon* Weapon1 = new Weapon("Fat Man", "Nuke", 2.5);

  // Display the Weapon's stats
  Weapon1->displayStats();

  // Dynamically allocate a weapon
  Weapon* Weapon2 = new Weapon("Little Boy", "Nuke", 1.0);

  // Display the Weapon's stats
  Weapon2->displayStats();

  // Dynamically allocate a WeaponBay
  WeaponBay* Bay1 = new WeaponBay("Bay 1");

  // Print the empty Bay weight
  Bay1->printWeaponBayWeight();

  // Add weapons to the bay
  Bay1->addWeapon(Weapon1);
  Bay1->addWeapon(Weapon2);

  // Print the Bay weight
  Bay1->printWeaponBayWeight();

  // Remove all the Weapons from the Bay
  Bay1->removeAllWeapons();

  // Print the Bay weight
  Bay1->printWeaponBayWeight();

  // Deallocate the memory for the Bay
  delete Bay1;

  // Dynamically allocate another weapon
  Weapon* Weapon3 = new Weapon("Stinky", "Missile", 2.5);

  // Dynamically allocate another Bay
  WeaponBay* Bay2 = new WeaponBay("Bay 2");

  // Adde the weapon to the bay
  Bay2->addWeapon(Weapon3);

  // Remove the Weapon
  Bay2->removeWeapon(Weapon3);

  // Delete the Bay
  delete Bay2;

  return 0;
}