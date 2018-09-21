#include "Fraction.h"
#include <iostream>

Fraction::Fraction()
{

    //ctor
    numerator = 1;
    denominator = 1;
}
Fraction::Fraction(int num, int den)
{
    numerator = num / gcd(num, den);
    denominator = den / gcd(num, den);
}
Fraction::Fraction(const Fraction& other)
{
    //copy ctor
    numerator = other.numerator;
    denominator = other.denominator;
}

int Fraction::getNumerator()
{
    return numerator;
}

int Fraction::getDenominator()
{
    return denominator;
}
const Fraction Fraction::operator+ (const Fraction other)
{
    return Fraction(numerator* other.denominator + other.numerator * denominator, denominator * other.denominator);
}

int Fraction::gcd(int n, int d)
{
    while (n!=d)
    {
        if (n>d)
            n-=d;
        else
            d -= n;
    }
    return n;
}
ostream& operator << (ostream& os, Fraction f)
{
    os << f.numerator << "/" << f.denominator <<
     endl;
    return os;
}
