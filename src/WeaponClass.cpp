#include <iostream>
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
string get_name()
{
  return m_name;
}

// Getter for type 
string get_type()
{
  return m_type;
}

// Getter for weight 
double get_weight()
{
  return m_weight;
}

// Function to display weapon stats
// Use the getter/setters here instead
void Weapon::displayStats() 
{
  cout << "Name: " << m_name << endl;
  cout << "Type: " << m_type << endl;
  cout << "Weight: " << m_weight << endl;
  cout << "" << endl;
}
