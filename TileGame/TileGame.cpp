#include <sstream>
#include <string>
#include <stdlib>
#include <iostream>
#include "TileGame.h"
using namespace std;

TileGame::TileGame()
{
    //Assign each item in the array to the value of the index
    for(int i = 0; i < 10; i++)
    {
      tiles[i] = i;
    }

    //TODO: Mix the positions up
    for(int i = 0; i < 10; i++)
    {

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

    //TODO:  Swap the values on Eithor Side of the 0
    //Use the variable zero as the index of the zero
}

bool TileGame::inOrder()
{
    //TODO: Check to see if the game is in order.

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
