#include <iostream>
#include "Pirate.h"
using namespace std;
int menu();
void translate(Pirate p);
void addWord(Pirate p);

int main() {
  cout << "Ahoy Mates, Ye be choozen yer menu\n";
  Pirate p;
  int choice;

  do{
    choice = menu();
    cin.ignore();
    switch(choice){
      case 1:
        translate(p);
        break;
      case 2:
        addWord(p);
        break;
    }
  }while (choice < 3);

}

void translate(Pirate p){
  string sentence, pirate;
  cout << "\nEnter yer words: " ;
  getline(cin, sentence);
  pirate = p.translateSentence(sentence);
  cout << endl << pirate << endl;
}
void addWord(Pirate p){
   string english, pirate;
   cout << "Enter an English word: ";
   cin >> english;
   cin.ignore();
   cout << "\nEnter the Pirate translation: " << endl;
   getline(cin, pirate);
   p.addToFile(english, pirate);
 
}

int menu(){
  int choice; 
  cout << "1. Translate\n2.  Add to Dictionary\n3.  Quit\n";
  cin >> choice;

  return choice;
}