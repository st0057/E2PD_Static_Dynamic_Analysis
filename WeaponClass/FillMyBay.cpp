#include "WeaponClass.h"
#include "WeaponBay.h"
#include <iostream>

using std::endl;      using std::cout;
using std::cin;

int main() 
{
  // Initial ideas of how to test
  int option = 1;
  while(option != 0)
  {
    cout << "What would you like to do?" << endl;
    cout << "  1. Build a bay." << endl;
    cout << "  2. Delete a bay." << endl;
    cout << "  3. Edit a bay." << endl;
    cout << "  0. To Exit." << endl;
    cout << ">>>";
    cin >> option;

    // Build an instance of a bay
    if (option == 1)
    {

    }
    // Delete an instance of a bay and any weapons in it
    else if (option == 2)
    {

    }
    // Edit a weapon bay 
    else if (option == 3)
    {
      
    }
    else
    {
      cout << "Please enter a valid option." << endl;
    }

  return 0;
}