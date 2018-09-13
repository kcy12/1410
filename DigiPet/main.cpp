#include <iostream>
#include "Digipet.h"
using namespace std;

enum{FEED = 1, WALK, PLAY, QUIT};

int GetUserInput();
void CareForPet(Digipet&, int);

int main() {
  Digipet pet;// object of digipet class
  int choice;

  do{
    pet.displayStats();
    cout << endl;
    choice = GetUserInput();
    CareForPet(pet, choice);
    cout << endl << endl;
    if(!pet.isAlive())
    {
      cout << "\nYour Digipet has died\n";
      break;
    }

  }while(choice < QUIT);

  return 0;
}

void CareForPet(Digipet &p, int choice)
{
  if(choice == FEED){
    p.eat();
  }
  else if(choice == WALK)
  {
    p.exercise();
  }
  else if(choice == PLAY)
  {
    p.play();
  }
  p.getOlder();
}


int GetUserInput()
{
  int choice;
  cout << "1. Feed\n2. Walk\n3. PLay\n4. Quit\n";
  cout << "Choose one: ";
  cin >> choice;
  return choice;
}
