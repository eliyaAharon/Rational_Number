#include <iostream>
#include "Rational.h"

using namespace std;

void printMinFraction(Rational *rational);

void printMaxFraction(Rational *rational);

int main() {

    //יצרתי כאן 5 אובייקטים בשביל לנסות את פונקציית המינימום כמו שביקשת
    Rational rationals[5];
    for (int i = 0; i < 5; ++i) {
        rationals[i].insertValues(i + 3, i + 9);
    }
    printMinFraction(rationals);

    // יצרתי כאן מספר אובייקטים כמו שביקשת בשתי הבנאים ושלחתי אותם ךפונקציית המקסימום
    Rational rationals2[] = {Rational(3, 5), Rational(), Rational(4, 2)};
    printMaxFraction(rationals2);

}

// באופן כללי הפונקציות לא צריכות לבצע בדיקה מאחר והבנאי עושה את זה וגם הבנאי ברירת מחדל מכניס ערכים תקינים.

void printMinFraction(Rational *rationals) {
    float min = static_cast<float>(rationals[0].getNumerator()) / rationals[0].getDenominator();
    int index = 0;
    for (int i = 0; i < sizeof(rationals) / sizeof(rationals[0]); ++i) {
        if (static_cast<float>(rationals[i].getNumerator()) / rationals[i].getDenominator() < min) {
            min = rationals[i].getNumerator() / rationals[i].getDenominator();
            index = i;
        }

    }
    cout << "The min number is: " << rationals[index].getNumerator() << " / " << rationals[index].getDenominator()
         << endl;
}

void printMaxFraction(Rational *rationals) {
    float max = static_cast<float>(rationals[0].getNumerator()) / rationals[0].getDenominator();
    int index = 0;
    for (int i = 0; i < sizeof(rationals) / sizeof(rationals[0]); ++i) {
        if (static_cast<float>(rationals[i].getNumerator()) / rationals[i].getDenominator() > max) {
            max = rationals[i].getNumerator() / rationals[i].getDenominator();
            index = i;
        }
//
    }
    cout << "The max number is: " << rationals[index].getNumerator() << " / " << rationals[index].getDenominator()
         << endl;
}


