#include <iostream>

// Just a practice program to add and subtract 2 numbers given from user
int main() {
  // Value initialzing variables num1 and num2
  int num1{};
  int num2{};

  //Using >> operator to assign num1 and num2
  std::cout << "Enter 1st Integer: ";
  std::cin >> num1;

  std::cout << "Enter 2nd Integer: ";
  std::cin >> num2;

  //Using std::cout to print the sum and difference with operators
  std::cout << "\nSum of Integers: " << num1 + num2 << ".\n";
  std::cout << "Difference of Integers: " << num1 - num2 << ".\n";

  return 0;
}

// https://www.learncpp.com/cpp-tutorial/chapter-1-summary-and-quiz/
