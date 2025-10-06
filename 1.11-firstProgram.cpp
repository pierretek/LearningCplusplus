#include <iostream>

// Just a simple test program that doubles the input provided
int main() {
  std::cout << "Enter an Integer: ";

  int num{};
  std::cin >> num;

  std::cout << "The Doubled Integer: " << num * 2 << '\n';

  return 0;
}

//https://www.learncpp.com/cpp-tutorial/developing-your-first-program/
