#include <iostream>
#include <string>

#include "color.hpp"
#include "whatever.hpp"

int main(void) {
  std::cout << YELLOW << "=== TEST 1 ===" << RESET << std::endl;
  int a = 2;
  int b = 3;
  std::cout << BOLDWHITE << "Before swap: " << RESET << "a = " << a
            << ", b = " << b << std::endl;

  ::swap(a, b);
  std::cout << BOLDWHITE << "After swap: " << RESET << "a = " << a
            << ", b = " << b << std::endl;

  std::cout << std::endl;

  std::cout << BOLDWHITE "min(a, b) = " RESET << ::min(a, b) << std::endl;
  std::cout << BOLDWHITE "max(a, b) = " RESET << ::max(a, b) << std::endl;

  std::cout << YELLOW << "\n=== TEST 2 ===" << RESET << std::endl;

  std::string c = "42tokyo";
  std::string d = "24tokyo";
  std::cout << BOLDWHITE << "Before swap: " << RESET << "c = " << c
            << ", d = " << d << std::endl;

  ::swap(c, d);
  std::cout << BOLDWHITE << "After swap: " << RESET << "c = " << c
            << ", d = " << d << std::endl;
  std::cout << std::endl;
  std::cout << BOLDWHITE << "min(c, d) = " RESET << ::min(c, d) << std::endl;
  std::cout << BOLDWHITE << "max(c, d) = " RESET << ::max(c, d) << std::endl;

  return 0;
}
