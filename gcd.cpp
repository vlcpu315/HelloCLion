//
// Created by Chang Chen on 2018-09-14.
//

#include "gcd.hpp"

int main() {

    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Greatest Common Denominator: " << gcd(abs(num1), abs(num2)) << endl;

    return 0;
}