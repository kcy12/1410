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
        stringstream hand;//hand

    }
    void player::hit()//reference of display
    {
        card = rand() % 9 + 1;
        //cout << card<< endl; testing
        if(total <= 10 && card == 1)
        {
            card = 11;
        }
        hand << card << " ";//streams new random card and space to display stringstream
        //cout << hand.str() << "this is your hand" << endl; testing purposes
    }
    void player::display()
    {
        cout << hand.str() << "this is your hand" << endl;
    }
    int player::getTotal()
    {
        string x;
        int y;
        int z = 0;
        while(!hand.eof())//goes until the end of stream
        {
            //streams string to x
            while(hand >> y)//streams ints
            {
                //cout << "integer " << y << endl;//This line makes sure it works
                z += y; // adds all parsed integers
            }
        }
        //cout << z << endl; testing
        return z;
    }
