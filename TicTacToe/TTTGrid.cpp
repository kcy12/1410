#include "TTTGrid.h"
#include <iostream>

using namespace std;

TTTGrid::TTTGrid()//works
{
  //4.  Set the player to X (using the enum value)
    player = X;
  //5.  Initialize the values in the 2d array to the following characters
  // 1 2 3
  // 4 5 6
  // 7 8 9 (Nested for loops)
    char num = '1';
    for(int i = 0; i < SIZE; i ++)
    {
        for(int j = 0; j < SIZE; j ++)
        {
            grid[i][j] = num;
            num++;//chars can be iterated on because they are just ascii values right?
        }
    }

}


void TTTGrid::switchPlayer()//works
{
  //6.  Have the player variable switch to the other player
  // If it is X set it to O, and vise versa
  if(player == X)
  {
      player = O;
  }
  else
  {
    player = X;//swaps player
  }

}


void TTTGrid::selectMove(char choice)//This is broken players can just pick the same space lol
{
  //7.  Given the character choice (1-9)
  //Search for the character in the grid and replace it with the current player
  for(int i = 0; i < SIZE; i++)
  {
      for(int j = 0; j < SIZE; j++)
      {
          if(grid[i][j] == choice)
          {
              grid[i][j] = player;
          }
      }
  }

}

void TTTGrid::display()
{
  //8.  Use cout statements to print out the grid as follows
  //    1|2|3
  //    -----
  //    4|5|6
  //    -----
  //    7|8|9
    for(int i = 0; i < SIZE; i++)
    {
        for(int j = 0; j < SIZE; j++)//this is wrong in the example? it doesn't output the same as the instructions
        {
            cout << grid[i][j];
            if(j < 2)
            {
                cout << "|";//This is how you print out what the instructions ask
            }
        }
        cout << endl << "-------" << endl;
    }

}
bool TTTGrid::hasWon()
{
  //9.  Determine if the current player has won the game
    int hor = 0, vert = 0, diagRight = 0, diagLeft = 0;

    for(int i = 0; i < SIZE; i++)
    {
            hor = 0; vert = 0; diagRight = 0; diagLeft = 0;
            for(int j = 0; j < SIZE; j++)
            {

                if(grid[i][j] == player)
                {
                    hor++;
                }
                if(grid[j][i] == player)
                {
                    vert++;
                }
                if(grid[j][j] == player)
                {
                    diagRight ++;
                }
                if(grid[j][SIZE-1-j] == player)
                {
                    diagLeft ++;
                }
            }

            if(hor == SIZE || vert == SIZE || diagRight == SIZE || diagLeft == SIZE)
            {
                return true;
            }
    }
    return false;
}

char TTTGrid::getCurrentPlayer()
{ //10.  Return the current player
  return player;
}
