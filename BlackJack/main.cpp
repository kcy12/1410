#include <iostream>//This is a very simplified version of blackjack
#include <string>
#include <sstream>
#include <stdlib.h>
#include <time.h>
#include "thing.h"
using namespace std;
    int card, total, r, Ctotal;
    bool hasAce;
    bool win;
    string choice = "";
    int main()
    {
        player p;//making objects for player and computer from player class.
        player c;
        for(int i = 0; i < 2; i++)
        {
            p.hit();
            c.hit();
        }//Draws first two cards*/ // MAY replace this with linked lists
        p.display();
        cout << "Do you want to hit? (y) (n)"<< endl;
        cin >> choice;
        while(choice == "y")
        {
            p.hit();
            p.display();
            cout << "Do you want to hit? (y) (n)" << endl;
            cin >> choice;
        }
        total = p.getTotal();
        Ctotal = c.getTotal();
        //cout << Ctotal << " This is the Ctotal" <<endl; testing
        while(Ctotal <= 15)//WHY IS HIT METHOD BROKEN ONLY IN LOOP? (doesn't stream to hand but does gen new card)
        {
            c.hit();//This method is broken but only in the loop it makes 0 sense to me nothing changes and it works above to populate first two cards
            //c.display(); testing
            Ctotal = c.getTotal();
            //system("pause>nul");//only works on windows testing
            //cout << Ctotal << "Dealer total" << endl; testing
        }
        if(total > Ctotal && total <= 21)
        {
            cout << "You win!";
        }
        if(total <= 21 && Ctotal > 21)
        {
            cout << "You win!";
        }
        else
        {
            cout << "Dealer wins";
        }
        return 0;
    }
