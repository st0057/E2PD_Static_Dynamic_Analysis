#include "WeaponClass.h"
#include "WeaponBayClass.h"
#include <iostream>

using std::endl;      
using std::cout;
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

    // switch to using switch statements in another version

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
      int editOption = 1;

      while(editOption != 0)
      {
        cout << "What field would you like to edit?" << endl;
        cout << "1. Name." << endl;
        cout << "2. Type." << endl;
        cout << "3. Weight." << endl;
        cout << "0. Exit."
      }

      cin >> editOption;

      if (editOption == 1){
        cout << "What would you like the 'Name' field to say?" << endl;
        cin >> nameEdit;
        //TODO: Update Name field
        //TODO: Display new name
      }

      else if (editOption == 2){
        cout << "What would you like the 'Type' field to say?" << endl;
        cin >> typeEdit;
        //TODO : Update Type field
        //TODO: Display new type
      }

      else if (editOption == 3){
        cout << "What would you like the 'Weight' field to say?" << endl;
        cin >> weightEdit;
        // TODO: Update weight field
        // TODO: Display new weight
      }
    
      else if (editOption == 0){
        // This is intentionally left empty as to not enter the else block
      }

      else {
        cout << "Please enter a valid option" << endl;
      }

      return 0;
    }
    else
    {
      cout << "Please enter a valid option." << endl;
    }

  return 0;
}