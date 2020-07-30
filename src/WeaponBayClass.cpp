#include <list>
using namespace std;

// Default WeaponBay Constructor
WeaponBay::WeaponBay()
{
	weaponList = std::list<Weapon> weaponList;
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
	for(std::list<Weapon>::iterator it = weaponList.begin(); it != weaponList.end(); it++)
	{
		std::cout << it.getName() << endl;
	}
}

// Destructor
WeaponBay::~WeaponBay(){};
