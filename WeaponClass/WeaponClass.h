#ifndef WeaponClass_h
#define WeaponClass_h

#include <iostream>
#include <string>

using std::string;

class Weapon
{
  public:
    string name, type, info;
    double weight; // in tons
    void Stats();
    Weapon();
    ~Weapon();
  private:

};


#endif
