#include <iostream>
#include <string>

#include "color.hpp"
#include "iter.hpp"

template <typename T>
void printElement(T &elem) {
  std::cout << elem << std::endl;
}

template <typename T>
void increment(T &elem) {
  elem++;
}

int main() {
  std::cout << YELLOW << "=== test 1 ===" << RESET << std::endl;
  int arr[] = {1, 2, 3, 4, 5};
  std::cout << "Original int array:" << std::endl;
  iter(arr, 5, printElement);

  std::cout << "\nAfter increment:" << std::endl;
  iter(arr, 5, increment);
  iter(arr, 5, printElement);

  std::cout << YELLOW << "\n=== test 2 ===" << RESET << std::endl;
  std::string strArr[] = {"Hello", "World", "!"};
  std::cout << "String array:" << std::endl;
  iter(strArr, 3, printElement);

  return 0;
}
