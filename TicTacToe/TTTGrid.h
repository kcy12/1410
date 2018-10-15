#ifndef TTTGRID_H
#define TTTGRID_H

//1.  Create an enum for X and O, set the values to 'X' and 'O'
enum {X = 'X' , O = 'O'};//x and o are char vars

class TTTGrid
{
    public:
        const int SIZE = 3;
        TTTGrid();
        void switchPlayer();
        void selectMove(char);
        void display();
        bool hasWon();
        char getCurrentPlayer();

    private:
    //2.  Create a 2d array 3x3 to store characters named grid
    char grid[3][3];
    //3.  Create a variable to store the player (which player's turn?)
    char player;//I was confused why we are using chars at first but it saves you a swap from ints to chars later
};

#endif // TTTGRID_H
