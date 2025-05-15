#include <cctype>
#include <iostream>
#include <string>

#include "color.hpp"
#include "iter.hpp"

void toLowerChar(char &c) {
  c = std::tolower(static_cast<unsigned char>(c));
}

void toUpperChar(char &c) {
  c = std::toupper(static_cast<unsigned char>(c));
}

void incrementInt(int &n) {
  ++n;
}

void addExclamation(std::string &s) {
  s += "!";
}

int main() {
  std::cout << YELLOW << "=== Test 1: char[] ===" << RESET << std::endl;
  char chars[] = {'A', 'B', 'C'};
  ::iter(chars, 3, toLowerChar);
  ::iter(chars, 3, toUpperChar);
  for (int i = 0; i < 3; ++i)
    std::cout << "chars[" << i << "]: " << chars[i] << std::endl;

  std::cout << YELLOW << "\n=== Test 2: int[] ===" << RESET << std::endl;
  int nums[] = {10, 20, 30};
  std::cout << "Before increment:\n";
  for (int i = 0; i < 3; ++i)
    std::cout << "nums[" << i << "]: " << nums[i] << std::endl;

  ::iter(nums, 3, incrementInt);
  std::cout << "After increment:\n";
  for (int i = 0; i < 3; ++i)
    std::cout << "nums[" << i << "]: " << nums[i] << std::endl;

  std::cout << YELLOW << "\n=== Test 3: std::string[] ===" << RESET
            << std::endl;
  std::string strs[] = {"Hello", "World"};
  ::iter(strs, 2, addExclamation);
  for (int i = 0; i < 2; ++i)
    std::cout << "strs[" << i << "]: " << strs[i] << std::endl;

  return 0;
}
