#include <iostream>
#include "TTTGrid.h"

using namespace std;

int main()
{
   //11.  Declare an instance of the TTTGrid named game
    TTTGrid game;
    //12. Declare a character variable for the user's choice (position)
    char choice;

    //13.  Make the game repeat 9 times
    cout << "Tic Tac Toe!" << endl;
    for(int i = 0; i < 9; i++)//Start Loop Here
    {
        system("cls"); //Only non repl.it programmers can use this command to clear the screen
        //14.  Display the grid using the display method in the TTTGrid class
        game.display();

        cout<< "\nChoose one: ";
        //15.  Allow the user to enter thier choice
        cin>>choice;
        //16. Call the selectMove(char) method in the player class to allow the user to move
        game.selectMove(choice);

        //17.  Modify the if statement below to check to see if the player has won
        if(game.hasWon())
        {   //18.  Display a message saying getCurrentPlayer() Wins then end the loop
            cout << "player wins";
            break;
        }
        else
        {
            game.switchPlayer();
        }
    }//End Game Loop Here
        if(game.hasWon() == false)
        {
            cout << "Cat's Game";
        }
    //20.  Display "Cat's Game if neither player won"

    return 0;
}
