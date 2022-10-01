#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("Is divisible?"){
    CHECK(isDivisibleBy(100, 25) == true);
    CHECK(isDivisibleBy(35, 17) == false);
}

TEST_CASE("Is prime?"){
    CHECK(isPrime(2) == true);
    CHECK(isPrime(4) == false);
    CHECK(isPrime(17) == true);
}

TEST_CASE("Next Prime"){
    CHECK(nextPrime(14) == 17);
    CHECK(nextPrime(17) == 19);
}

TEST_CASE("Count Primes"){
    CHECK(countPrimes(4, 10) == 2);
    CHECK(countPrimes(17, 30) == 5);
}