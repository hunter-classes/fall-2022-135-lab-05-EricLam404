#include <iostream>
#include "funcs.h"

// add functions here
bool isDivisibleBy(int n, int d){
    return n % d == 0;
}

bool isPrime(int n){
    if( (n == 2) || (n == 3) || ((n + 1) % 6 == 0) || ((n - 1) % 6 == 0)){
        return true;
    }
    return false;
}

int nextPrime(int n){
    int i = n + 1;
    while(!isPrime(i)){
        i++;
    }
    return i;
}