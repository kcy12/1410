#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdlib.h>
using namespace std;

int main() {
    cout << "Top Ten List\n";
    vector<string> topTen;
    string item;

    cout << "Enter your top ten favorite movies" << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << i+1 << ": ";
        //cin >> item;
        getline(cin, item);
        topTen.push_back(item);
    }

    ofstream fout("TopTen.txt", ios::out);
    for(int i = 9; i >= 0; i --)
    {
        fout << i+1 << ":" << topTen[i] << endl;
    }
    fout.close();
    return 0;
}


