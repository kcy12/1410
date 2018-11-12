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
        void swap();
        void readFile(string);
        void write(string);
    private:
    string store;
	string finalOutput;
};

#endif
