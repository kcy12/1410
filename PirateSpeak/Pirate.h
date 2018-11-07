#ifndef PIRATE_H
#define PIRATE_H

#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;
class Pirate{
  public:
    Pirate();
    string translateWord(string);
    string translateSentence(string);
    void readFile();
    void addToFile(string, string);
  private:
    vector<string>englishList;
    vector<string>pirateList;
};

#endif
