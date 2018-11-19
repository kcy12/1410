#include "Stack.h"
#include <iostream>


using namespace std;

int main()
{
	Stack <int>s;
	s.push(5);
	cout << s.peek();

	return 0;
}
