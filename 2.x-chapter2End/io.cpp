#include <iostream>
#include "io.h" //including the header file here AND in main.cpp

//Actually defining the functions we need
int readNumber() {
  int x{};
  std::cout << "Enter a number: ";
  std::cin >> x;
  return x;
}

void writeAnswer(int x) { std::cout << "The answer is " << x << '\n'; }
