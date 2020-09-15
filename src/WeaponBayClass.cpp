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

// Getter for bay weight 
double WeaponBay::getBayWeight()
{
  return m_bay_weight;
}

// Add a weapon
void WeaponBay::addWeapon(Weapon* weaponAdding)
{
  cout << "Adding " << weaponAdding->getName() << " to " << getName() << endl;
  weaponList.push_back(weaponAdding);
  // Update Bay total weight
  m_bay_weight += weaponAdding.getWeight();
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

      // Update Bay total weight
      m_bay_weight -= (*it)->getWeight();

      delete(*it);
      // Commenting out next block will cause mem leak that static analyzer won't catch
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

// Display Weapons in Bay
void WeaponBay::printWeaponList()
{
	for(list<Weapon*>::iterator it = weaponList.begin(); it != weaponList.end(); it++)
	{
		cout << (*it)->getName() << endl;
	}
}

// Display Weight of Bay
void WeaponBay::printWeaponBayWeight()
{
  cout << getName() << " has a total weight of: " << getBayWeight() << endl;
}

// Destructor
WeaponBay::~WeaponBay(){};
