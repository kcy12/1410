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
            z = 11;
        }
        display << z << " ";
    }
    void player::display(stringstream& display)
    {
        cout << display.str() << " this is your hand";
    }
    int player::getTotal();
    {
        while(true)
        {
            int x;
            display >> x;//streams to n and
            if(!stream)
                break;
            cout << "integer " x;//not how this parses so this line is for testing
        }
        return x;
    }
