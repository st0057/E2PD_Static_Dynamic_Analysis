#ifndef WeaponClass_h
#define WeaponClass_h

#include <iostream>
#include <string>

using std::string;

class Weapon
{
  public:
    Weapon();
    Weapon(string, string, double);
    bool operator==(Weapon);
    void displayStats();
    // void setName(string WeaponName);
    string getName();
    // void setType(string WeaponType);
    string getType();
    // void setType(double WeaponWeight);
    double getWeight();
    ~Weapon();
  private:
    string m_name;
    string m_type;
    double m_weight;
};

#endif
