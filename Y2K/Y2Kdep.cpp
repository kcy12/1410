#include <iostream>
#include "Y2K.h"
using namespace std;
Y2K::Y2K()
{
}
void Y2K::swap()
{
    for(int i = 0; i < store.length(); i++)
    {
        if(store[i] == 'y')
        {
            store[i] = 'k';
        }
    }
}
void Y2K::readFile(string fileName)
{
    //cout << "print" << endl;
    ifstream fin(fileName, ios::in);
    while(!fin.eof())
    {
        getline(fin, store);
    }
    fin.close();
}
void Y2K::write(string fileName)
{
    ofstream fout(fileName, ios::trunc);
    fout << store;
    fout.close();
}