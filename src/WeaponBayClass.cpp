#include <list>
#include <iostream>

using std::list;
using std::cout;
using std::endl;

// Default WeaponBay Constructor
WeaponBay::WeaponBay()
{
	weaponList = list<Weapon> weaponList;
}

void WeaponBay::addWeapon(Weapon weaponAdding)
{
	//array.push_back(Weapon);
  weaponList.push_back(weaponAdding);
}

void WeaponBay::removeWeapon(Weapon weaponRemoving)
{
	weaponList.remove(weaponRemoving);
}

void WeaponBay::releaseWeapon(Weapon weaponReleasing)
{
	weaponList.remove(weaponReleasing);
}

void WeaponBay::printWeaponList()
{
	for(list<Weapon>::iterator it = weaponList.begin(); it != weaponList.end(); it++)
	{
		cout << it.getName() << endl;
	}
}

// Destructor
WeaponBay::~WeaponBay(){};
