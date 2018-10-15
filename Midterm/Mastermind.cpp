#include "Mastermind.h"
#include <cstdlib>
#include <iostream>
#include <time.h>

using namespace std;

Mastermind::Mastermind()
{
    srand (time(NULL));
    //The following command sizes the string and also gives you a known value for testing purposes.
    //Do not remove it even when you get the secret combination working
    colors = "ROYG";

    //1.  Modify the secret combination of colors to be random by calling the getRandomLetter()
    //for each position in the string

}

//2.  Returns the number of colors that are correct, just not in the correct position
//    We didn't cover the .find() or the .substr() functions, but they are the same as in Java
//int pos = str.find('d');         // returns 3
//string first = str.substr(2, 3); // returns cde //substr(start, length)
//string last = str.substr(4);     //returns efg  //substr(start) gets to the end
int Mastermind::getColorsCorrect(string guess)
{
    return 0;
}

//3.  Return the number of colors that are in the Correct position
//Compare the guess to the secret combination of colors
int Mastermind::getPositionsCorrect(string guess)
{
    return 0;

}

//This is an accessor method to allow you to display the solution
string Mastermind::getSolution()
{
    return colors;
}

//4.  Use a switch statement to return a random letter between
//Generate a Random number and each case will return ROYGBP
//Or any colors you want
char Mastermind::getRandomLetter()
{
    return 'R';
}
