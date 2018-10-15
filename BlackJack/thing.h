#ifndef THING_H
#define THING_H
#include <sstream>
using namespace std;
class player
{
    private:
        int card;
        int total;
        bool hasAce;
        stringstream hand;//hand
    public:
        player();
        void hit();
        void display();
        int getTotal();
};
#endif // THING_H
