#ifndef MASTERMIND_H
#define MASTERMIND_H
#include <string>
using namespace std;


class Mastermind
{
    public:
        Mastermind();
        string colorToString(int);
        string getSolution();
        int getColorsCorrect(string guess);
        int getPositionsCorrect(string guess);
        char getRandomLetter();

    private:
        string colors;
};

#endif // MASTERMIND_H
