#include <list>
#include <iostream>
#include "WeaponBayClass.h"
#include "WeaponClass.h"

using std::list;
using std::cout;
using std::endl;

// Default WeaponBay Constructor
WeaponBay::WeaponBay()
{
	
}

// Weapon Constructor
WeaponBay::WeaponBay(string name)
{
  m_name = name;
  list<Weapon*> weaponList;
}

// Getter for name 
string WeaponBay::getName()
{
  return m_name;
}

// Add a weapon
void WeaponBay::addWeapon(Weapon* weaponAdding)
{
  cout << "Adding " << weaponAdding->getName() << " to " << getName() << endl;
  weaponList.push_back(weaponAdding);
}

// Remove a weapon
void WeaponBay::removeWeapon(Weapon* weaponRemoving)
{
//	weaponList.remove(weaponRemoving);
  for(list<Weapon*>::iterator it = weaponList.begin(); it != weaponList.end(); it++)
	{
		if (*it == weaponRemoving)
    {
      cout << "Removing " << (*it)->getName() << " from " << getName() << endl;
      delete(*it);
      weaponList.erase(it);
      break;
    }
	}
}

// Remove all weapons
void WeaponBay::removeAllWeapons()
{
  while(weaponList.size() > 0)
  {
    list<Weapon*>::iterator it = weaponList.begin();
    cout << "Removing " << (*it)->getName() << " from " << getName() << endl;
    delete(*it);
    weaponList.pop_front();
  }
  cout << "All weapons removed from " << getName() << endl;
}

// void WeaponBay::releaseWeapon(Weapon weaponReleasing)
// {
// 	weaponList.remove(weaponReleasing);
// }

void WeaponBay::printWeaponList()
{
	for(list<Weapon*>::iterator it = weaponList.begin(); it != weaponList.end(); it++)
	{
		cout << (*it)->getName() << endl;
	}
}

// Destructor
WeaponBay::~WeaponBay(){};
