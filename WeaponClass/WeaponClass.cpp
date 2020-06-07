#include <iostream>
#include "WeaponClass.h"

using std::cout;      using std::endl;

// Weapon Constructor
Weapon::Weapon(string name, string type, double weight)
{
  m_name = name;
  m_type = type;
  m_weight = weight;
}

// Destructor
Weapon::~Weapon() {}

// Function to display weapon stats
void Weapon::Stats() 
{
  cout << "Name: " << m_name << endl;
  cout << "Type: " << m_type << endl;
  cout << "Weight: " << m_weight << endl;
}
