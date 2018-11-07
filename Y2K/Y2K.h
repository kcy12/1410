#ifndef Y2K_H
#define Y2K_H

#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;
class Y2K
{
    public:
        Y2K();
        string swap(string);
        void readFile();
    private:
    vector<string>Y2KList;
}