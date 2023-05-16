#ifndef TRAGIL1_RATIONAL_H
#define TRAGIL1_RATIONAL_H

using namespace std;

class Rational {


private:
    int numerator;
    int denominator;
public:

    Rational();

    Rational(int a , int b);

    int getNumerator() const;

    void setNumerator(int numerator);

    int getDenominator() const;

    void setDenominator(int denominator);

    void insertValues(int a, int b);

    void printRational();

    void fractureReduction(int & a , int & b);

    void realNumber();

};


#endif
