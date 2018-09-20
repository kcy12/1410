#include <iostream>//This is a very simplified version of blackjack
#include <string>
#include <sstream>
#include <stdlib.h>
#include <time.h>
#include "thing.h"
using namespace std;
    int card, total, r;
    bool hasAce;
    bool win;
    choice = 87;
    int main()
    {
        player p;//making objects for player and computer from player class.
        player c;
        for(int i = 0; i < 2; i++)
        {
            p.hit();
            c.hit();
        }//Draws first two cards
        while(choice != 0)
        {

        }
        total = getTotal();
        return 0;
    }
