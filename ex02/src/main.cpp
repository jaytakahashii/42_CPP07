#include <Array.hpp>
#include <cstdlib>
#include <iostream>

#include "color.hpp"

#define MAX_VAL 750
int main(int, char**) {
  std::cout << YELLOW << "=== TESTING ARRAY ===\n" << RESET << std::endl;

  std::cout << BOLDWHITE << "=== CONSTRUCTORS ===" << RESET << std::endl;
  Array<int> numbers(MAX_VAL);
  int* mirror = new int[MAX_VAL];
  srand(time(NULL));
  for (int i = 0; i < MAX_VAL; i++) {
    const int value = rand();
    numbers[i] = value;
    mirror[i] = value;
  }

  std::cout << "numbers: ";
  for (int i = 0; i < 3; i++) {
    std::cout << numbers[i] << " ";
  }
  std::cout << "...\n" << std::endl;

  std::cout << "mirror : ";
  for (int i = 0; i < 3; i++) {
    std::cout << mirror[i] << " ";
  }
  std::cout << "...\n" << std::endl;
  // SCOPE
  std::cout << BOLDWHITE << "=== DEEP COPY ===" << RESET << std::endl;
  {
    Array<int> tmp = numbers;
    Array<int> test(tmp);
  }
  std::cout << "numbers: ";
  for (int i = 0; i < 3; i++) {
    std::cout << numbers[i] << " ";
  }
  std::cout << "...\n" << std::endl;

  std::cout << BOLDWHITE << "=== SAME VALUE ===" << RESET << std::endl;
  for (int i = 0; i < MAX_VAL; i++) {
    if (mirror[i] != numbers[i]) {
      std::cerr << "didn't save the same value!!" << std::endl;
      return EXIT_FAILURE;
    }
  }

  std::cout << BOLDWHITE << "\n=== TEST OUT OF RANGE ===" << RESET << std::endl;
  try {
    numbers[-2] = 0;
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }
  try {
    numbers[MAX_VAL] = 0;
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }

  std::cout << BOLDWHITE << "\n=== TEST OVERLOAD ===" << RESET << std::endl;
  for (int i = 0; i < MAX_VAL; i++) {
    numbers[i] = rand();
  }
  std::cout << "numbers: ";
  for (int i = 0; i < 3; i++) {
    std::cout << numbers[i] << " ";
  }
  std::cout << "...\n" << std::endl;

  std::cout << YELLOW << "=== END OF TESTING ===\n" << RESET << std::endl;
  delete[] mirror;
  return 0;
}
