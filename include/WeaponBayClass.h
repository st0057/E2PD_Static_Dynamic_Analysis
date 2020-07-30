#ifndef WeaponBayClass_h
#define WeaponBayClass_h

class WeaponBay
{
  public:
    WeaponBay();
    void addWeapon(Weapon);
    void removeWeapon(Weapon);
    void releaseWeapon(Weapon);
    void printWeaponList();
    // void setName(string WeaponName);
    // string getName();
    // void setType(string WeaponType);
    // string getType();
    // void setType(double WeaponWeight);
    // double getType();
    ~WeaponBay();
  private:
    std::list<Weapon> weaponList;
};

#endif
