#include "Pirate.h"

Pirate::Pirate(){
  readFile();
}
string Pirate::translateWord(string english)
{
  for(int i = 0; i < english.size(); i++)
  {
    if(englishList[i] == english)
    {
      return pirateList[i];
    }
  }
  return english;
}
string Pirate::translateSentence(string sentence)
{
  string pirateSentence = "";
  stringstream a(sentence);
  string nextWord;
  while(getline(a, nextWord, ' '))
  {
    pirateSentence += translateWord(nextWord) + " ";
  }
    return "";
}
void Pirate::readFile()
{
  ifstream fin("pirate.txt", ios::in);
  string english, pirate;

  while(!fin.eof())
  {
    getline(fin, english);
    getline(fin, pirate);
    englishList.push_back(english);
    pirateList.push_back(pirate);

  }
 
  fin.close();
}
void Pirate::addToFile(string english, string pirate)
{
  ofstream fout ("pirate.txt", ios::out | ios::app);
  fout << endl << english << endl << pirate;
  fout.close();
} 
