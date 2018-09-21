#ifndef FRACTION_H//need more explanation
#define FRACTION_H
#include <ostream>//why only output stream?
using namespace std;
class Fraction
{
    public:
        Fraction();
        Fraction(int, int);
        Fraction(const Fraction& other);
        const Fraction operator + (Fraction other);
        int gcd(int, int);
        friend ostream& operator << (ostream& os, Fraction f);
        int getNumerator();
        int getDenominator();
    protected:
    int numerator, denominator;
    private:
};
#endif // FRACTION_H
