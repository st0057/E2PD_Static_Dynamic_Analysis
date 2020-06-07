#include <iostream>
#include "WeaponClass.h"

using std::cout;      using std::endl;

// Default Constructor
Weapon::Weapon() {}

// Destructor
Weapon::~Weapon() {}

// Function to display weapon stats
void Weapon::Stats() 
{
  cout << "Name: " << name << endl;
  cout << "Type: " << type << endl;
  cout << "Weight: " << weight << endl;
}
