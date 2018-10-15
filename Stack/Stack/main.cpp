#include <iostream>
#include "Stack.h"
using namespace std;

int main() {
 Stack stack;
cout << "Adding 5" << endl;
 stack.push(5);
 cout << "Top:  " << stack.peek()<< endl;
 cout << "Adding 7" << endl;
 stack.push(7);
 cout << "Adding 2" << endl;
 stack.push(2);
 cout << "Top:  " << stack.peek()<< endl;
 stack.pop();
 cout << "Top:  " << stack.peek() << endl;
}