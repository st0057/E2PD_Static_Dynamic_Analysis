#include <list>
using namespace std;

<<<<<<< Updated upstream
class WeaponBay
{
	private:
	std::list<Weapon> weaponList;
	public:
	WeaponBay();
	void addWeapon(Weapon);
	void removeWeapon(Weapon);
	void releaseWeapon(Weapon);

}

=======
// Default WeaponBay Constructor
>>>>>>> Stashed changes
WeaponBay::WeaponBay()
{
	weaponList = std::list<Weapon> weaponList;
}

void WeaponBay::addWeapon(Weapon weaponAdding)
{
<<<<<<< Updated upstream
	array.push_back(Weapon);
=======
	//array.push_back(Weapon);
  weaponList.push_back(weaponAdding);
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
}
=======
}

// Destructor
WeaponBay::~WeaponBay(){};
>>>>>>> Stashed changes
