#include <iostream>
#include "funcs.h"

int main()
{
  std::cout << "Is divisible? \n";
  std::cout << "isDivisibleBy(100, 25)\n";
  std::cout << std::boolalpha << isDivisibleBy(100, 25) << "\n";
  std::cout << "isDivisibleBy(35, 17)\n";
  std::cout << std::boolalpha << isDivisibleBy(35, 17) << "\n";
  std::cout << "\n--------------\n";

  std::cout << "Is a prime? \n";
  std::cout << "isPrime(11)\n";
  std::cout << isPrime(11) << "\n";
  std::cout << "\n--------------\n";

  std::cout << "Next prime? \n";
  std::cout << "nextPrime(14)\n";
  std::cout << nextPrime(14) << "\n";
  std::cout << "\n--------------\n";

  std::cout << "Count prime? \n";
  std::cout << "countPrimes(11, 17)\n";
  std::cout << countPrimes(11, 17) << "\n";
  std::cout << "\n--------------\n";

  std::cout << "Is twin prime? \n";
  std::cout << "isTwinPrime(13)\n";
  std::cout << isTwinPrime(13) << "\n";
  std::cout << "\n--------------\n";

  std::cout << "Next twin prime? \n";
  std::cout << "nextTwinPrime(13)\n";
  std::cout << nextTwinPrime(13) << "\n";
  std::cout << "\n--------------\n";

  std::cout << "Largest twin prime? \n";
  std::cout << "largestTwinPrime(13)\n";
  std::cout << largestTwinPrime(5, 18) << "\n";
  std::cout << "\n--------------\n";

  return 0;
}
