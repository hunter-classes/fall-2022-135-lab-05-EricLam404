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

  return 0;
}
