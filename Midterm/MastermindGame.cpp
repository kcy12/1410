#include <iostream>
#include "Mastermind.h"

using namespace std;

void menu();

int main()
{
    menu();
    //Declares an instance of the class
    Mastermind game;
    //The user's guess
    string guess;
    //Give 10 chances to guess
    int i;

    for(i = 10; i > 0; i--)
    {


        //cout << game.getSolution() << endl; testing code
        //Allow them to guess
        cout << "Guess " << i << ": ";
        cin >> guess;
        //Find the colors and positions correct
        int pc = game.getPositionsCorrect(guess);
        int colors = game.getColorsCorrect(guess);
        //Win if they get all positions correct
        if(pc==4)
        {
               break;
        }
        cout << "Positions Correct:  " << pc << endl;
        cout << "Colors Correct: " << colors << endl;
    }
    //Lose if i counts down to zero
    if(i == 0)
    {
        cout << "Sorry, the combination was: " << game.getSolution() << endl;
    }
    else
    {
        cout << "Great Job:  " << game.getSolution() << endl;
    }

    return 0;
}




void menu()
{
    cout << " __  __           _                      _           _ " << endl;
    cout << "|  \\/  | __ _ ___| |_ ___ _ __ _ __ ___ (_)_ __   __| |"<< endl;
    cout << "| |\\/| |/ _` / __| __/ _ \\ '__| '_ ` _ \\| | '_ \\ / _` |"<< endl;
    cout << "| |  | | (_| \\__ \\ ||  __/ |  | | | | | | | | | | (_| |"<< endl;
    cout << "|_|  |_|\\__,_|___/\\__\\___|_|  |_| |_| |_|_|_| |_|\\__,_|"<< endl;
    cout << "\n\nEnter four letters to guess: (R)ed, (O)range, (Y)ellow, (G)reen, (B)lue, (P)urple\n\n";
    string str = "abcdefg";


}
