#include "Digipet.h"//file path
#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>

using namespace std;
    Digipet::Digipet()//constructor :: = scope resolution operator indicates that this constructor is part of that class
    {
        age = 0;
        health = 100;
        hunger = 0;
        happiness = 100;
        srand (time(NULL));
    }
    void Digipet::eat()
    {
        hunger -= rand() % 15;
    }
    void  Digipet::exercise()
    {
        health += rand() % 15;
    }
    void  Digipet::getOlder()
    {
        age ++;
        hunger += rand() % 10 + 1;
        health -= rand() % age + 1;
        happiness -= rand() % 5 + 1;
    }
    void  Digipet::displayStats()
    {
        cout << "Hunger: " << hunger <<  "\nHealth: " << health <<  "\nHappiness: "<< happiness <<endl;
    }

    bool Digipet::isAlive()
    {
        if(hunger < 100 && health > 0 && happiness > 0)
          return true;
        return false;
    }
    void Digipet::play()
    {
        happiness += rand() % 5 + 5;
    }
