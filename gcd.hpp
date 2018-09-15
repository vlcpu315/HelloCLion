//
// Created by Chang Chen on 2018-09-14.
//
#include <iostream>

#ifndef HELLOCLION_GCD_HPP
#define HELLOCLION_GCD_HPP


using std::cin;
using std::cout;
using std:: endl;

int gcd( int a, int b ) {
    if( a < b )
        std::swap( a, b );

    while( b > 0 )
    {
        int f = a % b;
        a = b;
        b = f;
    }
    return a;
}


#endif //HELLOCLION_GCD_HPP
