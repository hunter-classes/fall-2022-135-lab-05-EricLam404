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
    CHECK(countPrimes(17, 30) == 4);
}

TEST_CASE("Is twin Primes"){
    CHECK(isTwinPrime(5) == true);
    CHECK(isTwinPrime(17) == true);
    CHECK(isTwinPrime(16) == false);
}

TEST_CASE("Next twin Primes"){
    CHECK(nextTwinPrime(5) == 7);
    CHECK(nextTwinPrime(17) == 19);
}

TEST_CASE("Largest twin Primes"){
    CHECK(largestTwinPrime(5, 18) == 17);
    CHECK(largestTwinPrime(1, 31) == 31);
    CHECK(largestTwinPrime(14, 16) == -1);
}