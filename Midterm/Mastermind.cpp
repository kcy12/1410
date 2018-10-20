#include "Mastermind.h"
#include <cstdlib>
#include <iostream>
#include <time.h>

using namespace std;

Mastermind::Mastermind()//DONE
{
    srand (time(NULL));

    colors = "ROYG";

    //1.  Modify the secret combination of colors to be random by calling the getRandomLetter()
    //for each position in the string 
    for(int i = 0; i < colors.length(); i ++)
    {
        char gay = getRandomLetter();//strings are char arrays in C++ idk if this is how you wanted me to do this.
        colors[i] = gay;
    }

}

//2.  Returns the number of colors that are correct, just not in the correct position
//    We didn't cover the .find() or the .substr() functions, but they are the same as in Java
//int pos = str.find('d');         // returns 3
//string first = str.substr(2, 3); // returns cde //substr(start, length)
//string last = str.substr(4);     //returns efg  //substr(start) gets to the end
int Mastermind::getColorsCorrect(string guess)//DONE
{
    int correct = 0;
    for(int i = 0; i < guess.length(); i++)//checks every letter of guess
    {
        for(int j = 0; j < guess.length(); j++)///against every letter of colors
        if(guess[i] == colors[j])
        {
            correct ++;
        }
    }
    return correct;//tells how many are correct. IDK why you are having us do it with .find and .substr 
    //if all we need to do is find the number of matching inputs

}

//3.  Return the number of colors that are in the Correct position
//Compare the guess to the secret combination of colors
int Mastermind::getPositionsCorrect(string guess)//DONE (what are we comparing? don't we do that for he user ii the main?)
{
    int pos = 0;
    for(int i = 0; i < guess.length(); i ++)
    {
        if(guess[i] == colors[i])
        {
            pos ++; 
        }
    }
    return pos;

}

//This is an accessor method to allow you to display the solution
string Mastermind::getSolution()//No work needed for this right?
{
    return colors;
}

//4.  Use a switch statement to return a random letter between
//Generate a Random number and each case will return ROYGBP
//Or any colors you want
char Mastermind::getRandomLetter()//returns random letters
{//Does it need to not return the same letter twice? it never says it doesn't...
    int x = rand() % 6 + 1;
    switch(x)
    {
        case 1:
            return 'R';
        case 2:
            return 'O';
        case 3:
            return 'Y';
        case 4:
            return 'G';
        case 5:
            return 'B';
        case 6:
            return 'P';
    }
}
