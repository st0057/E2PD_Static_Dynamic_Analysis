#ifndef WeaponClass_h
#define WeaponClass_h

#include <iostream>
#include <string>

using std::string;

class Weapon
{
  public:
    //string name, type;
    //double weight; // in tons
    void Stats();
    Weapon(string name, string type, double weight);
    ~Weapon();
  private:
    string m_name, m_type;
    double m_weight;
};

#endif
