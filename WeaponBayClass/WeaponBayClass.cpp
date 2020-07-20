#include <list>
using namespace std;

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

WeaponBay::WeaponBay()
{
	weaponList = std::list<Weapon> weaponList;
}

void WeaponBay::addWeapon(Weapon weaponAdding)
{
	array.push_back(Weapon);
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