#include <iostream>
#include <cassert>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int num, int den) {
        assert(den != 0);
        assert(typeid(num) == typeid(int) && typeid(den) == typeid(int));
        numerator = num;
        denominator = den;
    }

    int gcd(int a, int b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }

    void reduce() {
        int commonDivisor = gcd(numerator, denominator);
        numerator /= commonDivisor;
        denominator /= commonDivisor;
    }

    Fraction operator+(const Fraction& other) {
        int resultNumerator = (numerator * other.denominator) + (other.numerator * denominator);
        int resultDenominator = denominator * other.denominator;
        Fraction result(resultNumerator, resultDenominator);
        result.reduce();
        return result;
    }

    friend ostream& operator<<(ostream& os, const Fraction& frac) {
        os << frac.numerator << "/" << frac.denominator;
        return os;
    }
};

int main() {
    Fraction frac1(3, 4) , frac2(1, 2);
    Fraction sum = frac1 + frac2;

    cout << "Fraction 1: " << frac1 << endl;
    cout << "Fraction 2: " << frac2 << endl;
    cout << "Sum: " << sum << endl;

    return 0;
}
