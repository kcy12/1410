#include <sstream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "TileGame.h"
using namespace std;

TileGame::TileGame()
{
    srand(time(NULL));
    //Assign each item in the array to the value of the index
    for(int i = 0; i < 10; i++)
    {
      tiles[i] = i;
    }

    //*should be* DONE
    for(int i = 0; i < 10; i++)//occurs 10 times
    {
        int r = rand() % 10;
        int j = rand() % 10;
        int a = tiles[r];
        int b = tiles[j];
        tiles[r] = b;
        tiles[j] = a;//swaps the tiles at the random indexes generated.
    }
}

int TileGame::findZero()
{
    //DONE
    for(int i = 0; i < 10; i++)
    {
        if(tiles[i] == 0);
        return i;
    }
}

void TileGame:: moveRight()
{
    int zero = findZero();//index of zero

    if(zero == 0)
    {
     return;
    }
    int temp = zero - 1;//index of value left of zero
    int a = tiles[zero];
    int b = tiles[temp];
    tiles[zero] = b;
    tiles[temp] = a;

    //Done swpas  the value to the left of zero with zero


}
void TileGame::moveLeft()
{
    int zero = findZero();
    if(zero == 9)
    {
      return;
    }
    int temp = zero + 1;//index of value left of zero
    int a = tiles[zero];
    int b = tiles[temp];
    tiles[zero] = b;
    tiles[temp] = a;
    //Done swaps the value to the right of zero with zero
    //Use the variable zero as the index of the zero
}

void TileGame::swap()
{
    int zero = findZero();
    if(zero == 9 || zero == 0)
      return;
    int temp1 = zero +1;
    int temp2 = zero -1;
    int a = tiles[temp1];
    int b = tiles[temp2];
    tiles[temp1] = b;
    tiles[temp2] = a;

    //Done swaps variables around 0
}

bool TileGame::inOrder()
{
    //TODO: Check to see if the game is in order.
    for(int i =0; i< 10; i++)
    {//How to check every position efficiently and still return correctly
        if(tiles[i] == i;)
        {
            return true;//THIS IS BROKEN
        }
    }
    return false;

}


//Returns the game as a string for display
string TileGame::getDisplay()
{
  stringstream output;
  for(int i = 0; i < 10; i++)
  {
    if(tiles[i]>0)
      output << "[" << tiles[i] << "]" << " ";
    else
      output << "[ ]" << " ";
  }
  return output.str();
}
