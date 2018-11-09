#include <iostream>
#include "Y2K.h"
using namespace std;

int main()
{
    string input;
    cout << "Welcome to the Y2K swap" << endl;
    cout << "Please enter a file name you're looking to swap." << endl;
    cin >> input;
    Y2K j;
    j.readFile(input);
    j.swap();
    j.write(input); 
    cout << "File has changed" << endl;
}
