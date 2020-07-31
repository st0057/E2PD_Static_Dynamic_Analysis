#include "WeaponClass.h"

using std::cout;
using std::endl;

// Default Weapon Constructor
Weapon::Weapon(){}

// Weapon Constructor
Weapon::Weapon(string name, string type, double weight)
{
  m_name = name;
  m_type = type;
  m_weight = weight;
}

// Destructor
Weapon::~Weapon() {}

// Getter for name 
string Weapon::getName()
{
  return m_name;
}

// Getter for type 
string Weapon::getType()
{
  return m_type;
}

// Getter for weight 
double Weapon::getWeight()
{
  return m_weight;
}

// Function to display weapon stats
// Use the getter/setters here instead
void Weapon::displayStats() 
{
  cout << "Name: " << getName() << endl;
  cout << "Type: " << getType() << endl;
  cout << "Weight: " << getWeight() << endl;
  cout << "" << endl;
}
