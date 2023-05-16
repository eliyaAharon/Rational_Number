#include "Rational.h"
#include <iostream>

using namespace std;

// first constructor
Rational::Rational() {
    numerator = 0;
    denominator = 1;
}

// second constructor
Rational::Rational(int a, int b) {
    if (b == 0){
        numerator = 0;
        denominator = 1;
    }

    else {
        numerator = a;
        denominator = b;
    }
}


void Rational::insertValues(int a, int b) {
    numerator = a;
    denominator = b;
}



void Rational::printRational() {
    fractureReduction(numerator, denominator);
    cout << numerator << " / " << denominator << endl;
}
// פונקציה לצמצום השבר לשבר קטן יותר
void Rational::fractureReduction(int &a, int &b) {
    for (int i = a; i > 1; i--) {
        if (a % i == 0 && b % i == 0) {
            a = a / i;
            b = b / i;
            break;
        }
    }
}

//מציג את השבר כמספר ממשי
void Rational::realNumber() {
    float temp = static_cast<float>(numerator) / denominator;
    cout << "The real number is: " << temp << endl;
}


// getters and setters:

int Rational::getNumerator() const {
    return numerator;
}

void Rational::setNumerator(int numerator) {
    Rational::numerator = numerator;
}

int Rational::getDenominator() const {
    return denominator;
}

void Rational::setDenominator(int denominator) {
    Rational::denominator = denominator;
}











