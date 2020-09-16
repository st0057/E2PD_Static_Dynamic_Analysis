#ifndef WeaponBayClass_h
#define WeaponBayClass_h

#include <list>
#include "WeaponClass.h"

class WeaponBay
{
  public:
    WeaponBay();
    WeaponBay(std::string);
    std::string getName();
    double getBayWeight();
    void addWeapon(Weapon*);
    void removeWeapon(Weapon*);
    void removeAllWeapons();
    void releaseWeapon(Weapon);
    void printWeaponList();
    void printWeaponBayWeight();
    ~WeaponBay();
  private:
    std::list<Weapon*> weaponList;
    string m_name;
    double m_bay_weight;
};

#endif
