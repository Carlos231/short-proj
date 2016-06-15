//functions

#include "driver.cpp"
#include <string>

int main_menu(){
  system("clear");
  int choice = 0;
  cout << "Hello. \n";
  cout << "Would you like to \n";
  cout << "   (1) See your inventory.\n";
  cout << "   (2) Add to inventory.\n";
  cout << "   (3) Remove from inventory.\n";
  cout << "   (4) Search inventory.\n";
  cout << "   (5) Exit program." << endl;
  cin >> choice;

  return choice;
}

void redirector(){
  int choice = main_menu;
  while (choice != 5){
    if (choice == 1){ //see inventory
      //run function for this call
    }
    else if (choice == 2){ //add
      //run function for this call
    }
    else if (choice == 3){ //remove
      //run function for this call
    }
    else if (choice == 4){ //search
      //run function for this call
    }
  }
  cout << "Goodbye." << endl;
}
