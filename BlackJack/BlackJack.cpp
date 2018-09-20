#include "thing.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <sstream>
#include <string>
using namespace std;
    player::player()
    {
        srand(time(NULL));
        int card;
        int total = 0;
        bool hasAce;
        stringstream display;//hand
    }
    void player::hit(stringstream& display)
    {
        int z = rand() % 9 + 1;
        if(total <= 10 && z == 1)
        {
            z = 10;
        }
        display << z << " ";
    }
    void player::display(stringstream& display)
    {
        cout << display.str() << " this is your hand";
    }
    int player::getTotal();
    {
        int x = 0;
        display >> x;
        return x;
    }
