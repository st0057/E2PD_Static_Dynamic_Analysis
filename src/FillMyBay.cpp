#include "WeaponClass.h"
#include "WeaponBayClass.h"
#include <iostream>
#include <list>
#include <string>

using std::endl;      
using std::cout;
using std::cin;
using std::list;
using std::string;

int main() 
{
  // Go into bay options
  bayOptions(weaponBayList);

  return 0;
}

void bayOptions()
{
  list<WeaponBay> weaponBayList;
  int option = 1;
  while(option != 0)
  {
    cout << "What would you like to do?" << endl;
    cout << "  1. Build a bay." << endl;
    cout << "  2. Delete a bay." << endl;
    cout << "  3. Edit a bay." << endl;
    cout << "  0. To Exit." << endl;
    cout << ">>>";
    cin >> option;
    
    // Execute option 
    switch(option)
    {
      // Exit Option
      case 0 :
        // TODO: add step to clean up weaponBayList
        cout << "Exiting..." << endl;
        break;
      
      // Build a Bay Option
      case 1 :
        string bayName;
        // Name the new weapon bay
        cout << "What will you call the new bay?" << endl;
        cin >> bayName;
        // Dynamically add new weapon bay to list
        weaponBayList.push_back(new WeaponBay(bayName));
      
      // Delete a Bay Option
      case 2 :
        string bayName;
        // Pick bay to delete
        cout << "Which bay do you want to delete?" << endl;
        for(list<WeaponBay>::iterator it = weaponBayList.begin(); it != weaponList.end(); it++)
        {
          cout << it.getName() << endl;
        }
        cin >> bayName;
        // Check it is a real bay and delete it
        for(list<WeaponBay>::iterator it = weaponBayList.begin(); it != weaponList.end(); it++)
        {
          if (it.getName() == bayName)
            {
              // Delete bay contents
              it.removeAllWeapons()
              // Delete the bay
              delete(it);
            }
          else
            {
              cout << "Not a valid Bay Name." << endl;
            }
        }

      // Edit a Bay Option
      case 3 :
        string bayName;
        // Pick bay to edit
        cout << "Which bay do you want to edit?" << endl;
        for(list<WeaponBay>::iterator it = weaponBayList.begin(); it != weaponList.end(); it++)
        {
          cout << it.getName() << endl;
        }
        cin >> bayName;
        // Check it is a real bay and edit it
        for(list<WeaponBay>::iterator it = weaponBayList.begin(); it != weaponList.end(); it++)
        {
          if (it.getName() == bayName)
            {
              // Edit bay contents
              editBay(it);
            }
          else if(it == weaponBayList.end())
            {
              cout << "Not a valid Bay Name." << endl;
            }
        }
    }
  }
}

void editBay(WeaponBay& weaponBay)
{
  int option = 1;
  while(option != 0)
  {
    cout << "Current weapons in bay: " << endl;
    cout << weaponBay.printWeaponList() << endl;

    cout << "What would you like to do?" << endl;
    cout << "  1. Add a weapon." << endl;
    cout << "  2. Delete a weapon." << endl;
    cout << "  3. Edit a weapon." << endl;
    cout << "  4. Delete all weapons." << endl;
    cout << "  0. To return to prevous options." << endl;
    cout << ">>>";
    cin >> option;
    
    // Execute option 
    switch(option)
    {
      case 0 :
        continue;
      
      // Add a Weapon Option
      case 1 :
        string name, type;
        double weight;
        cout << "Name your weapon: " << endl;
        cin >> name;
        cout << "Type of weapon: " << endl;
        cin >> name;
        cout << "Weight(lbs) of weapon: " << endl;
        // Create the weapon
        weaponBay.addWeapon(new Weapon(name, type, weight));

      // Delete a Weapon
      case 2 :
        string weapon;
        cout << "Enter name of weapon to delete: " << endl;
        cin >> weapon;

        for(list<Weapon*>::iterator it = weaponBay.weaponList.begin(); it != weaponBay.weaponList.end(); it++)
        {
          if (it->getName() == weapon)
          {
            weaponBay.removeWeapon(*it)
          }
          else if (it == weaponBay.weaponList.end())
          {
            cout << "Invalid weapon name." << endl;
          }
        }
      
      // TODO: Edit a weapon option 
      case 3 ;
        cout << "Feature currently unavailable." << endl;
        continue;
      
      // Delete All Weapons Option 
      case 4 ;
        cout << "Deleting all weapons in " << weaponBay.getName() << endl;
        weaponBay.removeAllWeapons();
    }
}
