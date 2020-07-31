#include <list>
#include <iostream>
#include "WeaponBayClass.h"

using std::list;
using std::cout;
using std::endl;

// Default WeaponBay Constructor
WeaponBay::WeaponBay()
{
	list<Weapon> weaponList;
}

void WeaponBay::addWeapon(Weapon weaponAdding)
{
  weaponList.push_back(weaponAdding);
}

void WeaponBay::removeWeapon(Weapon weaponRemoving)
{
	//weaponList.remove(weaponRemoving);
  for(list<Weapon>::iterator it = weaponList.begin(); it != weaponList.end(); it++)
	{
		if (*it == weaponRemoving)
    {
      delete (*it);
      weaponList.erase(it);
    }
	}
}

// void WeaponBay::releaseWeapon(Weapon weaponReleasing)
// {
// 	weaponList.remove(weaponReleasing);
// }

void WeaponBay::printWeaponList()
{
	for(list<Weapon>::iterator it = weaponList.begin(); it != weaponList.end(); it++)
	{
		cout << it->getName() << endl;
	}
}

// Destructor
WeaponBay::~WeaponBay(){};
