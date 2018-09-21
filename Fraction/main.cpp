#include <iostream>
#include "Fraction.h"

using namespace std;
int main()
{
    Fraction f1(7,15);
    Fraction f2(2, 10);

    Fraction f3 = f1 + f2;
    cout << f1 << "+" << f2 << "=" << f3 << endl;
    return 0;
}
